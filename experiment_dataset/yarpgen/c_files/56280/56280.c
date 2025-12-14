/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_12 = 17593890788310417300;
        arr_2 [i_0] = (((((((var_6 ? (arr_0 [i_0] [i_0]) : var_6))) ? (((arr_1 [i_0]) ? (arr_1 [i_0 - 2]) : var_1)) : ((((arr_1 [i_0 + 2]) < (arr_0 [i_0] [11])))))) > ((1 ? ((((arr_1 [i_0 - 3]) == var_9))) : (var_8 + var_3)))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_13 = ((var_3 ? 1 : ((min(-13033, var_9)))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_14 = ((((-6 || (arr_1 [i_1 + 1]))) && (arr_6 [i_1] [4] [i_1])));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_15 = (min(var_15, var_8));
                var_16 = (((arr_4 [i_1 + 1]) == (((arr_7 [i_1] [i_1 + 1]) * 0))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_11 [i_2] = (((((var_0 ? 852853285399134299 : (arr_1 [i_1]))) % (arr_10 [i_1 - 1] [i_1 - 1] [i_2]))) * (((-(arr_5 [i_3])))));
                    var_17 |= (arr_8 [i_4]);
                    var_18 = (min(var_18, (arr_8 [i_4])));
                    var_19 = var_2;
                }
            }
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_16 [i_5] = (max(((var_3 ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 3]))), var_1));
            var_20 += ((((((arr_3 [i_1 + 2] [i_1 - 1]) - -8668))) ? var_4 : (((((((arr_8 [i_1]) ? var_2 : var_9)) <= (((-11983 ? var_3 : 8366)))))))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_21 += ((((max((~var_3), (arr_13 [i_1] [9])))) ? ((var_1 ? ((((arr_14 [i_1 + 3]) ? var_6 : 127))) : (arr_4 [i_1 + 2]))) : (((((((arr_4 [i_6]) ? var_10 : (arr_8 [5]))) == var_8))))));
            var_22 = ((!((((arr_10 [i_1 + 2] [i_1 + 1] [i_1 - 1]) - (arr_10 [i_1 + 3] [i_1 - 1] [i_1 + 3]))))));
            var_23 *= ((-(((min((arr_3 [i_1] [i_1 + 2]), (arr_4 [i_1 + 1])))))));
        }
    }
    var_24 = var_5;
    var_25 = (((max((max(2147483647, var_1)), ((max(var_9, var_0))))) ^ (~var_3)));
    #pragma endscop
}
