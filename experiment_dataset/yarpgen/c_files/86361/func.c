/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86361
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [13LL] = ((/* implicit */unsigned char) min((474785709), (474785714)));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((arr_3 [i_0] [18U] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)21656)) - (21621)))))) ? (((long long int) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12)))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-224862172) : (127408628)))) ? (max((((/* implicit */long long int) var_2)), (var_15))) : (((/* implicit */long long int) (((_Bool)0) ? (-127408630) : (var_6)))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) -224862186)) ? (((/* implicit */int) (unsigned short)65503)) : (1389365877)))) / (min((-6685127079759849138LL), ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
    var_19 = ((/* implicit */long long int) 224862171);
}
