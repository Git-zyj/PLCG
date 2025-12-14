/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (((((var_7 ? -22203 : 22203)) / (min(var_3, -22214)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((-(min(var_10, var_13))));
        arr_4 [i_0] = -2016367695267271730;

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_9 [i_0] [i_0] = var_9;
            arr_10 [i_0] [i_0] [i_1 + 1] = ((((54 ? -22186 : -22203)) + 8932945426481588931));
            arr_11 [i_0] = var_6;
            arr_12 [i_0] [i_0] [i_0] = var_13;
            arr_13 [i_0] [i_1] = ((((min(var_5, 48070))) & var_0));
        }
        arr_14 [i_0] [i_0] = (min(var_1, ((-(var_12 % var_3)))));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_19 [i_2 - 2] = ((((-22186 ? (-9223372036854775807 - 1) : 9297))) ? 8821079770793122384 : -146482473065735183);

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_23 [i_2] [i_2] = (((((arr_7 [i_2 + 1]) ? ((-518495668 ? -1 : 15)) : var_0)) | -8814));
            arr_24 [i_2] [i_3] [i_3] = (((~6170681633320145700) % ((min(1749558366334163668, var_1)))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_28 [i_4] = 17;
            arr_29 [i_4] = ((min(2145, 255)));
            arr_30 [i_2] [i_2] = arr_21 [i_2] [i_2];
        }
        arr_31 [i_2] [i_2 + 1] = (((!165862069) || (((-5598221904073768463 && 22202) && ((max(-2016367695267271730, 26199)))))));
    }
    #pragma endscop
}
