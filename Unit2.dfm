object DataModule2: TDataModule2
  OldCreateOrder = False
  Height = 546
  Width = 571
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Password="";Persist Security Info=True;User I' +
      'D=root;Extended Properties="DSN=Lisovyk;SERVER=127.0.0.1;UID=roo' +
      't;DATABASE=lab;PORT=3306";Initial Catalog=lab'
    LoginPrompt = False
    Left = 48
    Top = 16
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From laboratoria')
    Left = 72
    Top = 136
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 72
    Top = 72
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 152
    Top = 72
  end
  object ADOQuery2: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    OnFilterRecord = ADOQuery2FilterRecord
    Parameters = <
      item
        Name = 'k'
        DataType = ftWideString
        Size = 1
        Value = '0'
      end>
    SQL.Strings = (
      
        'SELECT a.ID_probi, b.Naz_Gost, a.Nom_GOST, c.Raz_frakcii,a.Sdal,' +
        'a.Data_registrasii'
      'FROM registret_prob a,naz_gost b ,raz_frakcii c'
      
        'where a.ID_Naz_GOST = b.ID_Naz_GOST and a.ID_Raz_frakcii = c.ID_' +
        'Raz_frakcii'
      'ORDER BY a.ID_probi Desc Limit :k')
    Left = 152
    Top = 136
  end
  object ADOQuery3: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From  naz_gost')
    Left = 216
    Top = 128
  end
  object ADOQuery4: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From raz_frakcii')
    Left = 304
    Top = 128
  end
  object ADOQuery5: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From otdel')
    Left = 384
    Top = 136
  end
  object ADOQuery6: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From rasev')
    Left = 64
    Top = 208
  end
  object ADOQuery7: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From rasev_sit')
    Left = 136
    Top = 208
  end
  object ADOQuery8: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From rasev')
    Left = 216
    Top = 208
  end
  object ADOQuery9: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From rasev_sit')
    Left = 296
    Top = 208
  end
  object ADOQuery10: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From moroz')
    Left = 48
    Top = 288
  end
  object ADOQuery11: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From prochnost')
    Left = 152
    Top = 288
  end
  object ADOQuery12: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From sod_met_cha')
    Left = 256
    Top = 288
  end
  object ADOQuery13: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From stiraemost')
    Left = 336
    Top = 288
  end
  object ADOQuery14: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From soderjanie_slab_shastit')
    Left = 432
    Top = 288
  end
  object ADOQuery15: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From soderjanie_polividnih_and_glinistih')
    Left = 48
    Top = 360
  end
  object ADOQuery16: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From activ')
    Left = 152
    Top = 360
  end
  object ADOQuery17: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From forma_zerna')
    Left = 232
    Top = 360
  end
  object ADOQuery18: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From usoihevost')
    Left = 352
    Top = 360
  end
  object ADOQuery19: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'Select * From'#9'laboranty')
    Left = 96
    Top = 456
  end
end
