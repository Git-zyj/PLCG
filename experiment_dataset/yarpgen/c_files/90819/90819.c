/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = (max(var_19, ((min((min((arr_0 [i_0 + 1] [i_0 + 2]), (arr_0 [i_0 - 2] [i_0 - 2]))), (((~(arr_1 [i_0 + 2] [i_0 + 1])))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_20 = (((((((min(16, 4235095617))) ? ((4080 ? 134215680 : 36)) : 89))) ? ((((arr_5 [i_0 + 2] [i_1] [i_2] [i_0 + 2]) ? var_18 : 58))) : (~var_0)));
                        arr_9 [i_3] = (((((-(max(-134215681, (arr_0 [i_0] [i_0])))))) ? (((arr_3 [i_0 + 3]) ? (arr_3 [i_0 + 3]) : -134215674)) : ((((-(arr_5 [9] [i_1] [i_2] [i_3])))))));
                        var_21 ^= (((894779601401999142 ? 134215681 : (arr_0 [i_3 + 1] [i_1 + 1]))));
                    }
                    var_22 = (min((arr_1 [i_1] [i_1]), (((!(((var_5 ? (arr_5 [i_0] [i_1] [i_1] [i_2 + 3]) : 134215671))))))));
                }
            }
        }
    }
    var_23 = (~-134215681);
    var_24 = (118 == -32);
    var_25 = ((var_14 == (max(-134215681, 2799706879))));
    #pragma endscop
}
