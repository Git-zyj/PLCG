/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(var_0, (((((63682 ? 1853 : var_0))) ? -16194410596730158078 : (arr_3 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 4; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_15 = ((~(((268435456 < 26679) ? -37 : -32311))));
            var_16 = (((((1877 ? 1853 : 0))) ? ((var_4 * ((268435456 ? 0 : (arr_1 [i_0] [i_1 - 1]))))) : (((!var_9) ? var_5 : (((arr_3 [i_0] [i_1]) ? 12532991257517740909 : (arr_5 [i_0] [i_0] [i_0])))))));
            var_17 = ((((max((var_13 - -101), (((var_4 || (arr_5 [i_1 - 1] [i_1] [i_0]))))))) ? (((((var_3 > var_3) <= (arr_2 [i_1 + 1] [i_1 + 1]))))) : ((~((3 ? 14 : 18446744073709551602))))));
            var_18 = ((((((arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 4]) ? (arr_5 [i_1] [i_1 + 1] [i_1 + 1]) : (arr_5 [i_1] [i_1 - 1] [i_1 + 1])))) && ((((arr_2 [i_0] [i_0]) - (min(var_8, var_13)))))));
            var_19 = -3581464425;
        }
        for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] = (arr_1 [i_0] [i_2 - 3]);
            var_20 += (arr_3 [i_0] [i_2]);
            arr_10 [i_0] [i_0] [i_0] = ((-(max(-var_10, ((max((arr_6 [i_0]), (arr_6 [i_0]))))))));
            var_21 = ((((((((-(arr_1 [i_0] [i_2])))) ? ((min((arr_2 [i_2 - 2] [i_0]), var_13))) : var_1))) ? (((268435456 * 1981278842479937245) ? (!46475) : 6)) : ((((var_0 && (!var_7)))))));
        }
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        var_22 -= (((min(-var_3, -2300073048566854681)) == ((((!20878) % (max(var_3, -8198336267796908310)))))));
        arr_15 [i_3] = (((((var_2 ? -var_12 : (var_9 + var_0)))) ? ((((!(arr_6 [i_3]))))) : (((arr_12 [i_3 - 1]) % 2672836199341629075))));
    }
    var_23 += (max((max((max(var_12, var_0)), -1)), ((((((var_12 ? var_1 : 67))) ? var_4 : -var_10)))));
    #pragma endscop
}
