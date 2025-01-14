class IClientNetworkingSocketsSerialized
{
public:
    virtual unknown_ret SendP2PRendezvous(CSteamID, unsigned int, void const*, unsigned int) = 0;
    virtual unknown_ret SendP2PConnectionFailureLegacy(CSteamID, unsigned int, unsigned int, char const*) = 0;
    virtual unknown_ret GetCertAsync() = 0;
    virtual unknown_ret CacheRelayTicket(void const*, unsigned int) = 0;
    virtual unknown_ret GetCachedRelayTicketCount() = 0;
    virtual unknown_ret GetCachedRelayTicket(unsigned int, void*, unsigned int) = 0;
    virtual unknown_ret PostConnectionStateMsg(void const*, unsigned int) = 0;
    virtual unknown_ret GetSTUNServer(int, char*, unsigned int) = 0;
    virtual unknown_ret AllowDirectConnectToPeerString(char const*) = 0;
    virtual unknown_ret BeginAsyncRequestFakeIP(int) = 0;
    virtual unknown_ret AllowDirectConnectToPeer(SteamNetworkingIdentity const&) = 0;
    virtual unknown_ret SetAllowShareIPUserSetting(EAllowShareIPUserSetting) = 0;
    virtual unknown_ret GetAllowShareIPUserSetting() = 0;
    virtual unknown_ret TEST_ClearInMemoryCachedCredentials() = 0;
};
