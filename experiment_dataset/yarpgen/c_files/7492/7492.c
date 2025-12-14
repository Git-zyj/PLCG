/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_18 = (((max(var_11, (arr_0 [i_0 - 1]))) ^ (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : var_1))));
        arr_3 [i_0] [i_0] = 27058;
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_19 = 4623255783724046026;
            var_20 -= ((((7725 > ((6644370436601158710 ^ (arr_6 [i_2]))))) ? (min((((arr_4 [i_1] [i_2]) ? (arr_4 [i_1] [i_2]) : (arr_4 [i_1] [i_1]))), (((arr_6 [i_1]) ? 48933 : (arr_6 [i_1]))))) : ((min(var_6, var_1)))));
            var_21 = (arr_6 [i_2]);

            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                var_22 = (max(var_22, (((((-(arr_9 [i_3 - 1] [i_3] [i_3] [i_3 + 2])))) ? -4623255783724046014 : ((((((var_1 ? (arr_4 [i_1] [i_1]) : 15251))) ? (arr_9 [i_3] [i_3 + 2] [i_3] [i_3 + 2]) : (((arr_5 [i_1] [i_3]) ? 18835 : 48958)))))))));
                var_23 = (((((48937 ? (min((arr_6 [i_1]), var_14)) : (-5873878327622021106 == 47638)))) ? (((!var_6) ? var_3 : (arr_10 [i_3 + 1] [i_3] [i_3 - 2] [i_3 - 2]))) : ((var_1 ? (~var_11) : ((min((arr_4 [i_1] [i_1]), var_6)))))));
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_24 |= var_9;
                var_25 = (min(var_25, (min(var_14, ((((!-22708) >= -4950308848406297688)))))));
                var_26 = var_7;
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_27 = -18004;
            var_28 = ((var_14 ? (arr_8 [i_1]) : var_4));
            var_29 = (min(var_29, var_16));
            var_30 = (max(var_30, 9716));
        }
        arr_15 [i_1] = max(((8176 ? 4950308848406297688 : ((((!(arr_8 [i_1]))))))), (max(var_5, var_8)));
        var_31 = (!var_6);
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        var_32 += ((((max(var_10, ((48958 ? (arr_18 [i_6]) : (arr_12 [i_6] [i_6] [i_6])))))) ? var_5 : (arr_1 [i_6 + 1])));
        var_33 = (arr_17 [i_6]);
    }
    #pragma endscop
}
