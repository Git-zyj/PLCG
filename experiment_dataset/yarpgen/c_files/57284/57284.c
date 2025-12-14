/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_4;
    var_19 = ((var_3 ? (((4294967263 ? -6002434695756533577 : -34))) : var_5));
    var_20 = ((var_15 + (((((var_7 ? 0 : 11276))) ? var_13 : ((13 ? -957355353 : 6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [22] = ((0 ? ((max((((-127 - 1) ? 10115 : 1456447239263823699)), ((max(1, (arr_1 [i_0]))))))) : -12823));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [12] [i_2] [i_2] = (((((-7558289296816689257 ? 245 : var_4)))) ? ((-2081505804 ? 2254155224339652673 : (((-2147483647 ? (arr_7 [11] [3] [i_1] [7]) : 3411121551))))) : (min(17246941824304586030, 11774635232630988881)));
                    arr_10 [i_2] [i_1] [i_0] [i_2] = ((~(arr_0 [i_0])));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_18 [16] [i_5] [i_3] [0] = (arr_1 [i_3]);
                                arr_19 [i_5] [i_5] [i_0] [i_0] [10] [i_0] &= 19584;
                            }
                        }
                    }
                    arr_20 [i_3] [9] = (arr_16 [i_3] [8] [i_1] [i_0] [7]);
                    var_21 |= (min((((3248213214218504204 != 8892566399990257846) ? ((max(4294967290, 1))) : ((var_2 ? 1233323307 : 1453487398767349903)))), (arr_12 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
