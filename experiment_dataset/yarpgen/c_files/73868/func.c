/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73868
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = (~(((((/* implicit */_Bool) (signed char)-115)) ? (((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27465))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((8ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) (-(3936620950U)))) : ((-(10413488916272959910ULL)))))) ? ((-(max((1002644559U), (((/* implicit */unsigned int) (unsigned char)159)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28277)))));
            }
        } 
    } 
    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-((-(((/* implicit */int) (signed char)46)))))) : (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
    var_18 = min((((/* implicit */unsigned long long int) var_8)), (min(((~(18446744073709551608ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6446)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (signed char)-102))))))));
}
