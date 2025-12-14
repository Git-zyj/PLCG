/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((65526 ? 32512 : 1925468748)))));
    var_13 = (((((15118434676570060249 ? 33024 : 1))) ? ((var_3 ? (max(3328309397139491367, var_7)) : 33045)) : ((min((min(var_7, var_1)), var_4)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~((~(~0)))));
        arr_4 [i_0] = (((arr_0 [i_0]) ? ((((!(arr_0 [i_0]))))) : (max((arr_0 [i_0]), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [4] [4] [i_0] [i_0] [i_4] &= ((((4004937547845769787 * (arr_1 [i_1 + 1]))) / ((113 ? (((32512 ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : (arr_16 [16] [16] [i_0] [i_3] [i_4 - 2])))) : ((2658296208284570196 ? 1249790108007726770 : 32515))))));
                                arr_18 [i_3] = var_8;
                                arr_19 [18] [i_3] [i_2 - 3] [i_3] [11] = ((((min((~var_9), var_1))) ? ((min((arr_15 [i_4 + 2] [i_2 + 3] [i_1 + 1] [i_1 + 1] [i_0] [i_0]), (arr_9 [i_4 + 2] [i_4])))) : (min((arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3] [i_3] [i_2]), (((arr_6 [i_0] [i_2] [i_3]) ? (arr_6 [i_0] [i_0] [i_0]) : 3757431182))))));
                            }
                        }
                    }
                    arr_20 [i_1] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2 + 2]);
                }
            }
        }
        arr_21 [i_0] [i_0] = (min((((~(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (min(537536114, (arr_5 [i_0] [14]))) : (!0)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_14 = ((~(arr_12 [20] [i_5] [i_5] [i_5] [i_5] [20])));
        arr_25 [i_5] [i_5] = ((arr_0 [i_5]) ? ((32512 ? var_4 : var_10)) : var_9);
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                {
                    var_15 = (min(var_15, (((7 << (var_5 != var_5))))));
                    var_16 = (max(var_16, ((((arr_5 [i_6 - 2] [i_7 - 2]) ? (arr_5 [i_6 - 1] [i_7 + 2]) : (arr_30 [i_7 - 1] [i_7]))))));
                }
            }
        }
        arr_31 [0] [i_5] = (arr_23 [i_5] [i_5]);
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = ((((((min(-2260575058042169471, 10413))) ? ((min(20, var_4))) : (min(6654775120783624038, 139)))) - (((min((arr_29 [i_8] [i_8] [i_8] [i_8]), (arr_7 [i_8] [i_8])))))));
        var_17 = ((33023 <= ((max(13145553898171208485, (arr_33 [i_8]))))));
    }
    #pragma endscop
}
