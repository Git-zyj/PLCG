/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5695
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_12 -= ((/* implicit */int) (!(((/* implicit */_Bool) (~(9223370937343148032LL))))));
        var_13 += ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((9223370937343148032LL) - (((/* implicit */long long int) -161813367))))) : (min((1370812332647545539ULL), (((/* implicit */unsigned long long int) arr_0 [1] [i_0])))))), (((/* implicit */unsigned long long int) var_10))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) 17075931741062006079ULL))));
        var_15 ^= ((/* implicit */unsigned int) var_0);
    }
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((unsigned char) (-(4240989959020247426ULL)))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((short) var_6))), (4240989959020247426ULL))), (var_0))))));
}
