/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5802
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
    var_19 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((signed char) ((_Bool) -1226632749))))));
                        var_21 = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) ((int) var_12));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_23 += ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_11 [i_4]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (2047U) : (var_1))))));
        arr_12 [i_4] = ((/* implicit */unsigned int) arr_2 [i_4] [i_4]);
        var_24 = ((/* implicit */long long int) var_5);
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_15 [i_5] = ((/* implicit */_Bool) 1226632748);
        var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (((long long int) ((unsigned long long int) arr_13 [7LL])))));
    }
}
