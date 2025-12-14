/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_8);
    var_17 = (max(var_17, -2118193379039330792));
    var_18 = ((!(!-110)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_2;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_3] = (((((!(arr_8 [i_1 + 3] [i_1 - 3] [i_1 - 3]))))) + (((-2118193379039330813 * var_11) << ((var_11 ? 43 : 41)))));
                                arr_15 [i_4] [i_3] [i_4] [i_2] [i_4] [i_1] [i_0] = (((((~(arr_11 [i_1] [i_4 - 1] [i_4] [i_4])))) ? var_4 : (max((max(685, 14149691973583975566)), (var_4 || 4297052100125576069)))));
                                var_19 = ((((max((arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]), (arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])))) ? ((-(arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]))) : (max((arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]), (arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])))));
                                var_20 = (min(var_20, (((-((59464 ? (arr_8 [i_1] [i_1 + 4] [i_1]) : (arr_8 [i_1] [i_1 + 2] [i_1]))))))));
                            }
                        }
                    }
                }
                var_21 = ((!(((~(max(5371, 16357392004586125784)))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_22 = (min(var_22, -var_12));

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_23 = (min(var_23, ((18738 ? (arr_11 [i_5] [i_5] [4] [i_5 + 3]) : (arr_11 [i_5] [i_5] [6] [i_5 - 1])))));
                                var_24 ^= (arr_8 [8] [i_1] [i_1]);
                            }
                            for (int i_8 = 1; i_8 < 19;i_8 += 1)
                            {
                                var_25 ^= (min((((arr_25 [i_8 + 3] [i_8 + 2] [i_8 + 3] [i_8 + 2] [i_8 + 2]) ? (arr_25 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_8 + 2] [i_8 + 1]) : (arr_25 [i_8 - 1] [i_8 + 4] [i_8] [i_8 + 2] [i_8 + 3]))), 0));
                                var_26 = ((((((var_2 ? (arr_25 [i_8 - 1] [i_6] [i_5] [i_1] [i_0]) : -635407330))) ? 1 : ((var_12 ? var_11 : 13594717614764789246)))));
                            }
                            var_27 = (max(var_27, (((var_14 ? ((min((arr_26 [i_6] [12] [12] [12] [i_0]), var_13))) : ((max((arr_26 [i_0] [8] [i_5] [i_6] [i_6]), (arr_26 [i_0] [12] [i_5] [i_6] [i_5])))))))));
                        }
                    }
                }
                var_28 = var_13;
            }
        }
    }
    var_29 &= 62732;
    #pragma endscop
}
