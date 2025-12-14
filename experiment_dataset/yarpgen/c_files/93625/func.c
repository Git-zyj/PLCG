/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93625
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
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_17)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) | (var_17))) : (((var_5) & (2118452236U))))) << (((((/* implicit */int) var_2)) - (20499)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) 598008990U);
                    var_19 = ((/* implicit */long long int) arr_1 [i_1] [i_2]);
                }
            } 
        } 
        var_20 += ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)35)))), (((/* implicit */int) (signed char)-47))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 4) 
    {
        var_21 = arr_9 [i_3] [i_3];
        arr_11 [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) == (((/* implicit */int) arr_10 [i_3 + 1])))) ? (((/* implicit */unsigned long long int) 8280843900925511020LL)) : (min((18446744073709551590ULL), (((/* implicit */unsigned long long int) var_17))))));
    }
    var_22 = ((/* implicit */signed char) ((var_14) > (((/* implicit */long long int) (~(((((/* implicit */_Bool) 2647870070U)) ? (-687083756) : (((/* implicit */int) var_6)))))))));
}
