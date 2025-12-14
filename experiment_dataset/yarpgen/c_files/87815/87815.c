/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (((min((1138913005175084169 & var_0), 1)) ^ (((~var_5) ^ (((3319444192618856390 ? 1 : (-32767 - 1))))))));
        var_19 = -0;
        var_20 = (max((((((min(281474976710655, 0))) ? (33593 ^ 1) : -389))), ((128 ? (((arr_1 [9] [i_0]) ? -1138913005175084170 : var_8)) : 18446744073709551612))));
        var_21 = 31943;
        var_22 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_23 = (arr_3 [17] [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_24 = (((arr_14 [i_4] [5] [i_3] [i_1] [i_1]) ? (arr_14 [i_4] [i_2] [i_2] [i_4] [9]) : var_7));
                        var_25 = var_15;
                        var_26 = (!(arr_4 [i_3] [i_4]));
                    }
                }
            }
            var_27 = var_10;
            var_28 = 281474976710655;
        }
        var_29 = var_6;
        var_30 = ((!(arr_3 [i_1] [i_1])));
        var_31 = 995232216;
        var_32 |= (112 && 0);
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_33 = (((((((arr_3 [i_5] [i_5]) ? 224 : (arr_4 [i_5] [i_5])))) ? (arr_12 [i_5] [i_5]) : var_1)));
        var_34 += ((max(0, 281474976710653)) & ((((arr_16 [i_5]) - (arr_16 [i_5])))));
        var_35 = (max((min(389, 3410790679248432676)), ((((arr_6 [i_5] [i_5]) ? (arr_6 [i_5] [i_5]) : (arr_6 [i_5] [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_36 = (((((var_11 || (!-389)))) << (1138913005175084169 - 260609145)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_37 &= 412316860416;

                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        var_38 = (((((arr_26 [i_9 - 2] [i_9 - 3] [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 - 3]) < (arr_26 [i_9 - 3] [i_9 - 1] [i_9 - 3] [i_9 - 2] [i_9 - 1] [i_9 - 3]))) ? ((-(arr_26 [i_9 - 2] [i_9 - 2] [i_9 - 3] [i_9 - 1] [i_9 - 2] [i_9 - 2]))) : (min((arr_26 [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_9 - 3] [i_9 - 1] [i_9 + 1]), (arr_26 [i_9 + 1] [i_9 - 3] [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_9 - 1])))));
                        var_39 = (-389 ^ 13);
                    }
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        var_40 = ((min((arr_17 [i_8]), (arr_17 [i_6]))));
                        var_41 = ((max((!var_12), 65519)));
                        var_42 = (--913398619);
                        var_43 = ((((((arr_21 [i_6] [i_8] [i_10 - 2]) ? 1 : (arr_15 [i_6])))) || var_8));
                    }
                    var_44 = ((((min((max(var_12, var_5)), ((((arr_17 [i_6]) && 32)))))) ? -20496 : ((((((1275195097 ? 529210530539578973 : var_17))) ? 165 : 0)))));
                    var_45 = (((((99 ? 388 : -357780570))) ? ((var_4 - (arr_6 [9] [i_8]))) : ((min(9252, (arr_6 [i_7] [i_7]))))));
                }
            }
        }
    }
    var_46 *= var_3;
    var_47 = ((min(1098200670, (var_14 & var_3))));
    var_48 = (max((1 && var_17), (((389 | 1) ? (((0 << (19768 - 19737)))) : var_9))));
    var_49 = ((min((~var_13), (var_7 - 17310235840513641388))));
    #pragma endscop
}
