/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-var_3 ^ (min(((3799298134 ? 15 : var_8)), var_8)));
    var_11 = (((((var_2 && var_7) ? ((4294967293 ? var_2 : 2)) : -4294967292))) ? var_7 : var_6);
    var_12 = (var_9 ? (((~16) ? 4294967293 : (~3014748233))) : var_0);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 3] [i_1] [i_0 - 3] = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [23] [23] [i_2 + 2] = (((min(4294967291, 3014748233))) ? 15 : (arr_3 [i_3]));
                                arr_15 [i_0] [i_0 - 3] [i_0 - 2] [i_0] [i_0 - 2] = (var_2 ? ((136529119 ? ((((var_4 && (arr_2 [i_2]))))) : -var_8)) : ((((((arr_1 [i_0]) ? var_1 : (arr_1 [i_0])))) ? (arr_0 [i_0 - 3]) : ((4244492482 ? var_8 : 50474824)))));
                                arr_16 [15] [i_1] [i_1] = (((max(50474818, var_8))) ? ((((136529119 <= (min((arr_3 [i_2 - 1]), (arr_12 [21] [12]))))))) : (arr_9 [11] [i_1]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = max(var_1, ((var_8 ? var_9 : ((15 ? 350956504 : var_4)))));
    #pragma endscop
}
