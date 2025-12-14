/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_8;
    var_17 = ((6062587338854313561 * ((var_7 - (~var_4)))));
    var_18 = ((((min((max(1, 194)), var_8))) ? var_3 : ((max((max(var_8, 148)), var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_19 &= (min(1, (max(9223372036854775807, (arr_3 [i_1 - 3] [i_1 - 1])))));
                    arr_9 [i_1] [i_1] [i_1] = (max(((((arr_6 [i_0] [i_1] [i_0]) - ((((arr_2 [i_0]) != var_14)))))), ((((((arr_0 [i_0]) ? var_2 : var_2))) ? (((max((arr_6 [i_0] [i_1] [i_1]), var_7)))) : (arr_3 [i_0] [i_1 - 1])))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, var_14));
                    var_21 = (min(var_21, (((((!(!var_7))) ? var_10 : (arr_8 [i_0] [i_1 - 3] [i_0] [i_1 - 3]))))));
                    var_22 -= ((!((!(arr_11 [i_0] [i_1] [i_3])))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_23 = (arr_11 [i_1] [i_4 - 1] [i_4 - 1]);
                                var_24 *= ((!(~var_14)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_25 = var_7;
                            arr_24 [i_0] [i_0] [i_1 + 2] [i_6] [i_6] [i_1] = 6062587338854313561;
                            var_26 = (max(var_26, (((((max(2147483647, (((var_6 && (arr_3 [i_0] [i_1 - 2]))))))) ? (!var_2) : (arr_6 [i_1 + 1] [i_0] [i_7 + 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            arr_30 [i_9] [i_1] [i_1] [1] = (!var_5);
                            arr_31 [i_1] [i_8] = 9064;
                            var_27 = (max(var_27, ((max((!var_2), var_13)))));
                            arr_32 [i_1] = (max(148, -3607163422648880038));
                            arr_33 [i_0] [i_1] [i_8 + 3] [i_9] = var_13;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                var_28 ^= (((1 * 6062587338854313561) ? (((var_13 - (((min(var_5, var_7))))))) : ((-(max(var_4, (arr_37 [i_10] [1])))))));
                var_29 ^= min((((!(var_5 & var_0)))), (((((var_15 ? var_11 : var_13))) ? (max(56479, var_11)) : 16052)));
            }
        }
    }
    #pragma endscop
}
