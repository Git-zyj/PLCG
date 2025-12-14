/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_2] = (1747224882 * 21928);
                            var_19 = (arr_10 [i_3] [i_1] [i_2] [i_0]);
                            var_20 *= (min((((arr_6 [8] [i_1] [i_2] [8]) ? ((12392385402409918625 ? (arr_2 [i_2]) : var_5)) : (max(751916629297911518, var_14)))), (((((max((arr_1 [i_1] [i_3]), var_2))) ? (var_0 ^ var_4) : ((((arr_5 [i_0] [i_1] [0] [i_1]) >= (arr_1 [i_2] [i_1])))))))));
                            var_21 = (((((~(!18035885570903279422)))) ? (((((max((arr_3 [i_0] [i_0]), (arr_9 [i_0] [i_1] [i_2] [i_3])))) ? var_9 : -var_18))) : (min(((28448 ? 0 : 0)), 43594))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_22 = (max(((169272448 ? 1054896729 : (arr_13 [i_4 + 1] [i_5 - 1] [i_4]))), 1));
                                var_23 = ((~((max(-122, -30446)))));
                                var_24 -= ((~(max((~var_4), (arr_8 [i_0] [i_0] [i_4 - 1] [i_5 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_40 [i_7] [i_8] [i_8] [8] [i_7] = ((((((min(1, 0))) / ((715638025 ? var_7 : var_2)))) * 0));
                                var_25 = (((min((max((arr_35 [10]), 2953979655111447592)), (arr_30 [i_7] [i_7] [7] [i_8])))) ? var_4 : (var_13 && 5));
                                var_26 = (min(var_26, var_7));
                                arr_41 [i_7] [i_7] [i_7] [i_7] [i_8] [i_7] = (arr_37 [i_7] [i_8] [6] [6] [15] [15]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_27 = ((((((((((arr_44 [1] [i_8] [1] [i_12 - 3] [1]) < 715638025)))) > (((arr_32 [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_35 [i_7]) : var_4))))) / ((~(arr_32 [i_9] [i_12 + 3] [2] [i_13] [i_13 + 1])))));
                                arr_46 [i_8] [i_8] [i_9] [i_12] [i_13 + 1] = (max((arr_31 [i_7] [i_8] [i_12 - 2] [i_13 - 2]), var_10));
                                var_28 = (max((((arr_37 [i_7] [i_8] [i_9] [i_9] [i_12] [i_13 - 3]) ? ((21940 ? 1 : -118)) : var_13)), ((max(-1, 1)))));
                                arr_47 [i_8] [i_13] [i_8] [i_8] [i_13] = (((min(var_3, ((max(0, (arr_43 [i_12 - 4] [i_8] [i_8] [5]))))))) ? (arr_37 [i_7] [i_8] [i_9] [1] [i_12 - 2] [1]) : (!var_11));
                                var_29 = ((max((arr_25 [i_7] [i_8]), (arr_25 [i_7] [i_7]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                arr_53 [i_7] [i_8] [12] [i_14] [i_8] = (((max(-22613, 43593))));
                                var_30 = (max(var_30, ((((arr_22 [19]) <= var_8)))));
                                var_31 += ((6725067919752570929 ? 180 : 1));
                                var_32 = (max(var_32, 91));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
