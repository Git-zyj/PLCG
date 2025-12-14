/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_2] = ((var_17 - (((arr_6 [i_2] [i_1 + 2] [i_1 + 2] [i_0]) ? -32045 : (min((arr_5 [i_1] [i_1] [i_0]), 0))))));
                    arr_9 [i_1] [i_0] [i_0] [i_1] |= ((-((-8248466869718375543 + (arr_5 [i_2 - 2] [i_2] [i_2 + 2])))));
                }
                arr_10 [i_1] = 23985;
                arr_11 [i_1] [i_1] [i_0] = ((((!(arr_2 [i_0] [i_1 + 2]))) ? ((8088 | (arr_2 [i_1 - 2] [i_0]))) : (((-1138512087 % (arr_7 [i_0] [i_1 - 2] [i_1 + 2]))))));
            }
        }
    }
    #pragma endscop
}
