/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_14 = 56;
                    var_15 = (max(var_15, (min((max(16078150560929576361, 7369066246495318599)), 31343))));

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_2] [i_0] [i_1] [i_1] [i_1] [i_2] = 92;
                        arr_13 [i_1] [i_1] [i_2] = (8567 ? (((1008 ? 22629 : var_11))) : (arr_8 [i_0] [i_0] [i_0] [i_0]));
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((!(((~(((arr_8 [i_0] [i_1] [i_2] [i_3]) ? 92 : (arr_10 [i_1]))))))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_18 [i_2] [i_2 + 1] [i_1] [i_2] [i_2] = (((!(((22616 ? var_11 : 50541))))) ? var_0 : (arr_16 [i_0] [i_1] [i_2 + 1] [i_1] [i_0] [i_2]));
                        var_16 = 1441987330;
                        var_17 = var_0;
                    }
                }
            }
        }
    }
    var_18 = ((-(((((var_13 ? var_13 : 3926620481))) ? ((var_13 ? -31331 : 100)) : ((max(22609, 18978)))))));
    #pragma endscop
}
