/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65459
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)5584))));
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((1488531839U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514)))))), (((long long int) ((unsigned char) arr_0 [i_0])))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1516565203U)) ? (1488531867U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1088)))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) max((18179589241343003508ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2))))) >> (((((long long int) (short)32767)) - (32744LL)))))))));
        var_14 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_1]))))) ^ (((((/* implicit */unsigned long long int) 19752251)) ^ (16062039183852156103ULL))))) == (((unsigned long long int) ((((/* implicit */unsigned long long int) 385006115)) < (arr_6 [i_1]))))));
        var_15 = ((/* implicit */long long int) ((unsigned long long int) (signed char)2));
    }
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((max((((/* implicit */int) var_4)), (var_10))) >= (max((var_10), (((/* implicit */int) (short)32560)))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)27679)))) : (max((((/* implicit */long long int) 19752251)), (8070450532247928832LL))))) : (((/* implicit */long long int) var_1)))))));
    var_17 = ((/* implicit */int) max((var_17), (((min((((int) var_3)), (((/* implicit */int) ((signed char) 590945305048577015LL))))) * (((/* implicit */int) var_7))))));
}
