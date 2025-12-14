/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min((((87400510 ? 95 : var_14))), var_9));
    var_18 = (min(var_18, ((((~(min(var_1, 99))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_19 *= (arr_2 [i_0] [i_0]);
        arr_4 [i_0] [i_0] |= ((((arr_1 [i_0]) ^ 2115061417954767073)) > ((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 134))))));
    }
    var_20 = var_1;

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_21 = (((arr_10 [i_1] [i_3] [i_3] [i_2]) == ((min((arr_6 [i_2 - 1]), var_4)))));
                var_22 = var_3;
                var_23 = (min(((((min(159, (arr_8 [i_1] [i_2 - 1])))) >> (-var_3 + 506650559))), ((31826 ? (var_10 ^ var_10) : ((var_12 * (arr_11 [i_1])))))));
                var_24 *= ((min((!3445), 4207566785)));
            }
            var_25 |= (((((95 ? (arr_7 [i_2 - 1] [i_2] [i_2 - 1]) : ((min((arr_7 [i_1] [i_2] [i_2]), (arr_10 [i_1] [i_1] [i_1] [i_1]))))))) ? (((1 == 14524342928528694711) | 87400507)) : ((-25 ? 137 : 229))));
            arr_12 [i_1] = (((!1) <= (max(var_11, (arr_11 [i_2 - 1])))));
        }
        arr_13 [i_1] = (((((-(arr_6 [i_1])))) ? (arr_5 [i_1] [i_1]) : (min(var_5, (((95 ? 1 : 1)))))));
        var_26 *= (arr_7 [i_1] [i_1] [i_1]);
        var_27 = (max(var_27, -24095));
    }
    #pragma endscop
}
