#pragma once
#include "NotificationBase.h"

class CNotificationKodi : public CNotificationBase {
public:
	CNotificationKodi();
	~CNotificationKodi() override = default;
	bool IsConfigured() override;
	std::string	 GetIconFile(const std::string &ExtraData);
protected:
  bool SendMessageImplementation(const uint64_t Idx, const std::string &Name, const std::string &Subject, const std::string &Text, const std::string &ExtraData, const int Priority,
				 const std::string &Sound, const bool bFromNotification) override;

private:
	std::string _IPAddress;
	int			_Port;
	int			_TTL;
		
	std::string	 GetCustomIcon(std::string &szCustom);

};
