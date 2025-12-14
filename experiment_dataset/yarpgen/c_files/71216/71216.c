/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (min(((147 ? (arr_1 [i_0 - 1] [i_0]) : var_2)), var_5));
        var_10 = ((!(arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_11 = (((((arr_11 [i_1] [i_2]) < (arr_7 [i_1] [i_2]))) ? ((638265473 ? 4085237072 : 3883989242)) : (!var_8)));
            var_12 = ((var_0 && ((!(arr_1 [i_1] [i_1])))));
            var_13 = (max(var_13, (((arr_0 [i_1 - 1]) ? (arr_5 [i_1 + 1]) : (46 != 1428865232)))));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_14 = ((((((arr_2 [i_1]) << var_8))) ? 2866102032 : ((8247641087328346609 ? 41787 : 912292378))));
                var_15 ^= (((var_2 <= 1283635616) ? ((-(arr_4 [3]))) : var_5));
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                arr_16 [i_1] [i_1] [i_1] [21] = ((((((arr_6 [i_1] [i_1]) ^ (arr_4 [i_2])))) - (arr_8 [i_1])));
                var_16 = (((arr_15 [i_1 + 1] [i_4] [i_4]) ? (arr_5 [i_1 + 1]) : (arr_14 [i_1] [i_1 - 2] [0])));
                var_17 = (var_1 / 44197);
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                arr_19 [i_1] [i_1] [i_5] = arr_5 [4];
                var_18 -= ((((((arr_12 [i_1 - 1] [i_1 + 1] [i_1] [1]) ? var_6 : var_5))) ? 44182 : ((1 ? 1307225574 : (arr_12 [i_5] [i_2] [i_1] [i_1])))));
            }
        }
        arr_20 [i_1] [i_1] = (((((arr_17 [15] [i_1] [i_1 - 2] [i_1 - 2]) ? 4085237072 : (arr_4 [i_1]))) ^ 19625));
        arr_21 [i_1] = (arr_2 [9]);
    }
    var_19 = ((!((((1 + 3655835304516500858) | var_3)))));
    var_20 = (((((min(var_4, 44))) << (-var_3 + 1680737535))) >> (1 % var_0));
    var_21 = (((((var_3 ? var_8 : var_4))) ? ((((((var_1 + 9223372036854775807) << (var_7 - 1)))) ? var_7 : var_1)) : ((~((var_1 ? var_6 : var_9))))));
    #pragma endscop
}
