/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((9710014626010059742 ? -1 : var_4))) ? -1177351316 : 18)) | (((1 || 1) ? -1 : ((1 ? var_8 : 6387957053059737543))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((~(((!(arr_2 [i_0] [i_1]))))));
                var_13 = ((-(arr_5 [i_1] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [5] [i_0] [i_0] [i_0] = (3084442275 ? 21365 : 1);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) + 2147483647)) >> (((arr_7 [i_1] [i_1] [i_1]) - 47844)))) != (((((arr_8 [i_0] [i_0]) + 2147483647)) >> (((arr_11 [i_4] [i_2] [i_0]) + 561))))))) <= (arr_5 [i_0] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((((-var_10 ? (var_4 || 1210525031) : var_1)) > var_8));
    #pragma endscop
}
