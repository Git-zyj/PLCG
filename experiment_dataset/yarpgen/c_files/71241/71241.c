/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((min(var_13, (arr_3 [i_1]))));
                    arr_9 [i_1] [i_1] = var_1;
                    var_16 = ((-2695598838725555714 <= (arr_2 [2])));
                    arr_10 [i_0] [i_1] [i_0] = (((((-2695598838725555729 ? (min((arr_7 [11] [i_1]), (arr_1 [i_0] [i_2]))) : (!var_13)))) ? 2695598838725555734 : (((!(arr_4 [i_0] [i_1]))))));
                    var_17 = ((((min((arr_7 [i_1] [i_1]), (arr_7 [i_0] [i_1])))) ? ((min((arr_1 [i_0] [i_1]), (arr_0 [i_0] [i_2])))) : -2695598838725555735));
                }
            }
        }
    }
    var_18 = var_0;
    var_19 = (min(var_19, (((~(((((var_13 ? -2695598838725555706 : var_12)) == var_11))))))));
    #pragma endscop
}
