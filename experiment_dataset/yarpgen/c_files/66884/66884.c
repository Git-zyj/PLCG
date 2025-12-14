/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((+(max((9434555776218916773 - 78), (-2147483647 - 1)))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_12 ^= (-2147483647 - 1);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_13 = (min(var_13, (((arr_3 [7] [i_1]) ? ((((var_0 >= (arr_0 [i_0]))))) : var_1))));
            var_14 = (arr_1 [i_0 + 1]);
            var_15 = (max(var_15, ((((((18446744073709551596 ? 299 : (arr_2 [i_0])))) ? (arr_2 [i_0 - 3]) : ((2147483642 >> (var_10 - 100))))))));
            var_16 -= (arr_2 [i_0 - 4]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_17 = (((((2147483644 ? -49 : 6297671318375041045))) ? var_0 : (arr_1 [i_0])));
            arr_6 [i_0] = max((arr_3 [i_0 - 3] [i_0 - 3]), (min((arr_3 [i_0 - 3] [i_0 - 3]), (arr_3 [i_0 - 3] [i_0 - 3]))));
            var_18 ^= var_2;
            arr_7 [i_0] [i_2] = (((((((max((arr_1 [i_2]), (arr_4 [i_0 - 1])))) ? 2147483616 : (arr_1 [i_0 + 1])))) ? 59 : (max((arr_3 [i_0 - 3] [i_0]), 127))));
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_19 = ((((max((arr_10 [i_3] [i_3]), (((-29427 ? 4072702907945936443 : -88)))))) ? 15691051369332244366 : (arr_9 [i_3])));
            var_20 -= (arr_8 [i_4]);
            var_21 = (max(var_21, (((+(max((((arr_9 [i_4]) ? -2147483643 : 109)), (((arr_2 [1]) - (arr_8 [i_4]))))))))));
        }
        /* vectorizable */
        for (int i_5 = 4; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_22 += (((arr_12 [i_5 - 1] [i_5]) ? (arr_12 [i_5 - 4] [i_5 - 1]) : 398204742));
            arr_14 [i_3] [i_5 - 3] [i_3] = (((arr_11 [i_3]) ? (((var_2 <= (arr_12 [i_3] [i_5])))) : 31));
        }
        var_23 = (min(var_23, (((((91 ? 39 : (arr_2 [i_3]))) <= (((arr_8 [0]) / (arr_8 [10]))))))));
        var_24 *= (((arr_2 [i_3]) >= ((max((arr_2 [i_3]), (arr_2 [i_3]))))));
    }
    var_25 ^= var_9;
    var_26 = (((min(var_1, var_10)) / var_5));
    var_27 = (-1554916372 ? ((((var_9 || (((4503395826116608122 ? 12539802824383047613 : 237))))))) : 18446744073709551615);
    #pragma endscop
}
