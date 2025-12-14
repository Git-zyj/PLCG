/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (((((0 ? 4211546238238747325 : 10))) ? (max((arr_6 [i_0 - 1] [i_0] [i_0] [i_0]), (arr_13 [i_0 + 1] [i_2 + 1] [i_3] [i_4 - 1] [4]))) : (((((-2096015673 & (arr_3 [i_0] [i_0]))) ^ (1 | 2096015673))))));
                                var_18 = (min(var_18, (((((((arr_4 [i_0] [i_2 - 2] [i_0]) ^ (arr_4 [i_0] [i_2 - 1] [i_2 - 1])))) ? ((((arr_4 [i_0] [i_2 - 2] [i_2 + 1]) + (arr_4 [i_4] [i_2 - 2] [1])))) : (((arr_4 [i_0] [i_2 + 1] [i_0]) ? (arr_4 [i_0] [i_2 - 2] [12]) : var_5)))))));
                            }
                        }
                    }
                }
                var_19 = (((((0 ? (arr_6 [3] [i_0 + 2] [i_0] [i_0 + 2]) : 27697))) || (((var_14 ? (~-1) : (var_3 ^ 1))))));
                arr_15 [i_0] = (((arr_3 [i_0 - 1] [2]) + (arr_3 [i_0 + 1] [i_1])));
            }
        }
    }
    var_20 = (max(var_1, ((23 ? -1887251386799730705 : (~-784664189)))));
    var_21 = ((((((384 > var_8) ? (6789420839288493105 > var_3) : (min(var_3, 15872))))) ? 15892 : var_6));
    var_22 = var_2;
    var_23 = var_2;
    #pragma endscop
}
