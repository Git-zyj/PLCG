/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-31 && 2129441260462353591);
    var_18 = var_7;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_19 = (((((arr_1 [i_0 + 1]) < (arr_1 [i_0 - 3]))) ? (min(var_4, -15375)) : (arr_2 [i_0 + 1])));
        var_20 = (max(var_20, (min(((-((max(17220, (arr_2 [i_0 - 2])))))), ((-17207 / (arr_1 [i_0 - 2])))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = (((((arr_9 [9] [i_1] [i_1] [i_1 + 1]) && ((((arr_6 [i_1]) ? -17220 : (arr_7 [i_1] [i_1] [i_2])))))) ? (!692923051) : (!24692)));
                    arr_11 [i_1] [i_2] [i_1] = (max((((-(arr_4 [i_2])))), ((((arr_1 [i_3]) && var_1)))));
                }
            }
        }
        arr_12 [i_1] [i_1] = ((!(~-17221)));
        arr_13 [i_1] = arr_8 [i_1 + 1] [i_1 + 1];
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_17 [19] = 40843;
        arr_18 [i_4] = (((~var_11) ? (arr_15 [i_4] [i_4]) : 40859));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_22 [i_4] [i_5] [i_5] = 3558041337;
            arr_23 [i_5] [i_5] [i_4] = ((-4000843806075658412 ? var_1 : -17221));
            arr_24 [i_4] [i_5] = ((!(arr_0 [i_4] [i_5])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_27 [i_6] [i_6] [i_6] = (10506803009190561664 + 28);
            arr_28 [i_6] [i_6] = (((arr_25 [i_6]) ? var_2 : -29751));
            var_21 = (max(var_21, ((((arr_26 [i_4] [i_6] [i_6]) + -966295166)))));
            arr_29 [i_6] [i_6] = (arr_15 [i_4] [i_6]);
        }
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            var_22 = (max(var_22, ((((arr_2 [i_7 + 1]) >> (37390 - 37369))))));
            arr_32 [i_7] = (((arr_26 [i_7 - 2] [i_7] [i_7]) ? -1155410540 : (arr_21 [i_7 - 1] [i_7 - 1])));
        }
        var_23 = (arr_31 [i_4] [i_4]);
        arr_33 [i_4] = ((var_5 ? (arr_25 [i_4]) : (arr_2 [i_4])));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_24 = (max(((1652881477 ? 40859 : (arr_2 [i_8]))), ((var_4 ? 24713 : (arr_2 [i_8])))));
        var_25 = ((!(((((((arr_20 [i_8] [2]) * (arr_31 [11] [i_8])))) ? ((((!(arr_36 [13]))))) : ((~(arr_34 [i_8] [2]))))))));
        arr_37 [19] = ((((((2147483647 && (!67076096))))) % -1));
        arr_38 [i_8] = ((((((32767 ? (arr_0 [i_8] [i_8]) : (arr_19 [i_8] [i_8] [i_8]))) ^ 18480))) ? (~var_4) : ((((!(((3558041361 ? var_8 : (arr_31 [i_8] [i_8])))))))));
    }
    var_26 = ((-((-var_13 - (1 + var_5)))));
    #pragma endscop
}
