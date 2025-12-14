/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59546
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [2U] [i_0] |= ((/* implicit */short) min((((((749412740137345147ULL) | (((/* implicit */unsigned long long int) 2461517107686314960LL)))) | (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */int) (unsigned char)253)) * ((((_Bool)0) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))) : ((+(((/* implicit */int) arr_1 [i_0])))))))));
        arr_4 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned long long int) (short)-24649)), (min((var_3), (16296507612146045437ULL))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (2008385470U))))))));
    }
    var_15 = ((/* implicit */unsigned char) var_10);
    var_16 = ((/* implicit */unsigned short) 749412740137345147ULL);
}
