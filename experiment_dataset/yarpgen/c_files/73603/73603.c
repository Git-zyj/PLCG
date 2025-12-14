/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min(((5439676933806030206 ? var_5 : ((var_2 ? 76 : var_2)))), var_0)))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_11 = ((+(((arr_0 [i_0 + 2]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 25102)) : (arr_1 [i_0])))));
        arr_2 [i_0] = ((~((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_12 *= (0 << (448 - 444));

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_13 = (min((arr_5 [i_2]), (arr_5 [i_1])));
            arr_7 [i_1] [i_1] [i_2] = (i_1 % 2 == zero) ? ((min(26137, (((arr_3 [i_1] [i_1]) << (((arr_3 [i_2] [i_1]) - 4038639785443904319))))))) : ((min(26137, (((arr_3 [i_1] [i_1]) << (((((arr_3 [i_2] [i_1]) - 4038639785443904319)) - 1375557379800319585)))))));
            var_14 = (min(((((-(arr_4 [i_1]))))), (arr_3 [i_1] [i_1])));
            var_15 = max((arr_3 [i_2] [i_1]), ((((arr_6 [i_1] [i_1]) | (arr_6 [i_1] [i_1])))));
            var_16 = ((26137 ? (arr_6 [i_1] [i_1]) : 126));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_3] [i_1] = var_8;

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_17 = ((var_4 ? (arr_5 [i_1]) : 252));
                var_18 = ((-var_8 ? (arr_12 [i_1] [i_3] [i_4]) : var_8));
                var_19 &= (((((arr_8 [i_4] [i_3] [i_1]) + 2147483647)) >> (var_6 - 1409079429)));
            }
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                arr_17 [i_1] [i_3] [15] = var_6;
                var_20 += ((!(arr_9 [i_5 + 1] [16] [i_5 + 1])));
                var_21 |= (arr_6 [i_1] [0]);
                var_22 = var_9;
                var_23 = ((var_3 < (arr_10 [i_1] [i_1] [13])));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_24 = ((var_8 ? (arr_3 [7] [i_1]) : var_9));
                arr_22 [6] [i_1] [i_6] = ((arr_15 [i_1] [i_3] [i_1]) || var_8);
                var_25 = arr_3 [i_1] [i_1];
            }
        }
        var_26 = -30297;
    }
    var_27 += ((((((((193 ? var_3 : var_8))) ? var_7 : (1 ^ var_0)))) ? ((var_6 + ((var_9 ? 4025976698491552375 : var_0)))) : 5946317283364459342));
    var_28 -= (((((26112 ? (min(var_7, 1)) : var_8))) ? ((((max(252, var_4))))) : var_4));
    #pragma endscop
}
