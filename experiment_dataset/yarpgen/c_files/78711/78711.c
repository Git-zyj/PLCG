/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((((65535 ? -84 : var_8)))) ? var_4 : (var_10 >= var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_2] [0] [8] |= (min(37, ((min(var_3, (arr_0 [i_0]))))));
                    var_12 = ((-(((~155) ? var_0 : (arr_3 [i_0])))));
                    var_13 = 22;
                }
            }
        }
    }
    var_14 = var_6;
    var_15 = ((1700722154 ? ((((min(var_3, var_1))) ? (min(var_2, var_5)) : var_5)) : ((((min(10939, 126)))))));
    var_16 = var_2;
    #pragma endscop
}
