/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = ((((((18446744073709551615 ? -6846 : 4294967295)) % var_9)) >> ((((288230375614840832 ? 1174864547 : 2000456429)) - 1174864517))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = ((-16760832 ? -1930465530 : 1));
                                arr_14 [i_4] [i_0] [i_2] [i_2] [i_1] [i_0] = ((19208 ? (!1697676520) : 1678929839));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
