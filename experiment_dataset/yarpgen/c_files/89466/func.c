/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89466
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
    var_16 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? ((~(var_3))) : (((((/* implicit */_Bool) (-(var_4)))) ? ((-(var_9))) : (var_6))));
    var_17 ^= ((((/* implicit */_Bool) var_3)) ? (var_4) : (var_14));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_18 = max((1430442565U), (3486697967U));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) (+(var_2)))) ? (arr_3 [i_3] [i_1] [i_2]) : (((((/* implicit */_Bool) 2872514704U)) ? (3339557473U) : (3486697958U)))))));
                        var_20 = ((((/* implicit */_Bool) 4294967295U)) ? (2804551754U) : (3486697967U));
                    }
                } 
            } 
        } 
        var_21 &= (~(var_0));
        var_22 = (-(arr_5 [i_0 + 1] [i_0] [i_0 + 1]));
    }
    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
    {
        var_23 -= (~(((arr_12 [i_4 - 1] [i_4 + 1]) + (arr_12 [i_4 - 1] [i_4 + 1]))));
        var_24 = 3209941545U;
    }
}
