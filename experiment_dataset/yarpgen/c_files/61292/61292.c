/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 ^= (-144032509 * (min((arr_0 [6]), (((arr_0 [14]) * var_9)))));
        var_16 = ((26 && 0) << ((+(min((arr_1 [i_0 + 1] [i_0 + 1]), 0)))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((((-(max((arr_1 [4] [i_0]), 27601))))) ? ((((var_10 == 49425162) == (arr_2 [i_1] [i_0] [i_0 + 1])))) : (min(-1, ((-(arr_3 [i_0] [i_1])))))));
            var_17 = 6613900292331714383;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = (max((min((!6613900292331714394), var_7)), (-5 || 253)));
            var_18 = (max(var_18, (arr_0 [i_2])));
            var_19 = (min(var_19, ((((((max((max(var_13, var_12)), (0 <= 0))))) | (((1 <= 4529167473197986994) * (min(3, -4183321303507120970)))))))));
            var_20 -= ((((var_13 ? (arr_7 [i_0 + 3]) : (arr_7 [i_0 + 3]))) ^ ((~(arr_7 [i_0 + 2])))));
        }
        arr_10 [10] |= (min((~245), ((((((arr_3 [1] [1]) ^ 253)) ^ ((min(18813, var_14))))))));
    }
    var_21 = (max(var_21, (((((((max(var_5, var_12)) == (89 ^ 8)))) << (((max((-589544249 || var_9), (min(var_12, var_5)))) - 20467)))))));

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_22 = var_14;
        var_23 = (max((var_4 <= var_7), ((max((arr_11 [i_3] [i_3]), (min((arr_11 [i_3] [i_3]), (arr_12 [i_3] [i_3]))))))));
        arr_14 [i_3] = (max((((-2147483647 - 1) & (arr_12 [i_3] [i_3]))), ((min(var_7, (arr_11 [i_3] [i_3]))))));
    }
    var_24 = var_6;
    var_25 = ((var_6 ? (var_6 ^ var_10) : var_14));
    #pragma endscop
}
