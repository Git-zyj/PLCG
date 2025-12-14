/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 = (max(((((arr_3 [i_0] [0] [i_0 - 1]) == (arr_1 [i_0])))), (arr_3 [i_0] [7] [i_0 - 1])));
                    var_17 ^= ((!((!(((1262459932 ? 11988251525515272061 : 3718412740)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 &= ((!(1 == 0)));
                                arr_11 [i_4] [i_1] [i_2] [i_3] [i_4] = ((((arr_10 [i_0 - 1] [i_0 - 1] [4] [i_0 - 1] [i_1]) * (arr_10 [i_0 - 1] [i_0 - 1] [1] [i_0 - 1] [i_1]))));
                                var_19 = ((4294967295 * (min((arr_4 [i_0 - 1] [i_1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_1] [i_0 - 1])))));
                                var_20 = (min(var_20, var_9));
                                arr_12 [9] [i_1] [4] [5] [13] = (max(((var_2 ? var_10 : 0)), (arr_2 [i_2])));
                            }
                        }
                    }
                    var_21 = ((((arr_5 [i_2] [i_1] [i_1] [14]) ? ((((arr_5 [i_0] [i_1] [i_1] [i_2]) * (arr_1 [i_0 - 1])))) : var_14)));
                }
                var_22 = (min(var_22, (~11)));
                var_23 ^= (arr_0 [i_1]);
            }
        }
    }
    #pragma endscop
}
