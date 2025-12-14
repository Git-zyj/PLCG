/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_13 = var_8;
        arr_3 [i_0] = ((1 != ((((arr_2 [i_0 + 2] [i_0 - 1]) < (~50))))));
        arr_4 [i_0] [i_0] = 32767;
        var_14 = (((((arr_0 [i_0 - 2]) + (arr_0 [i_0 + 1]))) / 30));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = 23;
        var_16 = ((((((!(((var_9 ? var_8 : 3))))))) * (max(243, 525548268))));
        var_17 = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_18 = (min((((arr_7 [i_2]) / (arr_7 [0]))), ((-9223372036854775797 ? (-32767 - 1) : -2251799813685248))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_19 = (max(var_19, (!1)));
                    var_20 = ((1 ? 0 : 9223372036854775801));
                    var_21 = (((14856 >= 16777215) ? (14838 & 5204983693868269463) : (((min((arr_13 [i_2] [1] [i_2]), 28035))))));
                }
            }
        }
        arr_17 [i_2] [i_2] = ((1 << (18754 - 18739)));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_20 [13] [i_5] = max(var_1, (((arr_19 [i_5 - 1]) ? 124 : var_5)));
        var_22 += ((((min(((((arr_18 [21]) ? 7663 : (arr_19 [i_5 - 1])))), 9223372036854775795))) ? 124 : -4473222571907882198));
        var_23 = (min(var_23, ((((((-(arr_19 [1])))) ? ((((0 ? 1603023262763773184 : 35051)) - 114)) : (((max(100, 7999979014791671344)) ^ var_8)))))));
    }
    #pragma endscop
}
