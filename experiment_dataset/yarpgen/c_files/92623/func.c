/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92623
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((8764412135951242722ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))) ? (((long long int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))));
        var_13 &= ((/* implicit */unsigned char) (signed char)-79);
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)129))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (short)14106)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) : (8728413338997482549LL)))));
    }
    for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (signed char)88)), (arr_3 [i_1 - 2] [i_1 - 1]))), (((((/* implicit */int) min(((unsigned char)8), (((/* implicit */unsigned char) var_9))))) >> (((arr_2 [i_1]) + (3036488162229629967LL)))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)109))))), (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1 - 2])) : (4294967282U))))))))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 5288848564123671602LL)) ? (438798721536029604LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88))))), (((/* implicit */long long int) min((-1276012772), (314699080))))));
        var_17 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (short)9644)), (arr_2 [i_2]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)6)))))));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 0)) > (var_8))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)247)), (var_0)))) : (((/* implicit */int) (unsigned char)113))))) : ((((!(((/* implicit */_Bool) (short)27497)))) ? (min((var_1), (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)64818)), (-4371725219149254940LL))))))));
}
