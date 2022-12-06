#pragma once
#include "food.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <vector>
#include "food.h"
#include <time.h>
#include "processData.h"
#include "bucketSort.h"
#include <cliext/vector>
#include <msclr\marshal_cppstd.h>
#include "shellSort.h"
#include <set>

namespace MaybeThisIsIT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		String^ nutrient;
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private:


		bool minimum = false;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;


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
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label18 = (gcnew System::Windows::Forms::Label());
			   this->label19 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(-11, -24);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(966, 193);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(321, 202);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(139, 37);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Nutrient:";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->DropDownHeight = 1600;
			   this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->IntegralHeight = false;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(34) {
				   L"alphaCarotene", L"betaCarotene", L"betaCryptoxanthin",
					   L"carbohydrate", L"cholesterol", L"choline", L"fiber", L"luteinZeaxanthin", L"lycopene", L"niacin", L"protein", L"retinol", L"riboflavin",
					   L"totalSugar", L"thiamin", L"water", L"monoFat", L"polyfat", L"satFat", L"lipidTotal", L"calcium", L"copper", L"iron", L"magnesium",
					   L"phosphorus", L"potassium", L"sodium", L"zinc", L"vitA", L"b12", L"b6", L"vitC", L"vitE", L"vitK"
			   });
			   this->comboBox1->Location = System::Drawing::Point(466, 217);
			   this->comboBox1->MaxDropDownItems = 30;
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(136, 21);
			   this->comboBox1->TabIndex = 2;
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->checkBox1->Location = System::Drawing::Point(370, 262);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(142, 33);
			   this->checkBox1->TabIndex = 3;
			   this->checkBox1->Text = L"Minimum\?";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(221, 363);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(225, 28);
			   this->label2->TabIndex = 4;
			   this->label2->Text = L"No Nutrient Selected";
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Blue;
			   this->button1->Location = System::Drawing::Point(388, 301);
			   this->button1->Name = L"button1";
			   this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->button1->Size = System::Drawing::Size(124, 45);
			   this->button1->TabIndex = 5;
			   this->button1->Text = L"Find Foods!";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(29, 432);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(18, 13);
			   this->label3->TabIndex = 6;
			   this->label3->Text = L"1.";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(29, 470);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(18, 13);
			   this->label4->TabIndex = 7;
			   this->label4->Text = L"2.";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(29, 505);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(18, 13);
			   this->label5->TabIndex = 8;
			   this->label5->Text = L"3.";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(29, 539);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(18, 13);
			   this->label6->TabIndex = 9;
			   this->label6->Text = L"4.";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(29, 580);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(18, 13);
			   this->label7->TabIndex = 10;
			   this->label7->Text = L"5.";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(501, 432);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(18, 13);
			   this->label8->TabIndex = 11;
			   this->label8->Text = L"6.";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(501, 470);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(18, 13);
			   this->label9->TabIndex = 12;
			   this->label9->Text = L"7.";
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label10->Location = System::Drawing::Point(501, 505);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(18, 13);
			   this->label10->TabIndex = 13;
			   this->label10->Text = L"8.";
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label11->Location = System::Drawing::Point(501, 539);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(18, 13);
			   this->label11->TabIndex = 14;
			   this->label11->Text = L"9.";
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label12->Location = System::Drawing::Point(501, 580);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(25, 13);
			   this->label12->TabIndex = 15;
			   this->label12->Text = L"10.";
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label14->Location = System::Drawing::Point(737, 303);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(134, 25);
			   this->label14->TabIndex = 16;
			   this->label14->Text = L"BucketSort:";
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label13->Location = System::Drawing::Point(742, 333);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(129, 25);
			   this->label13->TabIndex = 17;
			   this->label13->Text = L"Shell Sort: ";
			   // 
			   // label18
			   // 
			   this->label18->AutoSize = true;
			   this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label18->Location = System::Drawing::Point(872, 304);
			   this->label18->Name = L"label18";
			   this->label18->Size = System::Drawing::Size(20, 24);
			   this->label18->TabIndex = 18;
			   this->label18->Text = L"0";
			   // 
			   // label19
			   // 
			   this->label19->AutoSize = true;
			   this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label19->Location = System::Drawing::Point(872, 334);
			   this->label19->Name = L"label19";
			   this->label19->Size = System::Drawing::Size(20, 24);
			   this->label19->TabIndex = 19;
			   this->label19->Text = L"0";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoSize = true;
			   this->ClientSize = System::Drawing::Size(951, 647);
			   this->Controls->Add(this->label19);
			   this->Controls->Add(this->label18);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->label14);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->pictureBox1);
			   this->Location = System::Drawing::Point(566, 580);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		nutrient = comboBox1->Text;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<pair<string, float>> sortList;
		int numFoodObj = 0;
		string line;
		fstream foodFile("food.csv", ios::in);
		vector<Food> tempList;
		vector<Food> tempList2;

		if (foodFile.is_open())
		{
			// Remove the labels from the processed data
			//sortList.push_back(make_pair("Beef", 22));
			getline(foodFile, line);
			while (getline(foodFile, line))
			{

				// Parsed data is all added to the list for later use
				tempList.push_back(processData(line));
				tempList2.push_back(processData(line));

			}

		}
		else
			cout << "Cannot Open File" << endl;


		//obtain attribute from drop down box

		msclr::interop::marshal_context context;
		std::string attribute = context.marshal_as<std::string>(nutrient);

		//run bucket sort and shell sort and clock them 



		clock_t t;
		t = clock();
		shellSort(tempList, attribute);
		t = clock() - t;
		float time = ((double)t) / CLOCKS_PER_SEC;
		string time_taken1 = to_string(((double)t) / CLOCKS_PER_SEC);
		label19->Text = gcnew String(time_taken1.c_str());

		clock_t t1;
		t1 = clock();
		bucketSort(tempList2, attribute);
		t1 = clock() - t1;
		string time_taken = to_string(((double)t1) / CLOCKS_PER_SEC);
		label18->Text = gcnew String(time_taken.c_str());



		label2->Text = nutrient;
		if (minimum) {
			label3->Text = "1. " + gcnew String(tempList[0].description.c_str());
			label4->Text = "2. " + gcnew String(tempList[1].description.c_str());
			label5->Text = "3. " + gcnew String(tempList[2].description.c_str());
			label6->Text = "4. " + gcnew String(tempList[3].description.c_str());
			label7->Text = "5. " + gcnew String(tempList[4].description.c_str());
			label8->Text = "6. " + gcnew String(tempList[5].description.c_str());
			label9->Text = "7. " + gcnew String(tempList[6].description.c_str());
			label10->Text = "8. " + gcnew String(tempList[7].description.c_str());
			label11->Text = "9. " + gcnew String(tempList[8].description.c_str());
			label12->Text = "10. " + gcnew String(tempList[9].description.c_str());

		}
		else {
			label3->Text = "1. " + gcnew String(tempList[tempList.size() - 1].description.c_str());
			label4->Text = "2. " + gcnew String(tempList[tempList.size() - 2].description.c_str());
			label5->Text = "3. " + gcnew String(tempList[tempList.size() - 3].description.c_str());
			label6->Text = "4. " + gcnew String(tempList[tempList.size() - 4].description.c_str());
			label7->Text = "5. " + gcnew String(tempList[tempList.size() - 5].description.c_str());
			label8->Text = "6. " + gcnew String(tempList[tempList.size() - 6].description.c_str());
			label9->Text = "7. " + gcnew String(tempList[tempList.size() - 7].description.c_str());
			label10->Text = "8. " + gcnew String(tempList[tempList.size() - 8].description.c_str());
			label11->Text = "9. " + gcnew String(tempList[tempList.size() - 9].description.c_str());
			label12->Text = "10. " + gcnew String(tempList[tempList.size() - 10].description.c_str());

		}
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		minimum = !minimum;
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}