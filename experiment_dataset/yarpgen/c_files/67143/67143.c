/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_0 * (min(2121421104, -23902)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] &= (max(250, (arr_0 [i_0])));
        arr_4 [12] [i_0] = (max(((min(((~(arr_2 [i_0] [i_0]))), (~var_0)))), ((~((~(arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [4] [i_2 + 3] = (!50);

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_2] [0] [i_3] [i_4 - 1] = 2462907417;
                            arr_15 [i_2] = ((23901 ? (-5454210645524146053 & -2481299298640966411) : (arr_13 [i_1 - 2] [i_1 - 1] [i_1 - 2])));
                            arr_16 [i_2] [i_2 + 2] [i_2 + 2] [i_2] = ((-(arr_10 [i_0] [i_1])));
                            arr_17 [i_0] [i_1 + 2] [i_4] [i_3] [i_3] = (arr_1 [i_3 - 1]);
                            arr_18 [i_0] [i_1] [i_1 - 1] [i_2 + 2] [i_2] [i_4 - 1] = (((23894 ? (-127 - 1) : 254)));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_1] [i_2] = ((~(arr_5 [i_1 - 2] [i_3 + 1])));
                            arr_24 [i_2] [i_2 + 2] [i_2] = ((65519 >= (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (32767 - 32767)))));
                            arr_25 [i_5] [i_0] [i_3] [i_2 - 1] [i_0] [i_0] = (0 % -25589);
                        }
                    }
                }
            }
        }
        arr_26 [1] = (~226);
    }
    var_12 = ((((((max(2462907417, 1008806316530991104)) ^ var_5))) * (min(((var_6 ? 12377576139635795674 : 1718)), (32767 & 15534890750177654407)))));
    #pragma endscop
}
