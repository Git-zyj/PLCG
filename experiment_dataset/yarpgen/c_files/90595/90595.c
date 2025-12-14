/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? var_1 : 4020579441));
        var_14 = ((arr_0 [i_0]) ? var_11 : -1929223272);
        var_15 |= (arr_0 [i_0]);
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((11 ? ((var_1 ? (-469893694727267308 <= var_9) : (arr_3 [i_1] [i_1]))) : (arr_4 [i_1])));
        var_16 = (max(var_16, (-957073241707618386 / -469893694727267308)));
        arr_7 [i_1] [i_1] = ((((min((~13126898585233034380), (arr_3 [i_1] [i_1])))) ? (arr_5 [i_1] [i_1]) : ((~(528482304 > -469893694727267314)))));
        var_17 = (max(var_17, (((!(((max((arr_4 [i_1]), 1589270777)))))))));
        var_18 = (min(var_18, (((5759 ? 8 : -957073241707618373)))));
    }
    var_19 = (min(var_19, ((((max(((1 >> (var_2 + 691124587))), (var_1 * 81))) >> ((((var_7 >> ((((var_6 ? var_10 : var_13)) - 192)))) - 89)))))));
    #pragma endscop
}
