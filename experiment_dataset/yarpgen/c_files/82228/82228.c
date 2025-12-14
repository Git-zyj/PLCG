/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -188923027;
    var_21 += (min((var_19 + var_8), -65));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [4] [2] [i_0] &= (arr_6 [i_0] [4] [i_0]);
                            arr_12 [i_0] [1] [i_2] [i_1] = ((-(max(((15 ? var_1 : (arr_5 [i_0] [i_1] [i_2 + 1]))), -var_8))));
                            var_22 = (min(var_22, ((max((((arr_3 [4] [i_2 + 1] [4]) ? (arr_5 [i_3 - 3] [2] [8]) : (arr_3 [8] [i_2 - 2] [8]))), (((27148 == (arr_6 [i_3 + 1] [0] [i_2])))))))));
                        }
                    }
                }
                arr_13 [i_1] = (((((764584482 / var_14) ? (arr_8 [i_1] [8] [i_1] [i_1]) : ((27134 ? var_3 : 31585))))) ? (((((-27139 ? -27148 : 2361345551042275414)) != (((-27149 ? 52339 : -27141)))))) : (arr_3 [i_1] [i_1] [i_1]));
            }
        }
    }
    #pragma endscop
}
