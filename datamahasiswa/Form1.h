#pragma once
#include "Form1.h"
#include "Form2.h"

namespace datamahasiswa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtusername;


	private: System::Windows::Forms::TextBox^  txtpassword;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtusername = (gcnew System::Windows::Forms::TextBox());
			this->txtpassword = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// txtusername
			// 
			this->txtusername->Location = System::Drawing::Point(175, 39);
			this->txtusername->Name = L"txtusername";
			this->txtusername->Size = System::Drawing::Size(274, 20);
			this->txtusername->TabIndex = 2;
			this->txtusername->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// txtpassword
			// 
			this->txtpassword->Location = System::Drawing::Point(175, 110);
			this->txtpassword->Name = L"txtpassword";
			this->txtpassword->Size = System::Drawing::Size(274, 20);
			this->txtpassword->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(211, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Masuk";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(333, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Keluar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(511, 213);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtpassword);
			this->Controls->Add(this->txtusername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Login Pendaftaran";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		//login
		String^ constring = L"datasource=localhost;port=3306;username=root;password=";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from datamahasiswa.admin where username='" + this->txtusername->Text+"' and password='"+this->txtpassword->Text+ "';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;
				while (myReader->Read()) {
					count = count + 1;
				}
				if (count == 1) {

					//MessageBox::Show("Username dan Password anda benar");
					this->Hide();
					Form2^ f2 = gcnew Form2();
					f2->ShowDialog();
				}
				else
					MessageBox::Show("Username dan Password anda salah");

		}catch (Exception^ex) {

			MessageBox::Show(ex->Message);
			}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Close();
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
