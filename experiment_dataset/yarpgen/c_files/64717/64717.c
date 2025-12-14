/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(var_3, ((var_8 ? -8683096749810424124 : var_5)))) % (((((~3813) && var_4))))));
    var_12 = ((var_5 >= ((((-862629594 / 61713) > 2394177486)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_13 += arr_0 [4];
        var_14 = (((3651186104 / var_10) ? 59409 : ((3519317987 ? (((arr_1 [i_0] [i_0]) * 2426457181)) : 4))));
        var_15 = (max((((0 ? 31602 : -1850758924))), (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = ((((((max(9, 3889291252))) ? (arr_1 [i_0] [i_0]) : 14028)) == (((((((var_9 ? var_4 : var_0))) || var_8))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_16 *= ((((((arr_3 [i_1]) ^ 51507))) | (((arr_3 [i_1]) ? var_8 : (arr_3 [i_1])))));
        arr_5 [i_1] = var_10;
        arr_6 [9] [i_1] = ((-var_6 ? (arr_4 [i_1] [i_1]) : ((var_3 + (min(var_2, var_1))))));
    }
    #pragma endscop
}
