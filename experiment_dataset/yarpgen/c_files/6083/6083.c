/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_15 = 4962849387087204905;
                        var_16 = (arr_0 [i_3] [i_1]);
                        var_17 *= (((((((~(arr_2 [i_0] [i_2])))) * (min(1855951022509975211, 6272743791980974159)))) < ((((arr_8 [i_0]) ? (arr_0 [i_1 - 2] [i_1]) : var_2)))));
                        var_18 = (min(((((min((arr_9 [i_1]), (arr_0 [14] [i_1])))) ? (min(8641588637003768765, 3670016)) : 0)), (!1415937968)));
                    }
                    var_19 ^= (((~1415937968) && (((-(arr_8 [i_1 - 1]))))));
                }
            }
        }
    }
    var_20 = var_14;
    var_21 *= (var_7 / 28081);
    #pragma endscop
}
