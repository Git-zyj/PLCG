/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((((!(((var_2 ? var_5 : var_5))))))) & -4348586731917095686)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [0] |= ((((arr_3 [i_1] [2]) - (arr_0 [3] [i_1 - 1]))) == ((((((231731558 ? var_4 : var_9)) <= (arr_3 [i_1 + 1] [1]))))));
                var_15 = ((((((4069465481225288319 == (arr_1 [i_0]))))) - (((arr_0 [i_1 - 1] [i_1 + 1]) & ((((arr_2 [i_0] [i_1 + 4] [i_1]) ? var_3 : 19538)))))));
                arr_5 [i_0] [i_0] = ((-7544002105694561579 ? (~var_9) : ((min(1, (arr_2 [i_0] [i_0] [3]))))));
                var_16 = ((((((((-(arr_3 [i_0] [i_0])))) - (min(-13385, (arr_1 [i_0])))))) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])));
                arr_6 [i_0] [i_0] = (((((min(822, ((min(14481, (arr_2 [i_0] [i_0] [i_1 + 2])))))))) * (arr_1 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_17 = (((((var_1 ? (arr_13 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 + 3]) : (arr_13 [10] [10] [i_3 + 3] [i_3 + 1])))) ? (((((min(var_10, (arr_12 [i_2] [i_2])))) / -26))) : (((((var_4 ? var_5 : (arr_9 [i_4])))) ? (0 % -2267123559352715776) : ((((arr_10 [9] [i_4]) & var_4)))))));
                    var_18 -= (((arr_7 [i_2]) - ((((var_9 >= ((min(var_7, 1)))))))));
                    var_19 = (!var_8);
                    var_20 ^= arr_7 [i_3];
                    var_21 ^= ((min(((((arr_12 [i_3] [i_3]) <= var_2))), (((arr_7 [i_4]) ? (arr_8 [i_3 - 1]) : 3689541231)))));
                }
            }
        }
    }
    var_22 = (max(var_22, (min(var_11, var_10))));
    #pragma endscop
}
