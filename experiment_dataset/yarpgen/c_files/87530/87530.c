/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 12074879196188662372;

    for (int i_0 = 4; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((var_1 ? -109 : (2281712676 == 1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 += (min(var_15, ((~(arr_7 [i_0] [i_0 + 2] [i_2 - 4])))));
                    arr_9 [i_0] [i_1] [i_0] = (((((arr_1 [i_0]) ? (!1608939249) : (max(2381326258, (arr_6 [19])))))) | 6371864877520889241);
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_21 = var_11;
        arr_12 [i_3] [i_3] = (arr_0 [i_3 + 1]);
        var_22 ^= (((((((52 ? -2291546179595104867 : 1)) & 2291546179595104867))) ? ((((arr_5 [i_3 - 2]) << (((arr_5 [i_3 - 2]) - 87))))) : 1003359911));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_23 = var_7;
        var_24 = (min(var_10, (arr_6 [i_4])));
        var_25 = 8652015927607253089;
        arr_15 [i_4] [16] = (max((max(var_5, (arr_4 [i_4] [i_4] [i_4]))), (((arr_4 [i_4] [i_4] [i_4]) ? (arr_14 [i_4] [i_4]) : (arr_4 [i_4] [i_4] [i_4])))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_26 = ((!(arr_2 [i_5 + 1])));
        arr_18 [6] = -1726689607594967815;
        var_27 = (min(((62 ? 99 : 35777)), ((max((arr_1 [i_5 + 1]), (arr_1 [i_5 - 1]))))));
        arr_19 [16] = ((max(-81, (arr_14 [i_5 + 1] [i_5 - 1]))));
        var_28 = (arr_17 [i_5] [i_5]);
    }
    #pragma endscop
}
