/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (max((9285592828065323577 >= 9285592828065323591), 9161151245644228039));
        arr_3 [i_0] [i_0 - 1] = ((-(~9161151245644228014)));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_11 [2] [2] [i_3] [i_3] = ((var_2 - (((9285592828065323601 ? 1 : var_6)))));
                    var_11 = ((((((-179 + 2147483647) << (63 - 63)))) ? ((min(((65528 < (arr_4 [i_1]))), var_9))) : (((((var_0 ? 9285592828065323593 : (arr_8 [i_1])))) ? var_9 : 346412244))));
                }
            }
        }
        arr_12 [i_1] = (((((-(arr_9 [i_1 - 2])))) ? (arr_9 [i_1 - 2]) : -var_6));
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = 4839978832960557300;
        arr_16 [i_4] = (min((arr_6 [i_4 + 1] [i_4 + 1]), ((-(arr_6 [i_4 + 1] [i_4 + 3])))));
        var_12 = (((-4785324024521858519 ? -4785324024521858519 : 29)));
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = (arr_14 [i_5]);
        arr_20 [i_5] [12] = 0;
    }
    var_13 = (max(var_13, ((min((((!((min(9161151245644228038, 15)))))), (((((var_8 ? -21 : 18446744073709551615))) ? 1526887832 : ((-17157 ? var_6 : -7879518697234431747)))))))));
    var_14 = ((var_9 ? ((106 ? (min(16352367135430997317, 9867866439514754458)) : (max(10724831682801247517, var_3)))) : 9161151245644228014));
    #pragma endscop
}
