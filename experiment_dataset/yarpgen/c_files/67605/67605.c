/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((~(((var_9 ? var_1 : (arr_2 [i_0]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_10 [1] [i_1] [i_2] [i_2] = (((((((var_8 ? (arr_5 [i_1]) : (arr_8 [i_0]))) ^ ((~(arr_0 [i_1] [i_2])))))) ? (!194853628) : (((!(arr_4 [i_1]))))));
                    var_13 = ((((((min(0, (arr_4 [i_0])))) & (!var_1))) << (((((var_8 ? 175 : (arr_4 [i_2])))) ? (arr_1 [i_1]) : ((55 ? 4677285935540608241 : (arr_0 [i_1] [i_2])))))));
                }
            }
        }
    }
    var_14 = var_8;
    var_15 = ((var_2 ? (((1 << (-698126143 + 698126146)))) : (((((max(var_1, var_1)))) - (~var_4)))));
    #pragma endscop
}
