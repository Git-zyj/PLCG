/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99454
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
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_14)))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((min((36028788429029376LL), (36028788429029367LL))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) (signed char)-42)))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((-36028788429029395LL) >= (((/* implicit */long long int) 1601579787U)))))));
        var_21 &= ((/* implicit */unsigned long long int) ((((((unsigned int) -36028788429029415LL)) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1030417477U)))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-29059)))))));
    }
}
