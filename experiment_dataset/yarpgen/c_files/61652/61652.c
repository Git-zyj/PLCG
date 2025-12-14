/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((15 ? ((((11 > 317975965862171254) ? var_5 : (((max(245, 238))))))) : var_4));
    var_11 = (min(var_11, (((((var_7 >> ((var_3 ? var_9 : 1)))) << (var_9 == 7684647434202646737))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((var_9 ? (arr_1 [i_0]) : (arr_1 [i_0]))) < ((((!var_7) >> (((((arr_1 [i_0]) << (var_8 - 17778181600227539276))) - 13135320796371650797))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [15] [i_2] = ((((91 && var_7) ? (~var_4) : (((var_7 ? (arr_3 [i_0] [1] [i_2]) : var_6))))) >= -7684647434202646739);
                            var_13 ^= (((arr_6 [i_0] [i_2 + 2] [i_0] [i_0] [i_2 + 2]) + ((-(arr_6 [i_2 + 1] [i_2 - 1] [3] [i_2] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
