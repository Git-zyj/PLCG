/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = 113;
                arr_6 [i_0] [i_0] = (((max((10926431628137520108 / var_6), -122)) ^ (!var_0)));
                arr_7 [14] [14] [i_0] = (!2913792769168510403);
                arr_8 [i_0] [i_0] = (((min(15, 2899069806169857990)) == ((min(var_8, 9223372036854775807)))));
                arr_9 [i_0] [i_0] = (9223372036854775807 / 12);
            }
        }
    }
    var_15 = var_0;
    var_16 = (~var_5);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_17 [i_3] = ((var_2 ? (var_4 > var_0) : ((var_11 ? 4059349098 : 10926431628137520121))));
                arr_18 [i_3] [i_2] = ((+(min((~var_14), 2361015724562910127))));
            }
        }
    }
    #pragma endscop
}
