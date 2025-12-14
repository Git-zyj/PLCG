/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7054
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
    var_17 -= ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-99)) % (-1626460576)));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> ((((+(4034469566890749369LL))) - (4034469566890749360LL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) arr_6 [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (((4034469566890749378LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [5U] [5U])) && (((/* implicit */_Bool) -5927584069656847099LL)))) && (max((arr_6 [i_1]), (arr_6 [i_1])))))))));
    }
}
