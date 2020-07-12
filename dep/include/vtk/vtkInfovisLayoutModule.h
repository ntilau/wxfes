
#ifndef VTKINFOVISLAYOUT_EXPORT_H
#define VTKINFOVISLAYOUT_EXPORT_H

#ifdef VTKINFOVISLAYOUT_STATIC_DEFINE
#  define VTKINFOVISLAYOUT_EXPORT
#  define VTKINFOVISLAYOUT_NO_EXPORT
#else
#  ifndef VTKINFOVISLAYOUT_EXPORT
#    ifdef InfovisLayout_EXPORTS
        /* We are building this library */
#      define VTKINFOVISLAYOUT_EXPORT 
#    else
        /* We are using this library */
#      define VTKINFOVISLAYOUT_EXPORT 
#    endif
#  endif

#  ifndef VTKINFOVISLAYOUT_NO_EXPORT
#    define VTKINFOVISLAYOUT_NO_EXPORT 
#  endif
#endif

#ifndef VTKINFOVISLAYOUT_DEPRECATED
#  define VTKINFOVISLAYOUT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VTKINFOVISLAYOUT_DEPRECATED_EXPORT
#  define VTKINFOVISLAYOUT_DEPRECATED_EXPORT VTKINFOVISLAYOUT_EXPORT VTKINFOVISLAYOUT_DEPRECATED
#endif

#ifndef VTKINFOVISLAYOUT_DEPRECATED_NO_EXPORT
#  define VTKINFOVISLAYOUT_DEPRECATED_NO_EXPORT VTKINFOVISLAYOUT_NO_EXPORT VTKINFOVISLAYOUT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKINFOVISLAYOUT_NO_DEPRECATED
#    define VTKINFOVISLAYOUT_NO_DEPRECATED
#  endif
#endif

#endif /* VTKINFOVISLAYOUT_EXPORT_H */
