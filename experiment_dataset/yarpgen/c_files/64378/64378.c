/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((var_9 ? ((var_0 << (var_6 - 4743)) : (0 ^ var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (((((arr_0 [i_0 - 1] [i_0]) ? (arr_0 [10] [i_0]) : (arr_0 [i_2 + 4] [i_0])))) ? ((max((((arr_0 [i_0] [i_0]) + (arr_2 [i_0] [i_0]))), ((max((arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1]), var_2)))))) : ((18446744073709551600 ? ((var_2 ? -5 : (arr_5 [i_2] [i_0] [i_0] [i_0]))) : (~var_0))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_0 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_0] = (max((((var_8 ? (arr_2 [i_1] [i_1 - 1]) : var_0))), (~0)));
                        var_12 = ((-var_8 + (((((-18788 ? var_0 : 65535))) ? ((-3454426034557186207 ? -19 : (arr_4 [2] [2] [i_2]))) : var_6))));
                        var_13 = ((4092 ? -126 : (((arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 2]) | ((35888059530608640 ? 3220840827353533718 : 6918))))));
                        arr_11 [i_0] = 18446744073709551600;
                        var_14 = (max(var_14, ((((((4215558682 ? ((var_7 ? 22 : -6749722207794822516)) : 0))) ? ((var_9 ? ((28 ? (arr_5 [6] [i_1 + 2] [20] [12]) : (arr_5 [7] [i_1] [7] [i_3]))) : (arr_6 [i_0 - 2] [i_0 - 2] [i_2 - 2] [i_0 - 2]))) : ((((((arr_7 [i_0] [i_1 + 2] [i_2] [i_1]) ? var_6 : var_9))) ? ((max(var_4, var_8))) : (((arr_9 [i_0 - 2] [i_1] [i_2 + 1] [i_3]) - 11)))))))));
                    }
                    arr_12 [i_0] = ((~(((!(arr_0 [i_2 + 3] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
