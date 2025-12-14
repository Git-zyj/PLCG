/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((0 / (((var_14 ? var_6 : -778834725)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((min((arr_2 [i_0]), (max((arr_1 [i_0] [14]), (arr_0 [i_0])))))) ? ((((arr_2 [i_0]) ? var_7 : (arr_2 [i_0])))) : (min(((5507304672051094639 ? -5609759901356519181 : 18446744073709551614)), var_10)));
        var_16 = ((152 ? (~var_3) : ((-0 ? var_10 : ((max(63, 3758096384)))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 = var_7;
            arr_8 [i_0] [i_1] [i_1] = (arr_2 [i_0]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 ^= (((~var_14) ? (min(var_6, (max((arr_4 [i_0] [i_2] [i_0]), var_2)))) : (((arr_1 [i_0] [i_2]) & -var_8))));
            var_19 = (((min(var_8, (arr_11 [12] [12])))) ? (((((arr_4 [i_2] [i_2] [i_0]) ? var_10 : (arr_7 [i_0] [i_0] [i_0]))))) : var_12);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_17 [i_2] [i_4] = (max(4294967286, (((18446744073709551615 ? 3 : var_10)))));
                        var_20 = var_4;
                    }
                }
            }
        }
    }
    #pragma endscop
}
