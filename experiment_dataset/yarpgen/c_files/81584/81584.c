/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_15 += (((!-8270516972588124283) ? ((-((var_11 ? (arr_3 [8] [i_1]) : (arr_5 [i_0]))))) : (((!(arr_3 [i_1 - 1] [i_0 + 4]))))));
                    var_16 = (max(var_16, (((((8270516972588124292 ? 2147483647 : 18446744073709551615))) ? (arr_1 [i_0 + 2]) : (((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))))))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_17 ^= -2282693629969208827;
                    var_18 += (((((((var_12 / (arr_6 [i_0] [i_0])))) ? -103 : ((4 ? (arr_2 [i_0]) : (arr_2 [i_0]))))) > (arr_4 [i_0] [i_1 - 1] [i_1 - 1])));
                    arr_8 [i_1] [i_1] [i_1] = 4294967287;
                }
                arr_9 [i_0] [i_1] = (((~((min(var_8, (arr_3 [i_0] [i_0])))))));
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
