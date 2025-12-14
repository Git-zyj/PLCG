/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 297406578;
    var_20 = ((var_16 ? ((var_6 & (!var_7))) : ((var_16 ? (((297406589 ? 1928854185 : 297406578))) : var_18))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((-(arr_5 [i_0] [i_0] [i_0])))) ? 297406593 : ((((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_0]) : var_2))) ? (arr_0 [6]) : -2147483647))));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_21 = ((((((arr_1 [i_0] [i_1]) ? (arr_4 [i_0 - 1]) : 0))) ? (((~(~0)))) : (min((max(var_3, var_14)), (((11968 >> (var_10 - 49))))))));
                    var_22 = (((((var_8 ? (var_10 >= -1944120181) : var_2))) ? (max(3997560724, (((arr_1 [i_0] [i_0]) ? var_18 : 0)))) : (arr_0 [i_2])));
                    arr_9 [i_0] [i_0] [i_2] = (min(18446744073709551615, ((var_0 ? (((0 ? var_10 : 4294967295))) : (1 - 11205274080269395137)))));
                    var_23 += 10138536074917100941;
                }
                arr_10 [i_0] [8] [i_1] = var_5;
                var_24 ^= (arr_1 [i_1] [i_0 - 1]);
                arr_11 [i_0] [i_0] = ((((min((arr_7 [i_0 - 1] [8] [i_0]), (arr_7 [i_0 - 1] [i_0 - 1] [i_0])))) ? (max((((0 || (arr_2 [i_1] [i_1])))), ((var_11 ? -112 : 297406578)))) : ((4294967284 ? 33550336 : var_0))));
            }
        }
    }
    var_25 |= var_5;
    #pragma endscop
}
