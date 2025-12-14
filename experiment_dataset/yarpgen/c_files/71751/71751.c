/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (min(15548, 32767));
                var_20 = (min(var_20, (((!((((min((arr_3 [6] [4]), (arr_1 [11] [9]))) * (arr_1 [9] [1])))))))));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_7 [1] [3] [i_1] [10] = min(60, -32757);
                    var_21 = (arr_6 [7] [4]);
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_22 = (min((arr_9 [i_1] [11]), (((!(arr_1 [i_1] [i_3]))))));
                    arr_11 [8] [4] [i_1] [5] = (~(min((arr_0 [i_0] [i_3]), (arr_0 [i_0] [i_1]))));
                    arr_12 [3] [2] [2] [i_1] = ((~(min(3305834946496043162, (arr_0 [i_0] [1])))));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_23 = (max(var_23, ((min(141, (min(115, 126)))))));
                    arr_17 [9] [i_1] [i_1] [7] = (min((min((arr_16 [i_0] [0] [i_1]), (arr_0 [9] [i_4]))), (min((min((arr_10 [3] [i_1] [3] [8]), (arr_5 [8] [10] [6] [i_1]))), (((!(arr_5 [i_1] [8] [7] [i_1]))))))));
                }
                var_24 |= ((+(min((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_0])))));
            }
        }
    }
    var_25 = var_13;
    var_26 = var_9;
    #pragma endscop
}
