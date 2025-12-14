/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = var_3;
    var_13 = var_7;
    var_14 = (0 || var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] = (((((((arr_9 [7] [i_1] [i_1]) ? var_9 : (arr_2 [i_0] [i_1]))))) ^ ((1 ? (((18446744073709551615 == (arr_7 [i_2] [i_2])))) : 1))));
                    arr_11 [i_2] [i_2] [i_2] = ((((((((arr_7 [i_0] [i_2]) || (arr_3 [i_1] [i_0])))) <= 1)) ? 1 : 1));
                    var_15 = ((((!((min((arr_1 [i_1]), (arr_0 [i_1])))))) ? ((-((1 ? 1 : 3)))) : 1));
                }
            }
        }
    }
    #pragma endscop
}
