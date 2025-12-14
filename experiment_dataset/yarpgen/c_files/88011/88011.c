/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (~var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 &= ((!((((arr_5 [i_2 - 1] [i_2 - 1] [i_1 - 1]) ? ((-813716313 ? 0 : var_2)) : var_9)))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_19 = ((!(((-1476715969 ? 85 : 65535)))));
                        var_20 = (((((!0) ? ((var_15 ? (arr_7 [i_2]) : -1113583686)) : ((var_7 ? -891696558 : var_6))))) ? 1996892666 : ((max((var_10 < 8191), (arr_5 [i_0] [i_0] [i_0])))));
                        var_21 = var_14;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((~(arr_9 [i_4] [i_4] [i_2 - 1] [i_2])));
                        var_23 = (min(var_23, (((((arr_13 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2]) ? 891696557 : (arr_6 [i_1] [i_1] [i_1 + 1]))) << (var_13 - 40)))));
                        var_24 += 24;
                    }
                }
            }
        }
    }
    #pragma endscop
}
