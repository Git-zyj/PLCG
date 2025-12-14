/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min((min(1, var_4)), var_14)), var_17));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 ^= 20;

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_20 = (((arr_3 [i_1 - 3] [i_1 - 1] [i_1]) * (arr_3 [i_1 - 2] [i_1 - 1] [i_1])));
            arr_6 [i_1] = var_8;
        }
        var_21 ^= max((((min(20, var_8)) - 1792)), 1);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 = (min((min(((min(-1800, (arr_7 [i_2])))), (min(-20832, 4)))), (arr_8 [i_2])));
        arr_9 [i_2] = min(var_12, 18446744073709551587);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_23 = var_4;
        var_24 ^= (arr_11 [i_3]);
        var_25 -= var_17;
        arr_14 [i_3] = (min(1, 872127481));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_26 -= (157384350 - 1980391205);
        arr_17 [i_4] = ((1 + (arr_15 [i_4])));
        var_27 -= 15611518338742525640;
        arr_18 [i_4] = (arr_10 [i_4]);
    }
    var_28 = var_14;
    var_29 = (max(var_16, var_15));
    #pragma endscop
}
