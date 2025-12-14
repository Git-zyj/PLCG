/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((-((((min(9223372036854775807, 9223372036854775793))) ? 2040 : ((((arr_1 [i_0]) == 9223372036854775807)))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] = (arr_1 [i_0]);
            arr_6 [i_0] [i_1] = var_14;
            arr_7 [i_0] = ((((-9223372036854775801 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_1]))) | ((75 ? (arr_4 [i_0] [i_1] [i_0]) : var_4))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_17 &= var_14;
            arr_11 [i_0] [16] [16] &= (((arr_0 [i_2] [i_0]) % var_13));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_15 [i_3] = -1396843481;
            arr_16 [i_0] [i_0] = ((((max((arr_4 [i_3] [i_0] [i_0]), (arr_10 [i_0])))) ? (arr_9 [i_0]) : ((((min(var_7, (arr_9 [i_3]))))))));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_18 = (((arr_10 [i_0]) && (arr_18 [i_5])));
                var_19 = (((arr_17 [i_0] [i_4]) ? (((((max(0, 3))) * (~252)))) : (((arr_18 [i_0]) / (arr_18 [i_0])))));
            }
            var_20 = var_2;
            var_21 = (((arr_19 [i_4]) && ((((arr_20 [i_0] [i_4]) ? (min(var_15, (arr_18 [i_4]))) : (arr_9 [i_0]))))));
        }
        var_22 = ((~((((max((arr_17 [0] [i_0]), -82))) ? var_1 : (arr_4 [i_0] [i_0] [i_0])))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_23 = (min(var_23, ((((~var_6) ^ (arr_17 [i_7] [i_7]))))));
            arr_30 [i_6] &= (min(-23739, ((43479 ? (((arr_17 [i_6] [14]) ? 8176 : 1)) : 23742))));
        }
        var_24 &= ((((((~(arr_28 [i_6] [i_6] [i_6]))) <= (arr_12 [13])))) < (arr_17 [2] [i_6]));
    }
    var_25 = (min(var_25, var_4));
    #pragma endscop
}
