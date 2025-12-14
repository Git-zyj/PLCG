/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((1 ? ((~(5 & -26687))) : (min((min(18446744073709551615, 1)), ((var_5 ? 18446744073709551604 : (arr_1 [i_0] [i_1]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 ^= (((min((((24 > (arr_7 [i_2] [i_3])))), var_11)) < (((65 / ((min(-20560, 20560))))))));
                            var_20 |= ((11 * (!4611686018427387903)));
                            var_21 = (-20579 * 15);
                            var_22 = 1168455391;
                            var_23 ^= 18446744073709551615;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_24 = (((((!((((arr_1 [i_0] [i_1]) ? var_1 : 124)))))) != var_3));
                            var_25 = ((-(!1)));
                            var_26 += (arr_8 [i_0] [i_1] [i_4] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_27 = 20;
    #pragma endscop
}
