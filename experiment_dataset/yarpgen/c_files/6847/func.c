/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6847
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) (_Bool)0);
        var_12 = ((/* implicit */unsigned int) min((((((2147483647) > (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) arr_0 [7])) : (((((/* implicit */_Bool) -656877367)) ? (((/* implicit */int) (unsigned short)12466)) : (((/* implicit */int) (short)15825)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11675)))))));
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31363)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)31363)))) : (-340509894)))), (max((2995068812U), (((/* implicit */unsigned int) (unsigned char)170))))));
        var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)102)) ? (min((0U), (((/* implicit */unsigned int) -1851451573)))) : (((/* implicit */unsigned int) min((656877356), (((/* implicit */int) (unsigned char)101)))))));
    }
    /* LoopSeq 3 */
    for (short i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (((((+(((/* implicit */int) arr_4 [i_1] [20])))) >= (((((/* implicit */int) (unsigned short)34172)) ^ (((/* implicit */int) (unsigned char)187)))))) ? ((-(((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : ((+(arr_3 [i_1 + 1]))))))));
        var_16 |= ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) 1716573327)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_1)))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_17 = ((/* implicit */short) 17395967445590771135ULL);
        var_18 += ((/* implicit */short) ((((/* implicit */int) arr_0 [i_2 + 1])) <= (((/* implicit */int) (unsigned short)53074))));
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_9 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12461)) << (((((int) arr_7 [i_3])) - (1031229086)))))), ((-(17395967445590771135ULL)))));
        arr_10 [i_3] |= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)12461)), (min((((((/* implicit */int) (unsigned short)18743)) - (-734096205))), (((/* implicit */int) min((var_4), ((unsigned char)72))))))));
    }
}
