/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-1254028699 - 0) ? ((((max(var_6, var_8))) ? ((var_6 >> (var_3 - 4191295617))) : var_9)) : ((((1254028727 != (var_2 * var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 -= (min((arr_5 [i_1] [i_1 - 1] [i_2]), ((((arr_5 [i_0 + 1] [i_1 - 1] [1]) == (arr_5 [i_0 - 1] [i_1 + 1] [i_2]))))));
                    var_13 = (min(var_13, ((((arr_1 [i_1 + 1]) >> ((((var_7 ? (arr_1 [i_1 + 1]) : (arr_6 [i_0] [i_0] [i_0 - 2] [i_2]))) + 7653360547237976451)))))));
                    arr_7 [i_1] [i_1] = 205;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 = (!1387564847);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 = ((1 ? 1 : 139));
                            var_16 = 2219855170;
                            arr_13 [i_3] [i_1] [i_1] = ((~(arr_0 [i_4])));
                            var_17 ^= ((var_9 ? 28 : (-22218 | 4294967295)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
