/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((((arr_0 [i_1 + 3] [i_1 + 2]) & (~var_9))))));
                    arr_8 [i_0] = (max((arr_7 [i_2] [i_0] [i_0]), (((((((arr_6 [i_2] [i_1] [i_0]) ? (arr_4 [i_2] [i_1] [i_0] [i_0]) : 18124207103029232925))) ? (((7 >> (((arr_6 [i_2] [i_2] [i_2]) + 9159725310062532956))))) : ((-54 ? var_10 : -1116383150)))))));
                    var_13 = 65523;
                    arr_9 [i_0] [i_1] [i_1] = 65528;
                    var_14 = (~7);
                }
            }
        }
    }
    var_15 = (max(var_15, (max((!var_7), ((~((var_5 ? var_4 : var_9))))))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            {
                var_16 *= ((7 & ((((arr_10 [i_3] [i_4]) ? var_9 : 62)))));
                arr_16 [i_3] = 101;
            }
        }
    }
    #pragma endscop
}
