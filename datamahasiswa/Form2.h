#pragma once
#include "Form1.h"
#include "Form2.h"
#include "Form3.h"


namespace datamahasiswa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

		String^ kelamin;

	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::ComboBox^  comboBox1;




















	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox4;



	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label14;



	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label13;



	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label12;



	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label9;




	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label11;




	private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::TextBox^  textBox11;

private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
private: System::Windows::Forms::BindingSource^  bindingSource1;
private: System::Windows::Forms::Button^  button9;

private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"No Pendaftaran";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nama Lengkap";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tempat Lahir";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tanggal Lahir";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Agama";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Jenis Kelamin";
			this->label6->Click += gcnew System::EventHandler(this, &Form2::label6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form2::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(127, 108);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 20);
			this->textBox3->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Islam", L"Kristen Protestan", L"Katolik", L"Hindu",
					L"Buddha", L"Kong Hu Cu"
			});
			this->comboBox1->Location = System::Drawing::Point(127, 176);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(192, 21);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->Text = L"Agama Anda";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(566, 344);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Simpan";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(647, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Hapus";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(728, 344);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 32;
			this->button3->Text = L"Ubah";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(809, 344);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Keluar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(30, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(359, 285);
			this->groupBox1->TabIndex = 35;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Data Mahasiswa";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(127, 143);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(192, 20);
			this->dateTimePicker1->TabIndex = 49;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(240, 212);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(79, 17);
			this->radioButton2->TabIndex = 29;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Perempuan";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton2_CheckedChanged_1);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(127, 212);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 17);
			this->radioButton1->TabIndex = 28;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Laki-Laki";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton1_CheckedChanged_1);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(412, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(737, 285);
			this->groupBox2->TabIndex = 36;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Pembayaran";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(574, 140);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 38;
			this->button6->Text = L"Bayar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form2::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(181, 208);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 38;
			this->button5->Text = L"Hitung";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(127, 174);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(192, 20);
			this->textBox7->TabIndex = 48;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(22, 177);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 13);
			this->label11->TabIndex = 47;
			this->label11->Text = L"SPP Variabel / SKS";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(515, 106);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(192, 20);
			this->textBox10->TabIndex = 46;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(411, 109);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 13);
			this->label14->TabIndex = 45;
			this->label14->Text = L"Keterangan";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(515, 72);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(192, 20);
			this->textBox9->TabIndex = 44;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(411, 75);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 13);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Uang Anda";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(515, 37);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(192, 20);
			this->textBox8->TabIndex = 42;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(411, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 13);
			this->label12->TabIndex = 41;
			this->label12->Text = L"Total Bayar";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(127, 140);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(192, 20);
			this->textBox6->TabIndex = 40;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(22, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 13);
			this->label10->TabIndex = 39;
			this->label10->Text = L"SPP Tetap";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(127, 106);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(192, 20);
			this->textBox5->TabIndex = 38;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form2::textBox5_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 109);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 13);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Biaya Sarana ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(127, 72);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 20);
			this->textBox4->TabIndex = 36;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form2::textBox8_TextChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"S1 - Sistem Informasi", L"S1 - Informatika",
					L"S1 - Teknik Komputer", L"S1 - Arsitektur", L"S1 - Geografi", L"S1 - Akuntansi", L"S1 - Ekonomi", L"S1 - Kewirausahaan", L"S1 - Hubungan Internasional",
					L"S1 - Ilmu Komunikasi"
			});
			this->comboBox2->Location = System::Drawing::Point(127, 37);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(192, 21);
			this->comboBox2->TabIndex = 35;
			this->comboBox2->Text = L"Pilih Jurusan";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox2_SelectedIndexChanged_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 75);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"SKS";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Jurusan";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(30, 400);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1119, 199);
			this->dataGridView1->TabIndex = 37;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(30, 371);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 38;
			this->button7->Text = L"Cari";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form2::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(251, 371);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 39;
			this->button8->Text = L"Refresh";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form2::button8_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(111, 373);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(134, 20);
			this->textBox11->TabIndex = 49;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(412, 344);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 50;
			this->button9->Text = L"Info";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form2::button9_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1179, 692);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form2";
			this->Text = L"Data Mahasiswa & Pembayaran";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=datamahasiswa";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int no_pendaftaran = Int32::Parse(textBox1->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from mahasiswa WHERE no_pendaftaran=" + no_pendaftaran + "", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Data Berhasil Dihapus");
		con->Close();
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=datamahasiswa";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		int no_pendaftaran = Int32::Parse(textBox1->Text);
		String^ nama_lengkap = textBox2->Text;
		String^ tempat_lahir = textBox3->Text;
		String^ tanggal_lahir = dateTimePicker1->Text;
		String^ agama = comboBox1->Text;
		String^ jenis_kelamin = kelamin;
		String^ jurusan = comboBox2->Text;
		String^ sks = textBox4->Text;
		String^ biaya_sarana = textBox5->Text;
		String^ spp_tetap = textBox6->Text;
		String^ spp_variabel = textBox7->Text;
		String^ total_bayar = textBox8->Text;
		String^ uang_anda = textBox9->Text;
		String^ keterangan = textBox10->Text;

		MySqlCommand^ cmd = gcnew MySqlCommand("insert into mahasiswa values(" + no_pendaftaran + ",'" + nama_lengkap + "','" + tempat_lahir + "','" + tanggal_lahir + "','" + agama + "','" + jenis_kelamin + "','" + jurusan + "','" + sks + "','" + biaya_sarana + "','" + spp_tetap + "','" + spp_variabel + "','" + total_bayar + "','" + uang_anda + "','" + keterangan + "')", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		MessageBox::Show("Data Berhasil Disimpan");
	}
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }			 
	}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 int biayasarana;
		 int spptetap;
		 int sppvariabel;
		 double total;
