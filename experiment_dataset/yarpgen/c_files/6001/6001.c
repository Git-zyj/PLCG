/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_10 = (arr_1 [i_0]);
        var_11 = ((~(2646874674893363223 / 11)));
        var_12 = 18446744073709551595;
        var_13 = (((arr_0 [i_0]) ? (((~6921505574365531367) | (arr_0 [i_0]))) : (arr_2 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 = (i_1 % 2 == zero) ? ((((max(7054003689994830071, -2645662220251674700)) >> (((((arr_4 [i_1] [i_1]) & (arr_4 [i_1] [i_1]))) - 16913))))) : ((((max(7054003689994830071, -2645662220251674700)) >> (((((((arr_4 [i_1] [i_1]) & (arr_4 [i_1] [i_1]))) - 16913)) + 4204)))));
        var_15 = max(((~(arr_2 [i_1]))), var_5);
        var_16 ^= max((((var_3 != (arr_0 [12])))), (arr_4 [10] [10]));
    }
    var_17 = ((((var_8 ? (var_5 & var_1) : (var_4 > 2645662220251674700))) == var_0));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_18 |= (((((((((arr_13 [i_3]) ? var_9 : (arr_8 [i_2] [i_3])))) ? (((arr_5 [i_3]) ? (arr_6 [i_4]) : var_2)) : (var_3 < 1)))) ? (arr_13 [i_3]) : (((((max(-2645662220251674700, 1353609960559028209)) >= ((((var_3 && (arr_5 [i_3])))))))))));
                    var_19 = (((((1 ? var_1 : var_6))) & (arr_5 [i_4])));
                    var_20 = arr_8 [i_2] [i_3];
                }
            }
        }
    }
    #pragma endscop
}
