/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((var_11 ? var_7 : (~26))))));
    var_13 = (((((max(var_7, var_1)))) ? 64 : (min(((var_10 ? var_1 : var_1)), (((5968143915395069016 ? 68 : 170)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = 9567716750510199502;
                    var_14 ^= ((+(((~var_8) ^ ((min((arr_3 [12]), (arr_1 [i_2] [i_2]))))))));
                    var_15 = (max(var_15, ((max(((max(-9813, 26))), (min(((max((arr_6 [2] [14] [i_0]), 65506))), -133)))))));
                    var_16 &= (min(((max((arr_4 [i_0 + 3]), (-546444441 <= var_7)))), 48694));
                }
            }
        }
    }
    #pragma endscop
}
