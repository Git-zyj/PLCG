/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((24 ? 0 : var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_0])))) && (arr_2 [i_0] [i_0])));
                    var_19 = (arr_6 [i_0]);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = (((-4 - 15830107214310301062) ? ((((((-118 + 2147483647) >> (-21598 + 21602)))) ? (max(16592098007785708816, 683454874230707661)) : (arr_1 [i_0]))) : (((max(27375, 0))))));
                        var_21 = (((((arr_3 [i_2] [i_0] [i_0]) ? (arr_2 [i_2] [10]) : (((arr_5 [i_0] [i_0]) ? (arr_6 [i_3]) : (arr_5 [i_0] [i_0]))))) << (-931520183 + 931520207)));
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((((((arr_5 [i_0] [i_0]) ? (((max(21579, 21606)))) : ((32764 ? 18446744073709551615 : 52409))))) ? (((((-1132045410 && (arr_2 [i_1] [i_2]))) ? (arr_3 [2] [i_0] [i_2]) : 21579))) : (((~18) ? (2828601246 * 0) : ((32640 ? var_11 : 2435147609))))));
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_15 [i_4] [i_4] [i_0] [i_4 - 2] = (-106 >= 32772);
                        var_22 -= (max((arr_11 [i_4] [i_4 - 1]), ((11349125448740879255 / (arr_12 [i_0] [i_1] [i_1] [i_0] [10] [i_4 + 1])))));
                        var_23 -= ((((~9223370937343148032) ? ((4491044069565177551 ? 3928794753356635608 : (arr_9 [i_0] [2] [2] [2] [i_2] [i_4]))) : 20)) & (!3422584438));
                    }
                }
            }
        }
    }
    var_24 = 1;
    #pragma endscop
}
