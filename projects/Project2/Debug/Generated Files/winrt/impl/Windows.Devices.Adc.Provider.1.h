// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210930.14

#pragma once
#ifndef WINRT_Windows_Devices_Adc_Provider_1_H
#define WINRT_Windows_Devices_Adc_Provider_1_H
#include "winrt/impl/Windows.Devices.Adc.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Adc::Provider
{
    struct __declspec(empty_bases) IAdcControllerProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAdcControllerProvider>
    {
        IAdcControllerProvider(std::nullptr_t = nullptr) noexcept {}
        IAdcControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdcProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAdcProvider>
    {
        IAdcProvider(std::nullptr_t = nullptr) noexcept {}
        IAdcProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
