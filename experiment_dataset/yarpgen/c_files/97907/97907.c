/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    var_15 ^= var_12;
    var_16 -= var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_6, (arr_1 [i_0])));
        var_18 *= ((((((!(((0 ? -4264211793774064382 : -4264211793774064382))))))) >= ((-(arr_2 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 = (((((!109) < (((arr_11 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3]) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : var_6)))) ? (((((min(var_1, var_6))) == 17448591894914991329))) : ((~(arr_11 [i_0] [i_0] [4] [i_3] [i_3] [i_3])))));
                        arr_12 [i_0] [i_1] [i_3] [i_3] = ((((max((((-(arr_11 [i_0] [i_1] [i_0] [3] [i_1] [i_3])))), (arr_1 [i_2 - 2])))) ? ((max(-4264211793774064382, 21994))) : ((min(var_7, ((!(arr_4 [i_3] [5]))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (((((-407992382 / (arr_11 [i_4] [i_4 + 1] [i_4] [i_4] [i_4] [i_4])))) == ((15 ? (arr_11 [i_4] [i_4 - 3] [i_4] [i_4] [i_4] [i_4]) : 0))));

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_20 ^= var_12;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((((((arr_2 [i_4 + 1]) | ((max((arr_5 [i_4] [i_7] [2]), 30089)))))) ? ((((var_6 ? (arr_6 [i_8] [i_8] [13] [i_8]) : var_10)) - ((max(98, 2703717859))))) : 2703717859)))));
                            var_22 += 229;
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_23 = (max(var_23, -6661267535369379440));
            var_24 -= 27;
        }
    }
    for (int i_10 = 2; i_10 < 18;i_10 += 1)
    {
        var_25 *= (max(((-(arr_28 [i_10]))), -1));
        arr_31 [i_10] = (((arr_29 [i_10] [i_10]) ? -26337 : ((1 % ((((arr_28 [i_10 - 2]) ? (arr_30 [i_10]) : 0)))))));
    }
    var_26 = 2703717859;
    #pragma endscop
}
