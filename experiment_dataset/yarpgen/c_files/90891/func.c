/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90891
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)62)) / (((/* implicit */int) (unsigned char)60)))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [3] [i_0 - 1])), ((unsigned char)62))))))))))));
        var_15 = ((signed char) min(((unsigned char)60), (((/* implicit */unsigned char) (_Bool)1))));
        var_16 |= ((/* implicit */short) max(((~((+(((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1] [i_0 + 2])))));
    }
}
