/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min(var_12, (((((((48 ? -48 : -59))) ? 48 : -8685358477406661873))))));
        var_13 = (min(-8685358477406661873, 1148417904979476480));
        var_14 = var_6;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = (max(var_15, ((min(((var_10 ? (arr_3 [i_1]) : var_2)), ((var_6 ? 63 : ((var_2 ? 24 : -73)))))))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_1] = (((((arr_5 [i_1]) ? (arr_5 [i_2]) : (arr_5 [i_1])))) ? ((-(arr_5 [i_2]))) : ((-190319039 ^ (arr_5 [i_2]))));
            var_16 *= (min((((!var_3) ? var_7 : ((var_5 ? -62 : 6256)))), ((34008 ? 94 : ((min(1, 1)))))));
            var_17 = (((((arr_1 [i_2]) | var_9))) ? (arr_2 [i_2] [1]) : 3353);
            var_18 = (((((868772691 ? var_11 : 4294967295))) ? (!var_7) : var_4));
        }
        arr_9 [i_1] = (min((((arr_4 [i_1]) + 61)), (min(1, 190319039))));
        arr_10 [i_1] = (min((arr_6 [i_1] [i_1]), var_2));
        var_19 = ((-118 ? (min(660424176, 1)) : (((!(((var_9 ? (arr_2 [3] [3]) : var_11))))))));
    }
    var_20 = ((((var_3 ? (var_1 > 125829120) : var_0)) / 65535));
    var_21 = (((((1290152075 <= var_9) ? (!var_7) : var_11)) / var_11));

    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        var_22 |= (min(-var_6, ((min(-29266, -9223372036854775786)))));
        var_23 = var_2;
    }
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        var_24 = (arr_14 [10] [i_4]);
        var_25 -= (((((0 * (((arr_0 [1]) ? (arr_2 [i_4] [i_4]) : var_6))))) ? var_1 : var_3));
        var_26 -= (((((var_4 >= (arr_0 [i_4 - 1])))) * ((16808459945299666546 ? var_4 : 0))));
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_18 [i_5] = (((!59435) == ((6101 ? var_4 : var_7))));
        arr_19 [i_5] = (((((!(arr_2 [i_5] [i_5])))) >= (min(var_0, (arr_2 [i_5] [i_5])))));
        var_27 |= (min((arr_4 [i_5]), ((17085 ? (((min(212, 255)))) : var_10))));
    }
    #pragma endscop
}
