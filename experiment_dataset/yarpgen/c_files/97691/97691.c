/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 >> (var_5 - 61888)));
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((arr_1 [i_0]) ? ((-12 ? (((arr_3 [4] [i_1] [i_1]) ? var_7 : var_3)) : (((~(arr_4 [i_0] [i_1] [i_0])))))) : ((min(1493133200, (arr_3 [i_0] [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, 1016286770));
                            arr_12 [i_2] [i_1] = ((-(((arr_0 [i_2 - 1]) ? -28508 : ((min((arr_3 [i_0] [i_1] [i_2]), var_5)))))));
                            arr_13 [i_0] [i_0] [14] [i_0] &= (max(((min((arr_2 [i_2] [i_1]), 2262934996))), ((max(32764, 1493133192)))));
                            arr_14 [i_0] [i_1] [i_2 + 3] [i_3 + 1] [i_2] = (var_0 >= var_1);
                            var_14 += ((1493133176 ? (max(1493133212, (-1493133188 ^ 1493133198))) : (((-1493133207 + 2147483647) >> (((((arr_6 [6]) ^ 10027894220304952731)) - 10027894220304952729))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, -1985127470));
    var_16 = var_4;
    #pragma endscop
}
