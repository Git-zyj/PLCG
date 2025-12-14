/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 *= var_8;
        var_20 = ((arr_2 [i_0] [i_0]) ? ((6139728121404209745 ? 31337 : var_18)) : (arr_1 [i_0] [i_0]));
        var_21 = ((-(arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_22 = (arr_2 [i_1] [i_1]);
        var_23 = (min(var_23, (((((min(-24907, ((var_7 ? 11873613846309211273 : -2366895522200036470))))) ? (arr_5 [i_1]) : (!30))))));
        var_24 += (1284579528 + -24907);
    }
    var_25 = (max(var_25, (((0 << ((((var_11 ? (-127 - 1) : ((min(var_14, var_4))))) + 132)))))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_26 += (((((+(((arr_8 [i_2]) ? var_14 : -1086941582))))) ? ((~((var_7 ? 0 : 20622)))) : (((0 << (-119 + 141))))));
        var_27 = (((((30 ? 2309690327 : 1))) ? (((arr_8 [i_2]) ? 2102516366 : (arr_8 [i_2]))) : (((arr_8 [i_2]) ? var_10 : (arr_8 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_28 = (((~15842560419261329398) ? ((min((arr_9 [i_3]), (arr_1 [i_3] [18])))) : ((var_13 ? (arr_7 [i_3]) : ((var_13 ? (arr_8 [i_3]) : 1125443672))))));
        var_29 = ((var_18 | (((((max((arr_9 [i_3]), (arr_7 [i_3])))) ? (1229835528 / 1125443672) : 11873613846309211273)))));
        var_30 = 3087342396;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_31 -= (((arr_1 [2] [2]) * (min(((var_1 / (arr_7 [i_4]))), 0))));
        var_32 &= (((max(13505826197620689525, 13159470274082912582))) ? (76 * 14259) : 0);
        var_33 = min((((arr_7 [i_4]) ? (arr_7 [i_4]) : (arr_7 [i_4]))), ((var_14 ? (arr_7 [i_4]) : (arr_13 [i_4] [i_4]))));
    }
    #pragma endscop
}
