/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87048
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */int) arr_5 [i_2] [(unsigned short)8] [i_0]);
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned short)38827)))) + (2147483647))) << (((max((((/* implicit */int) arr_4 [i_2] [(unsigned short)12] [i_0])), (arr_1 [i_0]))) - (151619183))))))));
                    arr_7 [i_0] [i_1 + 1] [i_2] [(unsigned short)3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) + (((/* implicit */int) max(((unsigned short)63), ((unsigned short)65535))))));
                }
            } 
        } 
    } 
    var_22 = max((var_16), (((/* implicit */int) var_0)));
    var_23 = ((/* implicit */unsigned short) var_9);
    var_24 = var_0;
    var_25 = ((/* implicit */unsigned short) max((var_25), (var_4)));
}
