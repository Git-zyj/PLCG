/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(-658011836, -658011844)))) && (7609 + -20348));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_19 = (max(((~(arr_0 [i_2 + 1]))), (max(((11986105351264454740 ? -13248 : 21854)), ((var_6 << (((((arr_4 [i_1]) + 532055545)) - 26))))))));
                        arr_11 [i_0] [i_0] [i_0] [2] [2] [i_0] = (((~-658011836) ? ((-(arr_5 [i_2 - 1]))) : (((arr_3 [i_0]) | 1))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, ((min(((var_9 ? (((-(arr_4 [3])))) : (max((arr_12 [i_0] [i_1] [i_1]), -5886120154426122739)))), (((var_2 <= (max(-658011836, var_14))))))))));
                        arr_14 [i_2] [9] [11] = (max((((59125 ? 11986105351264454769 : 3977))), (max(((var_5 ? -2327902073669728773 : 15714312086141020412)), ((max((arr_3 [i_1]), (arr_8 [i_0] [i_1] [i_2] [i_4] [i_4] [i_1]))))))));
                        arr_15 [i_0] [i_0] [i_0] [12] [12] = (~((20375 ? (arr_7 [i_0] [i_2] [i_2]) : -1)));
                    }
                    var_21 = (max((max(18446744073709551615, 658011831)), var_12));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_5] = (min(723348979, ((-4403 ? -14006 : 723348979))));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_22 = -32601;
                    arr_26 [i_5] [i_5 + 1] [i_5] = (max((max((max((arr_17 [i_5]), (arr_22 [i_5] [i_5]))), (((var_2 ? var_13 : var_3))))), 1));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_23 = (((((~(!-658011844)))) ? ((1517197583 ? -1 : 50857)) : ((((111 < 1) ? (!var_0) : (max(1, 175073044)))))));
                                arr_32 [i_5] = (max(var_3, (max((min((arr_21 [i_5] [i_7] [i_5]), 47617)), (arr_17 [i_5])))));
                            }
                        }
                    }
                    var_24 = ((((((1371913706 <= 1857938509520090586) % (arr_20 [i_5] [i_5 + 1] [i_5 + 1])))) | (max((arr_19 [i_5]), ((max((arr_31 [i_5] [i_6] [i_7] [i_7]), (arr_29 [i_5] [i_6] [i_7] [i_5]))))))));
                    arr_33 [i_5] [i_6] [4] = (((~var_8) ? (38350 <= -658011844) : (((min(1023, 65535)) * 1))));
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_5] [i_6] [i_5] [7] = (max((max(1, ((-(arr_25 [i_5] [3] [i_10] [i_6]))))), ((((-658011839 <= 15) != (arr_25 [i_5] [i_5 + 1] [i_5] [i_5]))))));
                    var_25 = (max(var_4, (arr_21 [i_5] [i_6] [i_6])));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    arr_41 [i_5] [i_5] [i_11] [11] = (((((1 ? (arr_21 [i_5] [i_6] [i_5]) : var_16))) ? (((arr_38 [i_11] [i_5 + 3] [i_6] [i_5 + 3]) | 536870911)) : 14678));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_26 = (arr_20 [i_11] [4] [i_13]);
                                var_27 = (((-536870912 + 47601) || (~50857)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
