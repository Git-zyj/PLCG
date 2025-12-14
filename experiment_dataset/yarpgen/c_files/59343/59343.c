/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 ^= ((((arr_5 [i_0] [i_1 + 4] [i_2 - 1]) > (arr_9 [i_1 + 2] [i_1] [i_2 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 |= (arr_2 [19]);
                                var_22 &= 19468;
                            }
                        }
                    }
                    arr_16 [i_0] [i_0 + 1] [i_0] [i_0] = ((arr_2 [i_0 - 1]) ? -19452 : (((-107 ? -641831324 : -1510))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_23 = (((arr_13 [i_6] [i_5] [i_5] [i_5] [i_5]) << (((arr_15 [i_5] [i_5] [i_5] [i_5] [i_6]) + 68))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_24 = (max(((((arr_14 [i_8] [i_7 + 1] [i_7] [i_6] [i_5]) ? 95 : -19454))), ((((max(-19468, 176048082))) ? (((max((arr_25 [i_5] [i_7] [i_7]), -19452)))) : 58944))));
                            arr_26 [i_5] [i_5] [i_5] [i_5] = 5370398451178343048;
                            arr_27 [i_5] [i_6] [i_7] [i_8] = arr_1 [i_8];
                        }
                    }
                }
                var_25 = (66563818 * 641831320);
            }
        }
    }
    var_26 = var_8;
    #pragma endscop
}
