/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = (6045372506841279759 & -6045372506841279739);
                            var_14 ^= ((~((-13 ^ (6045372506841279750 >= 21)))));
                            var_15 = (max(var_15, (((~(((((((arr_3 [i_0]) && var_3)))) * ((6045372506841279772 ? var_0 : 6045372506841279766)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_15 [i_5] [i_0] [i_1] [i_0] [i_0] &= (((((63 ? 39 : (arr_7 [0] [i_5 - 3] [i_0 + 2] [i_0])))) ? (((((232651152 ? var_4 : 104))) ? (max(-104, 914095530868693936)) : 19)) : (((((((~(arr_4 [i_5] [i_4] [i_1] [i_0])))) || (arr_7 [i_0 + 1] [5] [i_4 - 1] [i_4 - 1])))))));
                            arr_16 [i_0 - 2] [i_4] [i_5] = 17223063909685063653;
                            arr_17 [i_4] [i_1 - 2] [i_4] = (min(((((39 >> (45976 - 45958))))), (arr_11 [i_5 + 2] [i_4 - 1] [i_0])));
                            var_16 *= ((((((arr_6 [i_5 + 2] [i_1 + 2] [i_4 - 1]) ? (arr_6 [i_1 + 1] [i_4 - 1] [i_5 - 4]) : 6045372506841279759))) > (min(((((arr_7 [i_0 + 1] [i_1] [i_4] [i_5]) ? 2047 : (arr_4 [i_4] [i_4 - 1] [i_4] [i_4])))), var_10))));
                            var_17 = (min(var_17, (~322887480)));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_4;
    var_19 = (((((min(var_7, -1710471588)) % var_9)) & ((var_4 << (((((-6045372506841279752 ^ var_6) + 6045372504621710725)) - 14))))));
    var_20 = (min(var_20, (((((max(var_9, 17539205160313568589))) > 561093709)))));
    #pragma endscop
}
