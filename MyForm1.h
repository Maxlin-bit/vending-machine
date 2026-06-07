#pragma once
#include "LoginForm.h"
#include "vendingMachine.h"
VendingMachine vm;

namespace VendingMachineGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm1 的摘要
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button7;
	protected:

	private:
		void RefreshProducts()
		{
			listBox1->Items->Clear();

			auto& products = vm.getProducts();

			for (int i = 0; i < products.size(); i++)
			{
				std::string text =
					products[i].getName() +
					" $" +
					std::to_string(products[i].getPrice()) +
					" 庫存:" +
					std::to_string(products[i].getStock());

				listBox1->Items->Add(
					gcnew System::String(text.c_str()));
			}

			label1->Text =
				"目前金額：$" +
				vm.getMoney().ToString();
		}

		void RefreshPurchased()
		{
			listBox2->Items->Clear();

			auto& cart = vm.getCart();

			for (auto it = cart.begin(); it != cart.end(); ++it)
			{
				std::string text =
					it->first + " × " + std::to_string(it->second);

				listBox2->Items->Add(
					gcnew System::String(text.c_str())
				);
			}
		}

		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(90, 100);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(320, 112);
			this->listBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(293, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"目前金額：$0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(121, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"歡迎使用此自動販賣機";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(90, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"10元";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(171, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"50元";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(252, 230);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"100元";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(333, 230);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"500元";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(254, 259);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"購買";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(335, 259);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"找零";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 9;
			this->button7->Text = L"管理員模式";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(335, 353);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(100, 88);
			this->listBox2->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(333, 338);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 12);
			this->label3->TabIndex = 11;
			this->label3->Text = L"已購買商品：";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 41);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 20);
			this->button8->TabIndex = 12;
			this->button8->Text = L"+1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(58, 41);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(40, 20);
			this->button9->TabIndex = 13;
			this->button9->Text = L"+5";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(104, 41);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(40, 20);
			this->button10->TabIndex = 14;
			this->button10->Text = L"+10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(93, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 12);
			this->label4->TabIndex = 15;
			this->label4->Visible = false;
			this->label4->Text = L"選擇商品進行補貨";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 500);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm1";
			this->Text = L"自動販賣機系統";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		RefreshProducts();
		RefreshPurchased();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		vm.insertMoney(10);
		RefreshProducts();
		RefreshPurchased();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		vm.insertMoney(50);
		RefreshProducts();
		RefreshPurchased();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		vm.insertMoney(100);
		RefreshProducts();
		RefreshPurchased();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		vm.insertMoney(500);
		RefreshProducts();
		RefreshPurchased();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int index = listBox1->SelectedIndex;

		if (index < 0)
		{
			label2->Text = "請選擇商品";
			return;
		}

		if (vm.buyProduct(index))
		{
			label2->Text = "購買成功";
		}
		else
		{
			label2->Text = "購買失敗";
		}

		RefreshProducts();
		RefreshPurchased();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int change = vm.returnChange();

		label2->Text =
			"找零 $" + change.ToString();

		RefreshProducts();
		RefreshPurchased();
	}

	///管理員模式
	bool adminMode = false;
	private: System::Void button7_Click(System::Object^ sender,System::EventArgs^ e)
	{
		if (!adminMode)
		{
			LoginForm^ login = gcnew LoginForm();
			login->ShowDialog();

			if (login->success)
			{
				adminMode = true;

				button8->Visible = true;
				button9->Visible = true;
				button10->Visible = true;
				label4->Visible = true;

				button7->Text = "登出";
			}
		}
		else
		{
			adminMode = false;

			button8->Visible = false;
			button9->Visible = false;
			button10->Visible = false;
			label4->Visible = false;
			label4->Text = "選擇商品進行補貨";

			button7->Text = "管理員模式";

		}
	}

	private: System::Void button8_Click(System::Object^ sender,System::EventArgs^ e)
	{
		int index = listBox1->SelectedIndex;


		if (index < 0)
		{
			label4->Text = "請選擇要補貨的商品";
			return;
		}

		else
		{
			label4->Text = "補貨成功";
		}

		vm.restock(index, 1);

		RefreshProducts();
	}

	private: System::Void button9_Click(System::Object^ sender,System::EventArgs^ e)
	{
		int index = listBox1->SelectedIndex;

		if (index < 0)
		{
			label4->Text = "請選擇要補貨的商品";
			return;
		}

		else
		{
			label4->Text = "補貨成功";
		}

		vm.restock(index, 5);

		RefreshProducts();
	}

	private: System::Void button10_Click(System::Object^ sender,System::EventArgs^ e)
	{
		int index = listBox1->SelectedIndex;

		if (index < 0)
		{
			label4->Text = "請選擇要補貨的商品";
			return;
		}

		else
		{
			label4->Text = "補貨成功";
		}

		vm.restock(index, 10);

		RefreshProducts();
	}
};
}
