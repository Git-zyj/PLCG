/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 4026531840;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_17 = (~3882126898);
        arr_3 [i_0 - 1] = (~(((!((((arr_0 [i_0]) ? 0 : (arr_2 [i_0]))))))));
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((arr_2 [i_1 + 1]) ? ((~(((arr_6 [i_1] [i_1]) ? -78 : (arr_2 [12]))))) : ((~(((!(arr_1 [i_1] [i_1]))))))));

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_18 = ((!((((((-(arr_0 [i_1])))) ? 9043619206111028778 : (~287104476244869120))))));
            arr_10 [8] [0] [i_1] &= ((~(arr_0 [i_1])));

            for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_19 = 0;
                var_20 = (min(var_20, (((~((~(arr_2 [i_1]))))))));
            }
            for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_21 = ((~((~(((!(arr_9 [i_1] [i_4]))))))));
                var_22 = arr_2 [i_1 - 2];
                arr_17 [i_1] [i_2] [i_1] = (((arr_8 [i_1] [i_1]) ? (--7458269739470811463) : (~384)));
            }
        }
        var_23 = (min(var_23, (~12)));
        arr_18 [i_1] [i_1] = ((~((~((~(arr_13 [i_1])))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_24 = ((!((((((~(arr_21 [i_5])))) ? (~536739840) : (((arr_5 [2]) ? 8167013231542361304 : 1)))))));
        arr_22 [i_5] = (((((~(~1)))) ? (((!(~47)))) : (~-1)));
        arr_23 [i_5] |= (arr_16 [i_5] [i_5] [i_5]);
        arr_24 [i_5] = ((~(--8388480)));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_27 [i_6] = arr_2 [i_6];
        var_25 = ((!(((1 ? (~1) : -18420841264533559462)))));
        arr_28 [5] = (((arr_25 [i_6]) ? (((-(!1536)))) : ((~((575897802350002176 ? 25902809175992153 : 1202720769))))));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    var_26 = (~(!31279));
                    arr_35 [i_7] [i_7] [i_9] = ((~((~((881285495 ? (arr_0 [i_7]) : -20452))))));
                    arr_36 [i_7] = 0;
                }
            }
        }
    }
    #pragma endscop
}
