/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, var_5));
                    var_19 = ((((max(var_13, (arr_0 [i_2 + 1] [i_2 - 2])))) << ((((arr_0 [i_2 + 1] [i_2 + 1]) || (arr_0 [i_2 - 2] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((0 % (((16460278073606911986 || (arr_11 [i_1] [i_1] [i_4]))))));
                                var_20 = var_11;
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_2 - 2] [7] = (((((var_4 ? var_7 : 390812845))) | (min(((var_1 ? (arr_0 [4] [i_1]) : 1986466000102639629)), (arr_3 [i_2 - 2] [i_2 + 1])))));
                }
            }
        }
    }
    var_21 = ((47041 < (((((0 & -1) < (-9223372036854775807 - 1)))))));
    #pragma endscop
}
