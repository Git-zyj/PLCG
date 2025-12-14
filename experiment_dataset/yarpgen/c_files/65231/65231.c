/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (((((37 ? var_5 : ((var_11 ? var_13 : var_17))))) ? ((1 ? var_7 : var_3)) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = var_9;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = ((((-1486121332 ? 867033367 : (((-20 ? 1 : 3))))) >> (1716406881 - 1716406855)));
                            arr_13 [i_2] [i_2] [i_0] [i_2] = var_16;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
