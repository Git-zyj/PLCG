/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_15 = (min(var_15, ((((((127 ? 2103428089 : 18098579421091330725))) || ((!(arr_2 [i_4 - 1]))))))));
                            arr_13 [i_0] [i_0 - 3] [i_0] [i_0] [i_0] |= (((((min((-9223372036854775807 - 1), (arr_9 [i_0] [i_4 + 1] [i_0] [i_2] [i_4] [i_0 - 2]))))) + 18098579421091330725));
                            var_16 |= ((~(min((-9223372036854775807 - 1), 18098579421091330710))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4] = (((((18098579421091330725 ? 18098579421091330725 : var_7))) ? ((((arr_11 [i_0 - 2]) | (arr_3 [i_0 + 1] [i_0 - 4])))) : (((arr_2 [i_0 - 4]) ? 348164652618220881 : (arr_2 [i_0 - 2])))));
                            arr_15 [i_3] [i_2] [i_2] |= min(((-(min(var_3, 2741402110730425689)))), var_3);
                        }
                        var_17 = ((-((min((arr_0 [i_0 + 2]), 27)))));
                    }
                }
            }
        }
        arr_16 [15] = ((~((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [1] [i_0] [i_0]))))));
        var_18 = (max(var_18, (min(15, (!var_4)))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_19 = ((min((((var_1 > (arr_17 [i_5])))), ((24768 & (arr_19 [i_5]))))));
        var_20 = 1;
    }
    var_21 |= 1;
    var_22 = (min(var_22, (((!(((1 ? var_4 : var_4))))))));
    #pragma endscop
}
