/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88244
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        var_17 *= ((/* implicit */_Bool) var_16);
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) var_10)))) : (arr_2 [i_0])));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (((((/* implicit */int) (short)803)) & (((/* implicit */int) var_8)))) : (((/* implicit */int) ((signed char) var_14)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_6 [i_1] [i_1]));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) : (72057594037927935ULL)));
        arr_8 [i_1] [i_1] = (signed char)-122;
        var_21 = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
    }
    var_22 = ((/* implicit */unsigned long long int) ((short) var_9));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) ((((/* implicit */int) var_13)) <= (var_3))))))) >> (((/* implicit */int) var_14))));
}
