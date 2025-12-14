/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = ((((((((-1 ? -8124386455229128462 : 0))) ? (~var_6) : (var_8 ^ var_8)))) ? var_3 : (max((var_2 || var_1), (var_0 / 23)))));
    var_12 = ((!((((!-900389522) << (0 >= -900389522))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((arr_0 [i_0] [5]) - (arr_1 [i_0] [4])))) < ((~(~4903333263383288519)))));
                arr_6 [i_0] [i_0] [i_1] = ((-1 ? ((-1 ? (((arr_4 [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : var_5)) : (arr_2 [i_1]))) : ((((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_1]))))));
                var_13 += var_5;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_14 = (!6482054678166684550);
                            var_15 = ((-900389522 ? ((-(arr_1 [i_3 - 1] [i_3 - 1]))) : -1976042846));
                            var_16 = ((~(arr_11 [i_1] [i_3 + 1] [i_1] [i_3 - 2] [i_3 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
