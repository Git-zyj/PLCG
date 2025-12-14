/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66826
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
    var_10 = ((/* implicit */int) ((signed char) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (var_3)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((int) (+(0U))));
                    arr_9 [(signed char)11] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (((+(((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) var_8)))))) * (max(((+(((/* implicit */int) var_6)))), ((-(((/* implicit */int) var_6))))))));
                    var_12 ^= ((/* implicit */_Bool) (+(min((((((/* implicit */unsigned long long int) var_2)) | (arr_5 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((signed char) var_1)))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (signed char)64);
                    var_13 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_1]))) + ((-(var_1)))))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */unsigned int) var_9);
    var_15 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */int) min((var_4), ((signed char)32)))), ((~(((/* implicit */int) var_6))))))), (var_7)));
}
