/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_4, ((330514768810218427 ? 330514768810218427 : (!var_0)))));
    var_11 = (1 - 18446744073709551615);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = (max((arr_7 [i_4] [i_3] [i_2] [i_0]), ((9502 ? 9509 : (arr_6 [i_1] [i_0] [i_0] [i_4])))));
                                arr_16 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((~(min(var_1, 330514768810218430))));
                                var_12 = (max(var_12, var_5));
                                var_13 = (max(var_13, ((((var_8 != 18116229304899333189) ? 12543 : ((~(~var_1))))))));
                            }
                        }
                    }
                }
                var_14 ^= ((18116229304899333188 ? var_2 : (max(var_3, (arr_7 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 1])))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_15 = 1;
                                var_16 += (((max((!var_1), (max(-114, 4294967295)))) >= (23087 < -120)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 += ((((((6094613800761759263 ? var_4 : var_7)) + var_4)) - 125));
    #pragma endscop
}
