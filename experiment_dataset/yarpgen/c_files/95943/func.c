/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95943
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
    var_18 = ((/* implicit */long long int) ((unsigned short) var_5));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_13)), (-744141514541484947LL))), (max((9223336852482686976LL), (((/* implicit */long long int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) var_3)), ((unsigned short)65535))), (((/* implicit */unsigned short) (signed char)72)))))) : (var_11)));
    var_20 = ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((short) arr_0 [i_0]))), (((long long int) (_Bool)1))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_22 += ((/* implicit */_Bool) (((+((-(((/* implicit */int) (signed char)72)))))) / (((/* implicit */int) var_12))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1] [i_1])) < (((/* implicit */int) (signed char)-73))));
        arr_9 [i_1] = ((/* implicit */_Bool) var_15);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(arr_2 [(short)4] [i_1]))))));
    }
}
