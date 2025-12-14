/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73281
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

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_10 = (arr_5 [i_0] [2] [i_1] [i_2]);
                    var_11 = ((((109 ? 56242 : (arr_2 [i_2 - 2] [i_1] [i_2]))) == 9294));
                    var_12 *= 1;
                    arr_6 [i_2 + 1] [13] = var_4;
                }
                var_13 &= ((!((min(((-10 ? (arr_3 [0]) : var_1)), 9286)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    var_14 -= (arr_7 [i_4]);
                    var_15 += ((((((!(((193 * (arr_8 [i_3])))))))) == (max(4294967295, (arr_10 [i_3] [i_3])))));
                    var_16 = 22222;
                }
            }
        }
    }
    var_17 ^= (max(var_2, (max(-1, var_6))));
    var_18 = (min(var_18, (118 < 1)));
    var_19 = ((((var_6 ? ((176 ? 1 : -114)) : (~1))) - (((max(var_4, var_2))))));
    #pragma endscop
}
