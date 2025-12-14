/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69815
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
    var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((long long int) var_9))) : (((var_3) >> (((var_6) - (2021476654U)))))))));
    var_12 = ((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) var_0);
                    arr_9 [i_2 + 1] [i_0] [i_0] = var_2;
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
        var_14 = max((((((_Bool) var_10)) ? (var_0) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_4)));
    }
    for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_4))));
        var_16 = ((/* implicit */unsigned char) ((unsigned int) (+((+(((/* implicit */int) arr_11 [i_3] [i_3 - 1])))))));
    }
}
