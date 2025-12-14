/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94268
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
    var_10 = var_9;
    var_11 -= ((/* implicit */long long int) var_4);
    var_12 = var_5;
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [0] = ((/* implicit */long long int) -2);
        var_13 = -271846714;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_14 = -652247499;
        var_15 = ((/* implicit */long long int) -2);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) 681602070);
                        arr_16 [i_1] [i_2] [i_1] [i_2] [i_4] = ((/* implicit */long long int) 1);
                    }
                } 
            } 
        } 
    }
}
