/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95503
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63488)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (short)1073))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_14))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_3] [i_2] [i_1 - 1] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 3])) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1]))))) ? (((((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 2])) ^ (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 3])))) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 1]))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */long long int) var_6)), (((-856733821831988415LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) var_5))))))))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 856733821831988401LL))));
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */_Bool) (-(arr_5 [(unsigned char)9] [i_0 - 1] [i_0] [i_0])));
    }
    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_12 [i_4] [i_4] = ((/* implicit */int) (unsigned short)4136);
        arr_13 [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1439775650U))))), (max((((/* implicit */unsigned int) (signed char)-105)), (1769698521U)))));
        arr_14 [(_Bool)1] = ((/* implicit */unsigned int) ((arr_11 [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
    }
    var_23 = ((/* implicit */unsigned int) var_1);
}
