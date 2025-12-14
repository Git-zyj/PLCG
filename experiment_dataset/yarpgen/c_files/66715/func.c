/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66715
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(short)16] [i_1 - 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)4327))))) : (min((arr_4 [i_0] [i_1 - 1]), (arr_4 [i_0] [i_1 - 1])))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) : (arr_4 [i_1 - 1] [i_1 - 1])))) ? ((~(((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (65535U))))) : (arr_4 [i_0] [i_2])));
                    arr_9 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(_Bool)1] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1 - 2])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1] [i_1 - 1])))), (((/* implicit */int) (signed char)-77))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) var_9);
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) : (min((var_7), (((/* implicit */unsigned long long int) ((long long int) var_7))))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)31)) >> ((((((-2147483647 - 1)) - (-2147483640))) + (32)))));
}
