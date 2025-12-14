/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71000
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_5) - (112512611U)))))) ? (((var_11) / (986021968U))) : (172672247U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 172672262U)) && (var_7)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (1502499414U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((-4189230099564670650LL) - (((/* implicit */long long int) 986021968U))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) 986021975U));
                    arr_9 [i_0] [16ULL] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_5 [i_1] [i_2]));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min(((-(arr_3 [i_0 + 2] [i_0]))), (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)63)))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? ((~(arr_6 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [9ULL] [i_0 + 1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [9U] [i_0])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2])))))))) : (min(((-(((/* implicit */int) arr_5 [i_2] [i_0])))), (((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((max((2792467881U), (3050833029U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (min((((((/* implicit */unsigned long long int) -4189230099564670632LL)) | (18446744073709551600ULL))), (((/* implicit */unsigned long long int) var_9))))));
}
