/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((!(((var_5 ? -5285 : 11850304916171497524)))))) % (((-var_13 >= (((var_13 ? var_4 : var_3))))))));
    var_15 &= var_3;
    var_16 = (((((min(2234308077786597967, 11850304916171497524))) ? (85 > 4648310531071055456) : 1228222193)));
    var_17 = (13798433542638496143 && 17591112302592);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_3 [i_1] [i_1]) ? -167 : -1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [13] [i_2] [i_3] [i_0] = (((var_13 + 9223372036854775807) << (((~2236677976) - 2058289319))));
                            var_18 = (((((((arr_7 [i_0] [i_2]) ? (arr_7 [i_0] [i_2]) : var_7)) + 2147483647)) << (((min(5285, 2058289320)) - 5285))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
