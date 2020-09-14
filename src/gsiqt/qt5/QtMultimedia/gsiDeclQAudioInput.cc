
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQAudioInput.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioInput>
#include <QAudioDeviceInfo>
#include <QAudioFormat>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioInput

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioInput::staticMetaObject);
}


// int QAudioInput::bufferSize()


static void _init_f_bufferSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bufferSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioInput *)cls)->bufferSize ());
}


// int QAudioInput::bytesReady()


static void _init_f_bytesReady_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_bytesReady_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioInput *)cls)->bytesReady ());
}


// qint64 QAudioInput::elapsedUSecs()


static void _init_f_elapsedUSecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_elapsedUSecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QAudioInput *)cls)->elapsedUSecs ());
}


// QAudio::Error QAudioInput::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudio::Error>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudio::Error>::target_type > ((qt_gsi::Converter<QAudio::Error>::target_type)qt_gsi::CppToQtAdaptor<QAudio::Error>(((QAudioInput *)cls)->error ()));
}


// QAudioFormat QAudioInput::format()


static void _init_f_format_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAudioFormat > ();
}

static void _call_f_format_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioFormat > ((QAudioFormat)((QAudioInput *)cls)->format ());
}


// void QAudioInput::notify()


static void _init_f_notify_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_notify_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->notify ();
}


// int QAudioInput::notifyInterval()


static void _init_f_notifyInterval_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_notifyInterval_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioInput *)cls)->notifyInterval ());
}


// int QAudioInput::periodSize()


static void _init_f_periodSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_periodSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioInput *)cls)->periodSize ());
}


// qint64 QAudioInput::processedUSecs()


static void _init_f_processedUSecs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_processedUSecs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QAudioInput *)cls)->processedUSecs ());
}


// void QAudioInput::reset()


static void _init_f_reset_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reset_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->reset ();
}


// void QAudioInput::resume()


static void _init_f_resume_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_resume_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->resume ();
}


// void QAudioInput::setBufferSize(int bytes)


static void _init_f_setBufferSize_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bytes");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBufferSize_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->setBufferSize (arg1);
}


// void QAudioInput::setNotifyInterval(int milliSeconds)


static void _init_f_setNotifyInterval_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("milliSeconds");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNotifyInterval_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->setNotifyInterval (arg1);
}


// void QAudioInput::setVolume(double volume)


static void _init_f_setVolume_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("volume");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVolume_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->setVolume (arg1);
}


// void QAudioInput::start(QIODevice *device)


static void _init_f_start_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_start_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->start (arg1);
}


// QIODevice *QAudioInput::start()


static void _init_f_start_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QIODevice * > ();
}

static void _call_f_start_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIODevice * > ((QIODevice *)((QAudioInput *)cls)->start ());
}


// QAudio::State QAudioInput::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAudio::State>::target_type > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAudio::State>::target_type > ((qt_gsi::Converter<QAudio::State>::target_type)qt_gsi::CppToQtAdaptor<QAudio::State>(((QAudioInput *)cls)->state ()));
}


// void QAudioInput::stateChanged(QAudio::State)


static void _init_f_stateChanged_1644 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QAudio::State>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_stateChanged_1644 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAudio::State>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAudio::State>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->stateChanged (qt_gsi::QtToCppAdaptor<QAudio::State>(arg1).cref());
}


// void QAudioInput::stop()


static void _init_f_stop_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_stop_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->stop ();
}


// void QAudioInput::suspend()


static void _init_f_suspend_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_suspend_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->suspend ();
}


// double QAudioInput::volume()


static void _init_f_volume_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_volume_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QAudioInput *)cls)->volume ());
}


// static QString QAudioInput::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QAudioInput::tr (arg1, arg2, arg3));
}


