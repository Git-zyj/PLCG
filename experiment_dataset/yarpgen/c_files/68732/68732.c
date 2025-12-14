/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((122 | 10994728596763643424) ? var_7 : (min((30342 != -32767), (max(35194, 16134246010910454654)))))))));
    var_20 = (2147483641 ? 122 : (min((min(var_3, var_5)), var_16)));
    var_21 = max(var_11, var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = (arr_5 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_22 = ((((!(((var_8 ? (arr_5 [i_2]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])))))) ? ((~(min(115, -1)))) : ((min(((max(var_12, var_8))), (min(1, 4059373183)))))));
                            var_23 ^= (arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [2] [3] = ((-((2147483647 ? 16016809 : 1))));
                            arr_21 [i_0] [i_1 - 1] [i_4] [i_5] = (((arr_18 [i_0] [i_0]) + ((min(326, -31305)))));
                            arr_22 [i_5] [3] [2] [i_0] = (arr_4 [4]);
                        }
                    }
                }
                var_24 = ((((min(9461929124945003727, 2147483641))) ? (((var_4 != var_6) ? (1 | 141) : ((min((arr_13 [1] [i_1] [i_1] [1] [5]), (arr_2 [i_0])))))) : ((~((var_7 ? 30338 : 2))))));
            }
        }
    }
    var_25 = (((((-135 ? (((var_5 ? var_0 : 31310))) : ((124 ? -7834065272745381020 : 18446744073709551615))))) ? (var_2 * var_15) : (max(var_2, 9223372036854775807))));
    #pragma endscop
}
