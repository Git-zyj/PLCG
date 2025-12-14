/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((var_10 ? var_5 : 203))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (arr_7 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((-65532 ? (((1 ? 128 : (((arr_3 [i_0 + 1] [i_0 + 1] [i_0]) ? -31255 : 33))))) : ((-(arr_3 [i_1 - 3] [i_3 + 4] [i_4])))));
                                var_15 = (((~65514) ? (((((33 ? (arr_0 [i_0]) : (arr_10 [13] [i_3 + 2] [17] [i_1] [i_1] [i_0])))) ? var_7 : (arr_1 [7]))) : (((arr_8 [i_0]) ? (((arr_6 [i_2 - 2] [i_1] [12]) ? 128 : 1)) : 65524))));
                                arr_14 [i_0] [i_1] [i_2 + 2] [i_3] [i_4] = ((((((arr_12 [i_4] [i_0 + 1] [0] [i_0] [i_0] [20]) ? 35 : (arr_11 [i_0] [i_1])))) ? (arr_5 [i_0 - 1] [i_1] [i_3 + 3]) : ((~((-32764 ? (arr_4 [i_0 + 1]) : (arr_4 [i_3])))))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] [i_0] |= (~-7390578733486979331);
                }
            }
        }
    }
    var_16 = ((1 ? ((-17044 ? (((250 ? 12 : 65528))) : ((0 ? var_5 : var_7)))) : -6182013118559764200));
    #pragma endscop
}
