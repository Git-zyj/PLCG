/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78404
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((var_8), (arr_0 [i_0 + 3] [i_0 + 2])));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)47047)) : (((/* implicit */int) (signed char)-5))))))) : (min((((unsigned int) (signed char)10)), (((/* implicit */unsigned int) ((arr_2 [i_0 + 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_1]))));
            /* LoopSeq 2 */
            for (signed char i_3 = 3; i_3 < 21; i_3 += 4) 
            {
                var_17 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_2))));
                arr_13 [i_1] [i_2] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_2 + 1] [i_3 - 3])) > (((/* implicit */int) arr_4 [i_2 - 2] [i_3 - 2]))))) == (min((var_14), (((/* implicit */int) arr_4 [i_2 - 2] [i_3 - 2]))))));
                var_19 = ((/* implicit */short) ((unsigned int) (signed char)-111));
            }
            for (int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                arr_18 [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_4 [i_2 + 1] [i_2 - 2])), (((unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_4])) ? (arr_12 [i_4] [i_2 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                arr_19 [i_2] [(unsigned char)1] [i_2 - 1] [i_2 - 2] = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_1] [i_2] [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned char)13] [i_1])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-7))))) : (4194304U)))), (max((var_3), (((/* implicit */long long int) ((((/* implicit */int) var_13)) + (var_14)))))));
            }
        }
        var_20 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)2016))));
        arr_20 [i_1] = ((/* implicit */_Bool) var_3);
    }
    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)18483))))), (max((var_3), (((/* implicit */long long int) var_14))))))));
}
