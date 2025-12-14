/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (((((((8230869090693423115 ? 63819 : 8230869090693423115)) != (~var_2)))) >= ((((~8230869090693423115) || var_7)))));
        arr_2 [i_0] [13] = ((~((((max(var_1, var_0))) ? (~var_8) : -var_11))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_13 = (arr_4 [i_1]);
        var_14 = 8230869090693423115;
    }
    var_15 = (min(var_15, var_0));
    var_16 = ((~(max(871926333, 10215874983016128506))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_17 = ((((min(1590512411, 10215874983016128498))) * var_6));
                var_18 += (min(((~(arr_6 [i_3]))), (~var_9)));
                var_19 = (arr_6 [19]);
                var_20 = 1024068779128560432;
            }
        }
    }
    #pragma endscop
}
