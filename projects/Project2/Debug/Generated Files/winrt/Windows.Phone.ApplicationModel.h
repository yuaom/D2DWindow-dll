// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210930.14

#pragma once
#ifndef WINRT_Windows_Phone_ApplicationModel_H
#define WINRT_Windows_Phone_ApplicationModel_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210930.14"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210930.14"
#include "winrt/impl/Windows.Phone.ApplicationModel.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Phone::ApplicationModel::ApplicationProfileModes) consume_Windows_Phone_ApplicationModel_IApplicationProfileStatics<D>::Modes() const
    {
        winrt::Windows::Phone::ApplicationModel::ApplicationProfileModes value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics)->get_Modes(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics> : produce_base<D, winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics>
    {
        int32_t __stdcall get_Modes(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Phone::ApplicationModel::ApplicationProfileModes>(this->shim().Modes());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Phone::ApplicationModel
{
    constexpr auto operator|(ApplicationProfileModes const left, ApplicationProfileModes const right) noexcept
    {
        return static_cast<ApplicationProfileModes>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(ApplicationProfileModes& left, ApplicationProfileModes const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(ApplicationProfileModes const left, ApplicationProfileModes const right) noexcept
    {
        return static_cast<ApplicationProfileModes>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(ApplicationProfileModes& left, ApplicationProfileModes const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(ApplicationProfileModes const value) noexcept
    {
        return static_cast<ApplicationProfileModes>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(ApplicationProfileModes const left, ApplicationProfileModes const right) noexcept
    {
        return static_cast<ApplicationProfileModes>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(ApplicationProfileModes& left, ApplicationProfileModes const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto ApplicationProfile::Modes()
    {
        return impl::call_factory_cast<winrt::Windows::Phone::ApplicationModel::ApplicationProfileModes(*)(IApplicationProfileStatics const&), ApplicationProfile, IApplicationProfileStatics>([](IApplicationProfileStatics const& f) { return f.Modes(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::ApplicationModel::ApplicationProfile> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
