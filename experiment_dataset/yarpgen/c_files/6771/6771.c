/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = 16244463962207836827;
                    var_15 = (((((6204991177259450456 - (arr_4 [i_2]))) >= var_0)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = ((var_6 >= ((12241752896450101159 >> (var_4 - 16061722084613525745)))));
                                arr_15 [5] [5] [5] [i_3] [i_4 - 2] = (((max(var_3, (arr_14 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 1]))) >= (((var_12 >> (((arr_14 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 2] [i_4]) + 151)))))));
                                var_17 = (((arr_9 [15] [i_4 - 2] [i_4 - 2]) | ((((arr_2 [i_4 + 1] [i_4 - 1]) && (arr_12 [i_4 + 1] [i_4] [i_4 - 2] [i_4 + 1]))))));
                                var_18 += ((((((var_0 ^ var_9) | (((arr_13 [i_0] [i_0] [i_2] [0] [i_4]) ^ (arr_12 [i_1] [12] [i_3] [i_4])))))) ? (min((~var_5), (((var_5 ? var_9 : var_0))))) : ((max(-3096418563606779054, -9)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_5] = (max(((var_4 - (((var_0 ? var_6 : (arr_21 [i_0] [4] [9] [4] [13] [i_6 - 1])))))), (((var_8 | 96) - var_12))));
                                arr_25 [i_0] [i_0] [i_5] = ((6204991177259450454 >= (((-(arr_21 [i_5] [i_6 - 1] [i_6] [i_6] [i_6] [i_6 - 1]))))));
                                var_19 = (min(var_19, ((((arr_18 [i_5] [i_1] [i_6 - 1] [i_6 - 1]) >= ((var_3 - (arr_11 [i_0] [i_6 - 1] [i_6] [i_6 - 1]))))))));
                                var_20 = (((arr_2 [i_0] [i_1]) & 5245864487437673332));
                                arr_26 [i_0] [i_5] [i_5] [i_2] [i_5] [i_6] [i_5] = ((((((var_9 & var_3) && var_6))) >> (((var_9 && ((min(var_0, 4))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_21 = ((-123 ? 59 : ((1 ? 4294967295 : 12241752896450101159))));
                arr_32 [i_7] [i_8] = ((((((min((arr_7 [i_7] [i_7] [i_8]), -44)))) & var_1)));
            }
        }
    }
    #pragma endscop
}
