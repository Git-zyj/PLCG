/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -13184;
    var_13 = (max(var_13, (((!(max((var_5 >= var_6), 1)))))));
    var_14 = (max(var_14, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [11] [i_2] [i_3 + 3] = ((((~((~(arr_2 [11]))))) | ((((min(var_1, (arr_1 [i_0]))))))));
                            arr_11 [i_2] [i_3] = (arr_6 [i_0] [i_1] [i_2]);
                            var_15 = ((!((max(1048575, 23)))));
                            var_16 ^= ((((max((arr_9 [i_3 - 1] [i_3 + 2] [i_3] [i_3 + 3] [i_3 + 3]), (arr_9 [i_3 - 1] [i_3 + 4] [i_3 - 1] [i_3 + 3] [i_3 + 1])))) * ((-((((arr_0 [i_0] [i_0]) != 17546498745864398953)))))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] = (min((arr_9 [11] [i_0] [i_0] [0] [i_1]), (max(17546498745864398953, 16))));
                var_17 = (min(428973745, (-1650 + 127)));
            }
        }
    }
    #pragma endscop
}
