/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67408
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 - 3]))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_7))))))) ? (((/* implicit */unsigned int) 0)) : ((~(((arr_0 [i_0 - 1] [i_0 + 1]) | (((/* implicit */unsigned int) -14))))))));
        arr_3 [i_0] = ((signed char) (_Bool)1);
        arr_4 [i_0] [2ULL] = ((/* implicit */unsigned int) 63050394783186944ULL);
        var_10 -= 0;
        var_11 -= ((/* implicit */unsigned short) min((max((arr_0 [i_0 - 1] [i_0 + 1]), (4294967295U))), (((((/* implicit */_Bool) -4232008430424389228LL)) ? (arr_0 [i_0 - 1] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    }
    var_12 = ((/* implicit */unsigned short) (unsigned char)32);
    var_13 = var_4;
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) (unsigned short)26579)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14650))) : (2707558946U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (1474154829U)));
    var_15 *= ((/* implicit */unsigned short) var_0);
}
