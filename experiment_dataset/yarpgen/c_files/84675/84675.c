/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((max((var_0 >= var_7), var_10))), (((var_4 * var_12) * var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((((max(65512, 19))) ? (((var_6 || (arr_2 [i_1])))) : (arr_2 [i_0])));
                arr_5 [i_1] = (arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] = 3102799151;
                                arr_17 [i_1] = (((arr_10 [i_0] [i_1] [0] [i_1] [i_4]) ? (((max(var_11, var_9)) % (((max(var_5, var_12)))))) : (arr_1 [i_0])));
                                var_17 = (min(var_17, var_10));
                                var_18 |= ((((((arr_0 [i_0] [3]) == var_6))) != ((((max(1192168120, -1718992782))) ? (((arr_13 [i_0] [i_1] [i_0] [i_3] [i_4]) ^ var_12)) : (arr_13 [i_0] [i_0] [i_4] [i_3] [i_4])))));
                                var_19 |= ((((((arr_11 [i_4] [i_1] [i_2] [i_1] [i_0]) % (((arr_11 [i_0] [i_1] [i_2] [i_1] [i_4]) ? var_12 : (arr_3 [1] [1] [1])))))) ? ((((arr_0 [i_0] [i_0]) | (var_9 <= var_10)))) : (max((((arr_6 [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [20]) : (arr_1 [i_1]))), (((arr_3 [i_0] [14] [i_3]) ? (arr_1 [i_3]) : 3102799151))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
