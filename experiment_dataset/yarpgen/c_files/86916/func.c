/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86916
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_17 = min((((arr_0 [i_0 - 1] [i_0]) | (arr_0 [i_0 + 1] [i_0]))), (((/* implicit */unsigned long long int) ((arr_1 [i_0 - 3] [i_0 - 3]) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0 + 1] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (max((((long long int) var_8)), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) & (((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)53)), (var_3)))))))))));
    }
    for (short i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) -6079719455557248684LL);
        var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1309163512U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)214))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) : (min((arr_1 [i_1] [i_1 - 2]), (((/* implicit */long long int) arr_3 [i_1] [i_1])))))), (((/* implicit */long long int) min(((short)0), (((/* implicit */short) (_Bool)0)))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_6))));
    }
    var_21 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_15)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (short)17615))))));
}
