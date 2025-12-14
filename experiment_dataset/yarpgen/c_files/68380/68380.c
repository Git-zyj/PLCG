/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (((min((((arr_5 [i_0] [i_0]) >> (((arr_7 [i_0] [i_1] [i_2]) - 20649)))), (((115 ? (arr_6 [i_2]) : var_6))))) != ((118 ? (min((arr_8 [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_3] [i_0]))) : (~127)))));
                        var_21 = ((((((var_7 ? -119 : (1 | 112))) + 2147483647)) >> (255 - 238)));
                        arr_12 [i_0] [i_1] [i_0] = (min((((((6115444233673954914 ? 127 : -1))) ? (((max(141, 143)))) : 12662)), 835));
                        var_22 = (max(159, ((max(1, 10)))));
                    }
                    arr_13 [i_2] [6] [i_0] &= (max(((22922 >> (((min(var_1, (-127 - 1))) + 7453890727493312699)))), ((min(65535, 5)))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_23 = (((max(var_3, var_3))) ? var_5 : ((((((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]) && 65535)) ? ((0 * (arr_9 [i_4] [i_4] [i_4] [i_4]))) : (0 | 1)))));
        var_24 = (max(var_24, (((var_1 == ((182 ^ (max((arr_0 [i_4]), (arr_2 [i_4]))))))))));
        var_25 = (max((min((min(var_13, 150)), ((max(2184868068, 115))))), (arr_6 [1])));
        arr_17 [i_4] = (((((((arr_8 [10] [i_4] [i_4]) <= ((var_17 ? 2644935343 : var_13)))))) % (max((max(36028797018963967, (arr_5 [14] [14]))), (((-(arr_1 [i_4]))))))));
    }
    var_26 = (max(var_11, var_0));
    var_27 = 128;
    #pragma endscop
}
