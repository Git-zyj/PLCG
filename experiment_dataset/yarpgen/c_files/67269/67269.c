/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max(var_1, var_1));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((!(arr_6 [i_0] [i_0] [i_0] [i_2])));
                    arr_8 [i_2] = var_9;
                    var_12 = var_9;
                }
            }
        }
        var_13 = ((var_9 | (((8727598557727324744 >= (arr_3 [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_11 [i_3] = var_6;
        arr_12 [i_3] = (((8727598557727324744 % (arr_9 [i_3 + 1]))) == var_0);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_14 ^= (arr_9 [i_3 + 1]);
            var_15 = arr_9 [i_3 + 1];
            arr_16 [i_3 + 1] [i_3] = (((var_1 + 2147483647) << (((((max((((arr_13 [i_3]) ? var_1 : var_4)), var_4)) + 59)) - 24))));
            arr_17 [i_3] [23] [i_3] = ((var_3 ^ (arr_13 [i_3])));
            arr_18 [24] [24] |= (!var_1);
        }
    }
    var_16 = var_7;
    var_17 = ((((var_3 + (!var_3))) + ((((var_1 < (var_8 > var_0)))))));
    #pragma endscop
}
