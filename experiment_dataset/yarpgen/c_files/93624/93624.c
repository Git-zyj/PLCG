/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((max(var_17, var_8)) ^ (var_5 & 108)))) ? var_12 : ((var_7 << (var_3 - 30348)))));
    var_21 |= (((((var_7 | var_7) ? ((max(var_10, var_12))) : ((max(var_2, 1))))) * ((((max(var_5, var_5))) ? (56334 && var_13) : (var_2 && var_7)))));
    var_22 = (max(var_5, var_13));
    var_23 = (var_1 / var_16);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_24 = (max((min((arr_0 [i_0 + 1]), ((((arr_3 [0] [i_1]) ^ (arr_2 [i_0] [i_0])))))), (-2147483647 - 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_25 = ((((532085151 || (48977 || 4093))) && (((7286 ? var_12 : (max(2451474134, (arr_2 [i_3] [i_2]))))))));
                            var_26 = (max(var_26, (arr_9 [i_1] [i_3] [6] [i_2] [i_1] [i_0])));
                        }
                    }
                }
                arr_11 [i_0] = (((((((((arr_9 [i_0 - 1] [i_0] [0] [i_0] [i_0] [0]) & -13837))) ^ 1))) || ((min((arr_8 [i_0 - 1] [i_1]), var_0)))));
                var_27 -= ((var_8 ? ((-((1640793501 ? var_2 : (arr_10 [i_1] [i_1] [i_1] [i_0]))))) : (((-var_4 ? (((-(arr_3 [i_0] [16])))) : ((-(arr_5 [i_0] [i_1] [i_0] [i_0]))))))));
                arr_12 [i_1] [i_1] [4] = (((arr_3 [i_0] [i_0]) * (max(1, var_8))));
            }
        }
    }
    #pragma endscop
}
