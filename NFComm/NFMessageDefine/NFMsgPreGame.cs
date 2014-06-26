//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: NFMsgPreGame.proto
// Note: requires additional types generated from: NFDefine.proto
// Note: requires additional types generated from: NFMsgBase.proto
namespace NFMsg
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ServerInfoReport")]
  public partial class ServerInfoReport : global::ProtoBuf.IExtensible
  {
    public ServerInfoReport() {}
    
    private int _server_id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"server_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int server_id
    {
      get { return _server_id; }
      set { _server_id = value; }
    }
    private byte[] _server_name;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"server_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] server_name
    {
      get { return _server_name; }
      set { _server_name = value; }
    }
    private byte[] _server_ip;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"server_ip", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] server_ip
    {
      get { return _server_ip; }
      set { _server_ip = value; }
    }
    private int _server_port;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"server_port", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int server_port
    {
      get { return _server_port; }
      set { _server_port = value; }
    }
    private int _server_max_online;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"server_max_online", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int server_max_online
    {
      get { return _server_max_online; }
      set { _server_max_online = value; }
    }
    private int _server_cur_count;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"server_cur_count", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int server_cur_count
    {
      get { return _server_cur_count; }
      set { _server_cur_count = value; }
    }
    private NFMsg.EServerState _server_state;
    [global::ProtoBuf.ProtoMember(7, IsRequired = true, Name=@"server_state", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public NFMsg.EServerState server_state
    {
      get { return _server_state; }
      set { _server_state = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ServerInfoReportList")]
  public partial class ServerInfoReportList : global::ProtoBuf.IExtensible
  {
    public ServerInfoReportList() {}
    
    private readonly global::System.Collections.Generic.List<NFMsg.ServerInfoReport> _server_list = new global::System.Collections.Generic.List<NFMsg.ServerInfoReport>();
    [global::ProtoBuf.ProtoMember(1, Name=@"server_list", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<NFMsg.ServerInfoReport> server_list
    {
      get { return _server_list; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"AckEventResult")]
  public partial class AckEventResult : global::ProtoBuf.IExtensible
  {
    public AckEventResult() {}
    
    private NFMsg.EGameEventCode _event_code;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"event_code", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public NFMsg.EGameEventCode event_code
    {
      get { return _event_code; }
      set { _event_code = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqAccountLogin")]
  public partial class ReqAccountLogin : global::ProtoBuf.IExtensible
  {
    public ReqAccountLogin() {}
    
    private byte[] _account;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"account", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] account
    {
      get { return _account; }
      set { _account = value; }
    }
    private byte[] _password;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"password", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] password
    {
      get { return _password; }
      set { _password = value; }
    }
    private byte[] _security_code;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"security_code", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] security_code
    {
      get { return _security_code; }
      set { _security_code = value; }
    }
    private byte[] _signBuff;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"signBuff", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] signBuff
    {
      get { return _signBuff; }
      set { _signBuff = value; }
    }
    private int _clientVersion;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"clientVersion", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int clientVersion
    {
      get { return _clientVersion; }
      set { _clientVersion = value; }
    }
    private int _loginMode;
    [global::ProtoBuf.ProtoMember(7, IsRequired = true, Name=@"loginMode", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int loginMode
    {
      get { return _loginMode; }
      set { _loginMode = value; }
    }
    private int _clientIP;
    [global::ProtoBuf.ProtoMember(8, IsRequired = true, Name=@"clientIP", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int clientIP
    {
      get { return _clientIP; }
      set { _clientIP = value; }
    }
    private long _clientMAC;
    [global::ProtoBuf.ProtoMember(9, IsRequired = true, Name=@"clientMAC", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public long clientMAC
    {
      get { return _clientMAC; }
      set { _clientMAC = value; }
    }
    private byte[] _device_info;
    [global::ProtoBuf.ProtoMember(10, IsRequired = true, Name=@"device_info", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] device_info
    {
      get { return _device_info; }
      set { _device_info = value; }
    }
    private byte[] _extra_info;
    [global::ProtoBuf.ProtoMember(11, IsRequired = true, Name=@"extra_info", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] extra_info
    {
      get { return _extra_info; }
      set { _extra_info = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqAccountLogout")]
  public partial class ReqAccountLogout : global::ProtoBuf.IExtensible
  {
    public ReqAccountLogout() {}
    
    private byte[] _account;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"account", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] account
    {
      get { return _account; }
      set { _account = value; }
    }
    private byte[] _extra_info;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"extra_info", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] extra_info
    {
      get { return _extra_info; }
      set { _extra_info = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ServerInfo")]
  public partial class ServerInfo : global::ProtoBuf.IExtensible
  {
    public ServerInfo() {}
    
    private int _server_id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"server_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int server_id
    {
      get { return _server_id; }
      set { _server_id = value; }
    }
    private byte[] _name;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] name
    {
      get { return _name; }
      set { _name = value; }
    }
    private int _wait_count;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"wait_count", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int wait_count
    {
      get { return _wait_count; }
      set { _wait_count = value; }
    }
    private NFMsg.EServerState _status;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"status", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public NFMsg.EServerState status
    {
      get { return _status; }
      set { _status = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqServerList")]
  public partial class ReqServerList : global::ProtoBuf.IExtensible
  {
    public ReqServerList() {}
    
    private NFMsg.ReqServerListType _type;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public NFMsg.ReqServerListType type
    {
      get { return _type; }
      set { _type = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"AckServerList")]
  public partial class AckServerList : global::ProtoBuf.IExtensible
  {
    public AckServerList() {}
    
    private NFMsg.ReqServerListType _type;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public NFMsg.ReqServerListType type
    {
      get { return _type; }
      set { _type = value; }
    }
    private readonly global::System.Collections.Generic.List<NFMsg.ServerInfo> _info = new global::System.Collections.Generic.List<NFMsg.ServerInfo>();
    [global::ProtoBuf.ProtoMember(2, Name=@"info", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<NFMsg.ServerInfo> info
    {
      get { return _info; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqConnectWorld")]
  public partial class ReqConnectWorld : global::ProtoBuf.IExtensible
  {
    public ReqConnectWorld() {}
    
    private int _world_id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"world_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int world_id
    {
      get { return _world_id; }
      set { _world_id = value; }
    }
    private byte[] _account = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"account", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public byte[] account
    {
      get { return _account; }
      set { _account = value; }
    }
    private int _sender_ip = default(int);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"sender_ip", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int sender_ip
    {
      get { return _sender_ip; }
      set { _sender_ip = value; }
    }
    private int _login_id = default(int);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"login_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int login_id
    {
      get { return _login_id; }
      set { _login_id = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"AckConnectWorldResult")]
  public partial class AckConnectWorldResult : global::ProtoBuf.IExtensible
  {
    public AckConnectWorldResult() {}
    
    private int _world_id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"world_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int world_id
    {
      get { return _world_id; }
      set { _world_id = value; }
    }
    private int _sender_ip;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"sender_ip", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int sender_ip
    {
      get { return _sender_ip; }
      set { _sender_ip = value; }
    }
    private int _login_id;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"login_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int login_id
    {
      get { return _login_id; }
      set { _login_id = value; }
    }
    private byte[] _account;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"account", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] account
    {
      get { return _account; }
      set { _account = value; }
    }
    private byte[] _world_ip;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"world_ip", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] world_ip
    {
      get { return _world_ip; }
      set { _world_ip = value; }
    }
    private int _world_port;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"world_port", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int world_port
    {
      get { return _world_port; }
      set { _world_port = value; }
    }
    private byte[] _world_key;
    [global::ProtoBuf.ProtoMember(7, IsRequired = true, Name=@"world_key", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] world_key
    {
      get { return _world_key; }
      set { _world_key = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqSelectServer")]
  public partial class ReqSelectServer : global::ProtoBuf.IExtensible
  {
    public ReqSelectServer() {}
    
    private int _world_id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"world_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int world_id
    {
      get { return _world_id; }
      set { _world_id = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqKickFromWorld")]
  public partial class ReqKickFromWorld : global::ProtoBuf.IExtensible
  {
    public ReqKickFromWorld() {}
    
    private int _world_id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"world_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int world_id
    {
      get { return _world_id; }
      set { _world_id = value; }
    }
    private byte[] _account;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"account", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] account
    {
      get { return _account; }
      set { _account = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqRoleList")]
  public partial class ReqRoleList : global::ProtoBuf.IExtensible
  {
    public ReqRoleList() {}
    
    private int _game_id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"game_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int game_id
    {
      get { return _game_id; }
      set { _game_id = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"RoleLiteInfo")]
  public partial class RoleLiteInfo : global::ProtoBuf.IExtensible
  {
    public RoleLiteInfo() {}
    
    private int _char_id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"char_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int char_id
    {
      get { return _char_id; }
      set { _char_id = value; }
    }
    private int _career;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"career", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int career
    {
      get { return _career; }
      set { _career = value; }
    }
    private int _sex;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"sex", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int sex
    {
      get { return _sex; }
      set { _sex = value; }
    }
    private int _race;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"race", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int race
    {
      get { return _race; }
      set { _race = value; }
    }
    private byte[] _noob_name;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"noob_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] noob_name
    {
      get { return _noob_name; }
      set { _noob_name = value; }
    }
    private int _game_id;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"game_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int game_id
    {
      get { return _game_id; }
      set { _game_id = value; }
    }
    private int _char_level;
    [global::ProtoBuf.ProtoMember(7, IsRequired = true, Name=@"char_level", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int char_level
    {
      get { return _char_level; }
      set { _char_level = value; }
    }
    private int _char_exp;
    [global::ProtoBuf.ProtoMember(8, IsRequired = true, Name=@"char_exp", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int char_exp
    {
      get { return _char_exp; }
      set { _char_exp = value; }
    }
    private int _money;
    [global::ProtoBuf.ProtoMember(9, IsRequired = true, Name=@"money", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int money
    {
      get { return _money; }
      set { _money = value; }
    }
    private int _cash;
    [global::ProtoBuf.ProtoMember(10, IsRequired = true, Name=@"cash", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int cash
    {
      get { return _cash; }
      set { _cash = value; }
    }
    private int _vip_level;
    [global::ProtoBuf.ProtoMember(11, IsRequired = true, Name=@"vip_level", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int vip_level
    {
      get { return _vip_level; }
      set { _vip_level = value; }
    }
    private int _delete_time;
    [global::ProtoBuf.ProtoMember(12, IsRequired = true, Name=@"delete_time", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int delete_time
    {
      get { return _delete_time; }
      set { _delete_time = value; }
    }
    private int _reg_time;
    [global::ProtoBuf.ProtoMember(13, IsRequired = true, Name=@"reg_time", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int reg_time
    {
      get { return _reg_time; }
      set { _reg_time = value; }
    }
    private int _last_offline_time;
    [global::ProtoBuf.ProtoMember(15, IsRequired = true, Name=@"last_offline_time", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int last_offline_time
    {
      get { return _last_offline_time; }
      set { _last_offline_time = value; }
    }
    private int _last_offline_ip;
    [global::ProtoBuf.ProtoMember(16, IsRequired = true, Name=@"last_offline_ip", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int last_offline_ip
    {
      get { return _last_offline_ip; }
      set { _last_offline_ip = value; }
    }
    private byte[] _view_record;
    [global::ProtoBuf.ProtoMember(17, IsRequired = true, Name=@"view_record", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] view_record
    {
      get { return _view_record; }
      set { _view_record = value; }
    }
    private byte[] _pet_record;
    [global::ProtoBuf.ProtoMember(18, IsRequired = true, Name=@"pet_record", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] pet_record
    {
      get { return _pet_record; }
      set { _pet_record = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"AckRoleLiteInfoList")]
  public partial class AckRoleLiteInfoList : global::ProtoBuf.IExtensible
  {
    public AckRoleLiteInfoList() {}
    
    private readonly global::System.Collections.Generic.List<NFMsg.RoleLiteInfo> _char_data = new global::System.Collections.Generic.List<NFMsg.RoleLiteInfo>();
    [global::ProtoBuf.ProtoMember(1, Name=@"char_data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<NFMsg.RoleLiteInfo> char_data
    {
      get { return _char_data; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqCreateRole")]
  public partial class ReqCreateRole : global::ProtoBuf.IExtensible
  {
    public ReqCreateRole() {}
    
    private int _career;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"career", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int career
    {
      get { return _career; }
      set { _career = value; }
    }
    private int _sex;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"sex", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int sex
    {
      get { return _sex; }
      set { _sex = value; }
    }
    private int _race;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"race", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int race
    {
      get { return _race; }
      set { _race = value; }
    }
    private int _noob_head;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"noob_head", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int noob_head
    {
      get { return _noob_head; }
      set { _noob_head = value; }
    }
    private int _noob_body;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"noob_body", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int noob_body
    {
      get { return _noob_body; }
      set { _noob_body = value; }
    }
    private int _noob_foot;
    [global::ProtoBuf.ProtoMember(6, IsRequired = true, Name=@"noob_foot", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int noob_foot
    {
      get { return _noob_foot; }
      set { _noob_foot = value; }
    }
    private int _noob_weapon;
    [global::ProtoBuf.ProtoMember(7, IsRequired = true, Name=@"noob_weapon", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int noob_weapon
    {
      get { return _noob_weapon; }
      set { _noob_weapon = value; }
    }
    private int _noob_pic;
    [global::ProtoBuf.ProtoMember(8, IsRequired = true, Name=@"noob_pic", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int noob_pic
    {
      get { return _noob_pic; }
      set { _noob_pic = value; }
    }
    private byte[] _noob_name;
    [global::ProtoBuf.ProtoMember(9, IsRequired = true, Name=@"noob_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] noob_name
    {
      get { return _noob_name; }
      set { _noob_name = value; }
    }
    private int _game_id;
    [global::ProtoBuf.ProtoMember(10, IsRequired = true, Name=@"game_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int game_id
    {
      get { return _game_id; }
      set { _game_id = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqDeleteRole")]
  public partial class ReqDeleteRole : global::ProtoBuf.IExtensible
  {
    public ReqDeleteRole() {}
    
    private byte[] _name;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] name
    {
      get { return _name; }
      set { _name = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ReqRecoverRole")]
  public partial class ReqRecoverRole : global::ProtoBuf.IExtensible
  {
    public ReqRecoverRole() {}
    
    private byte[] _name;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] name
    {
      get { return _name; }
      set { _name = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
    [global::ProtoBuf.ProtoContract(Name=@"EServerState")]
    public enum EServerState
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"EST_CRASH", Value=0)]
      EST_CRASH = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"EST_NARMAL", Value=1)]
      EST_NARMAL = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"EST_BUSY", Value=2)]
      EST_BUSY = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"EST_FIRE", Value=3)]
      EST_FIRE = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"EST_MAINTEN", Value=4)]
      EST_MAINTEN = 4
    }
  
    [global::ProtoBuf.ProtoContract(Name=@"ReqServerListType")]
    public enum ReqServerListType
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"RSLT_WORLD_SERVER", Value=0)]
      RSLT_WORLD_SERVER = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"RSLT_GAMES_ERVER", Value=1)]
      RSLT_GAMES_ERVER = 1
    }
  
}