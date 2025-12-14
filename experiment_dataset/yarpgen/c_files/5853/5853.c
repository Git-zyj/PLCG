/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 += ((((arr_1 [i_0 + 2] [i_0 - 1]) / (arr_1 [i_0 + 2] [i_0 - 1]))) - (arr_1 [i_0 + 1] [i_0 + 2]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 6;i_4 += 1)
                        {
                            {
                                var_21 = 3252774630373301418;
                                arr_14 [i_0] [i_2] [i_3] |= 3252774630373301428;
                                var_22 = ((((15193969443336250210 ? (arr_12 [i_4 - 3] [i_0] [i_0] [i_0]) : (min(var_12, 15193969443336250197)))) - ((max(-1638524577, ((-(arr_3 [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
                var_23 = (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1]);
                arr_15 [i_0] = (((((arr_8 [i_1] [i_0 + 2] [i_1] [i_1] [i_0 + 2] [i_0 - 1]) ? (arr_10 [i_1] [i_0] [i_0] [i_0] [1]) : (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0]))) % (arr_8 [i_0 + 1] [8] [i_1] [i_1] [i_0 + 1] [i_0 + 2])));
                var_24 = (min((min(-1638524577, (max(3677035876183848610, (arr_12 [i_0] [i_0] [i_1] [8]))))), -1));
            }
        }
    }
    var_25 &= var_2;
    var_26 = ((((min(((65535 ? var_14 : var_5)), (var_11 + var_18)))) ? -var_13 : (((((1 ? var_4 : var_6))) ? var_6 : -var_18))));
    var_27 = (~var_15);
    #pragma endscop
}
