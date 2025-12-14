/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_18 *= var_10;
                var_19 = arr_0 [i_1] [i_0];
                var_20 = 127;
                var_21 = max(((min((arr_0 [i_0 - 2] [i_0 + 1]), -29))), ((-128 ? (arr_2 [i_1]) : 81006931)));
                arr_5 [i_1] = ((((((min(-3831, var_16))) ? (((arr_0 [i_0 - 1] [i_1]) + (arr_0 [i_0 + 2] [i_1 + 2]))) : -26691))) ? ((max((arr_3 [i_0] [i_1]), 81006931))) : (min(((0 ? var_12 : -7746)), (arr_3 [i_1 - 4] [i_1]))));
            }
        }
    }
    var_22 = ((min(5, 267911168)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            {
                var_23 = (min(var_23, (-1 + 2147483647)));
                var_24 *= (max((132 - -21), (min((max(26690, 426522774)), (max(var_4, var_4))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_4] [i_4] [i_5 - 1] = (-1 || var_1);
                            var_25 = max((max((max(-21, (-2147483647 - 1))), 962907906)), ((-62580429 ? 32767 : (var_15 || 1885))));
                            var_26 = ((626184690 ? (1 | 2147483647) : (arr_10 [i_3 + 1] [i_5 - 3] [i_5 - 1])));
                            var_27 = max((arr_0 [i_2] [i_2]), ((((((-2147483639 ? (-32767 - 1) : -2147483647))) && (arr_13 [i_3 + 2] [i_5 - 3])))));
                            var_28 = (min(var_28, ((((((((max(var_8, -216912339))) ? -7047986 : ((min(var_17, -10454)))))) ? (max((-32747 * -32760), ((max(32767, (arr_8 [i_3 - 2])))))) : ((((max((arr_4 [i_2] [i_2]), (arr_10 [i_2] [i_3] [1])))) ? 1510492693 : ((var_1 ? (arr_15 [i_2] [i_2]) : (arr_11 [i_2] [12]))))))))));
                        }
                    }
                }
                var_29 = min(2147483647, (((var_17 * 32760) ? (max(var_16, var_3)) : (min(-2147483644, 2147483647)))));
            }
        }
    }
    #pragma endscop
}
