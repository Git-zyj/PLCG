/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((max((min(var_6, var_12)), (var_13 != var_16)))) <= ((((var_4 + var_14) < var_13)))));
    var_21 = var_0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_22 += ((((22758 ? 43890 : 1)) * var_14));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = -var_9;
            var_23 = var_15;
            arr_8 [1] [i_0] = ((var_7 & (arr_0 [i_0 + 2])));
            arr_9 [i_0] [i_1] = var_6;
        }
        var_24 = (-4123188636249632835 | 1025418621);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_13 [i_2] = ((~(max((((var_6 | (arr_6 [i_2] [i_2])))), (max(var_11, (arr_0 [1])))))));
        arr_14 [6] [i_2] = (((((((arr_2 [i_2] [6]) > var_8)) && (var_13 * var_12)))) >> (var_0 + 1687798676005400854));
    }
    #pragma endscop
}
