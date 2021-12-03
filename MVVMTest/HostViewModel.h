#pragma once
#include "HostViewModel.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.


namespace winrt::MVVMTest::implementation
{
    struct HostViewModel : HostViewModelT<HostViewModel>
    {
        HostViewModel() = default;

        int32_t Str();
        void Str(int32_t const& value);
        int32_t End();
        void End(int32_t const& value);
        winrt::event_token PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;
    private:
        int32_t _Str = 25;
        winrt::event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}
namespace winrt::MVVMTest::factory_implementation
{
    struct HostViewModel : HostViewModelT<HostViewModel, implementation::HostViewModel>
    {
    };
}
