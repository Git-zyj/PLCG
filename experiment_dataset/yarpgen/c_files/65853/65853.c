/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((var_6 ? (max(36028797018963968, ((-10 ? 26589 : 36028797018963946)))) : (((((max(-36028797018963969, (arr_2 [i_1] [4])))) ? ((max(7936, -7927))) : var_3)))));
                arr_6 [i_0] [i_0] = (((~var_0) < (((arr_2 [i_1] [i_1 - 1]) ? 1 : var_12))));
                var_15 = (((((arr_4 [i_0] [i_0]) != (arr_4 [i_0] [i_0]))) ? (((var_11 + 2147483647) << (((arr_3 [7] [i_0]) - 26)))) : var_2));
            }
        }
    }
    var_16 = (max((max(((max(var_2, var_0))), var_7)), ((max(-36028797018963952, (max(25568, 125)))))));
    var_17 = -7918;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_18 = (min(1, var_9));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((((0 & ((733430141 ? 14 : 9223372036854775807)))) ^ ((((~(arr_4 [8] [2]))) ^ (((max(19, var_12))))))))));
                            arr_18 [i_2] [i_3] [i_4] [4] = 29;
                        }
                    }
                }
                arr_19 [i_2] = ((243 == (min((min(36028797018963960, var_6)), (((1563217171 ? 65011712 : -7928)))))));
            }
        }
    }
    var_20 = (((max(var_9, (((var_10 ? 1865080850 : 1))))) * ((((!((max(237, (-2147483647 - 1))))))))));
    #pragma endscop
}
