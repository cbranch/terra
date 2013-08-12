#ifndef _llvmheaders_h
#define _llvmheaders_h

#ifndef NDEBUG
#define NDEBUG
#include "llvm/Support/Valgrind.h"
#undef NDEBUG
#else
#include "llvm/Support/Valgrind.h"
#endif

#include "llvm/Analysis/Passes.h"
#include "llvm/Analysis/Verifier.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/JIT.h"

#include "llvm/Linker.h"
#include "llvm/PassManager.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/Program.h"
#include "llvm/Transforms/Utils/Cloning.h"
#include "llvm/Transforms/IPO.h"
#include "llvm/Transforms/Vectorize.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
#include "llvm/ExecutionEngine/JITEventListener.h"
#include "llvm/Support/DynamicLibrary.h"

#if LLVM_3_1
#include "llvmheaders_31.h"
#elif LLVM_3_2
#include "llvmheaders_32.h"
#elif LLVM_3_3
#include "llvmheaders_33.h"
#else
#error "unsupported LLVM version"
#endif

#endif
