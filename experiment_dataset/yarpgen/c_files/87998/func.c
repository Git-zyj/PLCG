/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87998
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
    var_16 = ((/* implicit */unsigned long long int) var_12);
    var_17 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) -72057594037927936LL))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_12))))) : (((((/* implicit */int) var_0)) >> (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) 4953838216771329740ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_12))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1]))));
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) var_4)) - (79)))));
        var_19 = ((/* implicit */_Bool) (unsigned short)50309);
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1 - 1])) != (((/* implicit */int) arr_0 [i_1 + 1]))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1 - 2])) == (((/* implicit */int) arr_0 [11U]))));
        var_22 = ((/* implicit */unsigned short) ((var_1) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) arr_0 [i_1 - 1]))));
        arr_5 [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_9)))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 2])) <= (((/* implicit */int) (unsigned short)50742)))))));
    }
    for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        var_23 ^= ((/* implicit */unsigned short) var_12);
        var_24 = (unsigned short)499;
        arr_8 [(unsigned short)10] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned short)15230))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) / (((/* implicit */int) arr_0 [i_2])))) / ((-(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) var_7))))))));
        arr_10 [i_2 + 1] = ((/* implicit */unsigned long long int) (unsigned char)83);
    }
    var_25 = ((/* implicit */unsigned int) var_2);
    var_26 = ((/* implicit */unsigned long long int) var_4);
}
