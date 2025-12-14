/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((((((var_14 ? 1 : var_3))) ? ((max(65535, 255))) : (~var_3)))) ? (((~var_15) ? (28326 & 37209) : (~-5557358201791535445))) : (((~((244 << (var_8 - 28803)))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((-(arr_1 [i_0])))) ? ((11 ? -5557358201791535445 : var_17)) : 1);
        arr_3 [15] |= ((arr_1 [i_0]) + 1313250543);
        var_21 = (min(var_21, ((((((arr_0 [i_0] [i_0]) + 9223372036854775807)) >> (((arr_1 [i_0]) + 4158564566140036277)))))));
        var_22 = (!(arr_0 [i_0] [i_0]));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_23 = (max(var_23, (((((((arr_5 [i_1 + 1] [i_1]) ? (arr_5 [i_1 + 1] [i_1]) : -29280))) && (~3498258489))))));
        var_24 = (((-8541240656173463304 + 9223372036854775807) << (149 - 149)));
        var_25 = (min(var_25, (arr_0 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_26 = (max(var_26, (65535 ^ 1313250543)));
            var_27 = 70486170;
            arr_14 [i_2] [i_3] = ((((103 >> (((arr_5 [i_2] [i_2]) - 17779469895334628327)))) << (((arr_6 [i_2] [i_3]) + 7107077125575357754))));
            arr_15 [6] [6] [i_3] = ((179 ? 65517 : 1101760372));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_28 = (((69 ? -8769 : (arr_8 [i_2]))));
            var_29 = (((arr_1 [i_2]) / var_2));
            var_30 ^= ((18160 <= (arr_1 [i_2])));
            var_31 = (max(var_31, ((((arr_7 [i_2] [i_4]) ? (arr_5 [i_2] [i_2]) : (arr_7 [i_2] [i_4]))))));
        }
        var_32 = (~(arr_10 [i_2] [i_2] [i_2]));
        arr_18 [i_2] = (((1 <= var_18) ? -2170396817461510435 : 106));
    }
    #pragma endscop
}
