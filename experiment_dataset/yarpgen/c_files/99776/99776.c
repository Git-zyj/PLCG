/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((var_13 - var_18) + ((max(var_0, var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] |= (((((var_12 ? (arr_3 [i_0]) : (arr_3 [i_0])))) || (125 || -28)));
                    var_21 = (min((((arr_6 [i_0] [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [i_1] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))), ((min((arr_6 [i_2] [i_2] [i_2] [i_2]), (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((!((((arr_5 [i_0]) ? (arr_5 [i_2]) : (arr_5 [i_0]))))));
                }
                arr_10 [i_0] = ((var_2 % (arr_1 [i_0])));
                var_22 = (min(var_22, (((((((((var_4 + 2147483647) >> var_5))) ? ((max((arr_0 [4]), (arr_2 [10])))) : (arr_0 [6]))) & (((var_9 && (((var_4 ? 0 : (arr_7 [i_0] [i_0] [i_0]))))))))))));
            }
        }
    }
    #pragma endscop
}
