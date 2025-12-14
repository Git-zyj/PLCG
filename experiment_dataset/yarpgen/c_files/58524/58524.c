/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_11);
    var_13 = ((var_3 < (((((-53 ? var_8 : var_8))) ? var_10 : (-1983549450 <= 3789478387982074595)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [14] &= var_7;

        for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = 254;
            arr_7 [i_1] [i_0] [i_0] = (i_0 % 2 == zero) ? (((((-30309 ? 1894526659 : var_11)) | (((arr_4 [i_0] [i_1] [i_0]) << (((var_11 + 25000) - 22))))))) : (((((-30309 ? 1894526659 : var_11)) | (((((arr_4 [i_0] [i_1] [i_0]) + 2147483647)) << (((var_11 + 25000) - 22)))))));
            var_14 = (-1894526633 / (arr_3 [i_0] [i_0]));
        }
        for (int i_2 = 4; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_15 = (!1894526652);
            arr_10 [i_0] [i_2] [i_0] &= ((-(-1894526651 >= var_9)));
            var_16 = (arr_0 [i_0] [i_2 - 3]);
        }
        for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_17 = (((arr_3 [i_0] [i_3 - 4]) / (arr_3 [i_0] [i_3 - 3])));
            var_18 = (!-1894526640);
            arr_13 [i_3] [i_0] [i_0] = ((1894526635 << (((-5492658795071685810 + 5492658795071685831) - 21))));
            arr_14 [i_0] [i_0] [i_3] = (~-var_10);
            arr_15 [i_0] [i_3] = ((1 ? 3433028068540293806 : ((239 ? 104 : var_8))));
        }
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_19 ^= ((2448905210 ? (arr_12 [i_4 - 2] [i_4 - 2]) : (arr_4 [i_4] [i_4 - 2] [6])));
            arr_20 [i_0] [i_4 - 1] = (((arr_8 [i_4 - 1] [i_4 - 2] [i_4]) ? 15013716005169257819 : (arr_8 [i_4 - 1] [i_4 - 2] [i_4])));
        }
        arr_21 [i_0] = (((var_2 + 2147483647) >> (((arr_16 [i_0] [10] [i_0]) + 1856268197))));
        arr_22 [i_0] = ((((var_11 ? 59899 : (arr_1 [i_0]))) << (((~var_0) + 2392596536442224648))));
    }
    #pragma endscop
}
