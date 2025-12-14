/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64833
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
    var_12 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        arr_5 [i_0] &= ((/* implicit */signed char) var_5);
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min(((~(((/* implicit */int) ((unsigned char) var_11))))), ((~(((/* implicit */int) ((unsigned char) 872412900U))))))))));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (-((-(1746754018189870703LL)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_14 = ((signed char) var_8);
        var_15 = ((/* implicit */_Bool) ((signed char) arr_15 [i_4] [i_4]));
        arr_17 [i_4] = ((/* implicit */unsigned int) var_11);
        arr_18 [(signed char)14] &= ((/* implicit */_Bool) var_0);
        var_16 = ((/* implicit */int) 1145802810U);
    }
}
