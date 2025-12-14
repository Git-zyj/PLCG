/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((4294967295 ? (max(((var_11 ? var_7 : 4294967270)), (((119 ? var_11 : -59))))) : ((((!(((2061891001 ? var_9 : var_5)))))))));
    var_16 = 931847158;
    var_17 = (((((4294967291 ? ((var_3 ? var_6 : (-2147483647 - 1))) : (~var_14)))) ? var_7 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = (((((arr_8 [i_1] [i_1 - 1] [i_1]) ? (arr_0 [i_1 - 1] [i_1 - 2]) : (arr_8 [i_1] [i_1 + 1] [i_1]))) * (((arr_8 [i_1] [i_1 - 2] [18]) ? (arr_8 [i_1] [i_1 - 1] [17]) : 239))));
                            var_19 = 8334221578187818263;
                        }
                    }
                }
                var_20 = (min(var_20, ((((((arr_11 [2] [i_0] [i_1 - 2] [16]) > (((arr_1 [i_0]) ? var_7 : (arr_4 [i_0]))))) ? ((var_2 ? ((~(arr_8 [i_0] [i_1] [5]))) : -1)) : (arr_3 [i_1 - 2] [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}
