/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [10] [i_0] &= 3719640617;
                                var_13 = 4294967295;
                                arr_14 [1] [i_3] = 3744215903;
                                var_14 = (!(((((min(4294967295, -4994370465498304639))) ? (3690198471 && 604768833) : (~1175019821)))));
                            }
                        }
                    }
                    var_15 *= (((var_4 && 1) && (((((max(16, 607014878))) ? (!173738024) : (3690198462 && 114))))));
                }
            }
        }
    }
    var_16 = (~((var_11 ? 11 : 3690198463)));
    #pragma endscop
}
