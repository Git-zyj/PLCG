/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_15 << (var_14 - 19244)));
    var_21 &= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_22 += ((((arr_11 [10] [i_0] [1] [i_3] [i_4]) ? (arr_6 [i_0]) : var_0)));
                                arr_15 [i_0] [i_0] [i_0] [2] [i_0] [i_0] [i_0] = (((arr_3 [19] [14] [i_1]) || (((628322981 << (21571 - 21570))))));
                                var_23 ^= (((((((min(227, (arr_4 [i_4])))) % (((arr_4 [i_1]) ? (arr_0 [i_0] [i_0]) : 16))))) ? (max(var_2, (((~(arr_2 [i_4] [i_4])))))) : ((((((arr_6 [i_1]) && (arr_12 [i_0] [i_2] [i_3]))) ? 0 : (arr_9 [i_0]))))));
                                arr_16 [i_0] [i_0] |= (((((var_3 << (((arr_11 [i_4] [14] [i_0] [i_1] [i_0]) - 25957))))) || (((((max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_2 [i_1] [22])))) ^ (arr_12 [i_0] [i_1] [8]))))));
                            }
                        }
                    }
                }
                var_24 = ((29343 != (arr_4 [2])));
                var_25 = (!0);
                arr_17 [i_1] [15] = (((arr_4 [i_0]) ? ((((arr_4 [i_1]) && (arr_9 [i_0])))) : ((((arr_4 [i_0]) || (arr_9 [i_1]))))));
                arr_18 [i_0] [1] [0] = (min((arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [1]), (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