private: System::Void comboBox2_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->Text == "S1 - Sistem Informasi") {
		biayasarana = 19000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 2000000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 120000;
		textBox7->Text = sppvariabel.ToString();
	}
	else if (comboBox2->Text == "S1 - Informatika") {
		biayasarana = 19000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 2000000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 120000;
		textBox7->Text = sppvariabel.ToString();
	}
	else if (comboBox2->Text == "S1 - Teknik Komputer") {
		biayasarana = 19000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 1700000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 120000;
		textBox7->Text = sppvariabel.ToString();
	}
	else if (comboBox2->Text == "S1 - Arsitektur") {
		biayasarana = 11000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 1700000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 120000;
		textBox7->Text = sppvariabel.ToString();
	}
	else if (comboBox2->Text == "S1 - Geografi") {
		biayasarana = 11000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 1500000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 120000;
		textBox7->Text = sppvariabel.ToString();
	}
	else if (comboBox2->Text == "S1 - Akuntansi") {
		biayasarana = 11000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 1500000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 120000;
		textBox7->Text = sppvariabel.ToString();
	}
	else if (comboBox2->Text == "S1 - Ekonomi") {
		biayasarana = 11000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 1500000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 120000;
		textBox7->Text = sppvariabel.ToString();
	}
	else if (comboBox2->Text == "S1 - Kewirausahaan") {
		biayasarana = 11000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 1500000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 120000;
		textBox7->Text = sppvariabel.ToString();
	}
	else if (comboBox2->Text == "S1 - Hubungan Internasional") {
		biayasarana = 11000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 1500000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 120000;
		textBox7->Text = sppvariabel.ToString();
	}
	else {
		biayasarana = 19000000;
		textBox5->Text = biayasarana.ToString();
		spptetap = 2000000;
		textBox6->Text = spptetap.ToString();
		sppvariabel = 1200000;
		textBox7->Text = sppvariabel.ToString();
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	int sks;
	if (textBox4->Text == "") {
		MessageBox::Show("Data SKS Masih Kosong");
	}
	else
	{
		sks = int::Parse(textBox4->Text);
		total = Convert::ToDouble((sks*sppvariabel) + spptetap + biayasarana);
		textBox8->Text = total.ToString();
	}
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 int ket;
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	double bayar, kembali;
	if (textBox9->Text == "") {
		MessageBox::Show("Data Uang Anda Masih Kosong");
	}
	else
	{
		bayar = double::Parse(textBox9->Text);
		if (total > bayar) {
			kembali = double(bayar - total);
			textBox10->Text = "Belum Lunas" ;
		}
		else {
			textBox10->Text = "Lunas";
		}
	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
	kelamin = "Laki-Laki";
}
private: System::Void radioButton2_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
	kelamin = "Perempuan";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
	int no_pendaftaran = Int32::Parse(textBox11->Text);
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=datamahasiswa";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	MySqlCommand^ cmd = gcnew MySqlCommand("select * from mahasiswa WHERE no_pendaftaran=" + no_pendaftaran + "", con);
	con->Open();
	MySqlDataReader^ dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		textBox1->Text = dr->GetString(0);
		textBox2->Text = dr->GetString(1);
		textBox3->Text = dr->GetString(2);
		dateTimePicker1->Text = dr->GetString(3);
		comboBox1->Text = dr->GetString(4);
		kelamin = dr->GetString(5);
		comboBox2->Text = dr->GetString(6);
		textBox4->Text = dr->GetString(7);
		textBox5->Text = dr->GetString(8);
		textBox6->Text = dr->GetString(9);
		textBox7->Text = dr->GetString(10);
		textBox8->Text = dr->GetString(11);
		textBox9->Text = dr->GetString(12);
		textBox10->Text = dr->GetString(13);
	}
	con->Close();
	}
	catch(Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=datamahasiswa";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from mahasiswa", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=datamahasiswa";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	int no_pendaftaran = Int32::Parse(textBox1->Text);
	String^ nama_lengkap = textBox2->Text;
	String^ tempat_lahir = textBox3->Text;
	String^ tanggal_lahir = dateTimePicker1->Text;
	String^ agama = comboBox1->Text;
	String^ jenis_kelamin = kelamin;
	String^ jurusan = comboBox2->Text;
	String^ sks = textBox4->Text;
	String^ biaya_sarana = textBox5->Text;
	String^ spp_tetap = textBox6->Text;
	String^ spp_variabel = textBox7->Text;
	String^ total_bayar = textBox8->Text;
	String^ uang_anda = textBox9->Text;
	String^ keterangan = textBox10->Text;

	MySqlCommand^ cmd = gcnew MySqlCommand("update mahasiswa set nama_lengkap='" + nama_lengkap + "',tempat_lahir='" + tempat_lahir + "',tanggal_lahir='" + tanggal_lahir + "',agama='" + agama + "',jenis_kelamin='" + jenis_kelamin + "',jurusan='" + jurusan + "',sks='" + sks + "',biaya_sarana='" + biaya_sarana + "',spp_tetap='" + spp_tetap + "',spp_variabel='" + spp_variabel + "',total_bayar='" + total_bayar + "',uang_anda='" + uang_anda + "',keterangan='" + keterangan + "' WHERE no_pendaftaran=" + no_pendaftaran + "", con);
	con->Open();
	MySqlDataReader^ dr = cmd->ExecuteReader();
	MessageBox::Show("Data Berhasil Diubah");
	con->Close();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	Form3^ f3 = gcnew Form3();
	f3->ShowDialog();
}
};
}
