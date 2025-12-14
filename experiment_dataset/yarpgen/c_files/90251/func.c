/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90251
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
    var_18 &= ((/* implicit */_Bool) 4058211807U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) arr_10 [i_0]);
                        var_20 = ((319129801U) & (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-91))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2951869357U))))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_22 += ((/* implicit */long long int) min((arr_5 [i_4]), (((/* implicit */unsigned long long int) var_2))));
        arr_13 [i_4] = ((/* implicit */short) min((min((arr_1 [i_4] [i_4]), (arr_1 [i_4] [i_4]))), (((((/* implicit */_Bool) 2994703226U)) ? (arr_1 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16374)))))));
    }
    var_23 = ((/* implicit */long long int) var_5);
    var_24 |= ((/* implicit */unsigned short) var_6);
}
