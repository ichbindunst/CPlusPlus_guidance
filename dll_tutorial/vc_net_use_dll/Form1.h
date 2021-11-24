#pragma once
#include "calculation.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_result;
	private: System::Windows::Forms::TextBox^ textBox_num1;
	private: System::Windows::Forms::TextBox^ textBox_num2;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_result = (gcnew System::Windows::Forms::TextBox());
			this->textBox_num1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_num2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(170, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"result";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox_result
			// 
			this->textBox_result->Location = System::Drawing::Point(251, 202);
			this->textBox_result->Name = L"textBox_result";
			this->textBox_result->Size = System::Drawing::Size(100, 22);
			this->textBox_result->TabIndex = 1;
			// 
			// textBox_num1
			// 
			this->textBox_num1->Location = System::Drawing::Point(170, 152);
			this->textBox_num1->Name = L"textBox_num1";
			this->textBox_num1->Size = System::Drawing::Size(100, 22);
			this->textBox_num1->TabIndex = 2;
			// 
			// textBox_num2
			// 
			this->textBox_num2->Location = System::Drawing::Point(276, 152);
			this->textBox_num2->Name = L"textBox_num2";
			this->textBox_num2->Size = System::Drawing::Size(100, 22);
			this->textBox_num2->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 365);
			this->Controls->Add(this->textBox_num2);
			this->Controls->Add(this->textBox_num1);
			this->Controls->Add(this->textBox_result);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double firstNum;
		double secondNum;
		double result;

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		firstNum = Convert::ToDouble(textBox_num1->Text);
		secondNum = Convert::ToDouble(textBox_num2->Text);
		//result = firstNum + secondNum;
		//result = Add(firstNum, secondNum);
		result = Multiply(firstNum, secondNum);
		textBox_result->Text = System::Convert::ToString(result);
	}
	};
}
