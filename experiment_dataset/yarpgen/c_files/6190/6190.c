/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = ((~(min(13, 9223372036854775807))));
        var_14 += (arr_1 [i_0 - 1] [i_0]);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_15 = (arr_4 [i_1] [i_1]);
            var_16 = ((!((min(1, (((arr_4 [i_1] [i_1]) ? (arr_6 [i_1] [19] [19]) : 0)))))));
        }

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_17 -= ((min((arr_4 [16] [16]), (arr_3 [i_1 + 2]))));
            var_18 = (max(var_18, (~29)));
            arr_10 [i_1] [12] = (arr_6 [i_1] [i_1 + 2] [i_1]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_13 [i_1] = (arr_6 [i_1] [i_4] [i_1 + 2]);
            var_19 = ((arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1]) > 2615569200);
            var_20 = (((arr_11 [i_1 + 2] [i_1 - 1] [i_1 + 1]) ? 576460752303423487 : var_3));
        }
        var_21 = (max(var_21, (((~(arr_4 [0] [i_1 - 1]))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 = (!(arr_15 [i_5] [i_5]));
        arr_16 [i_5] = (((min(2523837074, (arr_15 [i_5] [i_5])))) ? var_11 : (arr_15 [i_5] [7]));
    }
    var_23 &= 0;
    var_24 |= (((((var_0 >> ((min(13, 17834)))))) ? var_12 : ((((var_1 == (min(var_0, 17))))))));
    var_25 = (max(var_25, (((var_8 == ((0 ? (min(3776339850, 1)) : ((var_4 ? var_0 : 164)))))))));
    #pragma endscop
}
