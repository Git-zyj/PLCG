/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_4;
    var_11 |= ((((min(0, var_9)) ? (~var_3) : (min(var_5, -374131186)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] |= (((min((((arr_0 [i_0]) + var_1)), (arr_0 [i_0]))) * 52423));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (((arr_3 [i_0] [i_1] [i_0]) | ((var_6 ? ((var_4 ? (arr_0 [i_1]) : 1)) : 1))));
            var_14 -= ((((((((arr_1 [i_0] [i_1]) & 13113)) ^ 13111))) | ((((((arr_4 [i_0] [i_1]) ? var_6 : (arr_3 [i_1] [i_1] [i_0])))) ? var_7 : 1))));
            arr_5 [i_0] [i_0] &= -226621053;
        }

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_15 = ((((1 ? var_8 : (((((arr_3 [i_0] [i_0] [i_0]) || (arr_0 [i_0])))))))) ? -226621052 : (((((var_7 | (arr_7 [i_0] [i_0] [i_0])))) ? ((var_0 ? (arr_1 [i_2] [i_0]) : 0)) : var_2)));
            var_16 = 226621053;
            arr_9 [i_0] [i_2] [i_2] = var_7;
            var_17 -= ((((((((arr_8 [i_0] [i_0] [i_0]) + 2147483647)) >> (var_8 - 13480633457319593071)))) ? 1 : (((arr_7 [i_0] [6] [i_2]) / 226621040))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_18 = ((((((((447182286 ? var_4 : var_9))) ? -48059267330975510 : ((min(2197291605, 52424)))))) ? (arr_7 [i_0] [i_0] [i_4]) : 226621045));
                var_19 |= (arr_13 [i_0] [i_3] [i_0]);
                var_20 |= ((+((-var_3 ? (((arr_3 [i_0] [i_0] [i_0]) ? var_0 : var_4)) : 226621053))));
                arr_16 [i_0] [i_3] [i_4] = (((((((arr_11 [i_3] [i_4]) % var_5)))) ? ((((((arr_7 [i_0] [i_3] [i_4]) ? 52443 : -226621049))) ? (24 * 226621065) : 7618488009977668217)) : 11805));
            }
            arr_17 [i_0] [i_0] [i_3] &= -97;
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_22 [i_0] [i_5] [i_0] |= (((((arr_15 [i_0] [i_5]) ? (arr_15 [i_0] [i_5]) : (arr_12 [i_0])))) ? (min((arr_15 [i_0] [i_0]), (arr_13 [i_0] [i_5] [i_5]))) : ((min(226621054, 1))));
            var_21 = 10;
        }
    }
    var_22 = 12953;
    var_23 = min(((14341372361528214307 ? var_9 : (18446744073709551615 ^ 136))), -48);
    #pragma endscop
}
