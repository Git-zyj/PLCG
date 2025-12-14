/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((127 || ((min(var_4, 18446744073709551615))))) ? (min(((4160749568 ? var_10 : var_9)), (((0 ? var_7 : var_7))))) : (max((max(var_10, 10057)), (~var_9)))));
    var_13 |= var_10;
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((arr_4 [i_0] [i_0] [i_0]) >= (arr_4 [i_0] [i_1] [i_1]))));
                var_15 -= ((((((((-1 + 2147483647) >> (((arr_5 [i_0] [i_1]) - 31)))) & ((-10047 ^ (arr_0 [i_1])))))) && -14));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (arr_6 [i_0] [i_1] [i_4]);
                                var_17 = ((arr_12 [i_0] [i_3 - 1] [i_2] [i_2] [i_1] [i_0]) ? ((((2507979289549491034 ? -10058 : 55082)) - (arr_14 [i_0] [i_1] [i_2] [i_0] [i_4]))) : (((arr_4 [i_3 - 1] [i_4] [i_4]) ? (arr_4 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_4 [i_3 - 1] [i_4] [i_4]))));
                                var_18 = (51 | 10441);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
