/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (~126);
    var_13 = (max((min(-110, -65535)), var_11));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((!((((arr_1 [12]) ? 1458831207 : (max(1, 418082210)))))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = 34067;
            arr_8 [i_0] = ((!((max((-9223372036854775807 - 1), 25)))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = (max(((((arr_1 [i_2]) ? (arr_1 [12]) : (arr_1 [i_2])))), ((2538363226958432995 ? -7415159769771458800 : ((((arr_10 [i_0] [i_0]) ? 0 : (arr_6 [i_0 + 2] [i_0] [9]))))))));
            var_14 += ((-var_10 ? ((-(arr_5 [i_0] [i_0]))) : 2836136070));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_16 [i_3] = (((arr_13 [i_0] [i_0 + 2] [i_0 + 2]) ? (arr_13 [i_0] [i_0 - 1] [i_0 - 1]) : (arr_13 [i_0] [i_0 + 2] [i_3])));
            var_15 = (max(var_15, 22));
        }
        arr_17 [i_0] = (((((var_8 * (arr_4 [i_0] [i_0] [i_0])))) + 7415159769771458800));
        arr_18 [i_0] |= ((((min(-45, ((-(arr_12 [i_0])))))) > ((~(arr_0 [i_0 - 2])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_21 [0] [i_4] &= (2836136101 ? var_0 : (arr_0 [i_4]));
        arr_22 [i_4] = 0;
        arr_23 [i_4] = var_8;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_27 [i_5] = ((((8 ? 1 : (arr_25 [i_5])))) ? 3876885068 : ((1 ? 2615265887 : (-127 - 1))));
        var_16 = (max(-32758, (((((2 ? 45034 : 1))) ? ((~(arr_4 [i_5] [i_5] [i_5]))) : (!var_5)))));
    }
    var_17 = var_9;
    #pragma endscop
}
