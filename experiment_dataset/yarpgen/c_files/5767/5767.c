/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = ((((((1 || 100217968) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || ((((max((arr_1 [i_0]), var_1))) && 596966483))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 *= (!596966497);
                                arr_16 [3] [i_1] [i_2] [i_2] [18] = ((((((var_5 * var_3) ? (((var_0 ? 3698000825 : 0))) : (max((arr_1 [i_4]), (arr_6 [10] [5] [i_2])))))) ? (((((var_3 ? -1056208103 : (arr_11 [i_0] [i_1] [i_2] [i_0] [i_2])))) ? (arr_12 [16] [i_2] [i_3] [i_2]) : (max(-580195334955733421, 1393063725)))) : (((((max(var_2, -9223372036854775807))) ? ((2147483647 * (arr_4 [i_0] [i_2] [i_0]))) : (((1 ? -16178 : 8501))))))));
                                var_13 = (min((min((arr_0 [i_0]), 0)), (((!(arr_10 [i_1] [i_4] [i_1] [13]))))));
                                arr_17 [10] [i_4] [i_0] &= var_5;
                            }
                        }
                    }
                    var_14 -= (((((~1841896720462456942) ^ (((~(arr_14 [1] [1] [2] [1])))))) * (((-20665 / (~var_7))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_26 [i_6] = (((3673745446657403204 ? 384244295 : 2311144793)));
                        arr_27 [i_6] [2] [i_6] [i_7] [1] [i_7] = (var_5 - (arr_9 [i_0] [i_5] [i_6] [i_6]));

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_32 [i_8] [6] &= (((arr_22 [i_5] [i_6 + 1] [i_6]) ? (arr_22 [i_8] [i_6 + 2] [i_6]) : (-76 > 3497968809)));
                            arr_33 [i_6] = ((9223372036854775807 | (-2147483647 | 1789757116)));
                        }
                    }
                }
            }
        }
    }
    var_15 -= 73;
    #pragma endscop
}
