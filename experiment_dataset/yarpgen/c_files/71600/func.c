/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71600
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
    var_15 = ((/* implicit */int) var_1);
    var_16 = ((/* implicit */short) ((int) max((var_2), ((signed char)(-127 - 1)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_12);
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)21594))));
    var_19 &= ((/* implicit */unsigned short) (((~(((((/* implicit */int) (signed char)18)) | (((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) (unsigned char)246))));
}
