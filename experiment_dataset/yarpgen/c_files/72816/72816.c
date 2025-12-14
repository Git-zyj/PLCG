/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min(var_11, (var_8 >= var_11))), var_12));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_17 = 17383520996502371545;
            var_18 -= (arr_3 [i_0 - 2]);
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_9 [i_0] = 17383520996502371545;
                        arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] = 8749762277661327865;
                    }
                }
            }
            var_19 = ((-(!-8749762277661327866)));
        }
        arr_11 [13] [13] |= (((((-(arr_2 [i_0] [i_0 + 1])))) < (min((max(-8749762277661327854, (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0]))), (~var_3)))));
        arr_12 [i_0] = var_12;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
        {
            arr_19 [i_4] [i_4] = (((arr_6 [i_4] [i_5 + 2]) ? -8749762277661327866 : (min(-8749762277661327866, (min(1634379993534488664, var_13))))));
            var_20 = (max(var_20, (arr_0 [i_5])));
            arr_20 [10] [10] [10] = arr_5 [8] [i_4] [i_4];
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_27 [i_6] [i_6] [i_6] = ((!((min((arr_21 [i_6 + 1] [i_6 + 1] [i_6 - 2]), 8749762277661327865)))));
                arr_28 [i_6] = (max((!17383520996502371545), ((!(arr_3 [i_4])))));
                arr_29 [i_6] [i_6 - 1] [i_6 - 1] = ((!((((arr_4 [i_6 + 1] [i_6 + 2]) ? (arr_7 [i_6 - 2] [i_6 - 2] [i_6 + 2] [i_6 + 2]) : 167022426)))));
            }
            arr_30 [i_4] [i_4] |= (((arr_13 [i_4]) ? (((~11842565325991075318) ? ((((arr_26 [4] [i_6 + 2]) ? (arr_8 [i_4] [i_4] [i_6 - 1] [i_4] [i_6 - 2] [i_6 - 1]) : -8749762277661327870))) : (((arr_14 [i_6 - 2]) ? (arr_2 [i_4] [i_6 - 3]) : (arr_23 [i_4] [i_4]))))) : var_8));
        }
        var_21 = ((36279 != (!-8749762277661327865)));
    }
    var_22 = (~var_2);
    #pragma endscop
}
