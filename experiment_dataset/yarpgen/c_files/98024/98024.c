/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (((!(arr_1 [i_0]))) ? var_5 : ((((var_3 <= (arr_0 [i_0] [i_0]))) ? (min(2025873880, 2269093416)) : ((((!(arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((-((-2025873880 ? ((2269093416 ? var_10 : var_3)) : (arr_1 [i_0])))));
        var_12 = (((((-(arr_1 [i_0])))) ? (min(2025873880, (arr_0 [i_0] [i_0]))) : -2025873880));
        var_13 = 7;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_14 = (~var_4);
            var_15 = ((var_8 >> (var_1 + 19077)));
            var_16 = (((min((((var_9 ? (arr_6 [i_2]) : var_10))), -var_0)) + -var_4));
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] [i_3] = (min((((arr_11 [i_1]) ? (arr_11 [i_1]) : var_3)), (~var_2)));
            var_17 = var_6;
            var_18 = var_10;
            var_19 = (max(var_19, ((((max(-7, 2269093415)) <= ((((max(var_10, var_4))) ? (var_1 > var_9) : (2025873880 - var_5))))))));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_20 = 1;
            var_21 = (arr_13 [i_4 - 3]);
            var_22 = (max(var_22, ((((arr_7 [8] [i_4 - 2] [i_4 - 2]) ? var_9 : (arr_7 [16] [i_4 + 2] [i_1]))))));
        }
        arr_15 [i_1] = var_3;
        arr_16 [i_1] |= arr_13 [i_1];
    }
    var_23 *= 7;
    #pragma endscop
}
