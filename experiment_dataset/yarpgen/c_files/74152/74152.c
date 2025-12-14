/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((157 ? var_4 : ((var_10 ? (~-6887694326775793083) : ((min(var_8, var_0))))))))));
    var_12 = (((((4408888135418322 ? 0 : 12699872943456658534)))) ? (!var_8) : ((var_2 ? (min(2097024, 6800190527335894272)) : (var_7 && var_1))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((min(var_9, 1))) ? 8589934080 : (arr_1 [i_0]))));
        arr_3 [i_0] = var_10;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_13 = (max(var_13, ((((0 ? (arr_5 [i_1]) : (arr_4 [i_1])))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_14 = (~var_10);
                    var_15 = (arr_11 [i_1] [i_1] [i_3] [i_1]);
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (((arr_9 [i_1]) > var_5));
                }
            }
        }
    }
    var_16 |= 0;
    #pragma endscop
}
