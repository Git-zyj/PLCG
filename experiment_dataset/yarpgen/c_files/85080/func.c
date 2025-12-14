/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85080
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
    var_20 = ((/* implicit */short) min((((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)29150))))) * (((((/* implicit */int) (short)29154)) * (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) (short)-10187))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_21 -= ((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)131)), ((short)-29135)));
        var_22 |= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)38)) ? (((unsigned long long int) (unsigned short)65535)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4070867863U)) || (((/* implicit */_Bool) min((709893689), (((/* implicit */int) (unsigned char)255)))))))))));
        var_23 = arr_1 [i_0] [i_0];
    }
}
