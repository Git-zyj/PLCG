/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90137
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
    for (short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)86)) < (((/* implicit */int) (unsigned short)49152))));
                var_13 = ((long long int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (unsigned short)16360)) : (((/* implicit */int) (unsigned short)6))));
                var_14 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49153))) : (arr_4 [i_0 - 2] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)10)) : (((/* implicit */int) var_2))))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24605))) : (var_3)))) % (((var_7) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((202984448U), ((-(((unsigned int) (unsigned char)255))))));
}