// static QString QAudioInput::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QAudioInput::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioInput () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":bufferSize", "@brief Method int QAudioInput::bufferSize()\n", true, &_init_f_bufferSize_c0, &_call_f_bufferSize_c0);
  methods += new qt_gsi::GenericMethod ("bytesReady", "@brief Method int QAudioInput::bytesReady()\n", true, &_init_f_bytesReady_c0, &_call_f_bytesReady_c0);
  methods += new qt_gsi::GenericMethod ("elapsedUSecs", "@brief Method qint64 QAudioInput::elapsedUSecs()\n", true, &_init_f_elapsedUSecs_c0, &_call_f_elapsedUSecs_c0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QAudio::Error QAudioInput::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("format", "@brief Method QAudioFormat QAudioInput::format()\n", true, &_init_f_format_c0, &_call_f_format_c0);
  methods += new qt_gsi::GenericMethod ("notify", "@brief Method void QAudioInput::notify()\n", false, &_init_f_notify_0, &_call_f_notify_0);
  methods += new qt_gsi::GenericMethod (":notifyInterval", "@brief Method int QAudioInput::notifyInterval()\n", true, &_init_f_notifyInterval_c0, &_call_f_notifyInterval_c0);
  methods += new qt_gsi::GenericMethod ("periodSize", "@brief Method int QAudioInput::periodSize()\n", true, &_init_f_periodSize_c0, &_call_f_periodSize_c0);
  methods += new qt_gsi::GenericMethod ("processedUSecs", "@brief Method qint64 QAudioInput::processedUSecs()\n", true, &_init_f_processedUSecs_c0, &_call_f_processedUSecs_c0);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method void QAudioInput::reset()\n", false, &_init_f_reset_0, &_call_f_reset_0);
  methods += new qt_gsi::GenericMethod ("resume", "@brief Method void QAudioInput::resume()\n", false, &_init_f_resume_0, &_call_f_resume_0);
  methods += new qt_gsi::GenericMethod ("setBufferSize|bufferSize=", "@brief Method void QAudioInput::setBufferSize(int bytes)\n", false, &_init_f_setBufferSize_767, &_call_f_setBufferSize_767);
  methods += new qt_gsi::GenericMethod ("setNotifyInterval|notifyInterval=", "@brief Method void QAudioInput::setNotifyInterval(int milliSeconds)\n", false, &_init_f_setNotifyInterval_767, &_call_f_setNotifyInterval_767);
  methods += new qt_gsi::GenericMethod ("setVolume|volume=", "@brief Method void QAudioInput::setVolume(double volume)\n", false, &_init_f_setVolume_1071, &_call_f_setVolume_1071);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method void QAudioInput::start(QIODevice *device)\n", false, &_init_f_start_1447, &_call_f_start_1447);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method QIODevice *QAudioInput::start()\n", false, &_init_f_start_0, &_call_f_start_0);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QAudio::State QAudioInput::state()\n", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("stateChanged", "@brief Method void QAudioInput::stateChanged(QAudio::State)\n", false, &_init_f_stateChanged_1644, &_call_f_stateChanged_1644);
  methods += new qt_gsi::GenericMethod ("stop", "@brief Method void QAudioInput::stop()\n", false, &_init_f_stop_0, &_call_f_stop_0);
  methods += new qt_gsi::GenericMethod ("suspend", "@brief Method void QAudioInput::suspend()\n", false, &_init_f_suspend_0, &_call_f_suspend_0);
  methods += new qt_gsi::GenericMethod (":volume", "@brief Method double QAudioInput::volume()\n", true, &_init_f_volume_c0, &_call_f_volume_c0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioInput::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAudioInput::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAudioInput> decl_QAudioInput (qtdecl_QObject (), "QtMultimedia", "QAudioInput_Native",
  methods_QAudioInput (),
  "@hide\n@alias QAudioInput");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioInput> &qtdecl_QAudioInput () { return decl_QAudioInput; }

}


class QAudioInput_Adaptor : public QAudioInput, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioInput_Adaptor();

  //  [adaptor ctor] QAudioInput::QAudioInput(const QAudioFormat &format, QObject *parent)
  QAudioInput_Adaptor() : QAudioInput()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioInput::QAudioInput(const QAudioFormat &format, QObject *parent)
  QAudioInput_Adaptor(const QAudioFormat &format) : QAudioInput(format)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioInput::QAudioInput(const QAudioFormat &format, QObject *parent)
  QAudioInput_Adaptor(const QAudioFormat &format, QObject *parent) : QAudioInput(format, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioInput::QAudioInput(const QAudioDeviceInfo &audioDeviceInfo, const QAudioFormat &format, QObject *parent)
  QAudioInput_Adaptor(const QAudioDeviceInfo &audioDeviceInfo) : QAudioInput(audioDeviceInfo)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioInput::QAudioInput(const QAudioDeviceInfo &audioDeviceInfo, const QAudioFormat &format, QObject *parent)
  QAudioInput_Adaptor(const QAudioDeviceInfo &audioDeviceInfo, const QAudioFormat &format) : QAudioInput(audioDeviceInfo, format)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioInput::QAudioInput(const QAudioDeviceInfo &audioDeviceInfo, const QAudioFormat &format, QObject *parent)
  QAudioInput_Adaptor(const QAudioDeviceInfo &audioDeviceInfo, const QAudioFormat &format, QObject *parent) : QAudioInput(audioDeviceInfo, format, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAudioInput::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioInput_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioInput::isSignalConnected(signal);
  }

  //  [expose] int QAudioInput::receivers(const char *signal)
  int fp_QAudioInput_receivers_c1731 (const char *signal) const {
    return QAudioInput::receivers(signal);
  }

  //  [expose] QObject *QAudioInput::sender()
  QObject * fp_QAudioInput_sender_c0 () const {
    return QAudioInput::sender();
  }

  //  [expose] int QAudioInput::senderSignalIndex()
  int fp_QAudioInput_senderSignalIndex_c0 () const {
    return QAudioInput::senderSignalIndex();
  }

  //  [adaptor impl] bool QAudioInput::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QAudioInput::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioInput_Adaptor, bool, QEvent *>(&QAudioInput_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QAudioInput::event(arg1);
    }
  }

  //  [adaptor impl] bool QAudioInput::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QAudioInput::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioInput_Adaptor, bool, QObject *, QEvent *>(&QAudioInput_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QAudioInput::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QAudioInput::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QAudioInput::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioInput_Adaptor, QChildEvent *>(&QAudioInput_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QAudioInput::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QAudioInput::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QAudioInput::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioInput_Adaptor, QEvent *>(&QAudioInput_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QAudioInput::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QAudioInput::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioInput::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioInput_Adaptor, const QMetaMethod &>(&QAudioInput_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioInput::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAudioInput::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QAudioInput::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioInput_Adaptor, QTimerEvent *>(&QAudioInput_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QAudioInput::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioInput_Adaptor::~QAudioInput_Adaptor() { }

