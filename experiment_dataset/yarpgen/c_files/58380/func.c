/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58380
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
    var_20 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_21 *= ((/* implicit */_Bool) ((int) ((unsigned int) (_Bool)1)));
        arr_3 [i_0] = var_8;
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                {
                    arr_10 [i_3] [i_2 - 1] [i_1] = ((/* implicit */unsigned short) var_14);
                    arr_11 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 2641717091U)) || (((/* implicit */_Bool) 2641717089U)))))));
                }
            } 
        } 
    } 
}
