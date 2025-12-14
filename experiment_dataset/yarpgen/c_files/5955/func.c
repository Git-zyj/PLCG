/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5955
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
    var_12 = ((/* implicit */int) ((((13883881756633115523ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5544)) ? (70368744177663LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))) >> (((max((10408476299616438026ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)173))))))) - (18446744073709551380ULL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned short) ((min(((-(10408476299616438026ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 23ULL)) && (((/* implicit */_Bool) (unsigned short)25716))))))) <= (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (17302372977452005622ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)5)))))))));
        var_14 = ((/* implicit */unsigned char) var_11);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+(((var_0) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)32767))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)32751)) || (((/* implicit */_Bool) var_4)))))));
        var_15 = ((/* implicit */unsigned char) 3567309986747978333LL);
        arr_6 [(unsigned char)11] [i_1] = ((/* implicit */unsigned long long int) (short)32767);
    }
}
