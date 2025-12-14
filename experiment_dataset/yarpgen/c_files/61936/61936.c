/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 = var_5;
        var_15 = (min((((35168 ? (((arr_2 [i_0]) ? var_1 : (arr_0 [i_0]))) : ((3173505680805011240 ? -2141768930 : var_6))))), (max(var_0, (((var_8 ? -848530024 : 26766)))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_16 &= (((!-1) ? (((max((!1), (arr_0 [i_0 + 2]))))) : (((min(13900599139842937587, var_0)) ^ (min((arr_4 [i_0]), var_0))))));
            var_17 = var_9;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 -= 558045522;
            var_19 = (arr_5 [i_0 + 1]);
            var_20 = (min((min(var_9, var_12)), ((((arr_7 [1] [i_2] [i_0 + 1]) ? 92 : (arr_7 [i_2] [i_0 - 1] [i_0 + 2]))))));
            var_21 &= (max(-var_9, (arr_3 [i_0 + 1])));
            var_22 = (min(var_22, ((((((1 ^ (max(207, 1239374661))))) ? (((!((min((arr_3 [i_0]), var_10)))))) : (((!((min(var_7, (arr_2 [20]))))))))))));
        }
        var_23 = (((((9113580042105974196 || (~207)))) << (-14 + 44)));
        var_24 = 1;
    }
    var_25 = -var_7;
    var_26 &= ((-(((~30367) ? ((var_8 ? var_3 : var_13)) : var_4))));
    #pragma endscop
}
