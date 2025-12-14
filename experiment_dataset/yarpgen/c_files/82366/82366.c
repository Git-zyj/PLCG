/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (((((-30414 / (-30414 > -30430)))) ? ((9197218389519511107 ? (min((arr_4 [i_0]), (arr_5 [1]))) : ((((arr_7 [i_0] [i_1 + 1] [i_2 - 4]) ? 1 : (arr_0 [i_0])))))) : ((((((min((arr_7 [8] [i_1] [i_1]), (arr_4 [5]))))) / (arr_8 [i_0] [i_1] [i_1 + 1] [i_1 + 1]))))));
                    var_17 = (arr_8 [i_1 + 1] [i_1 + 1] [i_2 + 2] [i_2 - 3]);
                    arr_10 [i_2] |= (max(38247778, 1));
                    arr_11 [i_0] [i_0] = (~1351346234);
                }
            }
        }
    }
    var_18 = (((((~((var_11 ? var_7 : var_4))))) | ((((max(var_13, 22311))) ? 38247778 : -10463))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            {
                arr_18 [i_3] [i_3] [12] = -23043;
                var_19 = arr_13 [i_3];
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((max((max(1395744314, (35160 / -30119))), (arr_24 [i_3] [i_5 - 2] [i_5] [i_4]))))));
                            var_21 = (((!31) > (arr_26 [i_3] [14] [i_4 + 1] [i_6] [i_5 + 1] [20])));
                            arr_27 [i_3] [i_4] [i_4] [i_5] [i_6] = ((1369959647 <= (arr_17 [i_5 - 1] [i_4 + 1] [i_4 + 1])));
                            arr_28 [i_3] [i_3] [i_3] [i_3] = ((((!(((33556 ? 16384 : var_10))))) ? (((((min((arr_14 [i_6]), (arr_14 [i_3])))) != (((arr_25 [i_3] [i_3] [i_4 - 1] [4] [i_4 - 1] [10]) ? (arr_22 [14] [i_3] [6] [i_3]) : 0))))) : var_16));
                            var_22 = (max(var_22, ((((((max((arr_24 [i_3] [i_4] [i_3] [i_6]), (max((arr_23 [i_3] [i_4] [5] [19]), var_0)))))) & (((arr_16 [i_3] [i_3]) ? 19604 : (max(var_9, (arr_16 [i_3] [i_3]))))))))));
                        }
                    }
                }
                arr_29 [i_3] [i_4] = (max((max(-2, 6450)), ((min(-3, 64)))));
            }
        }
    }
    #pragma endscop
}
