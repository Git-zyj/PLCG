/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82956
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_5)) ^ (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) var_2)))))));
                var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_1] [i_0])) | (((/* implicit */int) arr_4 [i_0] [i_1])))) | (((/* implicit */int) min(((unsigned char)205), ((unsigned char)2))))));
                arr_6 [i_0] = var_3;
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)5), ((unsigned char)0)))) | (((((/* implicit */int) arr_1 [i_0])) | (((((/* implicit */_Bool) arr_4 [(unsigned char)5] [(unsigned char)5])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)181))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_3))))) & (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (unsigned char)255))))))));
    var_17 -= min(((unsigned char)245), ((unsigned char)195));
    var_18 = var_7;
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) var_1)))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))) : ((~(((/* implicit */int) var_5)))))))))));
}
