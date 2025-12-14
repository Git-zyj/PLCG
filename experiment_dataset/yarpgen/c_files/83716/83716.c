/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 ^= ((1049760701 ? -100 : -37));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(var_2, (arr_0 [i_0 - 3])))) ? (var_9 + var_2) : 237254976379597702));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_13 = ((~(((arr_1 [i_0 - 3] [i_0 - 1]) ? var_2 : (~-2199024410547892105)))));

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                arr_7 [i_1] = (arr_4 [i_0] [i_1 - 2] [i_2]);
                var_14 = 19096;
                var_15 = 13;
            }
            var_16 *= (((242 ? 7685611750418011213 : -2984868309213307045)));
            var_17 = ((max(((arr_4 [i_0] [i_1 + 1] [8]), -var_5))));
        }

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_18 = (((((arr_9 [i_3 + 4]) && (arr_5 [i_0]))) && (((~(arr_5 [i_0 - 3]))))));
            arr_10 [2] [i_3] [2] &= (((max(var_3, ((232 ? 19 : 25361)))) / (((var_0 ? var_2 : 39124)))));
            var_19 |= ((var_7 % (-8867549688265995562 | 4294967292)));
        }
    }
    #pragma endscop
}
