/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = ((var_5 % (min((var_6 ^ var_0), (min(17728, 2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (max((((!((((arr_1 [i_0]) >> (((arr_4 [i_0] [i_0]) - 2369277039)))))))), ((-(arr_0 [i_1])))));
                arr_6 [i_0] = ((((-(arr_4 [i_0] [i_1]))) % var_4));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = ((arr_12 [i_2 - 2] [i_2 - 3] [i_2 - 1]) | ((((!(arr_0 [12]))))));
                                arr_13 [i_0] [4] [i_0] [i_0] [i_0] [i_0] = 47784;
                                var_13 = (17 <= 124);
                            }
                        }
                    }
                }
                arr_14 [i_0] = 29566;
                var_14 = ((+((((arr_12 [9] [i_1] [i_1]) > 1)))));
            }
        }
    }
    var_15 = (((((var_9 >> (-var_1 - 9774)))) ? 205 : (min((var_4 & 1), var_0))));
    #pragma endscop
}
