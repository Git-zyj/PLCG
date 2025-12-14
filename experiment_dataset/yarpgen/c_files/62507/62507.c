/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_6 && (((var_5 << (((var_3 + 1803725809) - 2)))))))) * ((((~var_10) > ((min(var_14, var_12))))))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (!var_1);
        var_16 = ((((((25139 ? (arr_1 [1]) : var_11)) << ((((3254961070 ? (arr_1 [i_0]) : var_0)) - 233)))) % (((12705257294397502620 ? -2461 : 248)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, (max(25143, ((max((arr_4 [i_2]), var_5)))))));
                        arr_11 [i_0] [i_0] [i_0] = var_7;
                        var_18 = 25163;
                    }
                }
            }
        }
    }
    #pragma endscop
}
