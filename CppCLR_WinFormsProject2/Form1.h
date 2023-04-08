#pragma once

#include "Recipt.h"
#include "Meal.h"
using namespace CppCLR_WinFormsProject2;

//using namespace CppCLR_WinFormsProject2;
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	int count[15] = { 0 };
	int Price = 0;
	int amount[15] = { 350,250,500,70,250,250,30,150,100,850,1000,500,250,150,10 };

	
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		
		int ZB = 350;//Zinger burger
		int RP = 250;//Roll paratha
		int Pizza = 500;
		int pepsi = 70;
		int MK = 250;//Milk Shake
		int Juice = 250;
		int Naan = 30;
		int Salad = 150;
		int chips = 100;
		int Karahi = 850;
		int Wkarahi = 1000;
		int Rice = 500;
		int Cake = 250;
		int Chocolate = 150;
		int Candy = 10;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;

	private: System::Windows::Forms::Button^ button33;

	public:
		int Biryani = 100;

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

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(210, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(471, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Raffays_Vending_Machine";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fast Food";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(432, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Desi";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Drinks";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(432, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Sweet";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 437);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Others";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(23, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(250, 24);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Zinger Burger............................... 350 Rs";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(22, 175);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(246, 24);
			this->label8->TabIndex = 7;
			this->label8->Text = L" Roll Paratha................................. 250 Rs";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(23, 212);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(239, 24);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Pizza................................................ 500 Rs";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(364, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 31);
			this->button1->TabIndex = 9;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(292, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 31);
			this->button2->TabIndex = 10;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(292, 168);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 31);
			this->button3->TabIndex = 12;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(364, 168);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 31);
			this->button4->TabIndex = 11;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(292, 206);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 31);
			this->button5->TabIndex = 14;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click_1);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(364, 205);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 31);
			this->button6->TabIndex = 13;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click_1);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(292, 373);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(30, 31);
			this->button7->TabIndex = 23;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(364, 372);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(30, 31);
			this->button8->TabIndex = 22;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click_1);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(292, 336);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(30, 31);
			this->button9->TabIndex = 21;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click_1);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(364, 335);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(30, 31);
			this->button10->TabIndex = 20;
			this->button10->Text = L"+";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click_1);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(292, 298);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(30, 31);
			this->button11->TabIndex = 19;
			this->button11->Text = L"-";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(364, 297);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(30, 31);
			this->button12->TabIndex = 18;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(22, 379);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(259, 24);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Fresh Juices...................................... 250 Rs";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(21, 342);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(261, 24);
			this->label11->TabIndex = 16;
			this->label11->Text = L" Milk Shakes...................................... 250 Rs";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(22, 304);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(251, 24);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Pepsi/CocaCola/Marinda..... 70 Rs";
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(292, 549);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(30, 31);
			this->button13->TabIndex = 32;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click_1);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(364, 548);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(30, 31);
			this->button14->TabIndex = 31;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click_1);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(292, 512);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(30, 31);
			this->button15->TabIndex = 30;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click_1);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(364, 511);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(30, 31);
			this->button16->TabIndex = 29;
			this->button16->Text = L"+";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click_1);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(292, 474);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(30, 31);
			this->button17->TabIndex = 28;
			this->button17->Text = L"-";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click_1);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(364, 473);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(30, 31);
			this->button18->TabIndex = 27;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click_1);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(23, 551);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(250, 24);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Lays/Kurkre/Cheetos...........100 Rs";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(22, 514);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(251, 24);
			this->label14->TabIndex = 25;
			this->label14->Text = L" Salad/Raita................................. 150 Rs";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(23, 476);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(244, 24);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Naan/Roti...................................... 30 Rs";
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(704, 204);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(30, 31);
			this->button19->TabIndex = 41;
			this->button19->Text = L"-";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click_1);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(776, 205);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(30, 31);
			this->button20->TabIndex = 40;
			this->button20->Text = L"+";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click_1);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(704, 166);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(30, 31);
			this->button21->TabIndex = 39;
			this->button21->Text = L"-";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click_1);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(776, 168);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(30, 31);
			this->button22->TabIndex = 38;
			this->button22->Text = L"+";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click_1);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(704, 130);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(30, 31);
			this->button23->TabIndex = 37;
			this->button23->Text = L"-";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click_1);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(776, 130);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(30, 31);
			this->button24->TabIndex = 36;
			this->button24->Text = L"+";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click_1);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(434, 212);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(256, 24);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Chicken Rice(per kg)................... 500 Rs";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(433, 175);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(259, 24);
			this->label17->TabIndex = 34;
			this->label17->Text = L"White Karahi(1kg)...................... 1000 Rs";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(434, 137);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(258, 24);
			this->label18->TabIndex = 33;
			this->label18->Text = L"Karahi(1kg)....................................... 850 Rs";
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(704, 371);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(30, 31);
			this->button25->TabIndex = 50;
			this->button25->Text = L"-";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click_1);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(776, 371);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(30, 31);
			this->button26->TabIndex = 49;
			this->button26->Text = L"+";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click_1);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(704, 334);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(30, 31);
			this->button27->TabIndex = 48;
			this->button27->Text = L"-";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click_1);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(776, 335);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(30, 32);
			this->button28->TabIndex = 47;
			this->button28->Text = L"+";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click_1);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(704, 296);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(30, 31);
			this->button29->TabIndex = 46;
			this->button29->Text = L"-";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click_1);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(776, 297);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(30, 31);
			this->button30->TabIndex = 45;
			this->button30->Text = L"+";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click_1);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(434, 379);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(243, 24);
			this->label19->TabIndex = 44;
			this->label19->Text = L"Candy................................................ 10 Rs";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(433, 342);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(248, 24);
			this->label20->TabIndex = 43;
			this->label20->Text = L"Chocolate...................................... 150 Rs";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(434, 304);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(247, 24);
			this->label21->TabIndex = 42;
			this->label21->Text = L"Cake................................................. 250 Rs";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(431, 545);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(168, 33);
			this->label22->TabIndex = 51;
			this->label22->Text = L"Total Amount :";
			this->label22->Click += gcnew System::EventHandler(this, &Form1::label22_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(588, 545);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(27, 33);
			this->label23->TabIndex = 52;
			this->label23->Text = L"0";
			this->label23->Click += gcnew System::EventHandler(this, &Form1::label23_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(594, 572);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(80, 27);
			this->button31->TabIndex = 53;
			this->button31->Text = L"Reset";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox1->Location = System::Drawing::Point(328, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(30, 31);
			this->textBox1->TabIndex = 54;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox2->Location = System::Drawing::Point(328, 168);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(30, 31);
			this->textBox2->TabIndex = 55;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox3->Location = System::Drawing::Point(328, 205);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(30, 31);
			this->textBox3->TabIndex = 56;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox4->Location = System::Drawing::Point(328, 297);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(30, 31);
			this->textBox4->TabIndex = 57;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox5->Location = System::Drawing::Point(328, 334);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(30, 31);
			this->textBox5->TabIndex = 58;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox6->Location = System::Drawing::Point(328, 372);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(30, 31);
			this->textBox6->TabIndex = 59;
			this->textBox6->Text = L"0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox7->Location = System::Drawing::Point(328, 473);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(30, 31);
			this->textBox7->TabIndex = 60;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox8->Location = System::Drawing::Point(328, 511);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(30, 31);
			this->textBox8->TabIndex = 61;
			this->textBox8->Text = L"0";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox9->Location = System::Drawing::Point(328, 551);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(30, 31);
			this->textBox9->TabIndex = 62;
			this->textBox9->Text = L"0";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox10->Location = System::Drawing::Point(740, 130);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(30, 31);
			this->textBox10->TabIndex = 63;
			this->textBox10->Text = L"0";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox11->Location = System::Drawing::Point(740, 168);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(30, 31);
			this->textBox11->TabIndex = 64;
			this->textBox11->Text = L"0";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox12->Location = System::Drawing::Point(740, 204);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(30, 31);
			this->textBox12->TabIndex = 65;
			this->textBox12->Text = L"0";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox13->Location = System::Drawing::Point(740, 297);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(30, 31);
			this->textBox13->TabIndex = 66;
			this->textBox13->Text = L"0";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox14->Location = System::Drawing::Point(740, 336);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(30, 31);
			this->textBox14->TabIndex = 67;
			this->textBox14->Text = L"0";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->textBox15->Location = System::Drawing::Point(740, 371);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(30, 31);
			this->textBox15->TabIndex = 68;
			this->textBox15->Text = L"0";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(680, 572);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(91, 27);
			this->button33->TabIndex = 70;
			this->button33->Text = L"Checkout";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
			// 
			// Form1
			// 
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(856, 645);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Raffay Vending Machine";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	   }
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	
	//FastFood
	// 0 Zinger
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + ZB;
		label23->Text = System::Convert::ToString(Price);
		count[0]++;
		textBox1->Text = System::Convert::ToString(count[0]);

		/*
		meal.Add("Zinger Burger", 350);
		
		Price = meal.GetTotalPrice();
		label23->Text = System::Convert::ToString(Price);
		int n = meal.getCount("Zinger Burger");
		textBox1->Text = System::Convert::ToString(n);
		*/
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{/*
		meal.Remove("Zinger Burger");
		label23->Text = System::Convert::ToString(Price);
		int n = meal.getCount("Zinger Burger");
		textBox1->Text = System::Convert::ToString(n);
		*/
		if (count[0] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - ZB;
				count[0] = count[0] - 1;
			}
			label23->Text = System::Convert::ToString(Price);
		}
		else
		{

		}
		textBox1->Text = System::Convert::ToString(count[0]);
	}
	// 1 Roll Paratha 
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + RP;
		label23->Text = System::Convert::ToString(Price);
		count[1]++;
		textBox2->Text = System::Convert::ToString(count[1]);
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if(count[1]>0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - RP;
				count[1] = count[1] - 1;
			}
			label23->Text = System::Convert::ToString(Price);
		}
		else
		{
			
		}
		textBox2->Text = System::Convert::ToString(count[1]);
	}
	
	// 2 Pizza
	private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + Pizza;
		label23->Text = System::Convert::ToString(Price);
		count[2]++;
		textBox3->Text = System::Convert::ToString(count[2]);
	}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[2] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Pizza;
				count[2] = count[2] - 1;
			}
			label23->Text = System::Convert::ToString(Price);
		}
		else
		{
			
		}
		textBox3->Text = System::Convert::ToString(count[2]);
	}
    //Drinks
	// 3 Pepsi
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + pepsi;
		label23->Text = System::Convert::ToString(Price);
		count[3] ++;
		textBox4->Text = System::Convert::ToString(count[3]);
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[3] > 0)
		{

			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - pepsi;
				count[3] = count[3] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

			
		}
		else
		{
			
		}
		textBox4->Text = System::Convert::ToString(count[3]);
	}

	// 4 Milk Shake
	private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + MK;
		label23->Text = System::Convert::ToString(Price);
		count[4]++;
		textBox5->Text = System::Convert::ToString(count[4]);
	}
	private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[4] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - MK;
				count[4] = count[4] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
			
		}
		textBox5->Text = System::Convert::ToString(count[4]);
	}

	// 5 Fresh Juice
	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + Juice;
		label23->Text = System::Convert::ToString(Price);
		count[5]++;
		textBox6->Text = System::Convert::ToString(count[5]);
	}
	private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[5] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Juice;
				count[5] = count[5] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
			
		}
		textBox6->Text = System::Convert::ToString(count[5]);
	}

	//Others
	// 6 Naan / Roti 
	private: System::Void button18_Click_1(System::Object^ sender, System::EventArgs^ e)
		   {
			   Price = Price + Naan;
			   label23->Text = System::Convert::ToString(Price);
			   count[6]++;
			   textBox7->Text = System::Convert::ToString(count[6]);
		   }
	private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[6] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Naan;
				count[6] = count[6] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
			
		}
		textBox7->Text = System::Convert::ToString(count[6]);
	}

	// 7 Salad
	private: System::Void button16_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
			   Price = Price + Salad;
			   label23->Text = System::Convert::ToString(Price);
			   count[7]++;
			   textBox8->Text = System::Convert::ToString(count[7]);
	}
	private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[7] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Salad;
				count[7] = count[7] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
			
		}
		textBox8->Text = System::Convert::ToString(count[7]);
	}

	// 8 chips
	private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e)
		   {
			   Price = Price + chips;
			   label23->Text = System::Convert::ToString(Price);
			   count[8] = count[8] + 1;
			   textBox9->Text = System::Convert::ToString(count[8]);
		   }
	private: System::Void button13_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[8] > 0)
		{

			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - chips;
				count[8] = count[8] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
		
		}
		textBox9->Text = System::Convert::ToString(count[8]);
	}
	
	//Chicken
	// 9 Karahi
    private: System::Void button24_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
	Price = Price + Karahi;
	label23->Text = System::Convert::ToString(Price);
	count[9] = count[9] + 1;
	textBox10->Text = System::Convert::ToString(count[9]);
	}
	private: System::Void button23_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[9] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Karahi;
				count[9] = count[9] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
			
		}
		textBox10->Text = System::Convert::ToString(count[9]);
	}

	// 10 white karahi
	private: System::Void button22_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + Wkarahi;
		label23->Text = System::Convert::ToString(Price);
		count[10] = count[10] + 1;
		textBox11->Text = System::Convert::ToString(count[10]);
	}
	private: System::Void button21_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[10] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Wkarahi;
				count[10] = count[10] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
			
		}
		textBox11->Text = System::Convert::ToString(count[10]);
	}

	// 11 rice
	private: System::Void button20_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + Rice;
		label23->Text = System::Convert::ToString(Price);
		count[11] = count[11] + 1;
		textBox12->Text = System::Convert::ToString(count[11]);
	}
	private: System::Void button19_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[11] > 0)
		{

			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Rice;
				count[11] = count[11] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
			
		}
		textBox12->Text = System::Convert::ToString(count[11]);
	}

	//Sweet
	
	// 12 cake
	private: System::Void button30_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
			   Price = Price + Cake;
			   label23->Text = System::Convert::ToString(Price);
			   count[12] = count[12] + 1;
			   textBox13->Text = System::Convert::ToString(count[12]);
	}
	private: System::Void button29_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[12] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Cake;
				count[12] = count[12] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
		
		}
		textBox13->Text = System::Convert::ToString(count[12]);
	}

	// 13 cHOCOLATE
	private: System::Void button28_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + Chocolate;
		label23->Text = System::Convert::ToString(Price);
		count[13] = count[13] + 1;
		textBox14->Text = System::Convert::ToString(count[13]);
	}
	private: System::Void button27_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[13] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Chocolate;
				count[13] = count[13] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
			
		}
		textBox14->Text = System::Convert::ToString(count[13]);
	}

	// 14 candy 
	private: System::Void button26_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		Price = Price + Candy;
		label23->Text = System::Convert::ToString(Price);
		count[14] = count[14] + 1;
		textBox15->Text = System::Convert::ToString(count[14]);
	}
	private: System::Void button25_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		if (count[14] > 0)
		{
			if (Price <= 0)
			{
				Price = 0;
			}
			else
			{
				Price = Price - Candy;
				count[14] = count[14] - 1;
			}
			label23->Text = System::Convert::ToString(Price);

		}
		else
		{
			
		}
		textBox15->Text = System::Convert::ToString(count[14]);
	}
///........................................................................................................................................///

	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Price = 0;
		for (int i = 0; i <= 14; i++)
		{
			count[i] = 0;
		}

		textBox1->Text = System::Convert::ToString(count[0]);
		textBox2->Text = System::Convert::ToString(count[1]);
		textBox3->Text = System::Convert::ToString(count[2]);
		textBox4->Text = System::Convert::ToString(count[3]);
		textBox5->Text = System::Convert::ToString(count[4]);
		textBox6->Text = System::Convert::ToString(count[5]);
		textBox7->Text = System::Convert::ToString(count[6]);
		textBox8->Text = System::Convert::ToString(count[7]);
		textBox9->Text = System::Convert::ToString(count[8]);
		textBox10->Text = System::Convert::ToString(count[9]);
		textBox11->Text = System::Convert::ToString(count[10]);
		textBox12->Text = System::Convert::ToString(count[11]);
		textBox13->Text = System::Convert::ToString(count[12]);
		textBox14->Text = System::Convert::ToString(count[13]);
		textBox15->Text = System::Convert::ToString(count[14]);

		label23->Text = System::Convert::ToString(Price);
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Recipt^ recipt = gcnew Recipt(Price,amount,count);
		recipt->Show();

	
	}
};
}
