// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210930.14

#pragma once
#ifndef WINRT_Windows_Phone_System_Profile_0_H
#define WINRT_Windows_Phone_System_Profile_0_H
WINRT_EXPORT namespace winrt::Windows::Phone::System::Profile
{
    struct IRetailModeStatics;
    struct RetailMode;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Phone::System::Profile::IRetailModeStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Phone::System::Profile::RetailMode>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::System::Profile::RetailMode> = L"Windows.Phone.System.Profile.RetailMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::System::Profile::IRetailModeStatics> = L"Windows.Phone.System.Profile.IRetailModeStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Phone::System::Profile::IRetailModeStatics>{ 0xD7DED029,0xFDDA,0x43E7,{ 0x93,0xFB,0xE5,0x3A,0xB6,0xE8,0x9E,0xC3 } }; // D7DED029-FDDA-43E7-93FB-E53AB6E89EC3
    template <> struct abi<winrt::Windows::Phone::System::Profile::IRetailModeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RetailModeEnabled(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Phone_System_Profile_IRetailModeStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RetailModeEnabled() const;
    };
    template <> struct consume<winrt::Windows::Phone::System::Profile::IRetailModeStatics>
    {
        template <typename D> using type = consume_Windows_Phone_System_Profile_IRetailModeStatics<D>;
    };
}
#endif
