/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_0 [i_0])));
        var_19 = (min(var_19, (((~(min(((min((arr_0 [i_0]), var_7))), (~var_4))))))));
    }

    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_5 [7] [i_1] = (min((arr_3 [i_1]), (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_20 ^= (arr_1 [i_2]);
            var_21 = (max((-127 - 1), (arr_6 [i_1] [i_1])));
            var_22 = ((min((8 - var_6), var_10)));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_10 [i_3] = (-9223372036854775807 - 1);
            var_23 = var_4;
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_24 = (min(var_24, (((~(((arr_2 [i_1]) ? ((var_0 ? (arr_3 [i_1]) : 30504)) : (arr_8 [i_1] [i_4] [i_4]))))))));
            var_25 = (((max(var_3, (arr_8 [i_1] [i_1] [i_1])))) ? ((var_14 ? (arr_4 [7]) : ((((arr_4 [i_1]) && (arr_1 [i_4])))))) : (max((arr_7 [i_4]), (arr_7 [i_1]))));
            var_26 = (max(var_26, ((max(((min(16, 0))), (9007190664806400 + var_3))))));
        }
        arr_13 [i_1] = ((!((max(63, 48)))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] [i_5] = (max(((((arr_2 [i_5]) || (arr_2 [i_5])))), (min(var_17, (arr_2 [i_5])))));
        var_27 = 120;
        var_28 = (min(var_28, ((min(((63 | (arr_12 [i_5] [i_5]))), ((min((arr_12 [i_5] [i_5]), (arr_12 [i_5] [i_5])))))))));
    }
    #pragma endscop
}
