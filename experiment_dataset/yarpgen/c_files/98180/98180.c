/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = ((-((166686934 << (-1149220965 && -2952179731237400777)))));
        arr_3 [i_0] = (min((((4273332766 & (arr_0 [i_0 + 1] [i_0 - 1])))), 986539732671639660));
        var_14 = ((-(min((~var_6), (((17649 << (((arr_2 [15]) - 8970489220188509059)))))))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_15 = (147460894 / 4032);

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_16 = var_8;
            arr_8 [6] [i_1] [i_1] &= ((((((545610655 / (arr_4 [i_1])))) ? var_7 : (var_8 == var_4))));
        }
        arr_9 [i_1 - 1] = (min((((var_2 <= (((arr_5 [i_1]) / var_4))))), (min((min(var_8, var_10)), 40))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_14 [i_3] &= (arr_4 [i_1]);
            arr_15 [i_1] [i_1] [i_1] = 12;
            arr_16 [i_3] [i_1] [i_1] = ((min(-102, (var_3 / var_2))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_17 *= var_9;
            arr_19 [1] = 1;
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            arr_23 [i_1] [0] &= ((var_4 ? ((var_8 ^ (arr_7 [i_1]))) : var_8));
            arr_24 [i_1] = (17 + 8);
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        arr_27 [i_6] = (arr_25 [i_6]);
        var_18 = -1;
    }
    var_19 = (max(var_19, var_1));
    #pragma endscop
}
