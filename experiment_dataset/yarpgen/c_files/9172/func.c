/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9172
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
    var_20 = ((unsigned int) max((-1688068473), (((/* implicit */int) (short)-10227))));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (((int) ((short) var_3)))));
    var_22 = ((/* implicit */signed char) ((unsigned char) max((var_7), (((/* implicit */signed char) ((_Bool) var_12))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) min((min((max((((/* implicit */unsigned long long int) (signed char)-69)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) 4190208U)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) / (2567461983U))))));
                    arr_6 [i_0] [12U] [(_Bool)1] [i_2] = ((short) max((((/* implicit */unsigned int) var_9)), (arr_4 [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_2 + 2])));
                    var_24 = ((unsigned int) max((12412207465467702457ULL), (((/* implicit */unsigned long long int) var_2))));
                    var_25 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) max((var_15), (((/* implicit */short) (signed char)-111))))), (((unsigned short) var_3))));
                    arr_7 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)63)) | (((/* implicit */int) (unsigned char)7))))), (min((arr_4 [i_2] [i_2 - 3] [i_2 + 2] [i_2 - 3]), (var_10)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) max((max((max((((/* implicit */unsigned short) var_13)), ((unsigned short)14050))), (((unsigned short) 562949936644096ULL)))), (((/* implicit */unsigned short) var_7))));
}
