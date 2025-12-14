/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55200
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (signed char)-48);
        arr_3 [12U] [i_0] = ((/* implicit */unsigned short) (signed char)-67);
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_15 = (+((+(((var_8) << (((/* implicit */int) var_3)))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_6 [i_1]))))) : ((~(2121345195203907190ULL))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) arr_6 [7U]);
        arr_8 [i_1] = ((/* implicit */signed char) (+((~(((var_4) * (56614936U)))))));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_9);
        var_17 = ((/* implicit */unsigned short) arr_9 [i_2]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((signed char) var_8))));
        var_19 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_5)))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 = ((/* implicit */signed char) (+(14096444117775949096ULL)));
    var_22 = ((/* implicit */unsigned char) ((_Bool) var_3));
}
