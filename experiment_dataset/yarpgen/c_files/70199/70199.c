/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((+(((var_0 | var_8) ^ ((var_9 ? var_3 : var_8))))));
    var_20 *= var_15;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (min(var_21, ((max(((((min((arr_0 [i_0] [i_0]), var_12))) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] &= (arr_1 [i_0]);
        var_22 = (max(var_22, ((max(var_9, (((((26892 >> (-13711 + 13741)))) ? ((((var_18 > (arr_1 [i_0]))))) : ((0 ? 9071360677837985928 : 26898)))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_23 = (((((((arr_0 [i_1] [1]) | (arr_4 [i_1] [10])))) ? (arr_1 [i_1]) : ((max((arr_4 [2] [i_1]), (arr_0 [i_1] [i_1])))))));
        var_24 = (max(var_24, var_16));
        var_25 = (arr_4 [i_1] [i_1]);
        var_26 = ((((4294967295 ? -1158215194 : 3226355566231252954)) << ((((-1158215194 <= var_18) != (arr_0 [i_1] [i_1]))))));

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                var_27 += ((~(0 + 50)));
                var_28 = ((((((arr_11 [i_3 + 1] [i_2] [i_1] [i_1]) ? var_3 : (arr_11 [i_1] [i_2] [i_1] [i_1])))) || -74));
                var_29 = 5374;
                arr_12 [4] |= (arr_7 [i_1] [4]);
            }
            var_30 = (max(((max((arr_0 [i_1] [i_1]), var_11))), (2097024 / 38986)));
            var_31 = ((min((arr_9 [i_1] [i_1] [i_1] [i_2 - 2]), (arr_0 [i_2] [i_1]))));
        }
    }
    #pragma endscop
}
