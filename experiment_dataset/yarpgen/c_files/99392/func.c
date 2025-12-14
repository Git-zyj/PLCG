/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99392
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_9 [(unsigned short)0] = ((/* implicit */unsigned long long int) ((int) arr_5 [i_2 + 1]));
                        var_16 = ((/* implicit */unsigned int) (unsigned short)65535);
                        arr_10 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
                        var_17 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((var_15) ? (2446433233057210263LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    }
    var_18 |= ((/* implicit */short) var_5);
}
