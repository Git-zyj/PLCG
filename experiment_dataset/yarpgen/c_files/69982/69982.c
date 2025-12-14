/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (((((-((32764 / (arr_6 [11] [7])))))) ? ((min((((21007 ? -18288 : -32740))), (arr_2 [i_1])))) : ((((min(-23438, (-9223372036854775807 - 1)))) ? 32763 : (arr_6 [i_1] [i_1])))));
                var_19 |= (arr_4 [i_0]);
                var_20 = (min(var_20, -32754));
                var_21 -= (max((((-((var_7 ? 4286 : 33554431))))), (arr_2 [6])));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_22 = (((((-(arr_3 [i_2 + 3] [i_1] [15])))) ? 281474976710655 : (arr_2 [7])));
                    var_23 = (max(var_23, 1235397386));
                    var_24 = var_1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_19 [i_3] [i_3] [6] [i_6 - 1] [i_6] [i_5] = 18446462598732840961;
                            var_25 += (arr_14 [i_4 - 1] [i_4 + 1] [i_6 - 1]);
                            var_26 = (((arr_13 [i_3] [i_6 + 1]) ? (((-((max(31, (arr_18 [0] [i_5] [i_4] [5]))))))) : var_1));
                            arr_20 [i_3] [i_5] [10] [i_3] = (((((((arr_10 [i_5] [i_5]) + 2047)))) ? ((~(arr_17 [i_3] [i_4 - 2] [i_5] [i_6]))) : 127));
                        }
                    }
                }
                var_27 = (max(var_27, var_4));
                var_28 &= ((((!(arr_10 [i_4 - 1] [i_4 - 2])))));
                arr_21 [2] |= (arr_10 [i_4 - 1] [i_4]);
            }
        }
    }
    var_29 = (max(var_29, (((((min(32764, ((281474976710662 ? 389161841 : 65024))))) ? var_6 : ((((var_4 ? var_3 : var_17)))))))));
    var_30 = (min(281474976710648, var_12));
    var_31 = (max(var_31, var_14));
    #pragma endscop
}
