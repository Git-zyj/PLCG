/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((max(8041, var_0)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_21 &= (+((0 ? (arr_3 [4]) : 3490993138760086471)));
        var_22 ^= (arr_0 [i_0 + 2] [i_0 + 2]);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] [i_1 + 1] = (max(((-5332450084386840668 ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 1]))), ((~(arr_4 [i_1 + 2])))));
        arr_8 [i_1 + 1] = 11416;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_23 |= (((max(9254560652055523737, (min(var_3, (arr_0 [i_2] [i_2]))))) & ((((28198 ? -3472726548993646383 : (arr_3 [i_2]))) << ((((44473 << (((arr_11 [i_2]) - 1093244568)))) - 182161364))))));
        var_24 = (max(var_24, (((~(arr_11 [i_2]))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_25 += ((((((~var_4) ? 28 : 0))) ? (((arr_12 [i_3]) / (arr_12 [i_3]))) : (max((arr_16 [i_5] [i_3] [i_3]), (arr_13 [i_3])))));
                    var_26 = (min(var_26, (~18446744073709551611)));
                    var_27 = (((min((((arr_12 [i_3]) ? var_4 : 0)), (arr_12 [i_3]))) <= (min(9281492234263935246, 1125350151028736))));
                    var_28 *= var_6;
                }
            }
        }
    }
    var_29 = ((((max(var_10, (var_0 + var_14)))) ? 65535 : var_16));
    #pragma endscop
}
