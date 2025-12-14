/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(((var_4 ? 4153628956 : var_0)), var_17))) ? var_3 : var_4));
    var_20 = var_1;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_21 = ((var_10 ? (((min(var_15, var_8)))) : 12));
        arr_4 [i_0 - 2] = (!141338332);
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_1 - 2] = ((((((arr_8 [i_1 - 2] [i_1 - 3] [i_1 - 3]) >> (((arr_7 [i_1 - 3] [i_1 - 3]) - 52))))) ? ((((!var_0) == (max(var_11, var_14))))) : ((((arr_5 [i_2]) == (arr_6 [i_2] [i_1 - 2]))))));
            arr_12 [i_1 + 1] [i_2] [6] = (((((arr_9 [i_1 - 2] [i_1 - 1]) ? (arr_9 [i_1 - 2] [i_1 - 2]) : var_17)) - (((((max(var_4, 141338339))) || ((min(var_7, var_14))))))));
        }
        arr_13 [i_1] = -32;
        var_22 = (!13640);
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_23 = ((((((arr_5 [i_3 - 3]) ? 142 : 56))) ? (arr_5 [i_3 - 3]) : (((((arr_5 [i_3 - 3]) > (arr_14 [i_3 - 3] [i_3 + 1])))))));
        arr_16 [i_3] = (min(((-(arr_5 [i_3 - 3]))), ((~((~(arr_5 [i_3])))))));
        var_24 = (min(741536796, 45208));
        var_25 = (!72);
    }
    for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_26 = ((((40 ? (~113) : (min(741536820, (arr_17 [9]))))) > (((arr_7 [i_4 + 1] [i_4 + 1]) ? 424560104 : (2756908593 >> 6)))));
        var_27 ^= (arr_14 [i_4 + 1] [i_4 - 3]);
        var_28 = ((-(min(((((arr_15 [i_4 + 1]) << (1538058720 - 1538058715)))), ((1538058697 ? 141 : 387041358))))));
    }
    var_29 ^= var_4;
    var_30 = (max(var_30, var_6));
    #pragma endscop
}
