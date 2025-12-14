/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~-92) ? var_18 : var_0);

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        arr_3 [20] [20] = (max(399843204, (arr_2 [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 + 1] = (((arr_5 [i_1]) ? ((min(92, 255))) : ((((((206 ? 0 : 51))) ? 51 : (min((arr_4 [i_1] [2]), var_18)))))));
        arr_8 [i_1] = (min((arr_2 [8]), (((((2666455625 - (arr_0 [i_1])))) ? ((max(var_6, 65528))) : var_1))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_21 += (((((~(min(205, var_13))))) ? (~246) : (((((154 ? 0 : (arr_1 [i_2])))) ? ((var_7 ? var_7 : (arr_12 [i_2]))) : (var_3 & 9)))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 = (((213 ? 70 : 246)));
                                var_23 = (min(var_23, (((1 ? 95 : 113)))));
                                var_24 = ((56615 & ((((arr_12 [i_6 + 2]) < (max(9223372036854775807, var_14)))))));
                            }
                        }
                    }
                    var_25 = (((((205 << (((arr_4 [i_2 - 1] [i_2 - 1]) - 14284))))) && ((max((min(0, 0)), 1)))));
                    arr_24 [i_2 + 1] [i_3] [i_3] = 47;
                    var_26 = (min((((((arr_9 [i_2] [i_2]) ? 208 : var_7)) != ((((arr_18 [i_3] [i_3]) ? var_3 : var_3))))), ((!((min(524287, 50)))))));
                }
            }
        }
        var_27 -= (((min(var_8, (3622724992 && 3622724992))) >> (((((var_11 == 41) ^ ((14169590240163092409 ^ (arr_23 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [4]))))) - 14169590237846527516))));
    }
    #pragma endscop
}
