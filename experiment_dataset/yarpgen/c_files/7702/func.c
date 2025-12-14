/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7702
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
    var_11 += var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_2] = ((unsigned int) arr_4 [i_0] [i_0] [(_Bool)1] [i_0]);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_12 ^= var_8;
                        arr_11 [i_3] [i_2] [(unsigned short)6] [i_2 - 1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2 + 1] [i_2 - 1]))));
                    }
                }
            } 
        } 
        var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [1U] [4LL] [i_0]))))));
        var_14 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
    }
}
