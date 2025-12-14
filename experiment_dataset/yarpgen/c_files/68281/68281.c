/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (((((min((arr_2 [i_1 - 4] [i_1 - 4]), 13741)))) > ((14 ? 0 : -23))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (arr_4 [i_0] [i_1 - 1] [i_1 - 1]);
                                var_14 = (0 * ((var_1 % ((((arr_7 [i_1 + 1] [i_0]) | 1))))));
                                var_15 *= var_12;
                                var_16 = ((((min(8066053954391174783, var_4)) | var_9)));
                                var_17 ^= (arr_5 [i_0]);
                            }
                        }
                    }
                }
                var_18 = -371880095;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_19 = (~(arr_2 [i_0] [i_5]));
                            var_20 = (((((~(arr_3 [i_0])))) && ((min(-3, -27288)))));
                            arr_19 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0] = (((-(((((arr_14 [i_0] [i_5] [i_6]) + 2147483647)) << (26 - 26))))));
                            var_21 = (((((((-2444227081616838276 ? var_8 : var_5))) ? var_11 : ((-31 ? -7999134622491690460 : 5267926365178712639))))) ? 50848 : ((((arr_15 [i_5]) && var_0))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (((~8066053954391174799) ? (!14) : (min(var_7, var_9))));
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                var_23 = (arr_21 [i_7] [i_7]);
                var_24 = (max(var_24, ((39593 != ((min(1750298408, -25)))))));
                var_25 -= (((((min(var_10, -39))) != 111)) ? (((14 - -190210756) ? (4294967295 < var_3) : 65)) : (((min(var_2, (arr_22 [i_7 - 1]))))));
                var_26 -= (max((((arr_23 [1] [i_8]) * var_9)), 111));
            }
        }
    }
    var_27 = var_7;
    #pragma endscop
}
