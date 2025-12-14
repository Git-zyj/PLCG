/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((((max(4167025426, 224198223239951785))) ? 3034896801 : 5395819550092231930)), var_9);

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_19 *= (arr_8 [i_0] [i_0] [1] [12] [1] [i_3]);
                        arr_12 [i_0] [14] [6] [8] [i_3] |= (~26078);
                        arr_13 [1] [i_0] [i_0] [1] [1] &= (-310791097 ? (!var_0) : var_10);
                    }
                    var_20 = (max(var_20, var_8));
                }
            }
        }
        arr_14 [i_0] [3] &= (max((((~var_7) | ((65516489 ? 0 : 1)))), (max((arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 1]), (max(-7934, 3541733319))))));
        arr_15 [i_0] [6] = ((!((((((var_11 ? var_3 : var_14))) ? -var_7 : (((!(arr_9 [0] [8])))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_28 [1] [1] [1] [1] = ((((((((0 ? 780852579 : 1149357850))) ? ((max((arr_20 [i_6] [i_7]), (arr_17 [i_6])))) : (!var_1)))) ? ((~((~(arr_20 [i_5] [i_7]))))) : 1));
                        arr_29 [i_6] = (562881233944576 ? 37564 : 2828906183);
                        arr_30 [i_5] [4] [i_6] [i_5] [i_5] [i_4] = ((var_4 % (~0)));
                    }
                }
            }
        }
        var_21 += ((((1 ? 0 : 252)) & (((-4739 ? (!71172142) : ((2177483378 >> (562881233944587 - 562881233944578))))))));
        arr_31 [i_4] [i_4] |= (min((min(18, 4294967291)), -0));
    }
    #pragma endscop
}
