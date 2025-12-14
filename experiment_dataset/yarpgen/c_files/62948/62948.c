/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [1] = ((!(((((max(-3649, (arr_0 [i_0])))) ? 1 : 1)))));
        var_11 = (((((-var_7 ^ (arr_0 [i_0])))) ? ((var_5 / (min(1, (arr_0 [i_0]))))) : ((((((arr_0 [i_0]) ? var_4 : 1))) ? 0 : (min(1837783349, 18532))))));
        var_12 = (((max((arr_1 [15]), var_5)) << (((min(-201702053597139284, 1)) + 201702053597139287))));
        var_13 = var_4;
    }
    var_14 = (max(var_14, var_7));
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_1] = ((((((~var_7) ? ((14767 ? var_4 : 48819)) : ((50372 ? 1029713516 : 537955548045824486))))) ? ((min(var_5, ((182 ? 13 : var_6))))) : (min((max(var_3, 537955548045824486)), (((17908788525663727129 ? var_5 : 152112591)))))));
                    var_15 = ((~(((!(arr_5 [i_2] [i_1]))))));
                }
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
