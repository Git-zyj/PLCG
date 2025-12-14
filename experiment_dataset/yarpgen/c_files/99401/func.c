/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99401
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((2915703222U), (((/* implicit */unsigned int) -1359669125)))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)3437)), (-559280688)))))))));
        var_19 += ((/* implicit */unsigned int) (((-(min((arr_1 [4U]), (arr_1 [6ULL]))))) % (((/* implicit */long long int) ((/* implicit */int) ((1165761492U) > (((/* implicit */unsigned int) 559280687))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) 150476643U)) > (arr_1 [i_0])))) : (((/* implicit */int) max((var_8), (var_10))))))));
        var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (9ULL) : (((/* implicit */unsigned long long int) 20LL)))) : (((/* implicit */unsigned long long int) (-(arr_1 [i_0]))))))));
    }
    var_22 = (~(((/* implicit */int) var_16)));
}
