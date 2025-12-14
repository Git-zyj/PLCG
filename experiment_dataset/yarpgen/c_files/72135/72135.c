/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 58;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_12 *= (((((2251799813685247 > (arr_0 [i_2])))) + (31 > 3552194654)));
                    var_13 *= (~var_10);
                    arr_7 [i_2] [i_2] [i_0] = ((~(564131257 && var_4)));
                    var_14 = (arr_1 [i_0 - 1]);
                    var_15 = (arr_1 [i_0 + 4]);
                }
                var_16 -= ((-(min((((2731 ? 14785 : var_2))), (arr_1 [i_1])))));
                var_17 += (((arr_1 [i_0 - 1]) ? (((arr_1 [i_0 - 1]) ? 1589237259 : var_7)) : ((((arr_1 [i_0 - 1]) ? var_10 : (arr_1 [i_0 - 1]))))));
            }
        }
    }
    var_18 = var_9;
    var_19 -= ((~((max((!var_3), 15)))));
    var_20 += 1;
    #pragma endscop
}
