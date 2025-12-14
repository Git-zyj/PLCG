/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 3] [i_0] = ((8657331921000978604 << (215 - 215)));
                    var_10 &= (~((~(arr_2 [i_2 + 2] [i_1 - 1]))));
                    var_11 = (max(var_11, var_5));
                    var_12 = var_7;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_13 *= (((arr_10 [i_4] [i_4]) & ((min((1956255664 < -735373960), -1)))));
                arr_13 [i_4] [i_4] [i_4] = (arr_11 [i_4] [i_4]);
                var_14 = (arr_10 [i_3] [i_3]);
                arr_14 [i_4] = (min((((9223372036854775807 <= (arr_9 [i_3])))), -1));
            }
        }
    }
    var_15 = (max(1, (9223372036854775801 * var_6)));
    #pragma endscop
}
