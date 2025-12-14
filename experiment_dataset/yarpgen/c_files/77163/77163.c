/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_13;
        arr_4 [i_0 + 1] [i_0] = 1;
        var_17 = var_6;
        arr_5 [i_0] [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_10 [i_1 + 1] = ((558551906910208 ? 1 : 4584223689767905636));
        var_18 = -var_8;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((arr_1 [i_2] [1]) <= 1)) ? (50994 >= 1) : ((var_7 % (arr_17 [i_2]))))))));
                    arr_19 [i_4] [i_4 - 1] [i_3] [i_2] = ((23022 ? -8 : 51002));
                    var_20 = (((arr_18 [i_3] [i_2 + 1] [i_2]) ? -72 : var_14));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                {
                    arr_26 [i_6 - 1] [i_6] [i_2] = (((arr_23 [i_6] [i_2 - 1]) != (arr_2 [i_6])));
                    arr_27 [i_6] [i_5] [i_5] = (((((42509 ? 2073932020 : var_6))) ? 32767 : 3862037782));
                }
            }
        }
        arr_28 [i_2] [i_2] = 50976;
        var_21 = ((251 ? ((9223372036854775807 ? 18446185521802641407 : 8406285202405917029)) : ((((!(-9223372036854775807 - 1)))))));
    }
    var_22 = 1;
    var_23 = ((((~var_3) ? 1 : (~var_5))) <= (var_11 > var_13));
    #pragma endscop
}
