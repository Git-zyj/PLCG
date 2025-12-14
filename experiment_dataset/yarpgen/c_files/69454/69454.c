/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = ((!((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        arr_2 [12] [i_0] &= (arr_0 [i_0] [i_0]);
        var_18 &= (min((arr_1 [i_0] [i_0]), (((~(max(var_7, var_1)))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_19 = (min(var_6, (((var_6 <= (arr_1 [i_0] [i_1]))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [20] [i_0] [i_0] [i_0] = ((min((arr_3 [i_0] [i_1] [1]), (var_6 > var_13))));
                var_20 = ((~(arr_3 [i_2] [i_1] [i_0])));
                var_21 -= ((max(((var_10 ? 2543409216434530822 : (arr_7 [i_0] [i_0] [i_0]))), (~1049549195284594261))));
                var_22 = (((max(var_15, (arr_0 [i_1] [i_0]))) <= (!var_3)));
            }
        }
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_23 = (max(var_23, ((max((max((arr_5 [i_3 + 4]), var_0)), (arr_7 [i_3 - 1] [i_3 - 2] [i_3 + 4]))))));
        var_24 = arr_1 [16] [i_3];
        var_25 -= (max(var_13, (min(var_14, (min(var_14, -1049549195284594261))))));
    }
    var_26 -= var_7;
    var_27 = var_15;
    #pragma endscop
}
