/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max((~var_4), ((2998352467 ? var_4 : 1296614820)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_12 = (max(var_12, (((1296614847 <= (((2998352482 - (arr_2 [i_0 + 3])))))))));
            arr_5 [i_1] = (((arr_4 [i_0 + 3]) >> (((min((max(var_6, var_5)), var_7)) - 77))));
        }
        arr_6 [i_0 + 2] = (min((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2]))), (((arr_1 [i_0 - 1]) << (((arr_1 [i_0 - 2]) - 3448078557))))));
        var_13 = (max(var_13, (1 || 946860128)));
        var_14 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_11 [i_2 + 1] = (((arr_7 [i_2 + 1]) << (var_0 - 4649)));

        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            arr_14 [i_2 + 1] [i_3] [i_2 + 1] = (arr_12 [i_3] [i_3 - 2] [i_3 - 2]);
            arr_15 [i_2] [i_2] = -1324308822;
        }
        arr_16 [i_2] = (arr_1 [i_2 + 1]);
        arr_17 [i_2] = var_0;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_15 = (max(var_15, (arr_4 [i_4])));
        var_16 = (((arr_19 [i_4]) ? var_3 : 2998352496));
    }
    #pragma endscop
}
