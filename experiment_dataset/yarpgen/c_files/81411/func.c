/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81411
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_11))) ? ((+((-(((/* implicit */int) var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) < (2471914072U))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7200)))));
        var_14 ^= ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (2834276691239030659ULL))) >> (((((arr_1 [(unsigned char)9] [(unsigned char)9]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7200))))) - (4819043605635809543LL)))))));
        arr_2 [10] [i_0] |= ((/* implicit */unsigned int) (((((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) | (arr_1 [i_0 - 1] [i_0 - 1]))))) + (9223372036854775807LL))) >> (((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned short)58335))))), (((((/* implicit */_Bool) 2471914072U)) ? (arr_1 [i_0] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))))))) - (4819043605635816785LL)))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)14]))) < (((((/* implicit */_Bool) 2389177302U)) ? (((/* implicit */unsigned long long int) 407364266U)) : (15612467382470520978ULL))))))));
        var_16 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0 + 2] [i_0])) / (((/* implicit */int) arr_0 [i_0 + 2] [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
    }
    var_17 += ((/* implicit */unsigned long long int) (~((-(var_2)))));
}
