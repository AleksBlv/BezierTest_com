//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
int X1, X2, X3, Y1, Y2, Y3; //User's points coordinates
	float Ax, Ay, Bx, By, Px, Py; //Additional points coordinates
	int step = 1000;
	int firstLenght = 1, secondLenght = step;
	float lyambda;

	if(!TryStrToInt(Edit1->Text, X1)) Label4->Caption = "Incorrect coordinates";               //�������� ���������� �� ������������
	if(!TryStrToInt(Edit2->Text, Y1)) Label4->Caption = "Incorrect coordinates";
	if(!TryStrToInt(Edit3->Text, X2)) Label4->Caption = "Incorrect coordinates";
	if(!TryStrToInt(Edit4->Text, Y2)) Label4->Caption = "Incorrect coordinates";
	if(!TryStrToInt(Edit5->Text, X3)) Label4->Caption = "Incorrect coordinates";
	if(!TryStrToInt(Edit6->Text, Y3)) Label4->Caption = "Incorrect coordinates";

	Image1->Picture->Bitmap = NULL;

	Image1->Canvas->Ellipse(X1-2,Y1-2,X1+2,Y1+2);  //Draw user's points
	Image1->Canvas->Ellipse(X2-2,Y2-2,X2+2,Y2+2);
	Image1->Canvas->Ellipse(X3-2,Y3-2,X3+2,Y3+2);

	Image1->Canvas->MoveTo(X1, Y1); //Set the Pen to the first point


	while(firstLenght<step)
	{
		lyambda = (float)firstLenght / secondLenght;

		Ax = (X1+lyambda*X3)/(1+lyambda);       //Calclulating first additional point's coordinates
		Ay = (Y1 + lyambda*Y3)/(1+lyambda);

		Bx = (X3+lyambda*X2)/(1+lyambda);       //Calclulating second additional point's coordinates
		By = (Y3 + lyambda*Y2)/(1+lyambda);

		Px = (Ax+lyambda*Bx)/(1+lyambda);       //Calclulating third additional point's coordinates
		Py = (Ay + lyambda*By)/(1+lyambda);     //and this is a point of the Bezier Curv

		Image1->Canvas->LineTo(Px, Py);

		firstLenght++;
		secondLenght--;

	}


}
//---------------------------------------------------------------------------
