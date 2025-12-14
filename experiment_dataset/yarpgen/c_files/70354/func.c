/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70354
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(unsigned short)5] [i_1] = arr_3 [i_0] [0];
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_1] [i_0])), (arr_0 [i_1])))), (var_18)))) ? ((-(arr_2 [i_0] [i_1]))) : ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) | (((/* implicit */int) var_5)))) ^ (((var_11) / (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) >> (((var_6) + (1532011695)))))) ? (((((/* implicit */_Bool) 17873661021126656LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)129)))) : ((+(((/* implicit */int) var_12)))))))));
}
