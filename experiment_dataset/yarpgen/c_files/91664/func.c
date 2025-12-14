/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91664
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
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (593279168U)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) : ((-9223372036854775807LL - 1LL))))) || (((((((/* implicit */_Bool) 2905340893U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
        arr_3 [i_0] = (((+(arr_1 [i_0] [i_0]))) > (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [12U]))));
        var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0])))) ? (max((((/* implicit */int) var_3)), (arr_1 [i_0] [i_0]))) : (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    var_17 = ((signed char) var_3);
    var_18 = ((/* implicit */_Bool) var_12);
}
