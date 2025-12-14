/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(!var_9)));
    var_15 = (max((var_2 >= var_5), (((((-35 ? 63 : 52881))) ? var_2 : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (!7188537684051726384);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((arr_4 [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_0 [i_1]) : ((((33 & 211) & (arr_7 [i_1] [i_1] [i_1]))))));
                    var_17 = ((((max((arr_5 [i_1 + 1] [i_1 + 1]), (arr_2 [i_0] [i_0])))) != (((arr_4 [i_1 - 1] [14] [i_1]) ? (min(18116814871468083259, 192)) : ((((arr_0 [i_2]) ? 23 : 16)))))));
                }
            }
        }
    }
    var_18 = ((((-(~var_0))) << ((((var_6 + ((var_3 ? 34 : 9)))) - 23481))));
    #pragma endscop
}
