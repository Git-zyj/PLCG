/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [10] = ((var_1 * var_13) != (4294967294 != 1));
        arr_3 [i_0] = (((var_4 | 27043) && ((((((arr_0 [i_0]) + 2147483647)) << (var_4 - 50974))))));
        var_16 = (((((arr_1 [i_0]) % -580742355)) >= (1 - 0)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = (min((max((min((arr_0 [i_1]), var_11)), ((max(var_8, (arr_5 [i_1])))))), (((((min(-3416122570474213595, 1))) || ((((arr_0 [i_1]) % 1))))))));
        var_17 = ((((min((1241988701 || var_14), (max(1, 1))))) >= (min((var_3 && var_13), (((-1697914300 + 2147483647) >> (var_15 + 146)))))));
        arr_7 [i_1] = (max(((((max((arr_0 [i_1]), (arr_4 [i_1]))) != (min(var_4, (arr_5 [i_1])))))), (min((((arr_4 [i_1]) | (arr_1 [i_1]))), (((arr_5 [i_1]) << (((arr_1 [i_1]) + 108))))))));
        arr_8 [i_1] = ((((min((1 * 65533), (((var_15 != (-9223372036854775807 - 1))))))) * (max((997495203 / var_5), ((((-32767 - 1) / var_12)))))));
    }
    var_18 = (min((max((min(var_7, var_13)), (((-101 * (-32767 - 1)))))), (((((max(var_6, 41135))) ^ ((min(32741, var_13))))))));
    var_19 = ((((min((var_11 || var_2), (var_12 < var_7)))) * ((((max(var_15, 2448240392)) <= (((min(-32750, var_14)))))))));
    var_20 = (((min((min(var_11, var_12)), ((min((-32767 - 1), var_6))))) >= ((min((var_0 - var_5), ((max(1, 1))))))));
    var_21 = (max(((max((max(var_3, var_3)), ((((-9223372036854775807 - 1) < -1399)))))), (max((max(var_9, var_5)), (((var_4 << (((-32767 - 1) + 32777)))))))));
    #pragma endscop
}
