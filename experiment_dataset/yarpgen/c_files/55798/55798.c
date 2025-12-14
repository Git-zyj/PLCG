/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] [i_3] [i_1] [i_2] = (arr_8 [i_0]);
                            arr_13 [i_0] [i_1] [i_2] [i_3] = (min(((max((arr_11 [i_2 - 2] [21] [i_2 - 1] [i_2 - 4]), (arr_6 [i_0])))), (min((min((arr_11 [i_0] [i_1] [i_1] [i_3]), (arr_3 [i_0]))), -48))));
                            var_10 -= (arr_10 [i_0] [i_0]);
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    var_11 = (arr_14 [11]);
                    var_12 = ((-49 || ((((arr_16 [i_1] [i_4 - 3] [i_1] [i_0]) ? (arr_2 [13]) : (((min(19543, -49)))))))));
                    arr_18 [6] [i_1] = (arr_0 [i_0]);
                    var_13 *= (max((max((arr_7 [i_4 + 1] [i_4 - 1] [i_4 - 1]), (((arr_6 [i_0]) ? (arr_14 [9]) : 1)))), ((((((2888032528 ? -1097161214 : 48))) && (((18446744073709551598 % (arr_11 [i_0] [i_0] [0] [6])))))))));
                }
            }
        }
    }
    var_14 = 5722;
    #pragma endscop
}
