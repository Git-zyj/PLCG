/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81768
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 954522347U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 905004949U)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)215))))) : (var_2)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 += ((/* implicit */int) ((unsigned char) ((unsigned char) var_14)));
        var_19 = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (var_13)))), (604305787U)))), (min((1593364794874086157LL), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (1593364794874086157LL)))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((int) (!(var_9)))) : (((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] [i_0] = ((unsigned int) var_8);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 += ((/* implicit */long long int) (_Bool)1);
        var_22 ^= ((/* implicit */unsigned char) ((((_Bool) 602705040U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (((unsigned int) (_Bool)1))));
    }
}
