#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

namespace CppCLRWinformsProjekt {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r Character_Generator
	/// </summary>
	public ref class Character_Generator : public System::Windows::Forms::Form
	{
	public:
		Character_Generator(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Character_Generator()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::Label^ levelLabel;
	private: System::Windows::Forms::NumericUpDown^ level;
	private: System::Windows::Forms::Label^ backgroundLabel;
	private: System::Windows::Forms::ComboBox^ backgroundSelection;
	private: System::Windows::Forms::Label^ alignmentLabel;
	private: System::Windows::Forms::ComboBox^ alignmentSelection;
	private: System::Windows::Forms::Label^ classLabel;
	private: System::Windows::Forms::ComboBox^ classSelection;
	private: System::Windows::Forms::Label^ subclassLabel;
	private: System::Windows::Forms::ComboBox^ subclassSelection;
	private: System::Windows::Forms::Label^ raceLabel;
	private: System::Windows::Forms::ComboBox^ raceSelection;
	private: System::Windows::Forms::Label^ subraceLabel;
	private: System::Windows::Forms::ComboBox^ subraceSelection;
	private: System::Windows::Forms::Button^ randomizeAll;
	private: System::Windows::Forms::Button^ randomizeBackground;
	private: System::Windows::Forms::Button^ randomizeClass;
	private: System::Windows::Forms::Button^ randomizeRace;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::Button^ loadButton;
	private: System::Windows::Forms::NumericUpDown^ strScore;
	private: System::Windows::Forms::Label^ strMod;
	private: System::Windows::Forms::Label^ strLabel;
	private: System::Windows::Forms::Label^ dexLabel;
	private: System::Windows::Forms::NumericUpDown^ dexScore;
	private: System::Windows::Forms::Label^ dexMod;
	private: System::Windows::Forms::Label^ conLabel;
	private: System::Windows::Forms::NumericUpDown^ intScore;
	private: System::Windows::Forms::NumericUpDown^ conScore;
	private: System::Windows::Forms::NumericUpDown^ wisScore;
	private: System::Windows::Forms::NumericUpDown^ chaScore;
	private: System::Windows::Forms::Label^ conMod;
	private: System::Windows::Forms::Label^ intLabel;
	private: System::Windows::Forms::Label^ wisLabel;
	private: System::Windows::Forms::Label^ intMod;
	private: System::Windows::Forms::Label^ wisMod;
	private: System::Windows::Forms::Label^ chaLabel;
	private: System::Windows::Forms::Label^ chaMod;
	private: System::Windows::Forms::Button^ rollButton;
	private: System::Windows::Forms::CheckBox^ strST;
	private: System::Windows::Forms::Label^ Strength;
	private: System::Windows::Forms::Label^ Dexterity;
	private: System::Windows::Forms::CheckBox^ dexST;
	private: System::Windows::Forms::Label^ Constitution;
	private: System::Windows::Forms::CheckBox^ conST;
	private: System::Windows::Forms::Label^ Intelligence;
	private: System::Windows::Forms::CheckBox^ intST;
	private: System::Windows::Forms::Label^ Wisdom;
	private: System::Windows::Forms::CheckBox^ wisST;
	private: System::Windows::Forms::Label^ Charisma;
	private: System::Windows::Forms::CheckBox^ chaST;
	private: System::Windows::Forms::Label^ ProficiencyBonus;
	private: System::Windows::Forms::Label^ ProBon;
	private: System::Windows::Forms::Label^ acro;
	private: System::Windows::Forms::CheckBox^ acrobatics;
	private: System::Windows::Forms::CheckBox^ exp_acro;
	private: System::Windows::Forms::Label^ anim;
	private: System::Windows::Forms::CheckBox^ animalhandling;
	private: System::Windows::Forms::CheckBox^ exp_anim;
	private: System::Windows::Forms::Label^ arca;
	private: System::Windows::Forms::CheckBox^ arcana;
	private: System::Windows::Forms::CheckBox^ exp_arca;
	private: System::Windows::Forms::Label^ dece;
	private: System::Windows::Forms::CheckBox^ deception;
	private: System::Windows::Forms::CheckBox^ exp_dece;
	private: System::Windows::Forms::Label^ hist;
	private: System::Windows::Forms::CheckBox^ history;
	private: System::Windows::Forms::CheckBox^ exp_hist;
	private: System::Windows::Forms::Label^ insi;
	private: System::Windows::Forms::CheckBox^ insight;
	private: System::Windows::Forms::CheckBox^ exp_insi;
	private: System::Windows::Forms::Label^ inti;
	private: System::Windows::Forms::CheckBox^ intimidation;
	private: System::Windows::Forms::CheckBox^ exp_inti;
	private: System::Windows::Forms::Label^ inve;
	private: System::Windows::Forms::CheckBox^ investigation;
	private: System::Windows::Forms::CheckBox^ exp_inve;
	private: System::Windows::Forms::Label^ medi;
	private: System::Windows::Forms::CheckBox^ medicine;
	private: System::Windows::Forms::CheckBox^ exp_medi;
	private: System::Windows::Forms::Label^ natu;
	private: System::Windows::Forms::CheckBox^ nature;
	private: System::Windows::Forms::CheckBox^ exp_natu;
	private: System::Windows::Forms::Label^ perc;
	private: System::Windows::Forms::CheckBox^ perception;
	private: System::Windows::Forms::CheckBox^ exp_perc;
	private: System::Windows::Forms::Label^ perf;
	private: System::Windows::Forms::CheckBox^ performance;
	private: System::Windows::Forms::CheckBox^ exp_perf;
	private: System::Windows::Forms::Label^ pers;
	private: System::Windows::Forms::CheckBox^ persuasion;
	private: System::Windows::Forms::CheckBox^ exp_pers;
	private: System::Windows::Forms::Label^ reli;
	private: System::Windows::Forms::CheckBox^ religion;
	private: System::Windows::Forms::CheckBox^ exp_reli;
	private: System::Windows::Forms::Label^ slei;
	private: System::Windows::Forms::CheckBox^ sleightofhand;
	private: System::Windows::Forms::CheckBox^ exp_slei;
	private: System::Windows::Forms::Label^ stea;
	private: System::Windows::Forms::CheckBox^ stealth;
	private: System::Windows::Forms::CheckBox^ exp_stea;
	private: System::Windows::Forms::Label^ surv;
	private: System::Windows::Forms::CheckBox^ survival;
	private: System::Windows::Forms::CheckBox^ exp_surv;
	private: System::Windows::Forms::Label^ Skills;
	private: System::Windows::Forms::Label^ SavingThrows;
	private: System::Windows::Forms::Label^ HPML;
	private: System::Windows::Forms::Label^ CHPL;
	private: System::Windows::Forms::Label^ THPL;
	private: System::Windows::Forms::NumericUpDown^ HPM;
	private: System::Windows::Forms::NumericUpDown^ CHP;
	private: System::Windows::Forms::NumericUpDown^ THP;
	private: System::Windows::Forms::NumericUpDown^ MS;
	private: System::Windows::Forms::NumericUpDown^ IM;
	private: System::Windows::Forms::NumericUpDown^ AC;
	private: System::Windows::Forms::Label^ MSL;
	private: System::Windows::Forms::Label^ IML;
	private: System::Windows::Forms::Label^ ACL;
	private: System::Windows::Forms::Label^ equipmentLabel;
	private: System::Windows::Forms::NumericUpDown^ CP;
	private: System::Windows::Forms::Label^ copper;
	private: System::Windows::Forms::Label^ silver;
	private: System::Windows::Forms::NumericUpDown^ SP;
	private: System::Windows::Forms::Label^ electrum;
	private: System::Windows::Forms::NumericUpDown^ EP;
	private: System::Windows::Forms::Label^ gold;
	private: System::Windows::Forms::NumericUpDown^ GP;
	private: System::Windows::Forms::Label^ platinum;
	private: System::Windows::Forms::NumericUpDown^ PP;
	private: System::Windows::Forms::TextBox^ Equipment;
	private: System::Windows::Forms::Label^ featsLabel;
	private: System::Windows::Forms::TextBox^ feats;
	private: System::Windows::Forms::Label^ ftLabel;
	private: System::Windows::Forms::Label^ background_features;
	private: System::Windows::Forms::TextBox^ spellsKnown;
	private: System::Windows::Forms::Label^ spellsKnownLabel;
	private: System::Windows::Forms::Label^ saveLabel;
	private: System::Windows::Forms::Label^ attackLabel;
	private: System::Windows::Forms::NumericUpDown^ spellDC;
	private: System::Windows::Forms::NumericUpDown^ spellAM;
	private: System::Windows::Forms::Label^ slotLevel;
	private: System::Windows::Forms::Label^ total;
	private: System::Windows::Forms::Label^ used;
	private: System::Windows::Forms::Label^ l1;
	private: System::Windows::Forms::NumericUpDown^ l1t;
	private: System::Windows::Forms::NumericUpDown^ l1u;
	private: System::Windows::Forms::NumericUpDown^ l2u;
	private: System::Windows::Forms::NumericUpDown^ l2t;
	private: System::Windows::Forms::Label^ l2;
	private: System::Windows::Forms::NumericUpDown^ l3u;
	private: System::Windows::Forms::NumericUpDown^ l3t;
	private: System::Windows::Forms::Label^ l3;
	private: System::Windows::Forms::NumericUpDown^ l4u;
	private: System::Windows::Forms::NumericUpDown^ l4t;
	private: System::Windows::Forms::Label^ l4;
	private: System::Windows::Forms::NumericUpDown^ l5u;
	private: System::Windows::Forms::NumericUpDown^ l5t;
	private: System::Windows::Forms::Label^ l5;
	private: System::Windows::Forms::NumericUpDown^ l6u;
	private: System::Windows::Forms::NumericUpDown^ l6t;
	private: System::Windows::Forms::Label^ l6;
	private: System::Windows::Forms::NumericUpDown^ l7u;
	private: System::Windows::Forms::NumericUpDown^ l7t;
	private: System::Windows::Forms::Label^ l7;
	private: System::Windows::Forms::NumericUpDown^ l8u;
	private: System::Windows::Forms::NumericUpDown^ l8t;
	private: System::Windows::Forms::Label^ l8;
	private: System::Windows::Forms::NumericUpDown^ l9u;
	private: System::Windows::Forms::NumericUpDown^ l9t;
	private: System::Windows::Forms::Label^ l9;
	private: System::Windows::Forms::Label^ d4l;
	private: System::Windows::Forms::Button^ d4r;
	private: System::Windows::Forms::Label^ d4result;
	private: System::Windows::Forms::Label^ d6result;
	private: System::Windows::Forms::Button^ d6r;
	private: System::Windows::Forms::Label^ d6l;
	private: System::Windows::Forms::Label^ d8result;
	private: System::Windows::Forms::Button^ d8r;
	private: System::Windows::Forms::Label^ d8l;
	private: System::Windows::Forms::Label^ d10result;
	private: System::Windows::Forms::Button^ d10r;
	private: System::Windows::Forms::Label^ d10l;
	private: System::Windows::Forms::Label^ d12result;
	private: System::Windows::Forms::Button^ d12r;
	private: System::Windows::Forms::Label^ d12l;
	private: System::Windows::Forms::Label^ d20result;
	private: System::Windows::Forms::Button^ d20r;
	private: System::Windows::Forms::Label^ d20l;
	private: System::Windows::Forms::Label^ d100result;
	private: System::Windows::Forms::Button^ d100r;
	private: System::Windows::Forms::Label^ d100l;
	private: System::Windows::Forms::Label^ dxresult;
	private: System::Windows::Forms::Button^ dxr;
	private: System::Windows::Forms::Label^ dxl;
	private: System::Windows::Forms::NumericUpDown^ diex;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ athl;
	private: System::Windows::Forms::CheckBox^ athletics;
	private: System::Windows::Forms::CheckBox^ exp_athl;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ race_features;
	private: System::Windows::Forms::Label^ class_features;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->levelLabel = (gcnew System::Windows::Forms::Label());
			this->level = (gcnew System::Windows::Forms::NumericUpDown());
			this->backgroundLabel = (gcnew System::Windows::Forms::Label());
			this->backgroundSelection = (gcnew System::Windows::Forms::ComboBox());
			this->alignmentLabel = (gcnew System::Windows::Forms::Label());
			this->alignmentSelection = (gcnew System::Windows::Forms::ComboBox());
			this->classLabel = (gcnew System::Windows::Forms::Label());
			this->classSelection = (gcnew System::Windows::Forms::ComboBox());
			this->subclassLabel = (gcnew System::Windows::Forms::Label());
			this->subclassSelection = (gcnew System::Windows::Forms::ComboBox());
			this->raceLabel = (gcnew System::Windows::Forms::Label());
			this->raceSelection = (gcnew System::Windows::Forms::ComboBox());
			this->subraceLabel = (gcnew System::Windows::Forms::Label());
			this->subraceSelection = (gcnew System::Windows::Forms::ComboBox());
			this->randomizeAll = (gcnew System::Windows::Forms::Button());
			this->randomizeBackground = (gcnew System::Windows::Forms::Button());
			this->randomizeClass = (gcnew System::Windows::Forms::Button());
			this->randomizeRace = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->loadButton = (gcnew System::Windows::Forms::Button());
			this->strLabel = (gcnew System::Windows::Forms::Label());
			this->dexLabel = (gcnew System::Windows::Forms::Label());
			this->conLabel = (gcnew System::Windows::Forms::Label());
			this->intLabel = (gcnew System::Windows::Forms::Label());
			this->wisLabel = (gcnew System::Windows::Forms::Label());
			this->chaLabel = (gcnew System::Windows::Forms::Label());
			this->strScore = (gcnew System::Windows::Forms::NumericUpDown());
			this->strMod = (gcnew System::Windows::Forms::Label());
			this->dexScore = (gcnew System::Windows::Forms::NumericUpDown());
			this->dexMod = (gcnew System::Windows::Forms::Label());
			this->conScore = (gcnew System::Windows::Forms::NumericUpDown());
			this->conMod = (gcnew System::Windows::Forms::Label());
			this->wisScore = (gcnew System::Windows::Forms::NumericUpDown());
			this->wisMod = (gcnew System::Windows::Forms::Label());
			this->intScore = (gcnew System::Windows::Forms::NumericUpDown());
			this->intMod = (gcnew System::Windows::Forms::Label());
			this->chaScore = (gcnew System::Windows::Forms::NumericUpDown());
			this->chaMod = (gcnew System::Windows::Forms::Label());
			this->rollButton = (gcnew System::Windows::Forms::Button());
			this->strST = (gcnew System::Windows::Forms::CheckBox());
			this->Strength = (gcnew System::Windows::Forms::Label());
			this->Dexterity = (gcnew System::Windows::Forms::Label());
			this->dexST = (gcnew System::Windows::Forms::CheckBox());
			this->Constitution = (gcnew System::Windows::Forms::Label());
			this->conST = (gcnew System::Windows::Forms::CheckBox());
			this->Intelligence = (gcnew System::Windows::Forms::Label());
			this->intST = (gcnew System::Windows::Forms::CheckBox());
			this->Wisdom = (gcnew System::Windows::Forms::Label());
			this->wisST = (gcnew System::Windows::Forms::CheckBox());
			this->Charisma = (gcnew System::Windows::Forms::Label());
			this->chaST = (gcnew System::Windows::Forms::CheckBox());
			this->ProficiencyBonus = (gcnew System::Windows::Forms::Label());
			this->ProBon = (gcnew System::Windows::Forms::Label());
			this->acro = (gcnew System::Windows::Forms::Label());
			this->acrobatics = (gcnew System::Windows::Forms::CheckBox());
			this->exp_acro = (gcnew System::Windows::Forms::CheckBox());
			this->anim = (gcnew System::Windows::Forms::Label());
			this->animalhandling = (gcnew System::Windows::Forms::CheckBox());
			this->exp_anim = (gcnew System::Windows::Forms::CheckBox());
			this->arca = (gcnew System::Windows::Forms::Label());
			this->arcana = (gcnew System::Windows::Forms::CheckBox());
			this->exp_arca = (gcnew System::Windows::Forms::CheckBox());
			this->dece = (gcnew System::Windows::Forms::Label());
			this->deception = (gcnew System::Windows::Forms::CheckBox());
			this->exp_dece = (gcnew System::Windows::Forms::CheckBox());
			this->hist = (gcnew System::Windows::Forms::Label());
			this->history = (gcnew System::Windows::Forms::CheckBox());
			this->exp_hist = (gcnew System::Windows::Forms::CheckBox());
			this->insi = (gcnew System::Windows::Forms::Label());
			this->insight = (gcnew System::Windows::Forms::CheckBox());
			this->exp_insi = (gcnew System::Windows::Forms::CheckBox());
			this->inti = (gcnew System::Windows::Forms::Label());
			this->intimidation = (gcnew System::Windows::Forms::CheckBox());
			this->exp_inti = (gcnew System::Windows::Forms::CheckBox());
			this->inve = (gcnew System::Windows::Forms::Label());
			this->investigation = (gcnew System::Windows::Forms::CheckBox());
			this->exp_inve = (gcnew System::Windows::Forms::CheckBox());
			this->medi = (gcnew System::Windows::Forms::Label());
			this->medicine = (gcnew System::Windows::Forms::CheckBox());
			this->exp_medi = (gcnew System::Windows::Forms::CheckBox());
			this->natu = (gcnew System::Windows::Forms::Label());
			this->nature = (gcnew System::Windows::Forms::CheckBox());
			this->exp_natu = (gcnew System::Windows::Forms::CheckBox());
			this->perc = (gcnew System::Windows::Forms::Label());
			this->perception = (gcnew System::Windows::Forms::CheckBox());
			this->exp_perc = (gcnew System::Windows::Forms::CheckBox());
			this->perf = (gcnew System::Windows::Forms::Label());
			this->performance = (gcnew System::Windows::Forms::CheckBox());
			this->exp_perf = (gcnew System::Windows::Forms::CheckBox());
			this->pers = (gcnew System::Windows::Forms::Label());
			this->persuasion = (gcnew System::Windows::Forms::CheckBox());
			this->exp_pers = (gcnew System::Windows::Forms::CheckBox());
			this->reli = (gcnew System::Windows::Forms::Label());
			this->religion = (gcnew System::Windows::Forms::CheckBox());
			this->exp_reli = (gcnew System::Windows::Forms::CheckBox());
			this->slei = (gcnew System::Windows::Forms::Label());
			this->sleightofhand = (gcnew System::Windows::Forms::CheckBox());
			this->exp_slei = (gcnew System::Windows::Forms::CheckBox());
			this->stea = (gcnew System::Windows::Forms::Label());
			this->stealth = (gcnew System::Windows::Forms::CheckBox());
			this->exp_stea = (gcnew System::Windows::Forms::CheckBox());
			this->surv = (gcnew System::Windows::Forms::Label());
			this->survival = (gcnew System::Windows::Forms::CheckBox());
			this->exp_surv = (gcnew System::Windows::Forms::CheckBox());
			this->Skills = (gcnew System::Windows::Forms::Label());
			this->SavingThrows = (gcnew System::Windows::Forms::Label());
			this->HPML = (gcnew System::Windows::Forms::Label());
			this->CHPL = (gcnew System::Windows::Forms::Label());
			this->THPL = (gcnew System::Windows::Forms::Label());
			this->HPM = (gcnew System::Windows::Forms::NumericUpDown());
			this->CHP = (gcnew System::Windows::Forms::NumericUpDown());
			this->THP = (gcnew System::Windows::Forms::NumericUpDown());
			this->MS = (gcnew System::Windows::Forms::NumericUpDown());
			this->IM = (gcnew System::Windows::Forms::NumericUpDown());
			this->AC = (gcnew System::Windows::Forms::NumericUpDown());
			this->MSL = (gcnew System::Windows::Forms::Label());
			this->IML = (gcnew System::Windows::Forms::Label());
			this->ACL = (gcnew System::Windows::Forms::Label());
			this->equipmentLabel = (gcnew System::Windows::Forms::Label());
			this->CP = (gcnew System::Windows::Forms::NumericUpDown());
			this->copper = (gcnew System::Windows::Forms::Label());
			this->silver = (gcnew System::Windows::Forms::Label());
			this->SP = (gcnew System::Windows::Forms::NumericUpDown());
			this->electrum = (gcnew System::Windows::Forms::Label());
			this->EP = (gcnew System::Windows::Forms::NumericUpDown());
			this->gold = (gcnew System::Windows::Forms::Label());
			this->GP = (gcnew System::Windows::Forms::NumericUpDown());
			this->platinum = (gcnew System::Windows::Forms::Label());
			this->PP = (gcnew System::Windows::Forms::NumericUpDown());
			this->Equipment = (gcnew System::Windows::Forms::TextBox());
			this->featsLabel = (gcnew System::Windows::Forms::Label());
			this->feats = (gcnew System::Windows::Forms::TextBox());
			this->ftLabel = (gcnew System::Windows::Forms::Label());
			this->background_features = (gcnew System::Windows::Forms::Label());
			this->spellsKnown = (gcnew System::Windows::Forms::TextBox());
			this->spellsKnownLabel = (gcnew System::Windows::Forms::Label());
			this->saveLabel = (gcnew System::Windows::Forms::Label());
			this->attackLabel = (gcnew System::Windows::Forms::Label());
			this->spellDC = (gcnew System::Windows::Forms::NumericUpDown());
			this->spellAM = (gcnew System::Windows::Forms::NumericUpDown());
			this->slotLevel = (gcnew System::Windows::Forms::Label());
			this->total = (gcnew System::Windows::Forms::Label());
			this->used = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l1t = (gcnew System::Windows::Forms::NumericUpDown());
			this->l1u = (gcnew System::Windows::Forms::NumericUpDown());
			this->l2u = (gcnew System::Windows::Forms::NumericUpDown());
			this->l2t = (gcnew System::Windows::Forms::NumericUpDown());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l3u = (gcnew System::Windows::Forms::NumericUpDown());
			this->l3t = (gcnew System::Windows::Forms::NumericUpDown());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->l4u = (gcnew System::Windows::Forms::NumericUpDown());
			this->l4t = (gcnew System::Windows::Forms::NumericUpDown());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->l5u = (gcnew System::Windows::Forms::NumericUpDown());
			this->l5t = (gcnew System::Windows::Forms::NumericUpDown());
			this->l5 = (gcnew System::Windows::Forms::Label());
			this->l6u = (gcnew System::Windows::Forms::NumericUpDown());
			this->l6t = (gcnew System::Windows::Forms::NumericUpDown());
			this->l6 = (gcnew System::Windows::Forms::Label());
			this->l7u = (gcnew System::Windows::Forms::NumericUpDown());
			this->l7t = (gcnew System::Windows::Forms::NumericUpDown());
			this->l7 = (gcnew System::Windows::Forms::Label());
			this->l8u = (gcnew System::Windows::Forms::NumericUpDown());
			this->l8t = (gcnew System::Windows::Forms::NumericUpDown());
			this->l8 = (gcnew System::Windows::Forms::Label());
			this->l9u = (gcnew System::Windows::Forms::NumericUpDown());
			this->l9t = (gcnew System::Windows::Forms::NumericUpDown());
			this->l9 = (gcnew System::Windows::Forms::Label());
			this->d4l = (gcnew System::Windows::Forms::Label());
			this->d4r = (gcnew System::Windows::Forms::Button());
			this->d4result = (gcnew System::Windows::Forms::Label());
			this->d6result = (gcnew System::Windows::Forms::Label());
			this->d6r = (gcnew System::Windows::Forms::Button());
			this->d6l = (gcnew System::Windows::Forms::Label());
			this->d8result = (gcnew System::Windows::Forms::Label());
			this->d8r = (gcnew System::Windows::Forms::Button());
			this->d8l = (gcnew System::Windows::Forms::Label());
			this->d10result = (gcnew System::Windows::Forms::Label());
			this->d10r = (gcnew System::Windows::Forms::Button());
			this->d10l = (gcnew System::Windows::Forms::Label());
			this->d12result = (gcnew System::Windows::Forms::Label());
			this->d12r = (gcnew System::Windows::Forms::Button());
			this->d12l = (gcnew System::Windows::Forms::Label());
			this->d20result = (gcnew System::Windows::Forms::Label());
			this->d20r = (gcnew System::Windows::Forms::Button());
			this->d20l = (gcnew System::Windows::Forms::Label());
			this->d100result = (gcnew System::Windows::Forms::Label());
			this->d100r = (gcnew System::Windows::Forms::Button());
			this->d100l = (gcnew System::Windows::Forms::Label());
			this->dxresult = (gcnew System::Windows::Forms::Label());
			this->dxr = (gcnew System::Windows::Forms::Button());
			this->dxl = (gcnew System::Windows::Forms::Label());
			this->diex = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->athl = (gcnew System::Windows::Forms::Label());
			this->athletics = (gcnew System::Windows::Forms::CheckBox());
			this->exp_athl = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->race_features = (gcnew System::Windows::Forms::Label());
			this->class_features = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->strScore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dexScore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->conScore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wisScore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intScore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chaScore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HPM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CHP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->THP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->spellDC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->spellAM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l1t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l1u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l2u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l2t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l3u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l3t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l4u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l4t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l5u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l5t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l6u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l6t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l7u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l7t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l8u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l8t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l9u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l9t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->diex))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->Location = System::Drawing::Point(5, 5);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(50, 20);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"Name:";
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::SystemColors::MenuBar;
			this->name->Location = System::Drawing::Point(60, 5);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(120, 20);
			this->name->TabIndex = 1;
			// 
			// levelLabel
			// 
			this->levelLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->levelLabel->Location = System::Drawing::Point(5, 30);
			this->levelLabel->Name = L"levelLabel";
			this->levelLabel->Size = System::Drawing::Size(50, 20);
			this->levelLabel->TabIndex = 0;
			this->levelLabel->Text = L"Level:";
			// 
			// level
			// 
			this->level->Location = System::Drawing::Point(60, 30);
			this->level->Name = L"level";
			this->level->Size = System::Drawing::Size(120, 20);
			this->level->TabIndex = 2;
			this->level->ValueChanged += gcnew System::EventHandler(this, &Character_Generator::setLevel);
			// 
			// backgroundLabel
			// 
			this->backgroundLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backgroundLabel->Location = System::Drawing::Point(185, 5);
			this->backgroundLabel->Name = L"backgroundLabel";
			this->backgroundLabel->Size = System::Drawing::Size(85, 20);
			this->backgroundLabel->TabIndex = 0;
			this->backgroundLabel->Text = L"Background:";
			// 
			// backgroundSelection
			// 
			this->backgroundSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->backgroundSelection->FormattingEnabled = true;
			this->backgroundSelection->Location = System::Drawing::Point(275, 5);
			this->backgroundSelection->Name = L"backgroundSelection";
			this->backgroundSelection->Size = System::Drawing::Size(120, 21);
			this->backgroundSelection->TabIndex = 3;
			this->backgroundSelection->SelectedIndexChanged += gcnew System::EventHandler(this, &Character_Generator::setBackground);
			// 
			// alignmentLabel
			// 
			this->alignmentLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->alignmentLabel->Location = System::Drawing::Point(185, 30);
			this->alignmentLabel->Name = L"alignmentLabel";
			this->alignmentLabel->Size = System::Drawing::Size(85, 20);
			this->alignmentLabel->TabIndex = 0;
			this->alignmentLabel->Text = L"Alignment:";
			// 
			// alignmentSelection
			// 
			this->alignmentSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->alignmentSelection->FormattingEnabled = true;
			this->alignmentSelection->Location = System::Drawing::Point(275, 30);
			this->alignmentSelection->Name = L"alignmentSelection";
			this->alignmentSelection->Size = System::Drawing::Size(120, 21);
			this->alignmentSelection->TabIndex = 4;
			// 
			// classLabel
			// 
			this->classLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->classLabel->Location = System::Drawing::Point(400, 5);
			this->classLabel->Name = L"classLabel";
			this->classLabel->Size = System::Drawing::Size(65, 20);
			this->classLabel->TabIndex = 0;
			this->classLabel->Text = L"Class:";
			// 
			// classSelection
			// 
			this->classSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->classSelection->FormattingEnabled = true;
			this->classSelection->Location = System::Drawing::Point(470, 5);
			this->classSelection->Name = L"classSelection";
			this->classSelection->Size = System::Drawing::Size(120, 21);
			this->classSelection->TabIndex = 5;
			this->classSelection->SelectedIndexChanged += gcnew System::EventHandler(this, &Character_Generator::setClass);
			// 
			// subclassLabel
			// 
			this->subclassLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subclassLabel->Location = System::Drawing::Point(400, 30);
			this->subclassLabel->Name = L"subclassLabel";
			this->subclassLabel->Size = System::Drawing::Size(65, 20);
			this->subclassLabel->TabIndex = 0;
			this->subclassLabel->Text = L"Subclass:";
			// 
			// subclassSelection
			// 
			this->subclassSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->subclassSelection->FormattingEnabled = true;
			this->subclassSelection->Location = System::Drawing::Point(470, 30);
			this->subclassSelection->Name = L"subclassSelection";
			this->subclassSelection->Size = System::Drawing::Size(120, 21);
			this->subclassSelection->TabIndex = 6;
			this->subclassSelection->SelectedIndexChanged += gcnew System::EventHandler(this, &Character_Generator::setSubclass);
			// 
			// raceLabel
			// 
			this->raceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->raceLabel->Location = System::Drawing::Point(595, 5);
			this->raceLabel->Name = L"raceLabel";
			this->raceLabel->Size = System::Drawing::Size(60, 20);
			this->raceLabel->TabIndex = 0;
			this->raceLabel->Text = L"Race:";
			// 
			// raceSelection
			// 
			this->raceSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->raceSelection->FormattingEnabled = true;
			this->raceSelection->Location = System::Drawing::Point(660, 5);
			this->raceSelection->Name = L"raceSelection";
			this->raceSelection->Size = System::Drawing::Size(120, 21);
			this->raceSelection->TabIndex = 7;
			this->raceSelection->SelectedIndexChanged += gcnew System::EventHandler(this, &Character_Generator::setRace);
			// 
			// subraceLabel
			// 
			this->subraceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subraceLabel->Location = System::Drawing::Point(595, 30);
			this->subraceLabel->Name = L"subraceLabel";
			this->subraceLabel->Size = System::Drawing::Size(60, 20);
			this->subraceLabel->TabIndex = 0;
			this->subraceLabel->Text = L"Subrace:";
			// 
			// subraceSelection
			// 
			this->subraceSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->subraceSelection->FormattingEnabled = true;
			this->subraceSelection->Location = System::Drawing::Point(660, 30);
			this->subraceSelection->Name = L"subraceSelection";
			this->subraceSelection->Size = System::Drawing::Size(120, 21);
			this->subraceSelection->TabIndex = 8;
			this->subraceSelection->SelectedIndexChanged += gcnew System::EventHandler(this, &Character_Generator::setSubrace);
			// 
			// randomizeAll
			// 
			this->randomizeAll->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->randomizeAll->Location = System::Drawing::Point(835, 5);
			this->randomizeAll->Name = L"randomizeAll";
			this->randomizeAll->Size = System::Drawing::Size(150, 20);
			this->randomizeAll->TabIndex = 9;
			this->randomizeAll->Text = L"Randomize All";
			this->randomizeAll->Click += gcnew System::EventHandler(this, &Character_Generator::randomAll);
			// 
			// randomizeBackground
			// 
			this->randomizeBackground->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->randomizeBackground->Location = System::Drawing::Point(835, 30);
			this->randomizeBackground->Name = L"randomizeBackground";
			this->randomizeBackground->Size = System::Drawing::Size(150, 20);
			this->randomizeBackground->TabIndex = 10;
			this->randomizeBackground->Text = L"Randomize Background";
			this->randomizeBackground->Click += gcnew System::EventHandler(this, &Character_Generator::randomBackground);
			// 
			// randomizeClass
			// 
			this->randomizeClass->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->randomizeClass->Location = System::Drawing::Point(990, 5);
			this->randomizeClass->Name = L"randomizeClass";
			this->randomizeClass->Size = System::Drawing::Size(150, 20);
			this->randomizeClass->TabIndex = 11;
			this->randomizeClass->Text = L"Randomize Class";
			this->randomizeClass->Click += gcnew System::EventHandler(this, &Character_Generator::randomClass);
			// 
			// randomizeRace
			// 
			this->randomizeRace->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->randomizeRace->Location = System::Drawing::Point(990, 30);
			this->randomizeRace->Name = L"randomizeRace";
			this->randomizeRace->Size = System::Drawing::Size(150, 20);
			this->randomizeRace->TabIndex = 12;
			this->randomizeRace->Text = L"Randomize Race";
			this->randomizeRace->Click += gcnew System::EventHandler(this, &Character_Generator::randomRace);
			// 
			// saveButton
			// 
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->saveButton->Location = System::Drawing::Point(1145, 5);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(100, 20);
			this->saveButton->TabIndex = 13;
			this->saveButton->Text = L"Save";
			this->saveButton->Click += gcnew System::EventHandler(this, &Character_Generator::saveCharacter);
			// 
			// loadButton
			// 
			this->loadButton->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->loadButton->Location = System::Drawing::Point(1145, 30);
			this->loadButton->Name = L"loadButton";
			this->loadButton->Size = System::Drawing::Size(100, 20);
			this->loadButton->TabIndex = 14;
			this->loadButton->Text = L"Load";
			this->loadButton->Click += gcnew System::EventHandler(this, &Character_Generator::loadCharacter);
			// 
			// strLabel
			// 
			this->strLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->strLabel->Location = System::Drawing::Point(5, 75);
			this->strLabel->Name = L"strLabel";
			this->strLabel->Size = System::Drawing::Size(80, 20);
			this->strLabel->TabIndex = 0;
			this->strLabel->Text = L"Strength";
			// 
			// dexLabel
			// 
			this->dexLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dexLabel->Location = System::Drawing::Point(5, 150);
			this->dexLabel->Name = L"dexLabel";
			this->dexLabel->Size = System::Drawing::Size(80, 20);
			this->dexLabel->TabIndex = 0;
			this->dexLabel->Text = L"Dexterity";
			// 
			// conLabel
			// 
			this->conLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->conLabel->Location = System::Drawing::Point(5, 225);
			this->conLabel->Name = L"conLabel";
			this->conLabel->Size = System::Drawing::Size(80, 20);
			this->conLabel->TabIndex = 0;
			this->conLabel->Text = L"Constitution";
			// 
			// intLabel
			// 
			this->intLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->intLabel->Location = System::Drawing::Point(5, 300);
			this->intLabel->Name = L"intLabel";
			this->intLabel->Size = System::Drawing::Size(80, 20);
			this->intLabel->TabIndex = 0;
			this->intLabel->Text = L"Intelligence";
			// 
			// wisLabel
			// 
			this->wisLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wisLabel->Location = System::Drawing::Point(5, 375);
			this->wisLabel->Name = L"wisLabel";
			this->wisLabel->Size = System::Drawing::Size(80, 20);
			this->wisLabel->TabIndex = 0;
			this->wisLabel->Text = L"Wisdom";
			// 
			// chaLabel
			// 
			this->chaLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chaLabel->Location = System::Drawing::Point(5, 450);
			this->chaLabel->Name = L"chaLabel";
			this->chaLabel->Size = System::Drawing::Size(80, 20);
			this->chaLabel->TabIndex = 0;
			this->chaLabel->Text = L"Charisma";
			// 
			// strScore
			// 
			this->strScore->Location = System::Drawing::Point(8, 100);
			this->strScore->Name = L"strScore";
			this->strScore->Size = System::Drawing::Size(35, 20);
			this->strScore->TabIndex = 15;
			this->strScore->ValueChanged += gcnew System::EventHandler(this, &Character_Generator::setStrength);
			// 
			// strMod
			// 
			this->strMod->Location = System::Drawing::Point(8, 125);
			this->strMod->Name = L"strMod";
			this->strMod->Size = System::Drawing::Size(20, 20);
			this->strMod->TabIndex = 0;
			this->strMod->Text = L"-5";
			// 
			// dexScore
			// 
			this->dexScore->Location = System::Drawing::Point(8, 175);
			this->dexScore->Name = L"dexScore";
			this->dexScore->Size = System::Drawing::Size(35, 20);
			this->dexScore->TabIndex = 16;
			this->dexScore->ValueChanged += gcnew System::EventHandler(this, &Character_Generator::setDexterity);
			// 
			// dexMod
			// 
			this->dexMod->Location = System::Drawing::Point(8, 200);
			this->dexMod->Name = L"dexMod";
			this->dexMod->Size = System::Drawing::Size(20, 20);
			this->dexMod->TabIndex = 0;
			this->dexMod->Text = L"-5";
			// 
			// conScore
			// 
			this->conScore->Location = System::Drawing::Point(8, 250);
			this->conScore->Name = L"conScore";
			this->conScore->Size = System::Drawing::Size(35, 20);
			this->conScore->TabIndex = 17;
			this->conScore->ValueChanged += gcnew System::EventHandler(this, &Character_Generator::setConstitution);
			// 
			// conMod
			// 
			this->conMod->Location = System::Drawing::Point(8, 275);
			this->conMod->Name = L"conMod";
			this->conMod->Size = System::Drawing::Size(20, 20);
			this->conMod->TabIndex = 0;
			this->conMod->Text = L"-5";
			// 
			// wisScore
			// 
			this->wisScore->Location = System::Drawing::Point(8, 400);
			this->wisScore->Name = L"wisScore";
			this->wisScore->Size = System::Drawing::Size(35, 20);
			this->wisScore->TabIndex = 19;
			this->wisScore->ValueChanged += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// wisMod
			// 
			this->wisMod->Location = System::Drawing::Point(8, 425);
			this->wisMod->Name = L"wisMod";
			this->wisMod->Size = System::Drawing::Size(20, 20);
			this->wisMod->TabIndex = 0;
			this->wisMod->Text = L"-5";
			// 
			// intScore
			// 
			this->intScore->Location = System::Drawing::Point(8, 325);
			this->intScore->Name = L"intScore";
			this->intScore->Size = System::Drawing::Size(35, 20);
			this->intScore->TabIndex = 18;
			this->intScore->ValueChanged += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// intMod
			// 
			this->intMod->Location = System::Drawing::Point(8, 350);
			this->intMod->Name = L"intMod";
			this->intMod->Size = System::Drawing::Size(20, 20);
			this->intMod->TabIndex = 0;
			this->intMod->Text = L"-5";
			// 
			// chaScore
			// 
			this->chaScore->Location = System::Drawing::Point(8, 475);
			this->chaScore->Name = L"chaScore";
			this->chaScore->Size = System::Drawing::Size(35, 20);
			this->chaScore->TabIndex = 20;
			this->chaScore->ValueChanged += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// chaMod
			// 
			this->chaMod->Location = System::Drawing::Point(8, 500);
			this->chaMod->Name = L"chaMod";
			this->chaMod->Size = System::Drawing::Size(20, 20);
			this->chaMod->TabIndex = 0;
			this->chaMod->Text = L"-5";
			// 
			// rollButton
			// 
			this->rollButton->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->rollButton->Location = System::Drawing::Point(5, 530);
			this->rollButton->Name = L"rollButton";
			this->rollButton->Size = System::Drawing::Size(65, 65);
			this->rollButton->TabIndex = 21;
			this->rollButton->Text = L"Roll Ability Scores";
			this->rollButton->UseVisualStyleBackColor = true;
			this->rollButton->Click += gcnew System::EventHandler(this, &Character_Generator::genAbilityScores);
			// 
			// strST
			// 
			this->strST->Location = System::Drawing::Point(90, 122);
			this->strST->Name = L"strST";
			this->strST->Size = System::Drawing::Size(40, 20);
			this->strST->TabIndex = 22;
			this->strST->Text = L"-5";
			this->strST->UseVisualStyleBackColor = true;
			this->strST->Click += gcnew System::EventHandler(this, &Character_Generator::setStrength);
			// 
			// Strength
			// 
			this->Strength->AutoSize = true;
			this->Strength->Location = System::Drawing::Point(125, 123);
			this->Strength->Name = L"Strength";
			this->Strength->Size = System::Drawing::Size(47, 13);
			this->Strength->TabIndex = 0;
			this->Strength->Text = L"Strength";
			// 
			// Dexterity
			// 
			this->Dexterity->AutoSize = true;
			this->Dexterity->Location = System::Drawing::Point(125, 140);
			this->Dexterity->Name = L"Dexterity";
			this->Dexterity->Size = System::Drawing::Size(48, 13);
			this->Dexterity->TabIndex = 0;
			this->Dexterity->Text = L"Dexterity";
			// 
			// dexST
			// 
			this->dexST->Location = System::Drawing::Point(90, 139);
			this->dexST->Name = L"dexST";
			this->dexST->Size = System::Drawing::Size(40, 17);
			this->dexST->TabIndex = 23;
			this->dexST->Text = L"-5";
			this->dexST->UseVisualStyleBackColor = true;
			this->dexST->Click += gcnew System::EventHandler(this, &Character_Generator::setDexterity);
			// 
			// Constitution
			// 
			this->Constitution->AutoSize = true;
			this->Constitution->Location = System::Drawing::Point(125, 155);
			this->Constitution->Name = L"Constitution";
			this->Constitution->Size = System::Drawing::Size(62, 13);
			this->Constitution->TabIndex = 0;
			this->Constitution->Text = L"Constitution";
			// 
			// conST
			// 
			this->conST->Location = System::Drawing::Point(90, 154);
			this->conST->Name = L"conST";
			this->conST->Size = System::Drawing::Size(40, 17);
			this->conST->TabIndex = 14;
			this->conST->Text = L"-5";
			this->conST->UseVisualStyleBackColor = true;
			this->conST->Click += gcnew System::EventHandler(this, &Character_Generator::setConstitution);
			// 
			// Intelligence
			// 
			this->Intelligence->AutoSize = true;
			this->Intelligence->Location = System::Drawing::Point(125, 170);
			this->Intelligence->Name = L"Intelligence";
			this->Intelligence->Size = System::Drawing::Size(61, 13);
			this->Intelligence->TabIndex = 0;
			this->Intelligence->Text = L"Intelligence";
			// 
			// intST
			// 
			this->intST->Location = System::Drawing::Point(90, 169);
			this->intST->Name = L"intST";
			this->intST->Size = System::Drawing::Size(40, 17);
			this->intST->TabIndex = 25;
			this->intST->Text = L"-5";
			this->intST->UseVisualStyleBackColor = true;
			this->intST->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// Wisdom
			// 
			this->Wisdom->AutoSize = true;
			this->Wisdom->Location = System::Drawing::Point(125, 185);
			this->Wisdom->Name = L"Wisdom";
			this->Wisdom->Size = System::Drawing::Size(45, 13);
			this->Wisdom->TabIndex = 0;
			this->Wisdom->Text = L"Wisdom";
			// 
			// wisST
			// 
			this->wisST->Location = System::Drawing::Point(90, 184);
			this->wisST->Name = L"wisST";
			this->wisST->Size = System::Drawing::Size(40, 17);
			this->wisST->TabIndex = 26;
			this->wisST->Text = L"-5";
			this->wisST->UseVisualStyleBackColor = true;
			this->wisST->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// Charisma
			// 
			this->Charisma->AutoSize = true;
			this->Charisma->Location = System::Drawing::Point(125, 200);
			this->Charisma->Name = L"Charisma";
			this->Charisma->Size = System::Drawing::Size(50, 13);
			this->Charisma->TabIndex = 0;
			this->Charisma->Text = L"Charisma";
			// 
			// chaST
			// 
			this->chaST->Location = System::Drawing::Point(90, 199);
			this->chaST->Name = L"chaST";
			this->chaST->Size = System::Drawing::Size(40, 17);
			this->chaST->TabIndex = 27;
			this->chaST->Text = L"-5";
			this->chaST->UseVisualStyleBackColor = true;
			this->chaST->Click += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// ProficiencyBonus
			// 
			this->ProficiencyBonus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProficiencyBonus->Location = System::Drawing::Point(87, 75);
			this->ProficiencyBonus->Name = L"ProficiencyBonus";
			this->ProficiencyBonus->Size = System::Drawing::Size(120, 20);
			this->ProficiencyBonus->TabIndex = 0;
			this->ProficiencyBonus->Text = L"Proficiency Bonus:";
			// 
			// ProBon
			// 
			this->ProBon->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProBon->Location = System::Drawing::Point(202, 75);
			this->ProBon->Name = L"ProBon";
			this->ProBon->Size = System::Drawing::Size(20, 17);
			this->ProBon->TabIndex = 0;
			this->ProBon->Text = L"0";
			// 
			// acro
			// 
			this->acro->AutoSize = true;
			this->acro->Location = System::Drawing::Point(145, 246);
			this->acro->Name = L"acro";
			this->acro->Size = System::Drawing::Size(85, 13);
			this->acro->TabIndex = 0;
			this->acro->Text = L"Acrobatics (Dex)";
			// 
			// acrobatics
			// 
			this->acrobatics->Location = System::Drawing::Point(90, 245);
			this->acrobatics->Name = L"acrobatics";
			this->acrobatics->Size = System::Drawing::Size(40, 17);
			this->acrobatics->TabIndex = 28;
			this->acrobatics->Text = L"-5";
			this->acrobatics->UseVisualStyleBackColor = true;
			this->acrobatics->Click += gcnew System::EventHandler(this, &Character_Generator::setDexterity);
			// 
			// exp_acro
			// 
			this->exp_acro->Location = System::Drawing::Point(130, 245);
			this->exp_acro->Name = L"exp_acro";
			this->exp_acro->Size = System::Drawing::Size(40, 17);
			this->exp_acro->TabIndex = 29;
			this->exp_acro->UseVisualStyleBackColor = true;
			this->exp_acro->Click += gcnew System::EventHandler(this, &Character_Generator::setDexterity);
			// 
			// anim
			// 
			this->anim->AutoSize = true;
			this->anim->Location = System::Drawing::Point(145, 261);
			this->anim->Name = L"anim";
			this->anim->Size = System::Drawing::Size(110, 13);
			this->anim->TabIndex = 0;
			this->anim->Text = L"Animal Handling (Wis)";
			// 
			// animalhandling
			// 
			this->animalhandling->Location = System::Drawing::Point(90, 260);
			this->animalhandling->Name = L"animalhandling";
			this->animalhandling->Size = System::Drawing::Size(40, 17);
			this->animalhandling->TabIndex = 29;
			this->animalhandling->Text = L"-5";
			this->animalhandling->UseVisualStyleBackColor = true;
			this->animalhandling->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// exp_anim
			// 
			this->exp_anim->Location = System::Drawing::Point(130, 260);
			this->exp_anim->Name = L"exp_anim";
			this->exp_anim->Size = System::Drawing::Size(40, 17);
			this->exp_anim->TabIndex = 29;
			this->exp_anim->UseVisualStyleBackColor = true;
			this->exp_anim->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// arca
			// 
			this->arca->AutoSize = true;
			this->arca->Location = System::Drawing::Point(145, 276);
			this->arca->Name = L"arca";
			this->arca->Size = System::Drawing::Size(62, 13);
			this->arca->TabIndex = 0;
			this->arca->Text = L"Arcana (Int)";
			// 
			// arcana
			// 
			this->arcana->Location = System::Drawing::Point(90, 275);
			this->arcana->Name = L"arcana";
			this->arcana->Size = System::Drawing::Size(40, 17);
			this->arcana->TabIndex = 30;
			this->arcana->Text = L"-5";
			this->arcana->UseVisualStyleBackColor = true;
			this->arcana->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// exp_arca
			// 
			this->exp_arca->Location = System::Drawing::Point(130, 275);
			this->exp_arca->Name = L"exp_arca";
			this->exp_arca->Size = System::Drawing::Size(40, 17);
			this->exp_arca->TabIndex = 29;
			this->exp_arca->UseVisualStyleBackColor = true;
			this->exp_arca->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// dece
			// 
			this->dece->AutoSize = true;
			this->dece->Location = System::Drawing::Point(145, 306);
			this->dece->Name = L"dece";
			this->dece->Size = System::Drawing::Size(84, 13);
			this->dece->TabIndex = 66;
			this->dece->Text = L"Deception (Cha)";
			// 
			// deception
			// 
			this->deception->Location = System::Drawing::Point(90, 305);
			this->deception->Name = L"deception";
			this->deception->Size = System::Drawing::Size(40, 17);
			this->deception->TabIndex = 32;
			this->deception->Text = L"-5";
			this->deception->UseVisualStyleBackColor = true;
			this->deception->Click += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// exp_dece
			// 
			this->exp_dece->Location = System::Drawing::Point(130, 305);
			this->exp_dece->Name = L"exp_dece";
			this->exp_dece->Size = System::Drawing::Size(40, 17);
			this->exp_dece->TabIndex = 29;
			this->exp_dece->UseVisualStyleBackColor = true;
			this->exp_dece->Click += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// hist
			// 
			this->hist->AutoSize = true;
			this->hist->Location = System::Drawing::Point(145, 321);
			this->hist->Name = L"hist";
			this->hist->Size = System::Drawing::Size(60, 13);
			this->hist->TabIndex = 0;
			this->hist->Text = L"History (Int)";
			// 
			// history
			// 
			this->history->Location = System::Drawing::Point(90, 320);
			this->history->Name = L"history";
			this->history->Size = System::Drawing::Size(40, 17);
			this->history->TabIndex = 33;
			this->history->Text = L"-5";
			this->history->UseVisualStyleBackColor = true;
			this->history->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// exp_hist
			// 
			this->exp_hist->Location = System::Drawing::Point(130, 320);
			this->exp_hist->Name = L"exp_hist";
			this->exp_hist->Size = System::Drawing::Size(40, 17);
			this->exp_hist->TabIndex = 29;
			this->exp_hist->UseVisualStyleBackColor = true;
			this->exp_hist->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// insi
			// 
			this->insi->AutoSize = true;
			this->insi->Location = System::Drawing::Point(145, 336);
			this->insi->Name = L"insi";
			this->insi->Size = System::Drawing::Size(65, 13);
			this->insi->TabIndex = 0;
			this->insi->Text = L"Insight (Wis)";
			// 
			// insight
			// 
			this->insight->Location = System::Drawing::Point(90, 335);
			this->insight->Name = L"insight";
			this->insight->Size = System::Drawing::Size(40, 17);
			this->insight->TabIndex = 34;
			this->insight->Text = L"-5";
			this->insight->UseVisualStyleBackColor = true;
			this->insight->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// exp_insi
			// 
			this->exp_insi->Location = System::Drawing::Point(130, 335);
			this->exp_insi->Name = L"exp_insi";
			this->exp_insi->Size = System::Drawing::Size(40, 17);
			this->exp_insi->TabIndex = 29;
			this->exp_insi->UseVisualStyleBackColor = true;
			this->exp_insi->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// inti
			// 
			this->inti->AutoSize = true;
			this->inti->Location = System::Drawing::Point(145, 351);
			this->inti->Name = L"inti";
			this->inti->Size = System::Drawing::Size(88, 13);
			this->inti->TabIndex = 0;
			this->inti->Text = L"Intimidation (Cha)";
			// 
			// intimidation
			// 
			this->intimidation->Location = System::Drawing::Point(90, 350);
			this->intimidation->Name = L"intimidation";
			this->intimidation->Size = System::Drawing::Size(40, 17);
			this->intimidation->TabIndex = 35;
			this->intimidation->Text = L"-5";
			this->intimidation->UseVisualStyleBackColor = true;
			this->intimidation->Click += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// exp_inti
			// 
			this->exp_inti->Location = System::Drawing::Point(130, 350);
			this->exp_inti->Name = L"exp_inti";
			this->exp_inti->Size = System::Drawing::Size(40, 17);
			this->exp_inti->TabIndex = 29;
			this->exp_inti->UseVisualStyleBackColor = true;
			this->exp_inti->Click += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// inve
			// 
			this->inve->AutoSize = true;
			this->inve->Location = System::Drawing::Point(145, 366);
			this->inve->Name = L"inve";
			this->inve->Size = System::Drawing::Size(88, 13);
			this->inve->TabIndex = 0;
			this->inve->Text = L"Investigation (Int)";
			// 
			// investigation
			// 
			this->investigation->Location = System::Drawing::Point(90, 365);
			this->investigation->Name = L"investigation";
			this->investigation->Size = System::Drawing::Size(40, 17);
			this->investigation->TabIndex = 36;
			this->investigation->Text = L"-5";
			this->investigation->UseVisualStyleBackColor = true;
			this->investigation->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// exp_inve
			// 
			this->exp_inve->Location = System::Drawing::Point(130, 365);
			this->exp_inve->Name = L"exp_inve";
			this->exp_inve->Size = System::Drawing::Size(40, 17);
			this->exp_inve->TabIndex = 29;
			this->exp_inve->UseVisualStyleBackColor = true;
			this->exp_inve->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// medi
			// 
			this->medi->AutoSize = true;
			this->medi->Location = System::Drawing::Point(145, 381);
			this->medi->Name = L"medi";
			this->medi->Size = System::Drawing::Size(77, 13);
			this->medi->TabIndex = 0;
			this->medi->Text = L"Medicine (Wis)";
			// 
			// medicine
			// 
			this->medicine->Location = System::Drawing::Point(90, 380);
			this->medicine->Name = L"medicine";
			this->medicine->Size = System::Drawing::Size(40, 17);
			this->medicine->TabIndex = 37;
			this->medicine->Text = L"-5";
			this->medicine->UseVisualStyleBackColor = true;
			this->medicine->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// exp_medi
			// 
			this->exp_medi->Location = System::Drawing::Point(130, 380);
			this->exp_medi->Name = L"exp_medi";
			this->exp_medi->Size = System::Drawing::Size(40, 17);
			this->exp_medi->TabIndex = 29;
			this->exp_medi->UseVisualStyleBackColor = true;
			this->exp_medi->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// natu
			// 
			this->natu->AutoSize = true;
			this->natu->Location = System::Drawing::Point(145, 396);
			this->natu->Name = L"natu";
			this->natu->Size = System::Drawing::Size(60, 13);
			this->natu->TabIndex = 0;
			this->natu->Text = L"Nature (Int)";
			// 
			// nature
			// 
			this->nature->Location = System::Drawing::Point(90, 395);
			this->nature->Name = L"nature";
			this->nature->Size = System::Drawing::Size(40, 17);
			this->nature->TabIndex = 38;
			this->nature->Text = L"-5";
			this->nature->UseVisualStyleBackColor = true;
			this->nature->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// exp_natu
			// 
			this->exp_natu->Location = System::Drawing::Point(130, 395);
			this->exp_natu->Name = L"exp_natu";
			this->exp_natu->Size = System::Drawing::Size(40, 17);
			this->exp_natu->TabIndex = 29;
			this->exp_natu->UseVisualStyleBackColor = true;
			this->exp_natu->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// perc
			// 
			this->perc->AutoSize = true;
			this->perc->Location = System::Drawing::Point(145, 411);
			this->perc->Name = L"perc";
			this->perc->Size = System::Drawing::Size(85, 13);
			this->perc->TabIndex = 0;
			this->perc->Text = L"Perception (Wis)";
			// 
			// perception
			// 
			this->perception->Location = System::Drawing::Point(90, 410);
			this->perception->Name = L"perception";
			this->perception->Size = System::Drawing::Size(40, 17);
			this->perception->TabIndex = 39;
			this->perception->Text = L"-5";
			this->perception->UseVisualStyleBackColor = true;
			this->perception->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// exp_perc
			// 
			this->exp_perc->Location = System::Drawing::Point(130, 410);
			this->exp_perc->Name = L"exp_perc";
			this->exp_perc->Size = System::Drawing::Size(40, 17);
			this->exp_perc->TabIndex = 29;
			this->exp_perc->UseVisualStyleBackColor = true;
			this->exp_perc->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// perf
			// 
			this->perf->AutoSize = true;
			this->perf->Location = System::Drawing::Point(145, 426);
			this->perf->Name = L"perf";
			this->perf->Size = System::Drawing::Size(95, 13);
			this->perf->TabIndex = 0;
			this->perf->Text = L"Performance (Cha)";
			// 
			// performance
			// 
			this->performance->Location = System::Drawing::Point(90, 425);
			this->performance->Name = L"performance";
			this->performance->Size = System::Drawing::Size(40, 17);
			this->performance->TabIndex = 40;
			this->performance->Text = L"-5";
			this->performance->UseVisualStyleBackColor = true;
			this->performance->Click += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// exp_perf
			// 
			this->exp_perf->Location = System::Drawing::Point(130, 425);
			this->exp_perf->Name = L"exp_perf";
			this->exp_perf->Size = System::Drawing::Size(40, 17);
			this->exp_perf->TabIndex = 29;
			this->exp_perf->UseVisualStyleBackColor = true;
			this->exp_perf->Click += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// pers
			// 
			this->pers->AutoSize = true;
			this->pers->Location = System::Drawing::Point(145, 441);
			this->pers->Name = L"pers";
			this->pers->Size = System::Drawing::Size(87, 13);
			this->pers->TabIndex = 0;
			this->pers->Text = L"Persuasion (Cha)";
			// 
			// persuasion
			// 
			this->persuasion->Location = System::Drawing::Point(90, 440);
			this->persuasion->Name = L"persuasion";
			this->persuasion->Size = System::Drawing::Size(40, 17);
			this->persuasion->TabIndex = 41;
			this->persuasion->Text = L"-5";
			this->persuasion->UseVisualStyleBackColor = true;
			this->persuasion->Click += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// exp_pers
			// 
			this->exp_pers->Location = System::Drawing::Point(130, 440);
			this->exp_pers->Name = L"exp_pers";
			this->exp_pers->Size = System::Drawing::Size(40, 17);
			this->exp_pers->TabIndex = 29;
			this->exp_pers->UseVisualStyleBackColor = true;
			this->exp_pers->Click += gcnew System::EventHandler(this, &Character_Generator::setCharisma);
			// 
			// reli
			// 
			this->reli->AutoSize = true;
			this->reli->Location = System::Drawing::Point(145, 456);
			this->reli->Name = L"reli";
			this->reli->Size = System::Drawing::Size(66, 13);
			this->reli->TabIndex = 0;
			this->reli->Text = L"Religion (Int)";
			// 
			// religion
			// 
			this->religion->Location = System::Drawing::Point(90, 455);
			this->religion->Name = L"religion";
			this->religion->Size = System::Drawing::Size(40, 17);
			this->religion->TabIndex = 42;
			this->religion->Text = L"-5";
			this->religion->UseVisualStyleBackColor = true;
			this->religion->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// exp_reli
			// 
			this->exp_reli->Location = System::Drawing::Point(130, 455);
			this->exp_reli->Name = L"exp_reli";
			this->exp_reli->Size = System::Drawing::Size(40, 17);
			this->exp_reli->TabIndex = 29;
			this->exp_reli->UseVisualStyleBackColor = true;
			this->exp_reli->Click += gcnew System::EventHandler(this, &Character_Generator::setIntelligence);
			// 
			// slei
			// 
			this->slei->AutoSize = true;
			this->slei->Location = System::Drawing::Point(145, 471);
			this->slei->Name = L"slei";
			this->slei->Size = System::Drawing::Size(108, 13);
			this->slei->TabIndex = 0;
			this->slei->Text = L"Sleight of Hand (Dex)";
			// 
			// sleightofhand
			// 
			this->sleightofhand->Location = System::Drawing::Point(90, 470);
			this->sleightofhand->Name = L"sleightofhand";
			this->sleightofhand->Size = System::Drawing::Size(40, 17);
			this->sleightofhand->TabIndex = 43;
			this->sleightofhand->Text = L"-5";
			this->sleightofhand->UseVisualStyleBackColor = true;
			this->sleightofhand->Click += gcnew System::EventHandler(this, &Character_Generator::setDexterity);
			// 
			// exp_slei
			// 
			this->exp_slei->Location = System::Drawing::Point(130, 470);
			this->exp_slei->Name = L"exp_slei";
			this->exp_slei->Size = System::Drawing::Size(40, 17);
			this->exp_slei->TabIndex = 29;
			this->exp_slei->UseVisualStyleBackColor = true;
			this->exp_slei->Click += gcnew System::EventHandler(this, &Character_Generator::setDexterity);
			// 
			// stea
			// 
			this->stea->AutoSize = true;
			this->stea->Location = System::Drawing::Point(145, 486);
			this->stea->Name = L"stea";
			this->stea->Size = System::Drawing::Size(68, 13);
			this->stea->TabIndex = 0;
			this->stea->Text = L"Stealth (Dex)";
			// 
			// stealth
			// 
			this->stealth->Location = System::Drawing::Point(90, 485);
			this->stealth->Name = L"stealth";
			this->stealth->Size = System::Drawing::Size(40, 17);
			this->stealth->TabIndex = 44;
			this->stealth->Text = L"-5";
			this->stealth->UseVisualStyleBackColor = true;
			this->stealth->Click += gcnew System::EventHandler(this, &Character_Generator::setDexterity);
			// 
			// exp_stea
			// 
			this->exp_stea->Location = System::Drawing::Point(130, 485);
			this->exp_stea->Name = L"exp_stea";
			this->exp_stea->Size = System::Drawing::Size(40, 17);
			this->exp_stea->TabIndex = 29;
			this->exp_stea->UseVisualStyleBackColor = true;
			this->exp_stea->Click += gcnew System::EventHandler(this, &Character_Generator::setDexterity);
			// 
			// surv
			// 
			this->surv->AutoSize = true;
			this->surv->Location = System::Drawing::Point(145, 501);
			this->surv->Name = L"surv";
			this->surv->Size = System::Drawing::Size(72, 13);
			this->surv->TabIndex = 0;
			this->surv->Text = L"Survival (Wis)";
			// 
			// survival
			// 
			this->survival->Location = System::Drawing::Point(90, 500);
			this->survival->Name = L"survival";
			this->survival->Size = System::Drawing::Size(40, 17);
			this->survival->TabIndex = 45;
			this->survival->Text = L"-5";
			this->survival->UseVisualStyleBackColor = true;
			this->survival->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// exp_surv
			// 
			this->exp_surv->Location = System::Drawing::Point(130, 500);
			this->exp_surv->Name = L"exp_surv";
			this->exp_surv->Size = System::Drawing::Size(40, 17);
			this->exp_surv->TabIndex = 29;
			this->exp_surv->UseVisualStyleBackColor = true;
			this->exp_surv->Click += gcnew System::EventHandler(this, &Character_Generator::setWisdom);
			// 
			// Skills
			// 
			this->Skills->AutoSize = true;
			this->Skills->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Skills->Location = System::Drawing::Point(86, 223);
			this->Skills->Name = L"Skills";
			this->Skills->Size = System::Drawing::Size(41, 19);
			this->Skills->TabIndex = 0;
			this->Skills->Text = L"Skills";
			// 
			// SavingThrows
			// 
			this->SavingThrows->AutoSize = true;
			this->SavingThrows->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SavingThrows->Location = System::Drawing::Point(86, 99);
			this->SavingThrows->Name = L"SavingThrows";
			this->SavingThrows->Size = System::Drawing::Size(99, 19);
			this->SavingThrows->TabIndex = 0;
			this->SavingThrows->Text = L"Saving Throws";
			// 
			// HPML
			// 
			this->HPML->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HPML->Location = System::Drawing::Point(270, 75);
			this->HPML->Name = L"HPML";
			this->HPML->Size = System::Drawing::Size(129, 19);
			this->HPML->TabIndex = 0;
			this->HPML->Text = L"Hit Point Maximum:";
			// 
			// CHPL
			// 
			this->CHPL->AutoSize = true;
			this->CHPL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CHPL->Location = System::Drawing::Point(270, 100);
			this->CHPL->Name = L"CHPL";
			this->CHPL->Size = System::Drawing::Size(121, 19);
			this->CHPL->TabIndex = 0;
			this->CHPL->Text = L"Current Hit Points:";
			// 
			// THPL
			// 
			this->THPL->AutoSize = true;
			this->THPL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->THPL->Location = System::Drawing::Point(270, 125);
			this->THPL->Name = L"THPL";
			this->THPL->Size = System::Drawing::Size(141, 19);
			this->THPL->TabIndex = 0;
			this->THPL->Text = L"Temporary Hit Points:";
			// 
			// HPM
			// 
			this->HPM->Location = System::Drawing::Point(415, 75);
			this->HPM->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->HPM->Name = L"HPM";
			this->HPM->Size = System::Drawing::Size(50, 20);
			this->HPM->TabIndex = 46;
			// 
			// CHP
			// 
			this->CHP->Location = System::Drawing::Point(415, 100);
			this->CHP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->CHP->Name = L"CHP";
			this->CHP->Size = System::Drawing::Size(50, 20);
			this->CHP->TabIndex = 47;
			// 
			// THP
			// 
			this->THP->Location = System::Drawing::Point(415, 125);
			this->THP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->THP->Name = L"THP";
			this->THP->Size = System::Drawing::Size(50, 20);
			this->THP->TabIndex = 48;
			// 
			// MS
			// 
			this->MS->Location = System::Drawing::Point(415, 225);
			this->MS->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->MS->Name = L"MS";
			this->MS->Size = System::Drawing::Size(50, 20);
			this->MS->TabIndex = 51;
			// 
			// IM
			// 
			this->IM->Location = System::Drawing::Point(415, 200);
			this->IM->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, System::Int32::MinValue });
			this->IM->Name = L"IM";
			this->IM->Size = System::Drawing::Size(50, 20);
			this->IM->TabIndex = 50;
			// 
			// AC
			// 
			this->AC->Location = System::Drawing::Point(415, 175);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(50, 20);
			this->AC->TabIndex = 49;
			// 
			// MSL
			// 
			this->MSL->AutoSize = true;
			this->MSL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MSL->Location = System::Drawing::Point(270, 225);
			this->MSL->Name = L"MSL";
			this->MSL->Size = System::Drawing::Size(120, 19);
			this->MSL->TabIndex = 0;
			this->MSL->Text = L"Movement Speed:";
			// 
			// IML
			// 
			this->IML->AutoSize = true;
			this->IML->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IML->Location = System::Drawing::Point(270, 200);
			this->IML->Name = L"IML";
			this->IML->Size = System::Drawing::Size(118, 19);
			this->IML->TabIndex = 0;
			this->IML->Text = L"Initiative Modifier:";
			// 
			// ACL
			// 
			this->ACL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ACL->Location = System::Drawing::Point(270, 175);
			this->ACL->Name = L"ACL";
			this->ACL->Size = System::Drawing::Size(129, 19);
			this->ACL->TabIndex = 0;
			this->ACL->Text = L"Armour Class:";
			// 
			// equipmentLabel
			// 
			this->equipmentLabel->AutoSize = true;
			this->equipmentLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equipmentLabel->Location = System::Drawing::Point(271, 272);
			this->equipmentLabel->Name = L"equipmentLabel";
			this->equipmentLabel->Size = System::Drawing::Size(73, 19);
			this->equipmentLabel->TabIndex = 0;
			this->equipmentLabel->Text = L"Equipment";
			// 
			// CP
			// 
			this->CP->Location = System::Drawing::Point(302, 292);
			this->CP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->CP->Name = L"CP";
			this->CP->Size = System::Drawing::Size(72, 20);
			this->CP->TabIndex = 52;
			// 
			// copper
			// 
			this->copper->AutoSize = true;
			this->copper->Location = System::Drawing::Point(272, 294);
			this->copper->Name = L"copper";
			this->copper->Size = System::Drawing::Size(24, 13);
			this->copper->TabIndex = 0;
			this->copper->Text = L"CP:";
			// 
			// silver
			// 
			this->silver->AutoSize = true;
			this->silver->Location = System::Drawing::Point(272, 316);
			this->silver->Name = L"silver";
			this->silver->Size = System::Drawing::Size(24, 13);
			this->silver->TabIndex = 0;
			this->silver->Text = L"SP:";
			// 
			// SP
			// 
			this->SP->Location = System::Drawing::Point(302, 314);
			this->SP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->SP->Name = L"SP";
			this->SP->Size = System::Drawing::Size(72, 20);
			this->SP->TabIndex = 53;
			// 
			// electrum
			// 
			this->electrum->AutoSize = true;
			this->electrum->Location = System::Drawing::Point(272, 338);
			this->electrum->Name = L"electrum";
			this->electrum->Size = System::Drawing::Size(24, 13);
			this->electrum->TabIndex = 0;
			this->electrum->Text = L"EP:";
			// 
			// EP
			// 
			this->EP->Location = System::Drawing::Point(302, 336);
			this->EP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->EP->Name = L"EP";
			this->EP->Size = System::Drawing::Size(72, 20);
			this->EP->TabIndex = 54;
			// 
			// gold
			// 
			this->gold->AutoSize = true;
			this->gold->Location = System::Drawing::Point(272, 361);
			this->gold->Name = L"gold";
			this->gold->Size = System::Drawing::Size(25, 13);
			this->gold->TabIndex = 0;
			this->gold->Text = L"GP:";
			// 
			// GP
			// 
			this->GP->Location = System::Drawing::Point(302, 359);
			this->GP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->GP->Name = L"GP";
			this->GP->Size = System::Drawing::Size(72, 20);
			this->GP->TabIndex = 55;
			// 
			// platinum
			// 
			this->platinum->AutoSize = true;
			this->platinum->Location = System::Drawing::Point(272, 383);
			this->platinum->Name = L"platinum";
			this->platinum->Size = System::Drawing::Size(24, 13);
			this->platinum->TabIndex = 0;
			this->platinum->Text = L"PP:";
			// 
			// PP
			// 
			this->PP->Location = System::Drawing::Point(302, 381);
			this->PP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->PP->Name = L"PP";
			this->PP->Size = System::Drawing::Size(72, 20);
			this->PP->TabIndex = 58;
			// 
			// Equipment
			// 
			this->Equipment->BackColor = System::Drawing::SystemColors::MenuBar;
			this->Equipment->Location = System::Drawing::Point(380, 291);
			this->Equipment->Multiline = true;
			this->Equipment->Name = L"Equipment";
			this->Equipment->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Equipment->Size = System::Drawing::Size(275, 304);
			this->Equipment->TabIndex = 60;
			// 
			// featsLabel
			// 
			this->featsLabel->AutoSize = true;
			this->featsLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->featsLabel->Location = System::Drawing::Point(471, 75);
			this->featsLabel->Name = L"featsLabel";
			this->featsLabel->Size = System::Drawing::Size(42, 19);
			this->featsLabel->TabIndex = 0;
			this->featsLabel->Text = L"Feats";
			// 
			// feats
			// 
			this->feats->BackColor = System::Drawing::SystemColors::MenuBar;
			this->feats->Location = System::Drawing::Point(475, 100);
			this->feats->Multiline = true;
			this->feats->Name = L"feats";
			this->feats->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->feats->Size = System::Drawing::Size(180, 159);
			this->feats->TabIndex = 61;
			// 
			// ftLabel
			// 
			this->ftLabel->AutoSize = true;
			this->ftLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ftLabel->Location = System::Drawing::Point(661, 75);
			this->ftLabel->Name = L"ftLabel";
			this->ftLabel->Size = System::Drawing::Size(124, 19);
			this->ftLabel->TabIndex = 0;
			this->ftLabel->Text = L"Features and Traits";
			// 
			// background_features
			// 
			this->background_features->BackColor = System::Drawing::SystemColors::Menu;
			this->background_features->Location = System::Drawing::Point(662, 100);
			this->background_features->Name = L"background_features";
			this->background_features->Size = System::Drawing::Size(175, 20);
			this->background_features->TabIndex = 0;
			// 
			// spellsKnown
			// 
			this->spellsKnown->BackColor = System::Drawing::SystemColors::MenuBar;
			this->spellsKnown->Location = System::Drawing::Point(1070, 95);
			this->spellsKnown->Multiline = true;
			this->spellsKnown->Name = L"spellsKnown";
			this->spellsKnown->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->spellsKnown->Size = System::Drawing::Size(175, 500);
			this->spellsKnown->TabIndex = 82;
			// 
			// spellsKnownLabel
			// 
			this->spellsKnownLabel->AutoSize = true;
			this->spellsKnownLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spellsKnownLabel->Location = System::Drawing::Point(1065, 75);
			this->spellsKnownLabel->Name = L"spellsKnownLabel";
			this->spellsKnownLabel->Size = System::Drawing::Size(94, 19);
			this->spellsKnownLabel->TabIndex = 0;
			this->spellsKnownLabel->Text = L"Spells Known";
			// 
			// saveLabel
			// 
			this->saveLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveLabel->Location = System::Drawing::Point(855, 75);
			this->saveLabel->Name = L"saveLabel";
			this->saveLabel->Size = System::Drawing::Size(111, 19);
			this->saveLabel->TabIndex = 0;
			this->saveLabel->Text = L"Spell Save DC:";
			// 
			// attackLabel
			// 
			this->attackLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attackLabel->Location = System::Drawing::Point(855, 96);
			this->attackLabel->Name = L"attackLabel";
			this->attackLabel->Size = System::Drawing::Size(149, 19);
			this->attackLabel->TabIndex = 0;
			this->attackLabel->Text = L"Spell Attack Modifier:";
			// 
			// spellDC
			// 
			this->spellDC->Location = System::Drawing::Point(1010, 75);
			this->spellDC->Name = L"spellDC";
			this->spellDC->Size = System::Drawing::Size(35, 20);
			this->spellDC->TabIndex = 62;
			// 
			// spellAM
			// 
			this->spellAM->Location = System::Drawing::Point(1010, 95);
			this->spellAM->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, System::Int32::MinValue });
			this->spellAM->Name = L"spellAM";
			this->spellAM->Size = System::Drawing::Size(35, 20);
			this->spellAM->TabIndex = 63;
			// 
			// slotLevel
			// 
			this->slotLevel->AutoSize = true;
			this->slotLevel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->slotLevel->Location = System::Drawing::Point(855, 145);
			this->slotLevel->Name = L"slotLevel";
			this->slotLevel->Size = System::Drawing::Size(104, 19);
			this->slotLevel->TabIndex = 0;
			this->slotLevel->Text = L"Spell Slot Level";
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total->Location = System::Drawing::Point(965, 145);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(39, 19);
			this->total->TabIndex = 0;
			this->total->Text = L"Total";
			// 
			// used
			// 
			this->used->AutoSize = true;
			this->used->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->used->Location = System::Drawing::Point(1005, 145);
			this->used->Name = L"used";
			this->used->Size = System::Drawing::Size(41, 19);
			this->used->TabIndex = 0;
			this->used->Text = L"Used";
			// 
			// l1
			// 
			this->l1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l1->Location = System::Drawing::Point(855, 170);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(55, 20);
			this->l1->TabIndex = 0;
			this->l1->Text = L"Level 1";
			// 
			// l1t
			// 
			this->l1t->Location = System::Drawing::Point(970, 170);
			this->l1t->Name = L"l1t";
			this->l1t->Size = System::Drawing::Size(35, 20);
			this->l1t->TabIndex = 64;
			// 
			// l1u
			// 
			this->l1u->Location = System::Drawing::Point(1010, 170);
			this->l1u->Name = L"l1u";
			this->l1u->Size = System::Drawing::Size(35, 20);
			this->l1u->TabIndex = 65;
			// 
			// l2u
			// 
			this->l2u->Location = System::Drawing::Point(1010, 195);
			this->l2u->Name = L"l2u";
			this->l2u->Size = System::Drawing::Size(35, 20);
			this->l2u->TabIndex = 67;
			// 
			// l2t
			// 
			this->l2t->Location = System::Drawing::Point(970, 195);
			this->l2t->Name = L"l2t";
			this->l2t->Size = System::Drawing::Size(35, 20);
			this->l2t->TabIndex = 66;
			// 
			// l2
			// 
			this->l2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l2->Location = System::Drawing::Point(855, 195);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(55, 20);
			this->l2->TabIndex = 0;
			this->l2->Text = L"Level 2";
			// 
			// l3u
			// 
			this->l3u->Location = System::Drawing::Point(1010, 220);
			this->l3u->Name = L"l3u";
			this->l3u->Size = System::Drawing::Size(35, 20);
			this->l3u->TabIndex = 69;
			// 
			// l3t
			// 
			this->l3t->Location = System::Drawing::Point(970, 220);
			this->l3t->Name = L"l3t";
			this->l3t->Size = System::Drawing::Size(35, 20);
			this->l3t->TabIndex = 68;
			// 
			// l3
			// 
			this->l3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l3->Location = System::Drawing::Point(855, 220);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(55, 20);
			this->l3->TabIndex = 0;
			this->l3->Text = L"Level 3";
			// 
			// l4u
			// 
			this->l4u->Location = System::Drawing::Point(1010, 245);
			this->l4u->Name = L"l4u";
			this->l4u->Size = System::Drawing::Size(35, 20);
			this->l4u->TabIndex = 71;
			// 
			// l4t
			// 
			this->l4t->Location = System::Drawing::Point(970, 245);
			this->l4t->Name = L"l4t";
			this->l4t->Size = System::Drawing::Size(35, 20);
			this->l4t->TabIndex = 70;
			// 
			// l4
			// 
			this->l4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l4->Location = System::Drawing::Point(855, 245);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(55, 20);
			this->l4->TabIndex = 143;
			this->l4->Text = L"Level 4";
			// 
			// l5u
			// 
			this->l5u->Location = System::Drawing::Point(1011, 270);
			this->l5u->Name = L"l5u";
			this->l5u->Size = System::Drawing::Size(35, 20);
			this->l5u->TabIndex = 73;
			// 
			// l5t
			// 
			this->l5t->Location = System::Drawing::Point(970, 270);
			this->l5t->Name = L"l5t";
			this->l5t->Size = System::Drawing::Size(35, 20);
			this->l5t->TabIndex = 72;
			// 
			// l5
			// 
			this->l5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l5->Location = System::Drawing::Point(855, 270);
			this->l5->Name = L"l5";
			this->l5->Size = System::Drawing::Size(55, 20);
			this->l5->TabIndex = 0;
			this->l5->Text = L"Level 5";
			// 
			// l6u
			// 
			this->l6u->Location = System::Drawing::Point(1010, 295);
			this->l6u->Name = L"l6u";
			this->l6u->Size = System::Drawing::Size(35, 20);
			this->l6u->TabIndex = 75;
			// 
			// l6t
			// 
			this->l6t->Location = System::Drawing::Point(970, 295);
			this->l6t->Name = L"l6t";
			this->l6t->Size = System::Drawing::Size(35, 20);
			this->l6t->TabIndex = 74;
			// 
			// l6
			// 
			this->l6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l6->Location = System::Drawing::Point(855, 295);
			this->l6->Name = L"l6";
			this->l6->Size = System::Drawing::Size(55, 20);
			this->l6->TabIndex = 0;
			this->l6->Text = L"Level 6";
			// 
			// l7u
			// 
			this->l7u->Location = System::Drawing::Point(1010, 320);
			this->l7u->Name = L"l7u";
			this->l7u->Size = System::Drawing::Size(35, 20);
			this->l7u->TabIndex = 77;
			// 
			// l7t
			// 
			this->l7t->Location = System::Drawing::Point(970, 320);
			this->l7t->Name = L"l7t";
			this->l7t->Size = System::Drawing::Size(35, 20);
			this->l7t->TabIndex = 76;
			// 
			// l7
			// 
			this->l7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l7->Location = System::Drawing::Point(855, 320);
			this->l7->Name = L"l7";
			this->l7->Size = System::Drawing::Size(55, 20);
			this->l7->TabIndex = 0;
			this->l7->Text = L"Level 7";
			// 
			// l8u
			// 
			this->l8u->Location = System::Drawing::Point(1010, 345);
			this->l8u->Name = L"l8u";
			this->l8u->Size = System::Drawing::Size(35, 20);
			this->l8u->TabIndex = 79;
			// 
			// l8t
			// 
			this->l8t->Location = System::Drawing::Point(970, 345);
			this->l8t->Name = L"l8t";
			this->l8t->Size = System::Drawing::Size(35, 20);
			this->l8t->TabIndex = 78;
			// 
			// l8
			// 
			this->l8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l8->Location = System::Drawing::Point(855, 345);
			this->l8->Name = L"l8";
			this->l8->Size = System::Drawing::Size(55, 20);
			this->l8->TabIndex = 0;
			this->l8->Text = L"Level 8";
			// 
			// l9u
			// 
			this->l9u->Location = System::Drawing::Point(1010, 370);
			this->l9u->Name = L"l9u";
			this->l9u->Size = System::Drawing::Size(35, 20);
			this->l9u->TabIndex = 81;
			// 
			// l9t
			// 
			this->l9t->Location = System::Drawing::Point(970, 370);
			this->l9t->Name = L"l9t";
			this->l9t->Size = System::Drawing::Size(35, 20);
			this->l9t->TabIndex = 80;
			// 
			// l9
			// 
			this->l9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l9->Location = System::Drawing::Point(855, 370);
			this->l9->Name = L"l9";
			this->l9->Size = System::Drawing::Size(55, 20);
			this->l9->TabIndex = 0;
			this->l9->Text = L"Level 9";
			// 
			// d4l
			// 
			this->d4l->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d4l->Location = System::Drawing::Point(855, 400);
			this->d4l->Name = L"d4l";
			this->d4l->Size = System::Drawing::Size(55, 20);
			this->d4l->TabIndex = 0;
			this->d4l->Text = L"d4";
			// 
			// d4r
			// 
			this->d4r->Location = System::Drawing::Point(910, 397);
			this->d4r->Name = L"d4r";
			this->d4r->Size = System::Drawing::Size(75, 23);
			this->d4r->TabIndex = 83;
			this->d4r->Text = L"Roll";
			this->d4r->UseVisualStyleBackColor = true;
			this->d4r->Click += gcnew System::EventHandler(this, &Character_Generator::rolld4);
			// 
			// d4result
			// 
			this->d4result->BackColor = System::Drawing::SystemColors::Window;
			this->d4result->Location = System::Drawing::Point(1006, 398);
			this->d4result->Name = L"d4result";
			this->d4result->Size = System::Drawing::Size(38, 22);
			this->d4result->TabIndex = 0;
			// 
			// d6result
			// 
			this->d6result->BackColor = System::Drawing::SystemColors::Window;
			this->d6result->Location = System::Drawing::Point(1006, 422);
			this->d6result->Name = L"d6result";
			this->d6result->Size = System::Drawing::Size(38, 22);
			this->d6result->TabIndex = 0;
			// 
			// d6r
			// 
			this->d6r->Location = System::Drawing::Point(910, 421);
			this->d6r->Name = L"d6r";
			this->d6r->Size = System::Drawing::Size(75, 23);
			this->d6r->TabIndex = 84;
			this->d6r->Text = L"Roll";
			this->d6r->UseVisualStyleBackColor = true;
			this->d6r->Click += gcnew System::EventHandler(this, &Character_Generator::rolld6);
			// 
			// d6l
			// 
			this->d6l->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d6l->Location = System::Drawing::Point(855, 424);
			this->d6l->Name = L"d6l";
			this->d6l->Size = System::Drawing::Size(55, 20);
			this->d6l->TabIndex = 0;
			this->d6l->Text = L"d6";
			// 
			// d8result
			// 
			this->d8result->BackColor = System::Drawing::SystemColors::Window;
			this->d8result->Location = System::Drawing::Point(1006, 446);
			this->d8result->Name = L"d8result";
			this->d8result->Size = System::Drawing::Size(38, 22);
			this->d8result->TabIndex = 0;
			// 
			// d8r
			// 
			this->d8r->Location = System::Drawing::Point(910, 445);
			this->d8r->Name = L"d8r";
			this->d8r->Size = System::Drawing::Size(75, 23);
			this->d8r->TabIndex = 85;
			this->d8r->Text = L"Roll";
			this->d8r->UseVisualStyleBackColor = true;
			this->d8r->Click += gcnew System::EventHandler(this, &Character_Generator::rolld8);
			// 
			// d8l
			// 
			this->d8l->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d8l->Location = System::Drawing::Point(855, 448);
			this->d8l->Name = L"d8l";
			this->d8l->Size = System::Drawing::Size(55, 20);
			this->d8l->TabIndex = 0;
			this->d8l->Text = L"d8";
			// 
			// d10result
			// 
			this->d10result->BackColor = System::Drawing::SystemColors::Window;
			this->d10result->Location = System::Drawing::Point(1006, 470);
			this->d10result->Name = L"d10result";
			this->d10result->Size = System::Drawing::Size(38, 22);
			this->d10result->TabIndex = 0;
			// 
			// d10r
			// 
			this->d10r->Location = System::Drawing::Point(910, 469);
			this->d10r->Name = L"d10r";
			this->d10r->Size = System::Drawing::Size(75, 23);
			this->d10r->TabIndex = 86;
			this->d10r->Text = L"Roll";
			this->d10r->UseVisualStyleBackColor = true;
			this->d10r->Click += gcnew System::EventHandler(this, &Character_Generator::rolld10);
			// 
			// d10l
			// 
			this->d10l->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d10l->Location = System::Drawing::Point(855, 472);
			this->d10l->Name = L"d10l";
			this->d10l->Size = System::Drawing::Size(55, 20);
			this->d10l->TabIndex = 0;
			this->d10l->Text = L"d10";
			// 
			// d12result
			// 
			this->d12result->BackColor = System::Drawing::SystemColors::Window;
			this->d12result->Location = System::Drawing::Point(1006, 494);
			this->d12result->Name = L"d12result";
			this->d12result->Size = System::Drawing::Size(38, 22);
			this->d12result->TabIndex = 0;
			// 
			// d12r
			// 
			this->d12r->Location = System::Drawing::Point(910, 493);
			this->d12r->Name = L"d12r";
			this->d12r->Size = System::Drawing::Size(75, 23);
			this->d12r->TabIndex = 87;
			this->d12r->Text = L"Roll";
			this->d12r->UseVisualStyleBackColor = true;
			this->d12r->Click += gcnew System::EventHandler(this, &Character_Generator::rolld12);
			// 
			// d12l
			// 
			this->d12l->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d12l->Location = System::Drawing::Point(855, 496);
			this->d12l->Name = L"d12l";
			this->d12l->Size = System::Drawing::Size(55, 20);
			this->d12l->TabIndex = 0;
			this->d12l->Text = L"d12";
			// 
			// d20result
			// 
			this->d20result->BackColor = System::Drawing::SystemColors::Window;
			this->d20result->Location = System::Drawing::Point(1006, 518);
			this->d20result->Name = L"d20result";
			this->d20result->Size = System::Drawing::Size(38, 22);
			this->d20result->TabIndex = 0;
			// 
			// d20r
			// 
			this->d20r->Location = System::Drawing::Point(910, 517);
			this->d20r->Name = L"d20r";
			this->d20r->Size = System::Drawing::Size(75, 23);
			this->d20r->TabIndex = 88;
			this->d20r->Text = L"Roll";
			this->d20r->UseVisualStyleBackColor = true;
			this->d20r->Click += gcnew System::EventHandler(this, &Character_Generator::rolld20);
			// 
			// d20l
			// 
			this->d20l->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d20l->Location = System::Drawing::Point(855, 520);
			this->d20l->Name = L"d20l";
			this->d20l->Size = System::Drawing::Size(55, 20);
			this->d20l->TabIndex = 0;
			this->d20l->Text = L"d20";
			// 
			// d100result
			// 
			this->d100result->BackColor = System::Drawing::SystemColors::Window;
			this->d100result->Location = System::Drawing::Point(1006, 542);
			this->d100result->Name = L"d100result";
			this->d100result->Size = System::Drawing::Size(38, 22);
			this->d100result->TabIndex = 0;
			// 
			// d100r
			// 
			this->d100r->Location = System::Drawing::Point(910, 541);
			this->d100r->Name = L"d100r";
			this->d100r->Size = System::Drawing::Size(75, 23);
			this->d100r->TabIndex = 89;
			this->d100r->Text = L"Roll";
			this->d100r->UseVisualStyleBackColor = true;
			this->d100r->Click += gcnew System::EventHandler(this, &Character_Generator::rolld100);
			// 
			// d100l
			// 
			this->d100l->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->d100l->Location = System::Drawing::Point(855, 544);
			this->d100l->Name = L"d100l";
			this->d100l->Size = System::Drawing::Size(55, 20);
			this->d100l->TabIndex = 0;
			this->d100l->Text = L"d100";
			// 
			// dxresult
			// 
			this->dxresult->BackColor = System::Drawing::SystemColors::Window;
			this->dxresult->Location = System::Drawing::Point(1006, 566);
			this->dxresult->Name = L"dxresult";
			this->dxresult->Size = System::Drawing::Size(38, 22);
			this->dxresult->TabIndex = 0;
			// 
			// dxr
			// 
			this->dxr->Location = System::Drawing::Point(910, 565);
			this->dxr->Name = L"dxr";
			this->dxr->Size = System::Drawing::Size(75, 23);
			this->dxr->TabIndex = 91;
			this->dxr->Text = L"Roll";
			this->dxr->UseVisualStyleBackColor = true;
			this->dxr->Click += gcnew System::EventHandler(this, &Character_Generator::rolldx);
			// 
			// dxl
			// 
			this->dxl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dxl->Location = System::Drawing::Point(855, 568);
			this->dxl->Name = L"dxl";
			this->dxl->Size = System::Drawing::Size(55, 20);
			this->dxl->TabIndex = 0;
			this->dxl->Text = L"d";
			// 
			// diex
			// 
			this->diex->Location = System::Drawing::Point(866, 567);
			this->diex->Name = L"diex";
			this->diex->Size = System::Drawing::Size(44, 20);
			this->diex->TabIndex = 90;
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"dice set.jpg";
			this->pictureBox1->Location = System::Drawing::Point(254, 403);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(120, 120);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// athl
			// 
			this->athl->AutoSize = true;
			this->athl->Location = System::Drawing::Point(145, 291);
			this->athl->Name = L"athl";
			this->athl->Size = System::Drawing::Size(69, 13);
			this->athl->TabIndex = 0;
			this->athl->Text = L"Athletics (Str)";
			// 
			// athletics
			// 
			this->athletics->Location = System::Drawing::Point(90, 290);
			this->athletics->Name = L"athletics";
			this->athletics->Size = System::Drawing::Size(40, 17);
			this->athletics->TabIndex = 31;
			this->athletics->Text = L"-5";
			this->athletics->UseVisualStyleBackColor = true;
			this->athletics->Click += gcnew System::EventHandler(this, &Character_Generator::setStrength);
			// 
			// exp_athl
			// 
			this->exp_athl->Location = System::Drawing::Point(130, 290);
			this->exp_athl->Name = L"exp_athl";
			this->exp_athl->Size = System::Drawing::Size(40, 16);
			this->exp_athl->TabIndex = 29;
			this->exp_athl->UseVisualStyleBackColor = true;
			this->exp_athl->Click += gcnew System::EventHandler(this, &Character_Generator::setStrength);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"sword.jpg";
			this->pictureBox2->Location = System::Drawing::Point(89, 520);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(285, 80);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// race_features
			// 
			this->race_features->BackColor = System::Drawing::SystemColors::Menu;
			this->race_features->Location = System::Drawing::Point(660, 445);
			this->race_features->Name = L"race_features";
			this->race_features->Size = System::Drawing::Size(175, 150);
			this->race_features->TabIndex = 0;
			// 
			// class_features
			// 
			this->class_features->BackColor = System::Drawing::SystemColors::Menu;
			this->class_features->Location = System::Drawing::Point(662, 125);
			this->class_features->Name = L"class_features";
			this->class_features->Size = System::Drawing::Size(175, 315);
			this->class_features->TabIndex = 0;
			// 
			// Character_Generator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->ClientSize = System::Drawing::Size(1250, 600);
			this->Controls->Add(this->class_features);
			this->Controls->Add(this->race_features);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->surv);
			this->Controls->Add(this->survival);
			this->Controls->Add(this->exp_surv);
			this->Controls->Add(this->stea);
			this->Controls->Add(this->stealth);
			this->Controls->Add(this->exp_stea);
			this->Controls->Add(this->slei);
			this->Controls->Add(this->sleightofhand);
			this->Controls->Add(this->exp_slei);
			this->Controls->Add(this->reli);
			this->Controls->Add(this->religion);
			this->Controls->Add(this->exp_reli);
			this->Controls->Add(this->pers);
			this->Controls->Add(this->persuasion);
			this->Controls->Add(this->exp_pers);
			this->Controls->Add(this->perf);
			this->Controls->Add(this->performance);
			this->Controls->Add(this->exp_perf);
			this->Controls->Add(this->perc);
			this->Controls->Add(this->perception);
			this->Controls->Add(this->exp_perc);
			this->Controls->Add(this->natu);
			this->Controls->Add(this->nature);
			this->Controls->Add(this->exp_natu);
			this->Controls->Add(this->medi);
			this->Controls->Add(this->medicine);
			this->Controls->Add(this->exp_medi);
			this->Controls->Add(this->inve);
			this->Controls->Add(this->investigation);
			this->Controls->Add(this->exp_inve);
			this->Controls->Add(this->inti);
			this->Controls->Add(this->intimidation);
			this->Controls->Add(this->exp_inti);
			this->Controls->Add(this->insi);
			this->Controls->Add(this->insight);
			this->Controls->Add(this->exp_insi);
			this->Controls->Add(this->hist);
			this->Controls->Add(this->history);
			this->Controls->Add(this->exp_hist);
			this->Controls->Add(this->athl);
			this->Controls->Add(this->dece);
			this->Controls->Add(this->exp_athl);
			this->Controls->Add(this->exp_dece);
			this->Controls->Add(this->deception);
			this->Controls->Add(this->athletics);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->diex);
			this->Controls->Add(this->dxresult);
			this->Controls->Add(this->dxr);
			this->Controls->Add(this->dxl);
			this->Controls->Add(this->d100result);
			this->Controls->Add(this->d100r);
			this->Controls->Add(this->d100l);
			this->Controls->Add(this->d20result);
			this->Controls->Add(this->d20r);
			this->Controls->Add(this->d20l);
			this->Controls->Add(this->d12result);
			this->Controls->Add(this->d12r);
			this->Controls->Add(this->d12l);
			this->Controls->Add(this->d10result);
			this->Controls->Add(this->d10r);
			this->Controls->Add(this->d10l);
			this->Controls->Add(this->d8result);
			this->Controls->Add(this->d8r);
			this->Controls->Add(this->d8l);
			this->Controls->Add(this->d6result);
			this->Controls->Add(this->d6r);
			this->Controls->Add(this->d6l);
			this->Controls->Add(this->d4result);
			this->Controls->Add(this->d4r);
			this->Controls->Add(this->d4l);
			this->Controls->Add(this->l9u);
			this->Controls->Add(this->l9t);
			this->Controls->Add(this->l9);
			this->Controls->Add(this->l8u);
			this->Controls->Add(this->l8t);
			this->Controls->Add(this->l8);
			this->Controls->Add(this->l7u);
			this->Controls->Add(this->l7t);
			this->Controls->Add(this->l7);
			this->Controls->Add(this->l6u);
			this->Controls->Add(this->l6t);
			this->Controls->Add(this->l6);
			this->Controls->Add(this->l5u);
			this->Controls->Add(this->l5t);
			this->Controls->Add(this->l5);
			this->Controls->Add(this->l4u);
			this->Controls->Add(this->l4t);
			this->Controls->Add(this->l4);
			this->Controls->Add(this->l3u);
			this->Controls->Add(this->l3t);
			this->Controls->Add(this->l3);
			this->Controls->Add(this->l2u);
			this->Controls->Add(this->l2t);
			this->Controls->Add(this->l2);
			this->Controls->Add(this->l1u);
			this->Controls->Add(this->l1t);
			this->Controls->Add(this->l1);
			this->Controls->Add(this->used);
			this->Controls->Add(this->total);
			this->Controls->Add(this->slotLevel);
			this->Controls->Add(this->spellAM);
			this->Controls->Add(this->spellDC);
			this->Controls->Add(this->attackLabel);
			this->Controls->Add(this->saveLabel);
			this->Controls->Add(this->spellsKnownLabel);
			this->Controls->Add(this->spellsKnown);
			this->Controls->Add(this->background_features);
			this->Controls->Add(this->ftLabel);
			this->Controls->Add(this->feats);
			this->Controls->Add(this->featsLabel);
			this->Controls->Add(this->Equipment);
			this->Controls->Add(this->platinum);
			this->Controls->Add(this->PP);
			this->Controls->Add(this->gold);
			this->Controls->Add(this->GP);
			this->Controls->Add(this->electrum);
			this->Controls->Add(this->EP);
			this->Controls->Add(this->silver);
			this->Controls->Add(this->SP);
			this->Controls->Add(this->copper);
			this->Controls->Add(this->CP);
			this->Controls->Add(this->equipmentLabel);
			this->Controls->Add(this->MS);
			this->Controls->Add(this->IM);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->MSL);
			this->Controls->Add(this->IML);
			this->Controls->Add(this->ACL);
			this->Controls->Add(this->THP);
			this->Controls->Add(this->CHP);
			this->Controls->Add(this->HPM);
			this->Controls->Add(this->THPL);
			this->Controls->Add(this->CHPL);
			this->Controls->Add(this->HPML);
			this->Controls->Add(this->SavingThrows);
			this->Controls->Add(this->Skills);
			this->Controls->Add(this->arca);
			this->Controls->Add(this->arcana);
			this->Controls->Add(this->exp_arca);
			this->Controls->Add(this->anim);
			this->Controls->Add(this->exp_anim);
			this->Controls->Add(this->animalhandling);
			this->Controls->Add(this->acro);
			this->Controls->Add(this->exp_acro);
			this->Controls->Add(this->acrobatics);
			this->Controls->Add(this->ProBon);
			this->Controls->Add(this->ProficiencyBonus);
			this->Controls->Add(this->Charisma);
			this->Controls->Add(this->chaST);
			this->Controls->Add(this->Wisdom);
			this->Controls->Add(this->wisST);
			this->Controls->Add(this->Intelligence);
			this->Controls->Add(this->intST);
			this->Controls->Add(this->Constitution);
			this->Controls->Add(this->conST);
			this->Controls->Add(this->Dexterity);
			this->Controls->Add(this->dexST);
			this->Controls->Add(this->Strength);
			this->Controls->Add(this->strST);
			this->Controls->Add(this->rollButton);
			this->Controls->Add(this->chaMod);
			this->Controls->Add(this->chaLabel);
			this->Controls->Add(this->wisMod);
			this->Controls->Add(this->intMod);
			this->Controls->Add(this->wisLabel);
			this->Controls->Add(this->intLabel);
			this->Controls->Add(this->conMod);
			this->Controls->Add(this->chaScore);
			this->Controls->Add(this->wisScore);
			this->Controls->Add(this->conScore);
			this->Controls->Add(this->intScore);
			this->Controls->Add(this->conLabel);
			this->Controls->Add(this->dexMod);
			this->Controls->Add(this->dexScore);
			this->Controls->Add(this->dexLabel);
			this->Controls->Add(this->strLabel);
			this->Controls->Add(this->strMod);
			this->Controls->Add(this->strScore);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->name);
			this->Controls->Add(this->levelLabel);
			this->Controls->Add(this->level);
			this->Controls->Add(this->backgroundLabel);
			this->Controls->Add(this->backgroundSelection);
			this->Controls->Add(this->alignmentLabel);
			this->Controls->Add(this->alignmentSelection);
			this->Controls->Add(this->classLabel);
			this->Controls->Add(this->classSelection);
			this->Controls->Add(this->subclassLabel);
			this->Controls->Add(this->subclassSelection);
			this->Controls->Add(this->raceLabel);
			this->Controls->Add(this->raceSelection);
			this->Controls->Add(this->subraceLabel);
			this->Controls->Add(this->subraceSelection);
			this->Controls->Add(this->randomizeAll);
			this->Controls->Add(this->randomizeBackground);
			this->Controls->Add(this->randomizeClass);
			this->Controls->Add(this->randomizeRace);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->loadButton);
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1266, 639);
			this->MinimumSize = System::Drawing::Size(1266, 639);
			this->Name = L"Character_Generator";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Role-Playing Game Character Sheet";
			this->Load += gcnew System::EventHandler(this, &Character_Generator::Character_Generator_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->strScore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dexScore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->conScore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wisScore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intScore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chaScore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HPM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CHP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->THP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->spellDC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->spellAM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l1t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l1u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l2u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l2t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l3u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l3t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l4u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l4t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l5u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l5t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l6u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l6t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l7u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l7t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l8u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l8t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l9u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->l9t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->diex))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Convert System::String^ to std::string.
	void systostr(String^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	private: System::Void Character_Generator_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		ifstream racefile;
		racefile.open("Data/Input/RaceOptions.txt");
		if (racefile.fail()) {
			exit(1);
		}
		while (!racefile.eof()) {
			string line;
			while (getline(racefile, line)) {
				String^ Race = gcnew String(line.c_str());
				raceSelection->Items->Add(Race);
			}
			racefile.close();
		}
		ifstream classfile;
		classfile.open("Data/Input/ClassOptions.txt");
		if (classfile.fail()) {
			exit(1);
		}
		while (!classfile.eof()) {
			string line;
			while (getline(classfile, line)) {
				String^ Class = gcnew String(line.c_str());
				classSelection->Items->Add(Class);
			}
			classfile.close();
		}
		ifstream backgroundfile;
		backgroundfile.open("Data/Input/BackgroundOptions.txt");
		if (backgroundfile.fail()) {
			exit(1);
		}
		while (!backgroundfile.eof()) {
			string line;
			while (getline(backgroundfile, line)) {
				String^ Background = gcnew String(line.c_str());
				backgroundSelection->Items->Add(Background);
			}
			backgroundfile.close();
		}
		ifstream alignmentfile;
		alignmentfile.open("Data/Input/AlignmentOptions.txt");
		if (alignmentfile.fail()) {
			exit(1);
		}
		while (!alignmentfile.eof()) {
			string line;
			while (getline(alignmentfile, line)) {
				String^ Alignment = gcnew String(line.c_str());
				alignmentSelection->Items->Add(Alignment);
			}
		}
	}
	public: System::Void saveCharacter(System::Object^ sender, System::EventArgs^ e) {
		ofstream saveFile;
		String^ rawName = name->Text;
		string saveName;
		systostr(rawName, saveName);
		saveFile.open("Data/Output/" + saveName + ".txt", std::ofstream::out | std::ofstream::trunc);
		int Alignment = alignmentSelection->SelectedIndex;
		saveFile << Alignment;
		int Background = backgroundSelection->SelectedIndex;
		saveFile << "\n" << Background;
		int Class = classSelection->SelectedIndex;
		saveFile << "\n" << Class;
		int Subclass = subclassSelection->SelectedIndex;
		saveFile << "\n" << Subclass;
		int Race = raceSelection->SelectedIndex;
		saveFile << "\n" << Race;
		int Subrace = subraceSelection->SelectedIndex;
		saveFile << "\n" << Subrace;
		saveFile << "\n" << (int)level->Value;
		saveFile << "\n" << (int)strScore->Value;
		saveFile << "\n" << (int)dexScore->Value;
		saveFile << "\n" << (int)conScore->Value;
		saveFile << "\n" << (int)intScore->Value;
		saveFile << "\n" << (int)wisScore->Value;
		saveFile << "\n" << (int)chaScore->Value;
		saveFile << "\n" << (int)HPM->Value;
		saveFile << "\n" << (int)CHP->Value;
		saveFile << "\n" << (int)THP->Value;
		saveFile << "\n" << (int)AC->Value;
		saveFile << "\n" << (int)IM->Value;
		saveFile << "\n" << (int)MS->Value;
		saveFile << "\n" << (int)CP->Value;
		saveFile << "\n" << (int)SP->Value;
		saveFile << "\n" << (int)EP->Value;
		saveFile << "\n" << (int)GP->Value;
		saveFile << "\n" << (int)PP->Value;
		saveFile << "\n" << (int)l1t->Value;
		saveFile << "\n" << (int)l1u->Value;
		saveFile << "\n" << (int)l2t->Value;
		saveFile << "\n" << (int)l2u->Value;
		saveFile << "\n" << (int)l3t->Value;
		saveFile << "\n" << (int)l3u->Value;
		saveFile << "\n" << (int)l4t->Value;
		saveFile << "\n" << (int)l4u->Value;
		saveFile << "\n" << (int)l5t->Value;
		saveFile << "\n" << (int)l5u->Value;
		saveFile << "\n" << (int)l6t->Value;
		saveFile << "\n" << (int)l6u->Value;
		saveFile << "\n" << (int)l7t->Value;
		saveFile << "\n" << (int)l7u->Value;
		saveFile << "\n" << (int)l8t->Value;
		saveFile << "\n" << (int)l8u->Value;
		saveFile << "\n" << (int)l9t->Value;
		saveFile << "\n" << (int)l9u->Value;
		saveFile << "\n" << (int)spellDC->Value;
		saveFile << "\n" << (int)spellAM->Value;
		saveFile << "\n" << strST->Checked;
		saveFile << "\n" << dexST->Checked;
		saveFile << "\n" << conST->Checked;
		saveFile << "\n" << intST->Checked;
		saveFile << "\n" << wisST->Checked;
		saveFile << "\n" << chaST->Checked;
		saveFile << "\n" << acrobatics->Checked;
		saveFile << "\n" << exp_acro->Checked;
		saveFile << "\n" << animalhandling->Checked;
		saveFile << "\n" << exp_anim->Checked;
		saveFile << "\n" << arcana->Checked;
		saveFile << "\n" << exp_arca->Checked;
		saveFile << "\n" << athletics->Checked;
		saveFile << "\n" << exp_athl->Checked;
		saveFile << "\n" << deception->Checked;
		saveFile << "\n" << exp_dece->Checked;
		saveFile << "\n" << history->Checked;
		saveFile << "\n" << exp_hist->Checked;
		saveFile << "\n" << insight->Checked;
		saveFile << "\n" << exp_insi->Checked;
		saveFile << "\n" << intimidation->Checked;
		saveFile << "\n" << exp_inti->Checked;
		saveFile << "\n" << investigation->Checked;
		saveFile << "\n" << exp_inve->Checked;
		saveFile << "\n" << medicine->Checked;
		saveFile << "\n" << exp_medi->Checked;
		saveFile << "\n" << nature->Checked;
		saveFile << "\n" << exp_natu->Checked;
		saveFile << "\n" << perception->Checked;
		saveFile << "\n" << exp_perc->Checked;
		saveFile << "\n" << performance->Checked;
		saveFile << "\n" << exp_perf->Checked;
		saveFile << "\n" << persuasion->Checked;
		saveFile << "\n" << exp_pers->Checked;
		saveFile << "\n" << religion->Checked;
		saveFile << "\n" << exp_reli->Checked;
		saveFile << "\n" << sleightofhand->Checked;
		saveFile << "\n" << exp_slei->Checked;
		saveFile << "\n" << stealth->Checked;
		saveFile << "\n" << exp_stea->Checked;
		saveFile << "\n" << survival->Checked;
		saveFile << "\n" << exp_surv->Checked;
		saveFile.close();
		ofstream saveEquipment;
		saveEquipment.open("Data/Output/" + saveName + "Equipment.txt", std::ofstream::out | std::ofstream::trunc);
		String^ rawEquipment = Equipment->Text;
		string equipment;
		systostr(rawEquipment, equipment);
		saveEquipment << equipment;
		saveEquipment.close();
		ofstream saveSpells;
		saveSpells.open("Data/Output/" + saveName + "Spells.txt", std::ofstream::out | std::ofstream::trunc);
		String^ rawSpells = spellsKnown->Text;
		string spells;
		systostr(rawSpells, spells);
		saveSpells << spells;
		saveSpells.close();
		ofstream saveFeats;
		saveFeats.open("Data/Output/" + saveName + "Feats.txt", std::ofstream::out | std::ofstream::trunc);
		String^ rawFeats = feats->Text;
		string feat;
		systostr(rawFeats, feat);
		saveFeats << feat;
		saveFeats.close();
	}
	public: System::Void loadCharacter(System::Object^ send, System::EventArgs^ e) {
		ifstream savedFile;
		String^ rawImportName = name->Text;
		string savedName;
		systostr(rawImportName, savedName);
		savedFile.open("Data/Output/" + savedName + ".txt");
		if (savedFile.fail()) {
			exit(1);
		}
		while (!savedFile.eof()) {
			int line, AlignmentIndex, BackgroundIndex, ClassIndex, SubclassIndex, RaceIndex, SubraceIndex, char_level, strengthScore, dexterityScore, constitutionScore, intelligenceScore, wisdomScore, charismaScore, HitPointMaximum, CurrentHitPoints, TemporaryHitPoints, ArmourClass, InitiativeModifier, MovementSpeed, CopperPieces, SilverPieces, ElectrumPieces, GoldPieces, PlatinumPieces, l1Total, l1Used, l2Total, l2Used, l3Total, l3Used, l4Total, l4Used, l5Total, l5Used, l6Total, l6Used, l7Total, l7Used, l8Total, l8Used, l9Total, l9Used, spellsaveDC, spellAttackModifier, strengthST, dexterityST, constitutionST, intelligenceST, wisdomST, charismaST, acropro, acroexp, animpro, animexp, arcapro, arcaexp, athlpro, athlexp, decepro, deceexp, histpro, histexp, insipro, insiexp, intipro, intiexp, invepro, inveexp, medipro, mediexp, natupro, natuexp, percpro, percexp, perfpro, perfexp, perspro, persexp, relipro, reliexp, sleipro, sleiexp, steapro, steaexp, survpro, survexp;
			savedFile >> AlignmentIndex;
			savedFile >> BackgroundIndex;
			savedFile >> ClassIndex;
			savedFile >> SubclassIndex;
			savedFile >> RaceIndex;
			savedFile >> SubraceIndex;
			savedFile >> char_level;
			savedFile >> strengthScore;
			savedFile >> dexterityScore;
			savedFile >> constitutionScore;
			savedFile >> intelligenceScore;
			savedFile >> wisdomScore;
			savedFile >> charismaScore;
			savedFile >> HitPointMaximum;
			savedFile >> CurrentHitPoints;
			savedFile >> TemporaryHitPoints;
			savedFile >> ArmourClass;
			savedFile >> InitiativeModifier;
			savedFile >> MovementSpeed;
			savedFile >> CopperPieces;
			savedFile >> SilverPieces;
			savedFile >> ElectrumPieces;
			savedFile >> GoldPieces;
			savedFile >> PlatinumPieces;
			savedFile >> l1Total;
			savedFile >> l1Used;
			savedFile >> l2Total;
			savedFile >> l2Used;
			savedFile >> l3Total;
			savedFile >> l3Used;
			savedFile >> l4Total;
			savedFile >> l4Used;
			savedFile >> l5Total;
			savedFile >> l5Used;
			savedFile >> l6Total;
			savedFile >> l6Used;
			savedFile >> l7Total;
			savedFile >> l7Used;
			savedFile >> l8Total;
			savedFile >> l8Used;
			savedFile >> l9Total;
			savedFile >> l9Used;
			savedFile >> spellsaveDC;
			savedFile >> spellAttackModifier;
			savedFile >> strengthST;
			savedFile >> dexterityST;
			savedFile >> constitutionST;
			savedFile >> intelligenceST;
			savedFile >> wisdomST;
			savedFile >> charismaST;
			savedFile >> acropro;
			savedFile >> acroexp;
			savedFile >> animpro;
			savedFile >> animexp;
			savedFile >> arcapro;
			savedFile >> arcaexp;
			savedFile >> athlpro;
			savedFile >> athlexp;
			savedFile >> decepro;
			savedFile >> deceexp;
			savedFile >> histpro;
			savedFile >> histexp;
			savedFile >> insipro;
			savedFile >> insiexp;
			savedFile >> intipro;
			savedFile >> intiexp;
			savedFile >> invepro;
			savedFile >> inveexp;
			savedFile >> medipro;
			savedFile >> mediexp;
			savedFile >> natupro;
			savedFile >> natuexp;
			savedFile >> percpro;
			savedFile >> percexp;
			savedFile >> perfpro;
			savedFile >> perfexp;
			savedFile >> perspro;
			savedFile >> persexp;
			savedFile >> relipro;
			savedFile >> reliexp;
			savedFile >> sleipro;
			savedFile >> sleiexp;
			savedFile >> steapro;
			savedFile >> steaexp;
			savedFile >> survpro;
			savedFile >> survexp;

			alignmentSelection->SelectedIndex = AlignmentIndex;
			backgroundSelection->SelectedIndex = BackgroundIndex;
			classSelection->SelectedIndex = ClassIndex;
			subclassSelection->SelectedIndex = SubclassIndex;
			raceSelection->SelectedIndex = RaceIndex;
			subraceSelection->SelectedIndex = SubraceIndex;
			level->Value = char_level;
			strScore->Value = strengthScore;
			dexScore->Value = dexterityScore;
			conScore->Value = constitutionScore;
			intScore->Value = intelligenceScore;
			wisScore->Value = wisdomScore;
			chaScore->Value = charismaScore;
			HPM->Value = HitPointMaximum;
			CHP->Value = CurrentHitPoints;
			THP->Value = TemporaryHitPoints;
			AC->Value = ArmourClass;
			IM->Value = InitiativeModifier;
			MS->Value = MovementSpeed;
			CP->Value = CopperPieces;
			SP->Value = SilverPieces;
			EP->Value = ElectrumPieces;
			GP->Value = GoldPieces;
			PP->Value = PlatinumPieces;
			l1t->Value = l1Total;
			l1u->Value = l1Used;
			l2t->Value = l2Total;
			l2u->Value = l2Used;
			l3t->Value = l3Total;
			l3u->Value = l3Used;
			l4t->Value = l4Total;
			l4u->Value = l4Used;
			l5t->Value = l5Total;
			l5u->Value = l5Used;
			l6t->Value = l6Total;
			l6u->Value = l6Used;
			l7t->Value = l7Total;
			l7u->Value = l7Used;
			l8t->Value = l8Total;
			l8u->Value = l8Used;
			l9t->Value = l9Total;
			l9u->Value = l9Used;
			spellDC->Value = spellsaveDC;
			spellAM->Value = spellAttackModifier;
			strST->Checked = strengthST;
			dexST->Checked = dexterityST;
			conST->Checked = constitutionST;
			intST->Checked = intelligenceST;
			wisST->Checked = wisdomST;
			chaST->Checked = charismaST;
			acrobatics->Checked = acropro;
			exp_acro->Checked = acroexp;
			animalhandling->Checked = animpro;
			exp_acro->Checked = acroexp;
			athletics->Checked = athlpro;
			exp_athl->Checked = athlexp;
			deception->Checked = decepro;
			exp_athl->Checked = athlexp;
			history->Checked = histpro;
			exp_hist->Checked = histexp;
			insight->Checked = insipro;
			exp_insi->Checked = insipro;
			intimidation->Checked = intipro;
			exp_inti->Checked = intiexp;
			investigation->Checked = invepro;
			exp_inve->Checked = inveexp;
			medicine->Checked = medipro;
			exp_medi->Checked = mediexp;
			nature->Checked = natupro;
			exp_natu->Checked = natuexp;
			perception->Checked = percpro;
			exp_perc->Checked = percexp;
			performance->Checked = perfpro;
			exp_perf->Checked = perfexp;
			persuasion->Checked = perspro;
			exp_pers->Checked = persexp;
			religion->Checked = relipro;
			exp_reli->Checked = reliexp;
			sleightofhand->Checked = sleipro;
			exp_slei->Checked = sleiexp;
			stealth->Checked = steapro;
			exp_stea->Checked = steaexp;
			survival->Checked = survpro;
			exp_surv->Checked = survexp;
		}
		savedFile.close();
		ifstream savedEquipment;
		Equipment->Text = "";
		savedEquipment.open("Data/Output/" + savedName + "Equipment.txt");
		if (savedEquipment.fail()) {
			exit(1);
		}
		while (!savedEquipment.eof()) {
			string line;
			while (getline(savedEquipment, line)) {
				Equipment->Text += gcnew String(line.c_str()) + "\n";
			}
		}
		savedEquipment.close();
		ifstream savedSpells;
		spellsKnown->Text = "";
		savedSpells.open("Data/Output/" + savedName + "Spells.txt");
		if (savedSpells.fail()) {
			exit(1);
		}
		while (!savedSpells.eof()) {
			string line;
			while (getline(savedSpells, line)) {
				spellsKnown->Text += gcnew String(line.c_str()) + "\n";
			}
		}
		savedSpells.close();
		ifstream savedFeats;
		feats->Text = "";
		savedFeats.open("Data/Output/" + savedName + "Feats.txt");
		while (!savedFeats.eof()) {
			string line;
			while (getline(savedFeats, line)) {
				feats->Text += gcnew String(line.c_str()) + "\n";
			}
		}
	}
	public: System::Void setBackground(System::Object^ send, System::EventArgs^ e) {
		String^ rawBackground = backgroundSelection->SelectedItem->ToString();
		string Background;
		systostr(rawBackground, Background);
		ifstream backgroundFeatures;
		background_features->Text = "";
		backgroundFeatures.open("Data/Input/BackgroundInfo/" + Background + ".txt");
		if (backgroundFeatures.fail()) {
			exit(1);
		}
		while (!backgroundFeatures.eof()) {
			string line;
			while (getline(backgroundFeatures, line)) {
				String^ feature = gcnew String(line.c_str());
				background_features->Text += feature + "\n";
			}
		}
	}
	public: System::Void setClass(System::Object^ send, System::EventArgs^ e) {
		String^ rawClass = classSelection->SelectedItem->ToString();
		string Class;
		systostr(rawClass, Class);
		ifstream classFeatures;
		class_features->Text = "";
		classFeatures.open("Data/Input/ClassInfo/" + Class + "/" + Class + "Features.txt");
		if (classFeatures.fail()) {
			exit(1);
		}
		while (!classFeatures.eof()) {
			string line;
			while (getline(classFeatures, line)) {
				String^ feature = gcnew String(line.c_str());
				class_features->Text += feature + "\n";
			}
		}
		classFeatures.close();
		subclassSelection->Items->Clear();
		ifstream subclassfile;
		subclassfile.open("Data/Input/ClassInfo/" + Class + "/" + Class + "Subclasses.txt");
		if (subclassfile.fail()) {
			exit(1);
		}
		while (!subclassfile.eof()) {
			string line;
			while (getline(subclassfile, line)) {
				String^ Subclass = gcnew String(line.c_str());
				subclassSelection->Items->Add(Subclass);
			}
		}
		subclassfile.close();
	}
	public: System::Void setSubclass(System::Object^ send, System::EventArgs^ e) {
		String^ rawClass = classSelection->SelectedItem->ToString();
		string Class;
		systostr(rawClass, Class);
		ifstream classFeatures;
		class_features->Text = "";
		classFeatures.open("Data/Input/ClassInfo/" + Class + "/" + Class + "Features.txt");
		if (classFeatures.fail()) {
			exit(1);
		}
		while (!classFeatures.eof()) {
			string line;
			while (getline(classFeatures, line)) {
				String^ feature = gcnew String(line.c_str());
				class_features->Text += feature + "\n";
			}
		}
		classFeatures.close();

		String^ rawSubclass = subclassSelection->SelectedItem->ToString();
		string Subclass;
		systostr(rawSubclass, Subclass);
		ifstream subclassFeatures;
		subclassFeatures.open("Data/Input/ClassInfo/" + Class + "/" + Subclass + "Features.txt");
		if (subclassFeatures.fail()) {
			exit(1);
		}
		while (!subclassFeatures.eof()) {
			string line;
			while (getline(subclassFeatures, line)) {
				String^ feature = gcnew String(line.c_str());
				class_features->Text += feature + "\n";
			}
		}
	}
	public: System::Void setRace(System::Object^ send, System::EventArgs^ e) {
		String^ rawRace = raceSelection->SelectedItem->ToString();
		string Race;
		systostr(rawRace, Race);
		ifstream raceFeatures;
		race_features->Text = "";
		raceFeatures.open("Data/Input/RaceInfo/" + Race + "/" + Race + "Features.txt");
		if (raceFeatures.fail()) {
			exit(1);
		}
		while (!raceFeatures.eof()) {
			string line;
			while (getline(raceFeatures, line)) {
				String^ feature = gcnew String(line.c_str());
				race_features->Text += feature + "\n";
			}
		}
		raceFeatures.close();
		subraceSelection->Items->Clear();
		ifstream subracefile;
		subracefile.open("Data/Input/RaceInfo/" + Race + "/" + Race + "Subraces.txt");
		if (subracefile.fail()) {
			exit(1);
		}
		while (!subracefile.eof()) {
			string line;
			while (getline(subracefile, line)) {
				String^ Subrace = gcnew String(line.c_str());
				subraceSelection->Items->Add(Subrace);
			}
		}
		subracefile.close();
	}
	public: System::Void setSubrace(System::Object^ send, System::EventArgs^ e) {
		String^ rawRace = raceSelection->SelectedItem->ToString();
		string Race;
		systostr(rawRace, Race);
		ifstream raceFeatures;
		race_features->Text = "";
		raceFeatures.open("Data/Input/RaceInfo/" + Race + "/" + Race + "Features.txt");
		if (raceFeatures.fail()) {
			exit(1);
		}
		while (!raceFeatures.eof()) {
			string line;
			while (getline(raceFeatures, line)) {
				String^ feature = gcnew String(line.c_str());
				race_features->Text += feature + "\n";
			}
		}
		raceFeatures.close();

		String^ rawSubrace = subraceSelection->SelectedItem->ToString();
		string Subrace;
		systostr(rawSubrace, Subrace);
		ifstream subraceFeatures;
		subraceFeatures.open("Data/Input/RaceInfo/" + Race + "/" + Subrace + "Features.txt");
		if (subraceFeatures.fail()) {
			exit(1);
		}
		while (!subraceFeatures.eof()) {
			string line;
			while (getline(subraceFeatures, line)) {
				String^ feature = gcnew String(line.c_str());
				race_features->Text += feature + "\n";
			}
		}
	}
	public: System::Void setLevel(System::Object^ send, System::EventArgs^ e) {
		int lvl = (int)level->Value;
		int pro = (lvl - ((lvl - 1) % 4) + 8) / 4;
		ProBon->Text = gcnew String(to_string(pro).c_str());
		setStrength(send, e);
		setDexterity(send, e);
		setConstitution(send, e);
		setIntelligence(send, e);
		setWisdom(send, e);
		setCharisma(send, e);
	}
	public: System::Void setStrength(System::Object^ send, System::EventArgs^ e) {
		int stre = (int)strScore->Value;
		int mod = (stre - (stre % 2) - 10) / 2;
		strMod->Text = gcnew String(to_string(mod).c_str());
		if (strST->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			strST->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			strST->Text = gcnew String(to_string(mod).c_str());
		}
		if (athletics->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_athl->Checked) {
				modifier += pro;
			}
			athletics->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_athl->Checked) {
				exp_athl->Checked = false;
			}
			athletics->Text = gcnew String(to_string(mod).c_str());
		}
	}
	public: System::Void setDexterity(System::Object^ send, System::EventArgs^ e) {
		int dext = (int)dexScore->Value;
		int mod = (dext - (dext % 2) - 10) / 2;
		dexMod->Text = gcnew String(to_string(mod).c_str());
		if (dexST->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			dexST->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			dexST->Text = gcnew String(to_string(mod).c_str());
		}
		if (acrobatics->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_acro->Checked) {
				modifier += pro;
			}
			acrobatics->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_acro->Checked) {
				exp_acro->Checked = false;
			}
			acrobatics->Text = gcnew String(to_string(mod).c_str());
		}
		if (sleightofhand->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_slei->Checked) {
				modifier += pro;
			}
			sleightofhand->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_slei->Checked) {
				exp_slei->Checked = false;
			}
			sleightofhand->Text = gcnew String(to_string(mod).c_str());
		}
		if (stealth->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_stea->Checked) {
				modifier += pro;
			}
			stealth->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_stea->Checked) {
				exp_stea->Checked = false;
			}
			stealth->Text = gcnew String(to_string(mod).c_str());
		}
	}
	public: System::Void setConstitution(System::Object^ send, System::EventArgs^ e) {
		int cons = (int)conScore->Value;
		int mod = (cons - (cons % 2) - 10) / 2;
		conMod->Text = gcnew String(to_string(mod).c_str());
		if (conST->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			conST->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			conST->Text = gcnew String(to_string(mod).c_str());
		}
	}
	public: System::Void setIntelligence(System::Object^ send, System::EventArgs^ e) {
		int inte = (int)intScore->Value;
		int mod = (inte - (inte % 2) - 10) / 2;
		intMod->Text = gcnew String(to_string(mod).c_str());
		if (intST->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			intST->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			intST->Text = gcnew String(to_string(mod).c_str());
		}
		if (arcana->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_arca->Checked) {
				modifier += pro;
			}
			arcana->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_arca->Checked) {
				exp_arca->Checked = false;
			}
			arcana->Text = gcnew String(to_string(mod).c_str());
		}
		if (history->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_hist->Checked) {
				modifier += pro;
			}
			history->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_hist->Checked) {
				exp_hist->Checked = false;
			}
			history->Text = gcnew String(to_string(mod).c_str());
		}
		if (investigation->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_inve->Checked) {
				modifier += pro;
			}
			investigation->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_inve->Checked) {
				exp_inve->Checked = false;
			}
			investigation->Text = gcnew String(to_string(mod).c_str());
		}
		if (nature->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_natu->Checked) {
				modifier += pro;
			}
			nature->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_natu->Checked) {
				exp_natu->Checked = false;
			}
			nature->Text = gcnew String(to_string(mod).c_str());
		}
		if (religion->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_reli->Checked) {
				modifier += pro;
			}
			religion->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_reli->Checked) {
				exp_reli->Checked = false;
			}
			religion->Text = gcnew String(to_string(mod).c_str());
		}
	}
	public: System::Void setWisdom(System::Object^ send, System::EventArgs^ e) {
		int wisd = (int)wisScore->Value;
		int mod = (wisd - (wisd % 2) - 10) / 2;
		wisMod->Text = gcnew String(to_string(mod).c_str());
		if (wisST->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			wisST->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			wisST->Text = gcnew String(to_string(mod).c_str());
		}
		if (animalhandling->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_anim->Checked) {
				modifier += pro;
			}
			animalhandling->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_anim->Checked) {
				exp_anim->Checked = false;
			}
			animalhandling->Text = gcnew String(to_string(mod).c_str());
		}
		if (insight->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_insi->Checked) {
				modifier += pro;
			}
			insight->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_insi->Checked) {
				exp_insi->Checked = false;
			}
			insight->Text = gcnew String(to_string(mod).c_str());
		}
		if (medicine->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_medi->Checked) {
				modifier += pro;
			}
			medicine->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_medi->Checked) {
				exp_medi->Checked = false;
			}
			medicine->Text = gcnew String(to_string(mod).c_str());
		}
		if (perception->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_perc->Checked) {
				modifier += pro;
			}
			perception->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_perc->Checked) {
				exp_perc->Checked = false;
			}
			perception->Text = gcnew String(to_string(mod).c_str());
		}
		if (survival->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_surv->Checked) {
				modifier += pro;
			}
			survival->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_surv->Checked) {
				exp_surv->Checked = false;
			}
			survival->Text = gcnew String(to_string(mod).c_str());
		}
	}
	public: System::Void setCharisma(System::Object^ send, System::EventArgs^ e) {
		int cha = (int)chaScore->Value;
		int mod = (cha - (cha % 2) - 10) / 2;
		chaMod->Text = gcnew String(to_string(mod).c_str());
		if (chaST->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			chaST->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			chaST->Text = gcnew String(to_string(mod).c_str());
		}
		if (deception->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_dece->Checked) {
				modifier += pro;
			}
			deception->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_dece->Checked) {
				exp_dece->Checked = false;
			}
			deception->Text = gcnew String(to_string(mod).c_str());
		}
		if (intimidation->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_inti->Checked) {
				modifier += pro;
			}
			intimidation->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_inti->Checked) {
				exp_inti->Checked = false;
			}
			intimidation->Text = gcnew String(to_string(mod).c_str());
		}
		if (performance->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_perf->Checked) {
				modifier += pro;
			}
			performance->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_perf->Checked) {
				exp_perf->Checked = false;
			}
			performance->Text = gcnew String(to_string(mod).c_str());
		}
		if (persuasion->Checked) {
			string proString;
			systostr(ProBon->Text, proString);
			int pro = stoi(proString);
			int modifier = mod + pro;
			if (exp_pers->Checked) {
				modifier += pro;
			}
			persuasion->Text = gcnew String(to_string(modifier).c_str());
		}
		else {
			if (exp_pers->Checked) {
				exp_pers->Checked = false;
			}
			persuasion->Text = gcnew String(to_string(mod).c_str());
		}
	}
	public: System::Void genAbilityScores(System::Object^ send, System::EventArgs^ e) {
		strScore->Value = genScore();
		dexScore->Value = genScore();
		conScore->Value = genScore();
		intScore->Value = genScore();
		wisScore->Value = genScore();
		chaScore->Value = genScore();
	}
	public: int genScore() {
		int rolls[4];
		for (int i = 0; i < 4; i++) {
			rolls[i] = random(1, 6);
		}
		int smallestNumInd = 0;
		for (int i = 1; i < 4; i++) {
			if (rolls[i] < rolls[smallestNumInd])
				smallestNumInd = i;
		}
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			if (i != smallestNumInd)
				sum += rolls[i];
		}
		return sum;
	}
	public: System::Void randomAll(System::Object^ send, System::EventArgs^ e) {
		randomBackground(send, e);
		randomClass(send, e);
		randomRace(send, e);
		int length = (alignmentSelection->Items->Count) - 1;
		int index = random(0, length);
		alignmentSelection->SelectedIndex = index;
	}
	public: System::Void randomBackground(System::Object^ send, System::EventArgs^ e) {
		int length = (backgroundSelection->Items->Count) - 1;
		int index = random(0, length);
		backgroundSelection->SelectedIndex = index;
	}
	public: System::Void randomClass(System::Object^ send, System::EventArgs^ e) {
		int length = (classSelection->Items->Count) - 1;
		int index = random(0, length);
		classSelection->SelectedIndex = index;
		int slength = (subclassSelection->Items->Count) - 1;
		int sindex = random(0, slength);
		subclassSelection->SelectedIndex = sindex;
	}
	public: System::Void randomRace(System::Object^ send, System::EventArgs^ e) {
		int length = (raceSelection->Items->Count) - 1;
		int index = random(0, length);
		raceSelection->SelectedIndex = index;
		int slength = (subraceSelection->Items->Count) - 1;
		int sindex = random(0, slength);
		subraceSelection->SelectedIndex = sindex;
	}
	public: void rolld4(System::Object^ send, System::EventArgs^ e) {
		int result = random(1, 4);
		d4result->Text = gcnew String(to_string(result).c_str());
	}
	public: void rolld6(System::Object^ send, System::EventArgs^ e) {
		int result = random(1, 6);
		d6result->Text = gcnew String(to_string(result).c_str());
	}
	public: void rolld8(System::Object^ send, System::EventArgs^ e) {
		int result = random(1, 8);
		d8result->Text = gcnew String(to_string(result).c_str());
	}
	public: void rolld10(System::Object^ send, System::EventArgs^ e) {
		int result = random(1, 10);
		d10result->Text = gcnew String(to_string(result).c_str());
	}
	public: void rolld12(System::Object^ send, System::EventArgs^ e) {
		int result = random(1, 12);
		d12result->Text = gcnew String(to_string(result).c_str());
	}
	public: void rolld20(System::Object^ send, System::EventArgs^ e) {
		int result = random(1, 20);
		d20result->Text = gcnew String(to_string(result).c_str());
	}
	public: void rolld100(System::Object^ send, System::EventArgs^ e) {
		int result = random(1, 100);
		d100result->Text = gcnew String(to_string(result).c_str());
	}
	public: void rolldx(System::Object^ send, System::EventArgs^ e) {
		int x = (int)diex->Value;
		int result = random(1, x);
		dxresult->Text = gcnew String(to_string(result).c_str());
	}
	public: int random(int min, int max) {
		if (max == 0) {
			return 0;
		}
		else if (max == -1) {
			return -1;
		}
		else {
			return (rand() % (max - min + 1) + min);
		}
	}
};
}