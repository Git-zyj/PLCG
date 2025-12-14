/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((((min(3448771457, var_4)) >= (var_8 ^ 2537297029))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 = ((((1059268166 ? 2537297049 : 0))) ? (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) : ((3235699151 >> (var_2 - 1057919136))));
        arr_2 [i_0 - 2] = ((((((~(arr_0 [4]))) ^ ((-(arr_1 [2]))))) == ((-(arr_0 [i_0 + 1])))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_12 = (min(var_12, (min(((((arr_5 [i_0 + 1] [i_1 + 1]) && (arr_5 [i_0 + 1] [i_1 + 2])))), ((-(arr_1 [i_0 + 1])))))));
            var_13 = (((max(1599729022, 3722435290) / 33554431)));
            var_14 = ((((((arr_1 [i_0 - 1]) << (3235699124 - 3235699119))))) ? ((var_8 ? (var_6 % 3246097201) : ((7 ? (arr_0 [i_0]) : (arr_1 [i_1]))))) : (((arr_0 [i_0 - 1]) | (var_6 >= var_8))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_15 = (196608 ? (4294967286 ^ 4294967295) : (arr_0 [i_0 - 2]));
            arr_9 [i_2] [i_2] [i_2 - 1] = (~50331648);
            var_16 = ((((var_6 % (arr_7 [i_0] [i_2]))) == var_3));
            var_17 = (((arr_4 [i_2 + 1]) == var_5));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_18 = (((1024093743 ? (arr_3 [i_0 + 1] [i_0 - 1]) : 3448771452)) * (arr_3 [i_0 + 1] [i_3 + 1]));
            var_19 |= (-((~(arr_4 [i_3]))));
            arr_13 [i_3] = var_6;
            arr_14 [i_3] = arr_1 [i_0];
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
        {
            arr_18 [i_4] = 365957489;
            var_20 = -134217727;
        }
    }
    var_21 = (var_1 ? 1848035125 : var_1);
    #pragma endscop
}
