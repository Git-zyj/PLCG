/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90346
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
    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) var_14)) : (((((((int) var_2)) + (2147483647))) << (((/* implicit */int) ((signed char) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((((/* implicit */signed char) var_6)), (var_13)));
                    var_21 = ((/* implicit */int) arr_0 [(signed char)5]);
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)131))))) ? (max((var_2), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_1 [i_0] [18LL])))))))));
                    arr_7 [i_0] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [i_2]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
}
