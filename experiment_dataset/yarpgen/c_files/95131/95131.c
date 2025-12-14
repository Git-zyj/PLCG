/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = 58;
    var_15 = (((((!((min(var_10, var_6)))))) >= (min(var_2, (((-1574002578 + 2147483647) >> (var_12 + 1208378881)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (((-((237 * (arr_1 [i_0] [i_0]))))) >> (((((arr_2 [i_0]) % (arr_4 [i_1] [i_1] [i_1]))) - 1599)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [7] [i_2] [7] = ((~(arr_4 [i_0] [1] [i_0])));
                            arr_10 [i_0] [i_0] [0] [0] = ((((((arr_7 [i_1] [i_1] [i_1] [i_1]) ? (((var_11 > (arr_5 [i_0] [i_1] [i_2] [i_3])))) : 1161327750))) || (((62 ? (arr_8 [i_0] [i_1] [i_1]) : (((var_8 / (arr_1 [i_0] [4])))))))));
                        }
                    }
                }
            }
        }
    }
    var_17 -= 3780832674;
    #pragma endscop
}
