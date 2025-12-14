/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94992
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
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_14)), ((unsigned char)208))))));
    var_20 = ((/* implicit */short) 4294967232U);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((unsigned int) arr_2 [i_0 - 1]));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned char) ((signed char) var_0));
                        arr_11 [i_3] [i_1] = ((/* implicit */short) ((-1734776851) | (1734776850)));
                    }
                } 
            } 
            arr_12 [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((var_12) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) arr_0 [i_0] [i_1])))), ((~(((/* implicit */int) arr_8 [i_0] [8ULL] [8ULL]))))))), (max((((/* implicit */unsigned int) (unsigned char)163)), (267770636U)))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)27625)))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 1505268855)) ? (267770636U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68)))));
        arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32754))) : (var_9)));
        arr_18 [i_4] [i_4 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_4] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    }
}
