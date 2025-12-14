/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79162
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
    var_12 = ((/* implicit */int) ((min((((unsigned int) 13249516787032354936ULL)), (((/* implicit */unsigned int) var_4)))) % (((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) | (max((1296501526U), (((/* implicit */unsigned int) (signed char)56))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) var_5);
        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 334925929)) ? (5197227286677196685ULL) : (2527471855399924755ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1861678321)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))) | (13249516787032354942ULL)))));
        var_15 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) min((arr_1 [i_0]), ((unsigned char)100)))))), (max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) min((arr_1 [4U]), (((/* implicit */unsigned char) var_2)))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) var_11))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_5)))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        var_16 *= min(((unsigned short)6789), (((/* implicit */unsigned short) (unsigned char)108)));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 3])) ? (((/* implicit */int) arr_7 [i_1 - 3])) : (((/* implicit */int) arr_7 [i_1 - 3]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 3])) < (((/* implicit */int) arr_7 [i_1 - 3]))))) : (((((/* implicit */_Bool) arr_7 [i_1 - 3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_1 - 3])))));
    }
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (signed char)118)))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) var_11))) - (103)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_4)) - (53)))))) : (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
}
