/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_0] = ((min(var_4, var_9)));
                                arr_14 [1] [i_0] [6] [i_0] [i_0] = ((((((var_8 <= var_0) ? var_0 : var_4))) ? (((var_0 > var_3) * -var_6)) : -228));
                                var_10 ^= ((~(1 - 18446744073709551606)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_5] [i_0] = (+-1);
                                arr_21 [i_0] [10] [i_2] [i_6] &= (((((var_6 * 1) ^ (var_5 & 1))) * ((124 ? 1 : 1))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_0] = ((var_4 ? ((-((min(var_3, var_7))))) : ((((min(5, var_6))) ^ var_1))));
                }
            }
        }
    }
    var_11 = (max((!var_1), (((111 || 1) ? var_1 : (var_4 > var_7)))));
    #pragma endscop
}
