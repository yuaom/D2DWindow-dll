// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210930.14

#pragma once
#ifndef WINRT_Windows_Phone_UI_Input_H
#define WINRT_Windows_Phone_UI_Input_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210930.14"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210930.14"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Phone.UI.Input.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Phone_UI_Input_IBackPressedEventArgs<D>::Handled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IBackPressedEventArgs)->get_Handled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_UI_Input_IBackPressedEventArgs<D>::Handled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IBackPressedEventArgs)->put_Handled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Phone_UI_Input_IHardwareButtonsStatics<D>::BackPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::BackPressedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics)->add_BackPressed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Phone_UI_Input_IHardwareButtonsStatics<D>::BackPressed_revoker consume_Windows_Phone_UI_Input_IHardwareButtonsStatics<D>::BackPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::BackPressedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, BackPressed_revoker>(this, BackPressed(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_UI_Input_IHardwareButtonsStatics<D>::BackPressed(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics)->remove_BackPressed(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraHalfPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2)->add_CameraHalfPressed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraHalfPressed_revoker consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraHalfPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CameraHalfPressed_revoker>(this, CameraHalfPressed(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraHalfPressed(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2)->remove_CameraHalfPressed(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2)->add_CameraPressed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraPressed_revoker consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CameraPressed_revoker>(this, CameraPressed(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraPressed(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2)->remove_CameraPressed(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraReleased(winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2)->add_CameraReleased(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraReleased_revoker consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraReleased(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CameraReleased_revoker>(this, CameraReleased(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraReleased(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2)->remove_CameraReleased(impl::bind_in(token));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::UI::Input::IBackPressedEventArgs> : produce_base<D, winrt::Windows::Phone::UI::Input::IBackPressedEventArgs>
    {
        int32_t __stdcall get_Handled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Handled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::UI::Input::ICameraEventArgs> : produce_base<D, winrt::Windows::Phone::UI::Input::ICameraEventArgs>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics> : produce_base<D, winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics>
    {
        int32_t __stdcall add_BackPressed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BackPressed(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::BackPressedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BackPressed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackPressed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2> : produce_base<D, winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2>
    {
        int32_t __stdcall add_CameraHalfPressed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CameraHalfPressed(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CameraHalfPressed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraHalfPressed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CameraPressed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CameraPressed(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CameraPressed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraPressed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CameraReleased(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CameraReleased(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CameraReleased(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraReleased(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Phone::UI::Input
{
    inline auto HardwareButtons::BackPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::BackPressedEventArgs> const& handler)
    {
        return impl::call_factory<HardwareButtons, IHardwareButtonsStatics>([&](IHardwareButtonsStatics const& f) { return f.BackPressed(handler); });
    }
    inline HardwareButtons::BackPressed_revoker HardwareButtons::BackPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::BackPressedEventArgs> const& handler)
    {
        auto f = get_activation_factory<HardwareButtons, winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics>();
        return { f, f.BackPressed(handler) };
    }
    inline auto HardwareButtons::BackPressed(winrt::event_token const& token)
    {
        impl::call_factory<HardwareButtons, IHardwareButtonsStatics>([&](IHardwareButtonsStatics const& f) { return f.BackPressed(token); });
    }
    inline auto HardwareButtons::CameraHalfPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler)
    {
        return impl::call_factory<HardwareButtons, IHardwareButtonsStatics2>([&](IHardwareButtonsStatics2 const& f) { return f.CameraHalfPressed(handler); });
    }
    inline HardwareButtons::CameraHalfPressed_revoker HardwareButtons::CameraHalfPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler)
    {
        auto f = get_activation_factory<HardwareButtons, winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2>();
        return { f, f.CameraHalfPressed(handler) };
    }
    inline auto HardwareButtons::CameraHalfPressed(winrt::event_token const& token)
    {
        impl::call_factory<HardwareButtons, IHardwareButtonsStatics2>([&](IHardwareButtonsStatics2 const& f) { return f.CameraHalfPressed(token); });
    }
    inline auto HardwareButtons::CameraPressed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler)
    {
        return impl::call_factory<HardwareButtons, IHardwareButtonsStatics2>([&](IHardwareButtonsStatics2 const& f) { return f.CameraPressed(handler); });
    }
    inline HardwareButtons::CameraPressed_revoker HardwareButtons::CameraPressed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler)
    {
        auto f = get_activation_factory<HardwareButtons, winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2>();
        return { f, f.CameraPressed(handler) };
    }
    inline auto HardwareButtons::CameraPressed(winrt::event_token const& token)
    {
        impl::call_factory<HardwareButtons, IHardwareButtonsStatics2>([&](IHardwareButtonsStatics2 const& f) { return f.CameraPressed(token); });
    }
    inline auto HardwareButtons::CameraReleased(winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler)
    {
        return impl::call_factory<HardwareButtons, IHardwareButtonsStatics2>([&](IHardwareButtonsStatics2 const& f) { return f.CameraReleased(handler); });
    }
    inline HardwareButtons::CameraReleased_revoker HardwareButtons::CameraReleased(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Phone::UI::Input::CameraEventArgs> const& handler)
    {
        auto f = get_activation_factory<HardwareButtons, winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2>();
        return { f, f.CameraReleased(handler) };
    }
    inline auto HardwareButtons::CameraReleased(winrt::event_token const& token)
    {
        impl::call_factory<HardwareButtons, IHardwareButtonsStatics2>([&](IHardwareButtonsStatics2 const& f) { return f.CameraReleased(token); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Phone::UI::Input::IBackPressedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Input::ICameraEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Input::BackPressedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Input::CameraEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::UI::Input::HardwareButtons> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
