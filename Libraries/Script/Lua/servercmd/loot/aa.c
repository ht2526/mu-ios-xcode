#define  CUTE_SYS_REF_CLASS_DECL(T)						\
using ptr_t = ref_ptr<T>; 								\
friend class ref_ptr<T>; 								\
friend void ref_ptr_add_ref(T*); 						\
friend void ref_ptr_release(T*); 						\
CUTE_SYS_ref_ptr_ATOMIC_TYPE cute_ref_count_; 			\
