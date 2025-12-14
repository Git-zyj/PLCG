/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7706
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
    var_14 &= max((((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)18250)) | (((/* implicit */int) (unsigned char)48))))))), (4294967288U));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_10))));
    var_16 = ((/* implicit */_Bool) ((signed char) 812700941));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            arr_6 [i_1] [i_1 - 2] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) var_11))), (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)63532));
            var_17 = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (unsigned char)40)))));
        }
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_4))));
    }
}
