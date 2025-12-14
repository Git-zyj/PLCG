/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((!(min((!-2614), (!var_1)))));
        arr_3 [i_0] = (!var_7);
        var_11 = var_7;
        arr_4 [i_0] = ((~((-var_5 ? (arr_1 [i_0]) : (arr_1 [7])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_12 = 5825888092399356671;
                                var_13 ^= (((((6728051043006719019 ? 0 : 0))) == ((((min(1, var_4))) ? (max(var_8, 0)) : (((var_6 ? var_3 : (arr_6 [i_1]))))))));
                                arr_17 [i_2] [i_2] [i_1] [i_5] [i_3] = ((!(arr_10 [i_4 + 1] [i_2] [i_5])));
                                arr_18 [i_3] [i_1] [i_3] = ((var_4 > (((0 ? -32766 : ((-(-32767 - 1))))))));
                                arr_19 [i_1] [i_1] [i_3] [i_1] [i_1] = (max((max((max((arr_7 [i_4] [i_5]), (arr_6 [i_1]))), 8957985564525156733)), (min((((arr_12 [i_2] [i_2] [i_3]) ? -28719 : (arr_9 [14] [i_4] [i_1]))), (((arr_14 [i_5] [i_2] [i_3] [i_4] [i_5] [i_5]) ? (arr_7 [i_1] [i_3]) : (arr_9 [i_5] [i_2] [i_1])))))));
                            }
                        }
                    }
                    arr_20 [i_3] = (((~0) * -28719));
                    var_14 = (min(var_14, ((max((!240), ((((max(-17585, (arr_6 [i_1])))) * ((-(arr_16 [i_1] [i_1] [i_1] [i_2] [i_3]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
