/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((((min((arr_4 [i_1]), (arr_4 [i_1])))) ? (!var_9) : ((var_5 ? (arr_4 [i_2]) : (arr_4 [i_1])))));
                    var_18 = (max(var_18, ((min(4294967295, (((((20973 >> (-21252 + 21266)))) * (4294967295 / 31))))))));
                    var_19 = 2622259205;
                }
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
