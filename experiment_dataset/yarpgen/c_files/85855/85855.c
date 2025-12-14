/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((((1 ? 5536139251277984888 : 12875))) ? var_0 : var_1)), 1627421248));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = -1627421248;
                    arr_11 [i_2] [i_2] = ((max((((arr_6 [i_0] [i_0]) + (arr_6 [i_0] [i_0]))), 1627421248)));
                    arr_12 [i_0] [i_2] [i_2] [i_0] = -878281716;
                    var_13 = 7760826620620445337;
                }
            }
        }
        arr_13 [i_0] = (((arr_5 [i_0] [i_0]) ^ var_10));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_21 [i_5] [i_3] [i_3] = ((arr_1 [i_3] [i_3]) ? ((((arr_9 [i_5] [i_3] [i_3]) ? var_0 : (arr_20 [i_3])))) : ((5854721193184086693 ? -5854721193184086693 : 20852)));
                    arr_22 [i_5] [i_5] [i_4] [i_3] = ((((((arr_15 [i_3]) ? (arr_17 [i_3] [i_5]) : (arr_1 [i_3] [i_4])))) || (arr_3 [i_3])));
                }
            }
        }
        arr_23 [i_3] [i_3] = arr_10 [i_3];
    }
    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        arr_27 [i_6] = ((29663 ? 1 : 10945847319446286215));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_14 = var_9;

                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_15 |= ((!(+-29655)));
                        arr_38 [i_6] [i_7] [i_9] = (arr_2 [i_7] [i_8]);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_16 = (max((((((((arr_10 [i_6]) ? var_1 : (arr_5 [i_7] [i_8])))) == (max((arr_33 [i_6] [i_7] [i_8]), (arr_0 [i_6])))))), ((var_6 ? (arr_0 [i_8]) : (arr_34 [i_6] [i_6] [i_6])))));
                        arr_42 [i_6] [i_7] [i_8] [i_10] = (3357216745034888322 | var_6);
                        arr_43 [i_6] [i_6] [i_10] [i_8] [i_8] [i_10] = ((((max(((13860 ? (arr_34 [i_10] [i_7] [i_6]) : (arr_2 [i_8] [i_10]))), ((((arr_3 [i_6]) ? var_6 : (arr_26 [i_8] [i_10]))))))) || (((11543379933637489347 ? (12656 & 878281715) : (arr_3 [i_6]))))));
                        arr_44 [i_6] [i_7] [i_8] [i_10] = (+((~((max((arr_7 [i_10]), var_6))))));
                        arr_45 [i_6] [i_10] [i_8] [i_10] [i_10] [i_10] = -28959;
                    }
                }
            }
        }
        var_17 = ((((((((var_7 ? var_9 : (arr_3 [i_6])))) ? (arr_32 [i_6] [i_6] [i_6] [i_6]) : ((-20136 ? (arr_24 [i_6] [i_6]) : 4053344718589324037))))) ? (arr_1 [i_6] [i_6]) : ((-878281716 ? 21256 : 46881))));
        arr_46 [i_6] = (arr_1 [i_6] [i_6]);
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        arr_49 [i_11] = var_2;

        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_18 = ((-1848440669 & (arr_7 [i_11])));
            var_19 = arr_26 [i_11] [i_12];
        }
        var_20 = ((((((!((var_0 || (arr_24 [i_11] [i_11]))))))) - ((((var_6 && (arr_31 [i_11]))) ? ((((arr_9 [i_11] [i_11] [i_11]) ? var_1 : (arr_6 [i_11] [i_11])))) : (~1457580736304812438)))));
    }
    var_21 = ((878281715 ? 878281687 : -18768));
    #pragma endscop
}
