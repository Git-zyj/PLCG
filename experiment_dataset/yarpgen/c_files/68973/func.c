/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68973
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_10 = ((/* implicit */unsigned int) max((var_10), ((~(arr_3 [i_1] [i_1 + 4])))));
            var_11 = ((/* implicit */short) 4611686018427387904ULL);
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 688550406))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 2] [i_3])) || (((/* implicit */_Bool) arr_9 [i_2] [i_4]))));
                        arr_14 [i_0] [i_2 - 1] [i_3 - 1] [i_4] = ((var_4) ? (((((/* implicit */int) arr_9 [i_2] [i_2])) - (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_2 + 1]))))));
                    }
                } 
            } 
        } 
    }
    var_13 ^= ((/* implicit */signed char) var_7);
}
