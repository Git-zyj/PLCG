/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68750
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
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (11035771313396822216ULL)));
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (11035771313396822216ULL)));
    var_21 = var_10;
    var_22 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)47855))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_23 |= max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)7))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_8))));
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) <= (((/* implicit */int) (unsigned short)17681))));
        var_25 ^= ((unsigned char) arr_0 [i_0]);
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)119)), ((unsigned char)63)))) || (((/* implicit */_Bool) arr_2 [i_1])))))));
        arr_5 [i_1 - 2] |= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1])))), (((((/* implicit */_Bool) 2735584677397621344LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)31))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
    {
        var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)17680)) << (((((/* implicit */int) (signed char)109)) - (94)))));
        var_28 = ((unsigned long long int) var_4);
    }
}