//  Constructor QAudioInput::QAudioInput(const QAudioFormat &format, QObject *parent) (adaptor class)

static void _init_ctor_QAudioInput_Adaptor_3703 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format", true, "QAudioFormat()");
  decl->add_arg<const QAudioFormat & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QAudioInput_Adaptor> ();
}

static void _call_ctor_QAudioInput_Adaptor_3703 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioFormat &arg1 = args ? gsi::arg_reader<const QAudioFormat & >() (args, heap) : gsi::arg_maker<const QAudioFormat & >() (QAudioFormat(), heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QAudioInput_Adaptor *> (new QAudioInput_Adaptor (arg1, arg2));
}


//  Constructor QAudioInput::QAudioInput(const QAudioDeviceInfo &audioDeviceInfo, const QAudioFormat &format, QObject *parent) (adaptor class)

static void _init_ctor_QAudioInput_Adaptor_6475 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("audioDeviceInfo");
  decl->add_arg<const QAudioDeviceInfo & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QAudioFormat()");
  decl->add_arg<const QAudioFormat & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_2);
  decl->set_return_new<QAudioInput_Adaptor> ();
}

static void _call_ctor_QAudioInput_Adaptor_6475 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDeviceInfo &arg1 = gsi::arg_reader<const QAudioDeviceInfo & >() (args, heap);
  const QAudioFormat &arg2 = args ? gsi::arg_reader<const QAudioFormat & >() (args, heap) : gsi::arg_maker<const QAudioFormat & >() (QAudioFormat(), heap);
  QObject *arg3 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QAudioInput_Adaptor *> (new QAudioInput_Adaptor (arg1, arg2, arg3));
}


// void QAudioInput::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAudioInput::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QAudioInput::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioInput::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAudioInput_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioInput::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAudioInput_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAudioInput::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QAudioInput_Adaptor *)cls)->fp_QAudioInput_isSignalConnected_c2394 (arg1));
}


// exposed int QAudioInput::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QAudioInput_Adaptor *)cls)->fp_QAudioInput_receivers_c1731 (arg1));
}


// exposed QObject *QAudioInput::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioInput_Adaptor *)cls)->fp_QAudioInput_sender_c0 ());
}


// exposed int QAudioInput::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioInput_Adaptor *)cls)->fp_QAudioInput_senderSignalIndex_c0 ());
}


// void QAudioInput::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioInput> &qtdecl_QAudioInput ();

static gsi::Methods methods_QAudioInput_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioInput::QAudioInput(const QAudioFormat &format, QObject *parent)\nThis method creates an object of class QAudioInput.", &_init_ctor_QAudioInput_Adaptor_3703, &_call_ctor_QAudioInput_Adaptor_3703);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioInput::QAudioInput(const QAudioDeviceInfo &audioDeviceInfo, const QAudioFormat &format, QObject *parent)\nThis method creates an object of class QAudioInput.", &_init_ctor_QAudioInput_Adaptor_6475, &_call_ctor_QAudioInput_Adaptor_6475);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioInput::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioInput::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioInput::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioInput::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioInput::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioInput::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioInput::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioInput::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioInput::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioInput::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioInput_Adaptor> decl_QAudioInput_Adaptor (qtdecl_QAudioInput (), "QtMultimedia", "QAudioInput",
  methods_QAudioInput_Adaptor (),
  "@qt\n@brief Binding of QAudioInput");

}

