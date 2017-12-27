#pragma once
//請從pragma endregion開始看code 前面是定義
namespace MouseHit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label5;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(126, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(240, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 100);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 118);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 100);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(126, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 100);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(240, 118);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 100);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 224);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 100);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(126, 224);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 100);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(240, 224);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(108, 100);
			this->button9->TabIndex = 8;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(237, 369);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 15);
			this->label1->TabIndex = 9;
			this->label1->Text = L"分數:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(284, 369);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 354);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 15);
			this->label3->TabIndex = 12;
			this->label3->Text = L"速度(ms)";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(155, 348);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(53, 23);
			this->button10->TabIndex = 13;
			this->button10->Text = L"確定";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(78, 348);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(71, 25);
			this->maskedTextBox1->TabIndex = 14;
			this->maskedTextBox1->Text = L"預設1000";
			this->maskedTextBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::maskedTextBox1_MouseClick);
			this->maskedTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::maskedTextBox1_KeyDown);
			this->maskedTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::maskedTextBox1_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(237, 338);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 15);
			this->label4->TabIndex = 15;
			this->label4->Text = L"時間:";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(287, 337);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 15);
			this->label5->TabIndex = 16;
			this->label5->Text = L"label5";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 393);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"打地鼠";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int chk = 0, //地鼠所在位置
			total = 0, //分數
			count=0; //計算時間
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	//載入預設
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		set();
		button1->Text = "";
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		button5->Text = "";
		button6->Text = "";
		button7->Text = "";
		button8->Text = "";
		button9->Text = "";
		label2->Text = Convert::ToString(total);
	}
	//觸發計時器
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		count++;
		//讓地鼠延遲出現
		if (count == 10) {	
			reset();
		}
		//讓地鼠出現
		else if (count == 12) {
			count = 0;
			set();
		}
	}
	//重設圖片
	private: System::Void reset() {
		button1->Image = Image::FromFile("mousehide.jpg");
		button2->Image = Image::FromFile("mousehide.jpg");
		button3->Image = Image::FromFile("mousehide.jpg");
		button4->Image = Image::FromFile("mousehide.jpg");
		button5->Image = Image::FromFile("mousehide.jpg");
		button6->Image = Image::FromFile("mousehide.jpg");
		button7->Image = Image::FromFile("mousehide.jpg");
		button8->Image = Image::FromFile("mousehide.jpg");
		button9->Image = Image::FromFile("mousehide.jpg");
	}

	//亂數產生地鼠位置
	private: System::Void set() {
		Random rand;
		int i;
		i = rand.Next(1, 10);//產生亂數
		chk = i;
		reset();
		switch (i)
		{
		case 1:
			button1->Image = Image::FromFile("mouse.jpg");
			break;
		case 2:
			button2->Image = Image::FromFile("mouse.jpg");
			break;
		case 3:
			button3->Image = Image::FromFile("mouse.jpg");
			break;
		case 4:
			button4->Image = Image::FromFile("mouse.jpg");
			break;
		case 5:
			button5->Image = Image::FromFile("mouse.jpg");
			break;
		case 6:
			button6->Image = Image::FromFile("mouse.jpg");
			break;
		case 7:
			button7->Image = Image::FromFile("mouse.jpg");
			break;
		case 8:
			button8->Image = Image::FromFile("mouse.jpg");
			break;
		case 9:
			button9->Image = Image::FromFile("mouse.jpg");
			break;
		default:
			break;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chk == 1) {
			count = 9;		//讓圖片重設 因Timer會先進行++運算 所以設置9
			total++;
			label2->Text = Convert::ToString(total);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chk == 2) {
			count = 9;
			total++;
			label2->Text = Convert::ToString(total);
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chk == 3) {
			count = 9;
			total++;
			label2->Text = Convert::ToString(total);
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chk == 4) {
			count = 9;
			total++;
			label2->Text = Convert::ToString(total);
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chk == 5) {
			count = 9;
			total++;
			label2->Text = Convert::ToString(total);
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chk == 6) {
			count = 9;
			total++;
			label2->Text = Convert::ToString(total);
		}
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chk == 7) {
			count = 9;
			total++;
			label2->Text = Convert::ToString(total);
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chk == 8) {
			count = 9;
			total++;
			label2->Text = Convert::ToString(total);
		}
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chk == 9) {
			count = 9;
			total++;
			label2->Text = Convert::ToString(total);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		//重製紀錄
		total = 0;
		time = 0;
		timer1->Interval = Convert::ToInt16(maskedTextBox1->Text)/10;
		label2->Text = Convert::ToString(total);
	}
	private: System::Void maskedTextBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		//限制輸入數字
		if (Char::IsDigit(e->KeyChar) || Char::IsControl(e->KeyChar)) {
			e->Handled = false;
		}
		else
		{
			e->Handled = true;
		}
	}
	private: System::Void maskedTextBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	
	}
	private: System::Void maskedTextBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		maskedTextBox1->Text = "";
	}
	int time = 0;
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		//計算時間
		label5->Text = Convert::ToString(time) + " 秒";
		time++;
	}
};
}
