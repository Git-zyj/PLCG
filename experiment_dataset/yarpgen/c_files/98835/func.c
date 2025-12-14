/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98835
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
    var_13 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((int) var_7)))) - (((((/* implicit */int) (unsigned char)37)) | (((/* implicit */int) (unsigned char)16))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_3 [i_0])) : (6524638063680090401LL))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) == ((+(((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2126224603)) ? (((/* implicit */int) var_12)) : (1724036085))))))), (min((((/* implicit */unsigned long long int) 1801882126)), (arr_1 [i_0])))));
        arr_5 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [2ULL])))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (640583187) : (((/* implicit */int) var_6))))));
        var_15 -= ((/* implicit */_Bool) var_5);
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((4384688907227964198LL), (((/* implicit */long long int) arr_6 [i_1 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 + 2])) | (((/* implicit */int) arr_6 [i_1 + 3]))))) : ((+(var_4)))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) 0))));
        var_17 -= ((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_6 [(signed char)11])))))), (((((/* implicit */_Bool) max((96527887), (-14)))) ? (4384688907227964205LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_0 [i_1 + 3])) - (27314))))) == (((/* implicit */int) arr_0 [i_1 + 1]))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) max((((signed char) var_10)), (((/* implicit */signed char) ((_Bool) (+(13191892498564006677ULL)))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) ((_Bool) ((signed char) (_Bool)0)));
        arr_13 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(-31))))));
    }
    var_19 = ((/* implicit */short) min((((var_4) % (((/* implicit */long long int) ((-1724036075) % (((/* implicit */int) var_6))))))), (((/* implicit */long long int) 377015396U))));
}
