/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_10 | var_11) == (var_12 & var_11)))) <= var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [10] [i_1] = (((-1307996778 % 3881) > 64500));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 -= ((((((((arr_2 [i_0] [i_1] [i_3]) + 0))) / (arr_1 [i_1 + 2] [i_1 + 1]))) << (0 <= var_5)));
                            var_15 = (((((104 % -3879) >> 26)) ^ (3881 < var_11)));
                            arr_10 [20] [21] [i_1] [i_3] = ((((((arr_8 [i_0] [i_1]) || 32256))) | (3875 ^ var_0)));
                        }
                    }
                }
                var_16 = (((var_8 % 64500) | (((arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1] [i_0]) ^ var_7))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            {
                var_17 = (max(var_17, ((((((var_9 > var_1) <= 102)) || (((((var_4 >> (var_10 - 5546676011362695470))) | (((1971 <= (arr_0 [i_5]))))))))))));
                arr_15 [i_4] [11] = ((((4533002222682724583 >> (57032 - 57009))) != 0));
                arr_16 [i_5] = (((var_5 << 2) >> (((((arr_13 [i_4 + 1] [i_5 - 3] [i_4 + 1]) ^ (arr_3 [i_4 + 1] [i_5 - 2] [i_4]))) - 5048113065237821567))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((((-3882 & -1972) + 2147483647)) << ((((var_8 * (arr_17 [i_4 - 3] [i_4 - 3] [i_5 - 3]))) - 1509858)))))));
                            arr_22 [i_7] [i_6] [i_4] [i_4] = (((((arr_5 [i_4] [i_4 + 1]) <= (arr_17 [3] [i_4] [i_4 + 1]))) || (var_3 ^ 0)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
