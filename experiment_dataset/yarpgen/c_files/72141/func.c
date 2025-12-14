/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72141
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
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)14391), (((/* implicit */unsigned short) (short)4737))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (signed char)1))))))))));
    var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_5)) : ((-(var_7))))), (var_12)));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)24)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_6 [i_0 + 1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1183109924999975434LL)))))))), (18446744073709551612ULL)));
        arr_7 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_7))), (((/* implicit */unsigned long long int) 0))));
    }
}
