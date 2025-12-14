/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((130560 ? -130560 : ((-130560 ? -1672542863 : 0))))) ? -32 : 6815071466288732651);
    var_13 = ((-var_11 ? (((~(~-2147483627)))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] |= (((((-var_6 ? ((-(arr_0 [i_0] [15]))) : (((!(arr_9 [0] [i_1] [i_0] [0] [i_1] [i_1]))))))) ? ((-((46768 ? var_6 : var_0)))) : (--0)));
                            arr_12 [i_0] |= (((-(arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] [i_2]))));
                        }
                    }
                }
                var_14 = ((+((((((arr_10 [12] [i_1] [i_1] [i_0]) ? (arr_2 [i_0]) : 6))) ? (((!(arr_4 [i_1] [i_0] [i_1])))) : (((!(arr_10 [i_1] [i_0] [i_0] [1]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_1] [i_5 + 1] [i_1] = (7689313372059994905 ? (((((~(arr_2 [i_1])))) ? (((arr_14 [18] [i_1]) ? var_8 : -130561)) : (((130557 ? (-32767 - 1) : 504403158265495552))))) : (((((((arr_18 [0] [i_4] [i_1] [i_0]) ? (arr_1 [1]) : (arr_2 [i_1])))) ? -var_9 : -6))));
                            var_15 = (min(var_15, ((((((~(arr_10 [8] [i_4] [i_4] [i_5]))))) ? (((-var_6 ? var_10 : (((var_9 ? (arr_9 [i_0] [i_1] [i_0] [i_5] [i_0] [i_5]) : (arr_0 [i_0] [i_0]))))))) : ((-var_6 ? (arr_4 [i_0] [i_1] [i_4]) : -var_1))))));
                        }
                    }
                }
                arr_20 [i_1] [i_1] = (~-1672542865);
            }
        }
    }
    var_16 = (((((67 ? 72057594021150720 : -9223372036854775798))) ? -4503530907893760 : (!-var_2)));
    #pragma endscop
}
