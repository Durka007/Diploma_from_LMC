object Form4: TForm4
  Left = 0
  Top = 0
  Caption = #1055#1088#1086#1073#1099
  ClientHeight = 349
  ClientWidth = 1028
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label6: TLabel
    Left = 8
    Top = 8
    Width = 90
    Height = 19
    Caption = #1042#1080#1076' '#1087#1088#1086#1073#1099
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 155
    Width = 521
    Height = 173
    DataSource = DataModule2.DataSource2
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnCellClick = DBGrid1CellClick
    Columns = <
      item
        Expanded = False
        FieldName = 'ID_probi'
        Title.Caption = #8470' '#1087#1088#1086#1073#1099
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Naz_Gost'
        Title.Caption = #1053#1072#1079'. '#1043#1054#1057#1058
        Width = 70
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Nom_GOST'
        Title.Caption = #8470' '#1043#1054#1057#1058#1072
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Raz_frakcii'
        Title.Caption = #1056#1072#1079#1088#1103#1076' '#1092#1088#1072#1082#1094#1080#1080
        Width = 90
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Sdal'
        Title.Caption = #1057#1076#1072#1083
        Width = 90
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Data_registrasii'
        Title.Caption = #1044#1072#1090#1072' '#1088#1077#1075#1080#1089#1090#1088#1072#1094#1080#1080
        Width = 100
        Visible = True
      end>
  end
  object Button2: TButton
    Left = 8
    Top = 124
    Width = 521
    Height = 25
    Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100
    Enabled = False
    TabOrder = 1
    OnClick = Button2Click
  end
  object Panel1: TPanel
    Left = 551
    Top = 124
    Width = 466
    Height = 204
    TabOrder = 2
    Visible = False
    object Label1: TLabel
      Left = 10
      Top = 57
      Width = 138
      Height = 19
      Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1043#1054#1057#1058#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 10
      Top = 113
      Width = 140
      Height = 19
      Caption = #1056#1072#1079#1084#1077#1088' '#1092#1088#1072#1082#1094#1080#1080
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 10
      Top = 138
      Width = 48
      Height = 23
      Caption = #1057#1076#1072#1083
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 10
      Top = 167
      Width = 176
      Height = 23
      Caption = #1044#1072#1090#1072' '#1088#1077#1075#1080#1089#1090#1088#1072#1094#1080#1080
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label5: TLabel
      Left = 10
      Top = 88
      Width = 78
      Height = 19
      Caption = #8470' '#1043#1054#1057#1058#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object ComboBox3: TComboBox
      Left = 192
      Top = 59
      Width = 265
      Height = 21
      TabOrder = 0
      OnChange = ComboBox3Change
      OnKeyDown = ComboBox3KeyDown
      OnKeyPress = ComboBox3KeyPress
    end
    object ComboBox4: TComboBox
      Left = 192
      Top = 113
      Width = 265
      Height = 21
      TabOrder = 1
      OnKeyDown = ComboBox4KeyDown
      OnKeyPress = ComboBox4KeyPress
    end
    object Edit1: TEdit
      Left = 192
      Top = 140
      Width = 265
      Height = 21
      TabOrder = 2
    end
    object DateTimePicker1: TDateTimePicker
      Left = 192
      Top = 167
      Width = 265
      Height = 21
      Date = 43152.549150636570000000
      Time = 43152.549150636570000000
      TabOrder = 3
    end
    object Edit2: TEdit
      Left = 192
      Top = 86
      Width = 265
      Height = 21
      Enabled = False
      TabOrder = 4
      OnKeyDown = Edit2KeyDown
      OnKeyPress = Edit2KeyPress
    end
    object Button5: TButton
      Left = 360
      Top = 16
      Width = 98
      Height = 25
      Caption = #1054#1095#1080#1089#1090#1080#1090#1100
      TabOrder = 5
      OnClick = Button5Click
    end
  end
  object Button3: TButton
    Left = 8
    Top = 93
    Width = 241
    Height = 25
    Caption = #1050' '#1072#1085#1072#1083#1080#1080#1079#1074#1072#1084
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 288
    Top = 93
    Width = 241
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 4
    OnClick = Button4Click
  end
  object ComboBox1: TComboBox
    Left = 8
    Top = 33
    Width = 305
    Height = 21
    Style = csDropDownList
    TabOrder = 5
    OnChange = ComboBox1Change
  end
  object Timer1: TTimer
    Interval = 1
    OnTimer = Timer1Timer
    Left = 984
    Top = 32
  end
end
