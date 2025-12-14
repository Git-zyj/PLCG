/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (max(var_15, var_9));
                var_16 = ((-(((!var_2) ? (~var_12) : (arr_3 [i_1] [i_1] [7])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_17 = 64;
                                arr_17 [i_6] [i_2] [i_2] [i_2] [i_2] = (max(576460752303423480, 75));
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] [21] = ((104 ? 916675721 : 0));
                    var_18 = (max(var_18, (((!(arr_8 [i_2 - 2] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_19 ^= 1;
                                var_20 = ((1 ? 131071 : 1111154747));
                                var_21 = ((((min((arr_21 [i_2]), (-32748 | 75)))) & 3183812548));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
