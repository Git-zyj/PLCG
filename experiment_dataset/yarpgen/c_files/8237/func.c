/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8237
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
    var_12 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_7)), (((((/* implicit */int) var_11)) * (((/* implicit */int) var_5))))))));
    var_13 *= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (signed char)-90))))), (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))))))), (((((/* implicit */_Bool) max((var_3), (((/* implicit */short) var_5))))) ? (((((/* implicit */unsigned long long int) var_8)) | (14103908558241287723ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((/* implicit */int) var_5)))))))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned int) ((((((/* implicit */int) var_4)) > (((/* implicit */int) var_3)))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) var_3))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_3 [i_0] [i_2])))) * (((/* implicit */int) max((arr_3 [i_0] [i_1 - 1]), (((/* implicit */signed char) (_Bool)1)))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1688849860263936ULL), (((/* implicit */unsigned long long int) (unsigned char)56))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18445055223849287681ULL)))) ? ((~(((/* implicit */int) ((signed char) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(short)1] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_6 [i_0 + 2] [i_1 + 1] [i_0] [i_2]), (arr_6 [i_0 + 3] [i_1 + 1] [i_0] [i_2])))) / (((max((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8))))))));
                    var_18 = ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_0] [i_0])), (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_0] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))) ^ (min((((/* implicit */unsigned long long int) var_5)), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
