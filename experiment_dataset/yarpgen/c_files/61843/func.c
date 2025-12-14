/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61843
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_16)), (((((/* implicit */_Bool) var_3)) ? (1045721644U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) > (((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)4248), (((/* implicit */unsigned short) var_0))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 1] = ((/* implicit */signed char) var_4);
                    arr_10 [i_0] [i_0 + 2] [3LL] [i_0] = ((/* implicit */signed char) (((((-(var_13))) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (((/* implicit */int) ((max((arr_3 [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) >= (((/* implicit */unsigned long long int) var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(signed char)8] [i_0 + 1] [i_0 + 2] [i_0 + 1])) || (((/* implicit */_Bool) ((arr_5 [10U]) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(-1LL))))));
                        arr_14 [2U] [2U] [2U] [i_3 - 2] [i_3] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [(unsigned short)5] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))) ? (min((max((-1LL), (((/* implicit */long long int) var_16)))), (min((((/* implicit */long long int) var_1)), (arr_1 [i_2]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_3 + 1] [i_3] [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_3 - 1] [i_3] [i_3]))) : (var_15)))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (~(-11LL))))) ? ((+(((-8LL) + (0LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3 + 1] [(unsigned short)9] [i_3 - 1])) ? (arr_6 [i_3] [i_3 + 1] [i_3 + 1] [17ULL]) : (arr_6 [i_3] [i_3 + 1] [i_3 + 1] [i_3])))))))));
                    }
                }
            } 
        } 
    } 
}
