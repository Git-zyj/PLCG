/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55327
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) max(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)1))));
        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_1 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)248);
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) min((min((((((-144626534) + (2147483647))) << (((((/* implicit */int) var_7)) - (166))))), (((/* implicit */int) ((unsigned char) var_14))))), (((/* implicit */int) ((((((/* implicit */int) (short)8190)) | (((/* implicit */int) (unsigned char)0)))) < (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (signed char)0)))))))));
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_1])))), (((((/* implicit */int) arr_3 [i_1] [i_1])) - (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
        arr_7 [(_Bool)0] |= ((/* implicit */signed char) arr_2 [i_1]);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((+(4294836224U)))));
    }
    var_20 = ((/* implicit */unsigned short) -1);
}
