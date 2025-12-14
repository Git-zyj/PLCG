/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((var_13 > ((((max(2538126575, 4077940808))) ? var_4 : -3926596702730479842))));
                    var_21 += var_9;
                    arr_7 [i_2 + 1] = ((((min((min(3260319812, 124)), 1034647504))) ? 0 : 131));
                    var_22 = ((((!((max(var_16, 210))))) ? 217026490 : var_7));
                }
            }
        }
    }
    var_23 = -var_5;
    #pragma endscop
}
