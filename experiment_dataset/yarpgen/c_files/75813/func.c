/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75813
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) * (((((/* implicit */_Bool) 4070841638U)) ? (4060293834U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) != (max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) arr_4 [i_0] [i_1])), (var_2)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) -280977320)), (max((arr_7 [(unsigned char)7] [i_0] [i_0] [i_3 - 2]), (arr_7 [20U] [i_0] [i_0] [i_3 + 1])))));
                            arr_12 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) (short)-32767))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6618)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (signed char)87))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) arr_11 [(unsigned char)13] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (signed char)-88))))))), (((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))) : ((~(arr_9 [i_0] [i_1])))))));
            }
        } 
    } 
}
