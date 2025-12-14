/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -774053819;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_0] = (min((((-(arr_2 [i_2 + 1])))), (((arr_2 [i_2 + 2]) ? 4070741450 : (arr_6 [i_0] [i_2 + 1] [i_2 - 2])))));
                        var_21 |= ((~(((arr_0 [i_2 - 1] [i_1 + 1]) ? (arr_0 [i_2 - 1] [i_1 + 1]) : (arr_0 [i_2 - 1] [i_1 + 1])))));
                    }
                }
            }
        }
        var_22 = (max((arr_3 [i_0]), (arr_8 [1] [i_0] [i_0] [9])));
        var_23 = (max(var_23, (((((~-32748) ? (min(0, (arr_0 [i_0] [i_0]))) : (((1112871024 ? 3968138345 : (arr_4 [i_0]))))))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_24 = ((((((((~(arr_1 [i_4] [i_4])))) ? (arr_11 [i_4] [i_4]) : (arr_10 [i_4])))) ? (((~-774053819) ? (arr_10 [i_4]) : 1112871024)) : (!-6413350132292979529)));
        var_25 = (-2147483647 - 1);
        var_26 = (max(var_26, (arr_2 [7])));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_27 = arr_4 [i_6];
                    var_28 ^= arr_10 [2];
                }
            }
        }
        var_29 = (arr_8 [14] [i_5] [i_5] [7]);
        var_30 |= (min((min((((arr_19 [i_5] [i_5] [10]) ? (-9223372036854775807 - 1) : 52013)), ((774053805 ? (arr_1 [i_5] [i_5]) : 4294967278)))), ((((((-15 ? 1182772736702050625 : -1112871014))) ? (arr_11 [i_5] [i_5]) : (arr_21 [i_5] [16] [2] [2]))))));
    }
    #pragma endscop
}
