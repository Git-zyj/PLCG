/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (((arr_3 [i_1]) ? (!var_8) : ((74 ? var_3 : 4294967285))));
                    arr_10 [i_1] [i_1] [i_2] = ((((!(3922304431915904347 || 9223372036854775807))) ? 168 : ((var_3 ? (min(17792589563709495212, var_7)) : var_4))));
                    var_13 = ((((!var_10) | (min(-4203185185034351268, 1)))));
                    arr_11 [i_0] [i_0] [i_1] [i_1] = var_4;
                    var_14 -= (var_2 - ((2124278095615408660 ? -36 : 14959945640626677385)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_15 = (min(153, (((arr_17 [i_3] [i_4]) ? -14418592600533375971 : (~var_0)))));
                    arr_21 [i_3] [i_5] = (((!6612915698348666266) & ((((!1) && (!3435493759))))));
                    var_16 = ((~(var_1 || 6612915698348666265)));
                    var_17 = (!-9);
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            arr_28 [i_7] [i_7] = (((arr_12 [i_7] [i_7 + 1]) * (max(18446744073709551606, (3083882218 && 4127403133)))));
            var_18 = ((var_9 ? ((((arr_14 [i_7]) ? (max(143, 946193019231428778)) : (!var_2)))) : (((3482476379 < 1) ? ((-6612915698348666279 ? 21 : 157)) : 6003229002294717562))));
            arr_29 [i_6] [i_6] [i_7] = ((16261610177905687567 <= ((max((min(var_12, var_12)), (-11 || var_9))))));
            arr_30 [i_6] [i_7] = var_7;
        }
        arr_31 [i_6] [i_6] = (((arr_18 [i_6] [i_6] [i_6]) + (arr_18 [i_6] [i_6] [i_6])));
    }
    #pragma endscop
}
