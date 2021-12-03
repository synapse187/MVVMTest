#include "pch.h"
#include "HostViewModel.h"
#include "HostViewModel.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.


namespace winrt::MVVMTest::implementation
{
    int32_t HostViewModel::Str()
    {
        return _Str;
    }
    void HostViewModel::Str(int32_t const& value)
    {
        _Str = value;
        m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"Str" });
    }
    int32_t HostViewModel::End()
    {
        throw hresult_not_implemented();
    }
    void HostViewModel::End(int32_t const& value)
    {
        throw hresult_not_implemented();
    }
    winrt::event_token HostViewModel::PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
        return m_propertyChanged.add(handler);
    }
    void HostViewModel::PropertyChanged(winrt::event_token const& token) noexcept
    {
        m_propertyChanged.remove(token);;
    }
}
