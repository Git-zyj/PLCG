/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59186
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
    var_15 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_8)) | (((((/* implicit */_Bool) -750727844)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))))))) != (((/* implicit */unsigned long long int) 996901647))));
    var_16 = ((/* implicit */unsigned short) var_0);
    var_17 = var_5;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
        {
            arr_5 [i_1] |= ((/* implicit */int) ((long long int) arr_0 [i_1]));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_11 [i_2] [i_2] [6U] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3]))) : (arr_0 [i_3])))) ? (arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) : ((~(((/* implicit */int) (unsigned short)32767))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            arr_15 [i_0 - 1] [i_0] [4LL] [2] [i_3] [i_0 - 1] [2] |= (-(((/* implicit */int) arr_10 [i_0 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 2])));
                            arr_16 [4] [i_1] [i_1] [i_1] [i_1] [i_1] [4] |= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (2426586863U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))));
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_3] = (~(arr_12 [i_0] [i_0] [(short)7] [(short)7] [i_1] [i_0] [i_3]));
                    }
                } 
            } 
            arr_18 [i_0] [i_0] = (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (_Bool)1))))));
            arr_19 [i_0] = ((/* implicit */unsigned short) ((arr_14 [i_0 - 1]) >= (arr_14 [i_0 + 1])));
        }
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
        {
            arr_23 [i_0] = ((((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [3U] [i_0])));
            arr_24 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
        }
        arr_25 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_14 [i_0]) : (((/* implicit */unsigned long long int) var_8))))) ? (((unsigned long long int) (signed char)-119)) : (var_1));
    }
    var_18 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1077515718367490050LL))))))));
}
