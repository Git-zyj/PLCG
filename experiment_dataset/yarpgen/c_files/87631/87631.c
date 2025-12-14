/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = 1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 -= var_7;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_15 = (max(var_15, (((~((-((1 ? 2712386427 : 1)))))))));
            arr_5 [i_0] = (max(-7540, 0));
            arr_6 [i_0] [i_0] = var_10;
        }
        var_16 = (((((((var_11 ? var_0 : (arr_3 [i_0] [i_0] [i_0])))) || ((!(arr_1 [i_0] [i_0]))))) ? (((arr_4 [i_0] [i_0] [i_0]) ? (min(var_8, 10869580122669916638)) : ((1 ? 1 : 15364365771918516007)))) : var_7));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (min(var_17, -var_5));
        var_18 *= (min(((max((1 | var_3), (arr_8 [i_2])))), ((((min((arr_2 [i_2]), (arr_3 [i_2] [i_2] [i_2])))) * ((var_2 << (((arr_1 [i_2] [i_2]) + 7979101231678822573))))))));
    }
    #pragma endscop
}
