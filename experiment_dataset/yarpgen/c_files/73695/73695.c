/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = ((-(((!(arr_1 [i_0 - 4] [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = ((!((!(arr_8 [i_0 + 1] [i_3 - 2])))));
                                var_13 = ((!((((-(arr_3 [i_0 + 1] [i_1] [i_4])))))));
                                var_14 = (((-(arr_9 [i_0] [i_1] [i_2] [i_3 - 2] [i_3] [i_4] [i_4]))));
                            }
                        }
                    }
                    var_15 = ((~((-(arr_10 [i_0] [i_1 + 1] [i_1] [i_0])))));
                    var_16 = (-(!13397774126952111286));
                }
            }
        }
    }
    #pragma endscop
}
