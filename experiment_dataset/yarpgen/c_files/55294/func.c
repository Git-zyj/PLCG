/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55294
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 1] [i_1 - 1])) | (((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)59477)) : (((/* implicit */int) (short)32765))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (_Bool)0)))))))));
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) max((2119528509U), (((/* implicit */unsigned int) (_Bool)1))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_2 [i_2] [i_0])))))) != (((/* implicit */int) ((arr_6 [i_2 + 1] [i_1 - 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 3] [i_1 + 1]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        arr_12 [14LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) && (((/* implicit */_Bool) arr_11 [i_3])))))));
        arr_13 [i_3] [7ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_3]))))) : (max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) 0U)) : (-1LL))), (-1LL)))));
        var_11 = ((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_9)))), (((short) (signed char)31))));
    }
}
