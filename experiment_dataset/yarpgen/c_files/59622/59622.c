/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (((((((-2712566957208012711 != 7684086252773937778) < (10762657820935613837 >= 65535))))) > 2925489720781075533));
                var_18 = (var_2 / -2088960);
                arr_6 [i_1] [3] [15] = (max((arr_3 [i_0] [i_1] [i_1]), ((var_0 - (arr_4 [9] [9])))));
            }
        }
    }
    var_19 *= var_7;
    var_20 += var_5;
    var_21 += (max((65535 < var_16), ((((min(0, var_13))) || 64))));
    var_22 = (~var_9);
    #pragma endscop
}
