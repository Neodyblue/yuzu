#pragma once

enum {
    R0 = 0,
    R1,
    R2,
    R3,
    R4,
    R5,
    R6,
    R7,
    R8,
    R9,
    R10,
    R11,
    R12,
    R13,
    LR,
    R15, //PC,
    CPSR_REG,
    SPSR_REG,

    PHYS_PC,
    R13_USR,
    R14_USR,
    R13_SVC,
    R14_SVC,
    R13_ABORT,
    R14_ABORT,
    R13_UNDEF,
    R14_UNDEF,
    R13_IRQ,
    R14_IRQ,
    R8_FIRQ,
    R9_FIRQ,
    R10_FIRQ,
    R11_FIRQ,
    R12_FIRQ,
    R13_FIRQ,
    R14_FIRQ,
    SPSR_INVALID1,
    SPSR_INVALID2,
    SPSR_SVC,
    SPSR_ABORT,
    SPSR_UNDEF,
    SPSR_IRQ,
    SPSR_FIRQ,
    MODE_REG, /* That is the cpsr[4 : 0], just for calculation easily */
    BANK_REG,
    EXCLUSIVE_TAG,
    EXCLUSIVE_STATE,
    EXCLUSIVE_RESULT,

    MAX_REG_NUM,
};

// VFP system registers
enum {
    VFP_FPSID,
    VFP_FPSCR,
    VFP_FPEXC,

    // Not an actual register.
    // All VFP system registers should be defined above this.
    VFP_SYSTEM_REGISTER_COUNT
};

enum CP15Register {
    // c0 - Information registers
    CP15_MAIN_ID,
    CP15_CACHE_TYPE,
    CP15_TCM_STATUS,
    CP15_TLB_TYPE,
    CP15_CPU_ID,
    CP15_PROCESSOR_FEATURE_0,
    CP15_PROCESSOR_FEATURE_1,
    CP15_DEBUG_FEATURE_0,
    CP15_AUXILIARY_FEATURE_0,
    CP15_MEMORY_MODEL_FEATURE_0,
    CP15_MEMORY_MODEL_FEATURE_1,
    CP15_MEMORY_MODEL_FEATURE_2,
    CP15_MEMORY_MODEL_FEATURE_3,
    CP15_ISA_FEATURE_0,
    CP15_ISA_FEATURE_1,
    CP15_ISA_FEATURE_2,
    CP15_ISA_FEATURE_3,
    CP15_ISA_FEATURE_4,

    // c1 - Control registers
    CP15_CONTROL,
    CP15_AUXILIARY_CONTROL,
    CP15_COPROCESSOR_ACCESS_CONTROL,

    // c2 - Translation table registers
    CP15_TRANSLATION_BASE_TABLE_0,
    CP15_TRANSLATION_BASE_TABLE_1,
    CP15_TRANSLATION_BASE_CONTROL,
    CP15_DOMAIN_ACCESS_CONTROL,
    CP15_RESERVED,

    // c5 - Fault status registers
    CP15_FAULT_STATUS,
    CP15_INSTR_FAULT_STATUS,
    CP15_COMBINED_DATA_FSR = CP15_FAULT_STATUS,
    CP15_INST_FSR,

    // c6 - Fault Address registers
    CP15_FAULT_ADDRESS,
    CP15_COMBINED_DATA_FAR = CP15_FAULT_ADDRESS,
    CP15_WFAR,
    CP15_IFAR,

    // c7 - Cache operation registers
    CP15_WAIT_FOR_INTERRUPT,
    CP15_PHYS_ADDRESS,
    CP15_INVALIDATE_INSTR_CACHE,
    CP15_INVALIDATE_INSTR_CACHE_USING_MVA,
    CP15_INVALIDATE_INSTR_CACHE_USING_INDEX,
    CP15_FLUSH_PREFETCH_BUFFER,
    CP15_FLUSH_BRANCH_TARGET_CACHE,
    CP15_FLUSH_BRANCH_TARGET_CACHE_ENTRY,
    CP15_INVALIDATE_DATA_CACHE,
    CP15_INVALIDATE_DATA_CACHE_LINE_USING_MVA,
    CP15_INVALIDATE_DATA_CACHE_LINE_USING_INDEX,
    CP15_INVALIDATE_DATA_AND_INSTR_CACHE,
    CP15_CLEAN_DATA_CACHE,
    CP15_CLEAN_DATA_CACHE_LINE_USING_MVA,
    CP15_CLEAN_DATA_CACHE_LINE_USING_INDEX,
    CP15_DATA_SYNC_BARRIER,
    CP15_DATA_MEMORY_BARRIER,
    CP15_CLEAN_AND_INVALIDATE_DATA_CACHE,
    CP15_CLEAN_AND_INVALIDATE_DATA_CACHE_LINE_USING_MVA,
    CP15_CLEAN_AND_INVALIDATE_DATA_CACHE_LINE_USING_INDEX,

    // c8 - TLB operations
    CP15_INVALIDATE_ITLB,
    CP15_INVALIDATE_ITLB_SINGLE_ENTRY,
    CP15_INVALIDATE_ITLB_ENTRY_ON_ASID_MATCH,
    CP15_INVALIDATE_ITLB_ENTRY_ON_MVA,
    CP15_INVALIDATE_DTLB,
    CP15_INVALIDATE_DTLB_SINGLE_ENTRY,
    CP15_INVALIDATE_DTLB_ENTRY_ON_ASID_MATCH,
    CP15_INVALIDATE_DTLB_ENTRY_ON_MVA,
    CP15_INVALIDATE_UTLB,
    CP15_INVALIDATE_UTLB_SINGLE_ENTRY,
    CP15_INVALIDATE_UTLB_ENTRY_ON_ASID_MATCH,
    CP15_INVALIDATE_UTLB_ENTRY_ON_MVA,

    // c9 - Data cache lockdown register
    CP15_DATA_CACHE_LOCKDOWN,

    // c10 - TLB/Memory map registers
    CP15_TLB_LOCKDOWN,
    CP15_PRIMARY_REGION_REMAP,
    CP15_NORMAL_REGION_REMAP,

    // c13 - Thread related registers
    CP15_PID,
    CP15_CONTEXT_ID,
    CP15_THREAD_UPRW, // Thread ID register - User/Privileged Read/Write
    CP15_THREAD_URO,  // Thread ID register - User Read Only (Privileged R/W)
    CP15_THREAD_PRW,  // Thread ID register - Privileged R/W only.

    // c15 - Performance and TLB lockdown registers
    CP15_PERFORMANCE_MONITOR_CONTROL,
    CP15_CYCLE_COUNTER,
    CP15_COUNT_0,
    CP15_COUNT_1,
    CP15_READ_MAIN_TLB_LOCKDOWN_ENTRY,
    CP15_WRITE_MAIN_TLB_LOCKDOWN_ENTRY,
    CP15_MAIN_TLB_LOCKDOWN_VIRT_ADDRESS,
    CP15_MAIN_TLB_LOCKDOWN_PHYS_ADDRESS,
    CP15_MAIN_TLB_LOCKDOWN_ATTRIBUTE,
    CP15_TLB_DEBUG_CONTROL,

    // Skyeye defined
    CP15_TLB_FAULT_ADDR,
    CP15_TLB_FAULT_STATUS,

    // Not an actual register.
    // All registers should be defined above this.
    CP15_REGISTER_COUNT,
};
