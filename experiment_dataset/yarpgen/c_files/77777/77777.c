/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (((((38247 - 2460899848) ? 1834067448 : (15 + 1))) - (((1 - 747689725) - ((-554336461 ? -3037514703093708935 : 2460899849))))));
                arr_5 [i_1] [i_0 - 1] = 1;
                var_13 = ((-747689735 | ((((747689742 ? 0 : 52723)) | ((1 ? 554336479 : 15963))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (((((-554336480 <= -747689742) ? (250 ^ -747689739) : ((1 ? 64914 : 0)))) != -554336480));
                            var_15 *= ((-554336479 ? ((((((-554336479 ? 1 : 12812))) != (4294967271 + -8433145548645514843)))) : 24802));
                            var_16 = -2147483631;
                        }
                    }
                }
            }
        }
    }
    var_17 = 1;
    var_18 = (((((((((1 ? -8433145548645514843 : 14)) + 9223372036854775807)) << (((((-2147483647 - 1) ? 9223372036854775807 : 53)) - 9223372036854775807))))) ? 1834067447 : 1));
    #pragma endscop
}
