/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max((max(3898103572, 3898103599)), (((var_0 ? var_3 : var_6)))))) ? (min((3898103555 - var_4), var_11)) : var_3);
    var_13 = (min(var_13, (((((!((((-127 - 1) ? 1315137017 : 4178))))) || ((max(var_4, ((var_6 ? 5 : var_8))))))))));
    var_14 ^= (~var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((~var_3) > 1315137017));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [11] [i_3] = (!1303);
                            arr_13 [i_0] [i_1 - 2] [i_1] [i_3] = (max((((~var_5) & ((var_7 ? var_0 : 15)))), (max(-1, (var_3 % var_6)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
