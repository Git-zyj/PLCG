/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 ? 1 : var_3));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_12 = (-8767521840052244524 <= var_1);
        var_13 ^= (arr_1 [i_0 - 2]);
        arr_2 [i_0 + 1] = (((-43165486 % 8767521840052244524) < ((var_7 ? 8767521840052244524 : 8767521840052244524))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 = (var_9 ? ((((arr_0 [i_1] [5]) ^ (var_6 >= 9679222233657307092)))) : (+-8234814257264402555));
        arr_5 [i_1] [i_1] = ((((((6681465946024048664 ? 253 : 678198629)) + 11765278127685502951))));
        var_15 |= ((((max((((arr_0 [10] [i_1]) - var_6)), (16742195268545249875 && 72)))) ? ((16742195268545249875 ? (min(16742195268545249875, 62825)) : 41737)) : (min(23826, (arr_1 [i_1])))));
        var_16 = ((((((arr_1 [i_1]) | -50))) ? ((min((arr_3 [i_1]), (arr_3 [i_1])))) : var_3));
    }
    var_17 = (((min(((1 ? var_1 : var_1)), 1))) ? (16310212406860006724 / 1) : (-1502454281593345121 || var_2));
    var_18 &= var_2;
    var_19 = ((var_10 <= (((!(~var_4))))));
    #pragma endscop
}
