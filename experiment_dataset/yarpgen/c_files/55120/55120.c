/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 = ((((!(((50 ? -5535995974395573116 : 5535995974395573117)))))));
                            var_21 = ((((((((35 ? 108 : 121))) ? -16 : (~98)))) ? ((1682770300 & ((max(130, 126))))) : ((min(-86, -79)))));
                        }
                    }
                }
                arr_11 [i_0] [i_1 + 1] [i_1 - 1] = (-75 ? ((50 ? ((-4969 ? 2016 : 133)) : 0)) : 1991);
                var_22 *= ((~(((25277 && 255) ? 1992 : ((1983 ? 7685777798163139830 : -32764))))));
                var_23 = (max(var_23, ((max((!2), -0)))));
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
