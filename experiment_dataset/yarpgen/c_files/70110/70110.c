/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((((min(0, var_4))) && (((0 ? var_7 : 4294967295))))) || ((var_10 || (!var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (min((((!((((arr_10 [i_0] [i_0 + 2] [i_0]) << (var_0 - 3702115682))))))), ((max(243876784961421378, (arr_10 [1] [i_2] [8]))))));
                                var_17 = ((((((4432935156737179622 || var_12) * ((-1690864933 ? 14013808916972371993 : (arr_5 [10] [10] [i_3])))))) && ((min((((0 || (arr_8 [i_0 + 1] [4] [i_4])))), var_6)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_5] [i_6] [i_7] = 10728848398986405137;
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 2] |= (arr_22 [i_0] [i_1 - 2] [i_5] [i_6] [i_0]);
                                arr_25 [11] [i_1] [4] [1] = ((((!(arr_7 [i_0])))));
                                arr_26 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0] [i_0] = (((arr_0 [i_0 - 3]) == ((((var_10 && (arr_0 [i_0 + 2])))))));
                            }
                        }
                    }
                }
                arr_27 [1] [i_1 - 1] [i_1] = ((((((var_14 << (((var_2 + 1606154429) - 52)))) % (((var_2 ? (arr_12 [0] [0] [9] [i_1 - 2] [i_1 + 3] [i_1]) : (arr_8 [i_0 + 2] [i_0] [i_0])))))) != ((max(((((arr_20 [i_0] [i_0] [i_0] [i_0]) && (arr_12 [i_0] [i_0 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1])))), var_2)))));
            }
        }
    }
    #pragma endscop
}
