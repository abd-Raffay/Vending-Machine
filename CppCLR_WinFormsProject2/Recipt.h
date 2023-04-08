#pragma once
#include<string>
#include <vector>  
#include <string>  

#include <iostream>

#include <algorithm>
using namespace System::Collections::Generic;

using namespace System;


namespace Vending_Machine1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Summary for Recipt
	/// </summary>
	public ref class Recipt : public System::Windows::Forms::Form
	{
	private:
		
	public:
		List<String^>^ ItemList = gcnew List<String^>();
		array<int>^ CCount = gcnew array<int>(15);
		array<int>^ Amount = gcnew array<int>(15);
		int Pprice;
		Recipt(void)
		{
			InitializeComponent();
		
			//
			//TODO: Add the constructor code here
			//
		}

		Recipt(int Price,int amount[],int count[])
		{
			InitializeComponent();
			// add elements to the list
			ItemList->Add("Zinger Burger");
			ItemList->Add("Roll Paratha");
			ItemList->Add("Pizza");
			ItemList->Add("Pepsi/Cocacola?marinda");
			ItemList->Add("Milk Shake");
			ItemList->Add("Fresh Juice");
			ItemList->Add("Naan/Roti");
			ItemList->Add("Salad/Raita");
			ItemList->Add("Chips");
			ItemList->Add("Karahi");
			ItemList->Add("White Karahi");
			ItemList->Add("Rice");
			ItemList->Add("Cake");
			ItemList->Add("Chocolate");
			ItemList->Add("Candy");

			// initialize the elements
			for (int i = 0; i < 15; i++)
			{
				CCount[i] = count[i];
				Amount[i] = amount[i];
				Pprice = Price;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Recipt()
		{
			
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Label^ label16;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(241, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Receipt";
			this->label1->Click += gcnew System::EventHandler(this, &Recipt::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Item Details";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(169, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"#";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(226, 223);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Price";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(326, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Total";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(434, 566);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Sub-Total :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.75F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(9, 124);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 27);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Customer Name :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.75F, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(12, 164);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 27);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Time:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Papyrus", 12.75F, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(373, 166);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(168, 27);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Name of Assigne :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(10, 20);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(342, 25);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Please enter your name to generate receipt:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(358, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 20);
			this->textBox1->TabIndex = 11;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(-8, 50);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(580, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"---------------------------------------------------------------------------------"
				L"--------------------------------------------------------------------------------"
				L"------------------------------";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(592, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 43);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Recipt::button1_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(171, 127);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 21);
			this->label13->TabIndex = 14;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(76, 169);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 21);
			this->label14->TabIndex = 15;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(545, 167);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 21);
			this->label15->TabIndex = 16;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(18, 259);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(125, 340);
			this->listBox1->TabIndex = 25;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Recipt::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 24;
			this->listBox2->Location = System::Drawing::Point(162, 259);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(45, 340);
			this->listBox2->TabIndex = 26;
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 24;
			this->listBox3->Location = System::Drawing::Point(222, 259);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(69, 340);
			this->listBox3->TabIndex = 27;
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Papyrus", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 24;
			this->listBox4->Location = System::Drawing::Point(329, 259);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(70, 340);
			this->listBox4->TabIndex = 28;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(568, 571);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 25);
			this->label16->TabIndex = 29;
			this->label16->Text = L"0";
			this->label16->Click += gcnew System::EventHandler(this, &Recipt::label16_Click);
			// 
			// Recipt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 631);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Recipt";
			this->Text = L"Recipt";
			this->Load += gcnew System::EventHandler(this, &Recipt::Recipt_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		label13->Text = textBox1->Text;
		label14->Text = DateTime::Now.ToString("HH:mm:ss");
		label15->Text = "Staff";
		label16->Text = "0";

		label16->Text = System::Convert::ToString(Pprice);
		int tprice = 0;

		for (int i = 0; i < 15; i++)
		{
			tprice = 0;
			if (CCount[i] > 0)
			{
				listBox1->Items->Add(ItemList[i]);
				listBox2->Items->Add(CCount[i]);
				listBox3->Items->Add(Amount[i]);
				tprice = (Amount[i] * CCount[i]);
				listBox4->Items->Add(tprice);
			}
		}
	
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Recipt_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
