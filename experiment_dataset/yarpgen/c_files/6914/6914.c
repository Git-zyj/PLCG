/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (-(arr_2 [i_0] [i_1]));
            arr_5 [3] [3] = (~-1061631721);
            arr_6 [i_0] [5] [i_1] = ((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_1]));

            for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
            {
                arr_9 [i_2] = (((arr_1 [i_2 + 1]) ? (((~(arr_3 [i_2 - 1] [i_1])))) : var_15));
                arr_10 [i_0] [i_2] = 620819544675740266;
            }
            for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_3] = (arr_12 [i_3] [i_3] [i_3 - 1] [i_0]);
                arr_14 [i_3] [i_0] [i_3 + 1] [i_3 + 1] = (arr_12 [i_1] [12] [i_3 - 1] [i_3 - 1]);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_3] [i_5 - 1] = ((-(arr_17 [i_0] [i_1] [i_3] [i_3] [i_4] [i_3])));
                            arr_22 [i_0] [i_1] [14] [i_3] [i_5] = (arr_8 [i_3] [i_4 - 2]);
                            arr_23 [i_3] [i_1] [i_3] [i_4] [i_5] = (((arr_17 [i_1] [i_1] [i_5 + 1] [i_3 + 1] [5] [i_4 + 2]) % 620819544675740266));
                            arr_24 [i_5 + 1] [2] [i_4] [i_3] [i_1] [i_1] [7] = ((-1061631721 ? (arr_16 [16] [i_1] [i_3] [i_4] [1] [i_5 + 1]) : ((~(arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_5])))));
                        }
                    }
                }
                arr_25 [i_0] [i_1] [i_3] [i_3] = (arr_16 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3 - 1]);

                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    arr_28 [4] [8] [i_3] = (arr_18 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_6 + 1]);
                    arr_29 [i_3] [i_3] = var_16;
                    arr_30 [8] [i_1] [i_3] = ((!(arr_11 [i_0] [i_3 - 1] [i_6])));
                }
            }
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_34 [i_7] [i_0] = (((((7980546395511795521 | -var_3) + 9223372036854775807)) >> (((~-var_10) - 63))));
            arr_35 [5] [i_7] [i_7] = (6442714984463713313 ? ((((arr_27 [i_0] [i_0] [i_7] [i_7]) != -620819544675740269))) : (-620819544675740267 != var_19));
        }
        arr_36 [i_0] = (!var_2);
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_39 [i_8] = ((862864851 >= (min(var_10, var_3))));
        arr_40 [i_8] = var_0;
        arr_41 [i_8] = (((arr_0 [i_8]) + (((((min(var_4, var_2))) ? (min(-5698544978231446150, (arr_20 [i_8] [i_8] [i_8] [i_8]))) : (~var_3))))));
        arr_42 [i_8] = (((min((arr_8 [i_8] [i_8]), 4294967295)) == ((min((arr_8 [i_8] [i_8]), -1061631700)))));
    }
    var_20 = var_8;
    #pragma endscop
}
