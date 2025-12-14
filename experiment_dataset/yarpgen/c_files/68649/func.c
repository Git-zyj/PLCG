/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68649
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
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))), (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) var_2)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_22 ^= ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) << (((((/* implicit */int) max((arr_5 [i_0 + 2] [i_2 + 2]), (arr_5 [i_0 + 1] [i_2 - 1])))) - (58242))));
                    var_23 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) < (((((/* implicit */_Bool) (short)-14780)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))) : (-1315478639764155397LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) 1422534436213596554LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) 1422534436213596554LL)) ? (2803442070076717057ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                    var_24 = ((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0])) > (((/* implicit */int) (signed char)57)))))) < (0U)))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = arr_0 [i_3];
        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_0 [i_3]), (arr_0 [i_3]))))));
        var_26 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_3]), (((/* implicit */short) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3)))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-87)), (arr_9 [i_3])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) -1353002087096581644LL)) || (((/* implicit */_Bool) arr_2 [i_3]))))))) : (((/* implicit */int) var_1))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) 0U)))));
    }
    var_28 &= ((/* implicit */short) var_8);
    var_29 = ((/* implicit */signed char) (!(((((/* implicit */int) var_14)) < (((/* implicit */int) var_17))))));
}
