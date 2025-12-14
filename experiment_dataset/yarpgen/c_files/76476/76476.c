/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_3 | 1231851823);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_13 = ((var_4 >> (((arr_10 [i_0 + 2] [i_1 - 1] [i_2 - 1] [i_3]) - 58470))));
                        arr_13 [i_0] [2] [i_1 + 1] [i_2] [i_2 - 2] [10] |= var_10;
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_14 = (-(((!(((var_2 ? 1 : var_2)))))));
                        var_15 = (max(var_15, ((-((-(arr_11 [i_0 + 2] [i_1] [i_2 + 1])))))));
                        arr_16 [i_0] [i_1] [i_0] = (1610689244 | (arr_7 [i_2 + 3] [i_2 + 3] [i_1] [i_1]));
                        var_16 = ((var_1 && (((arr_2 [i_1 - 2]) && (arr_2 [i_4 - 1])))));
                        arr_17 [i_0] [i_0 - 1] [i_1] [i_2] [i_2 + 1] [i_1] = (max(((((min((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), var_2))) ? ((((arr_4 [i_4 + 1] [i_1 - 1]) ? -13 : (arr_14 [i_2] [i_1] [i_2] [i_1])))) : var_7)), (max((arr_2 [i_0 + 1]), var_8))));
                    }
                    var_17 = (max((((!(arr_14 [i_1] [i_1 - 2] [i_0 + 1] [i_1])))), (min((139 / 21), var_8))));
                }
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}
