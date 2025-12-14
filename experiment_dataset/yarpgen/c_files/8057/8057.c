/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0]) * 1))) | (((arr_2 [i_0]) >> (4294967295 - 4294967268)))));
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) ? ((var_5 ? var_5 : (arr_2 [i_0]))) : (((var_6 | (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] = (((4294967267 || 0) ? 1 : (((-6830968766554878430 ? 53517378 : 17251)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = 8;
                                var_13 = (+(((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) & (arr_0 [i_2] [i_3]))));
                                var_14 = ((var_3 * ((((-61 >= (arr_15 [i_1] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0] = 2518122082;
    }
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_15 = 57645;
                            arr_31 [i_5] [i_6 + 3] [i_5] [i_8] [i_9] = (((51 + 4294967287) > (min((~-1136397764), (arr_2 [i_8])))));
                        }
                    }
                }
            }
            var_16 = (min(((max(var_11, var_5))), (arr_13 [i_5] [i_5] [i_6 + 2] [i_6 + 3] [i_6])));
        }
        for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
        {
            arr_36 [i_5] = (max((((~((max((arr_1 [i_10] [i_5 - 1]), (arr_16 [i_5] [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_5] [i_10 + 1] [i_10 + 2]))))))), ((var_11 ? (((max(7901, (arr_8 [i_5] [i_10]))))) : var_7))));
            arr_37 [i_5] = (arr_8 [i_5 - 1] [i_5]);

            /* vectorizable */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_17 = ((arr_5 [i_5 - 1] [i_10 + 3]) - 186491007);
                arr_41 [i_5] [i_10] = (-777119716 ^ -1860594414);
            }
            arr_42 [i_5] = (0 && 8311);
        }
        arr_43 [i_5] = (max((min(var_5, (arr_20 [i_5 - 1] [i_5 + 2]))), (arr_19 [i_5 - 1])));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            var_18 = (((-6527698706271093615 ? (arr_45 [i_12]) : var_8)));
            arr_48 [i_12] [i_12] [i_12] = ((57645 || (arr_44 [i_12])));
            arr_49 [i_12] [i_12] [i_12] = ((65535 - (arr_45 [i_12])));
            arr_50 [i_12] = (-127 - 1);
        }
        var_19 = (arr_45 [i_12]);
        var_20 = (arr_45 [i_12]);
    }
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        arr_53 [i_14] = ((!((max((arr_7 [i_14] [i_14]), (min(12159, (arr_14 [i_14] [i_14] [i_14]))))))));
        var_21 = (((((~(arr_12 [i_14] [i_14] [10] [i_14])))) ? (arr_2 [i_14]) : (((!((max((arr_5 [i_14] [i_14]), -35))))))));
    }
    #pragma endscop
}
