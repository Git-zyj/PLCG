/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65979
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
    var_14 *= ((/* implicit */unsigned char) var_7);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)20), (var_11)))) == (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))) : (arr_1 [i_0]))))));
        var_18 -= ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13981)) / (((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((8616330458085139410LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)181)) : (var_4))))))));
}
