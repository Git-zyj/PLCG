/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((((var_4 % (arr_1 [i_0] [i_1])))) ? (max(((-1 ? var_0 : var_4)), (min((arr_4 [i_0] [i_1]), var_12)))) : (((65521 ? 2147352576 : (var_7 + 1)))));
                var_19 = ((((11 || (arr_4 [i_1] [i_0]))) ? (((((var_14 * (arr_6 [i_1])))) ? (~var_13) : var_17)) : (((arr_0 [i_1] [i_1]) % (arr_2 [i_0])))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [i_0] [i_1] = min((((((((arr_9 [i_1] [i_0] [i_2]) == var_0)))) | (max(var_6, var_17)))), (((((max(0, -117))) < (arr_7 [i_0] [i_0] [i_0])))));
                    arr_11 [i_2] [i_1] [i_0] [i_0] = (~(min((0 != 192), (max((arr_3 [i_1] [i_1]), (-32767 - 1))))));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = max((((((var_6 ? (arr_7 [i_2] [10] [10]) : var_10))) ? (min(0, var_2)) : var_14)), (max(((min(var_5, 0))), (22674778 + var_5))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (max((min(-1, 12)), (4160749568 || -1)));
                    var_20 = (min(((~((min(120, var_12))))), (var_11 - 40)));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_21 = (-(((!(((var_12 ? var_11 : 1)))))));
                    var_22 += (min((arr_4 [i_1] [i_3]), ((min(((min(0, 32291))), (min((arr_15 [i_0] [i_3]), (arr_14 [i_0] [i_1] [i_3]))))))));
                    var_23 ^= var_5;
                    arr_18 [i_0] [i_0] [i_3] [4] = ((((max((((-12 ? var_9 : var_5))), ((var_8 ? var_4 : var_17))))) ? (arr_1 [i_0] [i_0]) : var_9));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_24 += (511 ? (((((!(arr_16 [1] [i_1]))) ? (arr_14 [i_0] [i_1] [i_3]) : ((max(var_1, var_5)))))) : ((((min(var_12, var_4))) * (((arr_15 [i_0] [i_4]) ? var_16 : var_17)))));
                                arr_24 [i_0] [i_1] [i_3] [i_1] = -1119188426;
                                var_25 ^= (min(var_16, (((((var_7 ? (arr_14 [i_0] [i_0] [i_4]) : var_9))) ? ((var_10 ? (arr_16 [16] [i_1]) : var_9)) : -var_7))));
                                var_26 = (min(var_26, (((~(min(((var_16 ? (arr_19 [i_0]) : var_2)), (max(var_7, var_14)))))))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_27 [i_6] = (237 * -4);
                    var_27 = (min(var_27, (min((((var_6 ? (var_11 | -30607) : var_5))), (min(var_17, ((max(174, (arr_9 [i_0] [i_1] [i_6]))))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_28 = (((!var_4) * ((((arr_33 [9] [i_1] [i_0] [i_8 + 1] [i_8 + 1] [i_8] [i_0]) < ((((arr_32 [i_0] [i_1] [i_6] [i_6] [i_8]) ? var_2 : (arr_7 [1] [1] [i_1])))))))));
                                arr_34 [i_6] [i_6] [3] [i_6] [i_1] [i_6] [i_0] = (min(1, -1));
                                arr_35 [i_8] [i_8] [i_6] [i_6] = (((min((!3048943285), (min(-26615, 3211))))) ? 15 : -18117);
                                var_29 = ((min((max(var_10, 192), (var_13 + -32764)))));
                                var_30 = 106;
                            }
                        }
                    }
                    var_31 = ((~((max((arr_31 [i_6]), (arr_31 [i_6]))))));
                }
            }
        }
    }
    var_32 = ((min((min(4276496340, var_2)), (-20798 - var_17))) <= ((max(var_4, var_9))));
    var_33 = ((((((((var_2 ? var_10 : 192))) ? (var_2 == var_13) : ((min(-92, 15725)))))) ? -486 : ((4294967295 ? (var_13 | var_15) : (~-433968474)))));
    #pragma endscop
}
