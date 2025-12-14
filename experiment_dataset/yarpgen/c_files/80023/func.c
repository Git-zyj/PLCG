/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80023
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
    var_12 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) var_2)))) : (var_9)))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_11)) ? (1851696095646439245ULL) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), ((unsigned char)149)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((signed char) var_0);
                var_14 = ((/* implicit */int) arr_3 [11] [i_1]);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_0)), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-9)))))))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max(((unsigned char)16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [(short)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))))))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (unsigned char)93);
}
