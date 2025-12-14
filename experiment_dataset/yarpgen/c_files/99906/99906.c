/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((!((min(var_9, (min(var_5, -98)))))));
    var_13 = (max(199, ((var_5 ? var_5 : (var_4 || 82)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((~(max((arr_3 [1] [i_1 - 1]), (arr_3 [i_0] [i_1 - 1]))))))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_15 = ((((((arr_1 [i_1 - 1] [i_1]) ? (((arr_1 [i_0] [i_1]) % (arr_1 [i_0] [4]))) : (arr_6 [i_0] [i_1 - 1] [i_2 - 1])))) ? (min(var_2, (arr_3 [i_1 - 1] [i_2 + 2]))) : -911790012));
                    var_16 ^= (~819772881);
                    var_17 = (((arr_6 [i_0] [i_1 - 1] [i_1 - 1]) * (((arr_6 [i_0] [i_1 - 1] [i_2]) ? (arr_3 [i_0] [i_1 - 1]) : (arr_6 [i_0] [i_1 - 1] [i_1 - 1])))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            {
                                var_18 = (arr_14 [i_0] [i_1 - 1] [i_3 - 2] [i_4] [i_5 + 1]);
                                var_19 = 126;
                            }
                        }
                    }
                    var_20 = ((98 ? -816678460 : (arr_2 [i_1 - 1] [i_1])));
                    var_21 = (arr_10 [i_0] [i_3] [i_1 - 1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_22 = (((1106602185 & (arr_8 [i_0] [i_0] [i_3] [i_6]))) >> (243 - 227));
                                var_23 = (arr_1 [i_0] [i_3 - 2]);
                                var_24 = (arr_0 [i_0]);
                            }
                        }
                    }
                }
                var_25 = (max(var_25, ((((((97 << (((arr_4 [i_1 - 1] [7]) - 28))))) ? ((-(arr_14 [i_1 - 1] [i_1 - 1] [i_0] [i_0] [i_1]))) : 3188365138)))));
            }
        }
    }
    #pragma endscop
}
