/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69858
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((short) ((long long int) var_14)));
                    var_17 = ((/* implicit */int) min((max((-197585199601927712LL), (-197585199601927712LL))), (((/* implicit */long long int) ((unsigned int) var_12)))));
                    arr_11 [(short)13] [i_0 + 1] [(short)7] [i_2] = ((/* implicit */short) ((unsigned long long int) ((int) var_14)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_18 = ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) ((long long int) var_11))), (var_15))));
                        arr_18 [i_0] [i_4] [i_4] = ((long long int) ((short) var_0));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */long long int) ((int) 476101824));
}
