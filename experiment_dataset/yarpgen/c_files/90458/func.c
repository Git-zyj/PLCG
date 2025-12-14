/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90458
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
    var_18 = ((/* implicit */long long int) max((var_18), (2199023255551LL)));
    var_19 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) -2824237092410851043LL);
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) -2199023255552LL);
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_0] [10LL] = ((/* implicit */long long int) (_Bool)1);
        }
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (_Bool)1))));
        arr_14 [i_0] = ((/* implicit */long long int) 2459936255U);
    }
    for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        var_23 &= ((/* implicit */long long int) 2365919722U);
        arr_18 [i_5 + 1] = ((/* implicit */long long int) 1929047599U);
    }
}
