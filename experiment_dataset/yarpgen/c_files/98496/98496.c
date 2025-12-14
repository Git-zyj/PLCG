/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_9, var_1));
    var_17 = ((8668315693158785593 ? var_9 : (max(((8668315693158785592 ? var_14 : 525061250813445501)), ((var_8 ? 8668315693158785593 : 8668315693158785593))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (((((arr_4 [i_0] [i_2 - 1] [i_2 + 2] [8]) < 3)) ? ((max(-82, 7))) : (58 * 7)));
                    var_19 *= ((249643367 <= (min((81 + 17357147789383703161), 54))));
                    arr_7 [i_0] [i_1] [i_1] |= 5884700637744961828;
                    arr_8 [i_1] [i_1] = (arr_6 [13] [i_1] [i_1]);
                    var_20 *= (max((((arr_5 [i_0] [i_1] [i_2]) ? (((min(var_1, (arr_3 [16] [2] [i_2 + 1]))))) : (arr_4 [i_0] [i_0] [i_2 - 1] [i_1]))), ((((min(1089596284325848454, -1))) ? (arr_3 [i_2 - 1] [i_2 - 1] [1]) : (max((arr_5 [i_0] [i_1] [i_2 + 1]), 41))))));
                }
            }
        }
    }
    #pragma endscop
}
