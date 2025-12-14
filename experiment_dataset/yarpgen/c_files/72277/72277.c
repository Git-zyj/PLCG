/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_12 -= (min((((((var_11 % (arr_1 [i_0]))) * (var_8 == var_9)))), (((((min((arr_1 [1]), (arr_1 [i_0]))))) / (min(-9223372036854775803, -23357))))));
        var_13 = ((-(max((-23359 | 23356), (max(110, -1496868840))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_1] = (((((!(arr_0 [i_0])))) & (!var_0)));
            var_14 = (min(var_14, ((7867710685069268648 & (((var_0 >> (1519626949 - 1519626945))))))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_1] [i_2] = (!var_2);
                var_15 = (max(var_15, ((((var_10 <= -4024473737523373547) ^ (var_0 ^ -4024473737523373546))))));
            }
            arr_9 [i_0] [i_1] [i_1] = ((~((((arr_1 [i_0]) != (arr_1 [i_0]))))));
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((-((-(max((arr_11 [i_3]), (arr_3 [i_3] [i_3] [i_3]))))))))));
        var_17 = (min((-64 < var_3), (min((((arr_0 [10]) | (arr_6 [i_3] [i_3] [1]))), (((var_7 < (arr_7 [i_3] [i_3] [20]))))))));
        var_18 = (max(var_18, (min((((max(var_0, (arr_10 [1] [i_3]))) & (((var_11 + (arr_12 [12] [i_3])))))), (((+((((arr_12 [i_3] [i_3]) && (arr_12 [i_3] [i_3])))))))))));
        arr_13 [i_3] [23] = ((-(!-23374)));
    }
    var_19 = ((-((min(var_5, -3697269317601475053)))));
    var_20 ^= ((~((~(min(255, var_6))))));
    var_21 |= (((-963181273 + 2147483647) >> ((((min(22, 16633413672970575654)) <= (((1496868844 >> (4133115952848528428 - 4133115952848528402)))))))));
    #pragma endscop
}
