/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_16 = (((((((-1 - (arr_9 [i_1])))) ? 20 : (arr_4 [17] [i_1] [i_1])))) ? (((((min((arr_3 [5]), (arr_2 [20] [i_1] [13])))) ? (arr_2 [i_0] [i_1] [i_3]) : (arr_2 [i_0] [19] [i_3])))) : (min((arr_3 [i_3]), (arr_4 [i_3] [i_3] [i_3]))));
                        arr_10 [i_1] [i_1] [5] = ((arr_7 [i_3] [9] [i_1]) ? var_0 : (((0 << (((arr_3 [i_2]) + 9912))))));

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_17 = (max(var_17, ((((arr_9 [i_3]) >> (min(0, 611818947)))))));
                            var_18 = -var_9;
                            var_19 = ((((((arr_8 [i_4 - 2] [i_4 + 3]) >> (((arr_8 [i_4 + 1] [i_4 + 3]) - 54))))) || (arr_8 [i_4 - 1] [i_4 + 3])));
                            var_20 = (max(var_20, ((max((arr_13 [i_0] [i_1] [14] [i_4 + 2] [i_4 + 2] [2]), (arr_13 [i_3] [11] [1] [i_4 - 1] [i_4 - 1] [i_0]))))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_18 [i_1] [i_5] = ((!(((~(arr_4 [i_2] [i_3] [i_2]))))));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [17] = (((max((arr_13 [i_5] [i_5] [i_3] [2] [i_1] [i_0]), ((((arr_13 [i_0] [i_3] [5] [i_1] [i_0] [i_0]) * 1))))) <= (arr_2 [i_0] [i_0] [6])));
                            arr_20 [i_5] [20] [i_2] [i_1] [11] [i_0] = (max((((arr_1 [i_0]) ^ (254 << 1))), (!var_13)));
                            arr_21 [i_0] [i_0] [i_0] = var_4;
                        }
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        arr_24 [i_6 + 2] [15] [i_1] [i_1] [i_0] = (((((~(arr_14 [i_0] [i_1] [i_0] [i_6] [i_0] [i_6 + 4] [i_6])))) ? 14288056678334325083 : (((arr_14 [i_1] [i_1] [i_2] [i_6] [i_0] [i_6 - 1] [i_6]) ? (arr_14 [i_0] [i_0] [i_2] [i_2] [i_1] [i_6 + 2] [i_0]) : (arr_14 [i_1] [6] [i_1] [i_6] [i_6] [i_6 - 1] [i_6 + 2])))));

                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            var_21 = (max(var_21, (arr_14 [i_0] [1] [i_1] [i_2] [i_6] [i_7] [1])));
                            arr_28 [i_0] [i_6] [i_7] = 1;
                            var_22 = (max(var_22, (arr_26 [i_2] [i_6 + 3] [i_6 + 3] [i_7 + 3] [i_7 - 3])));
                        }
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_33 [i_0] [i_1] [i_1] [i_2] [i_1] [i_8] = ((((-655084685 - ((min(1, (arr_14 [i_0] [i_1] [12] [i_2] [i_2] [i_8] [i_8]))))))) ? (max(1, (~11880194427343019042))) : ((((((((arr_11 [i_8] [i_1] [i_0]) >> var_13))) && (((arr_4 [i_0] [i_1] [i_2]) < (arr_3 [2]))))))));
                        var_23 -= var_0;
                    }
                    var_24 = (~1);
                }
            }
        }
    }
    #pragma endscop
}
