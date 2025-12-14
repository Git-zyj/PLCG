/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57039
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_4))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 += ((/* implicit */unsigned long long int) max((((unsigned short) ((unsigned char) arr_0 [(unsigned short)2] [10]))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_9)))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)-20673), (((/* implicit */short) (unsigned char)124)))))) + (((((/* implicit */_Bool) var_1)) ? (((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) > (arr_2 [i_0])))))))));
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 3] [i_1 + 2])) - (((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) arr_1 [(unsigned short)1] [i_1 - 2])))) : (((((/* implicit */_Bool) arr_0 [i_1 - 2] [4ULL])) ? (((/* implicit */int) arr_1 [i_1] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1 + 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_3] [i_2] [i_1])) ^ (((/* implicit */int) var_9))))), (arr_2 [i_3]))));
                    arr_11 [i_1] [i_1] [(_Bool)1] [i_1 - 2] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 2096128U)), (879192752192895142ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) arr_8 [i_3] [i_2] [i_2] [i_1])), (var_7))))))));
                    arr_12 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) >= (((((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (arr_5 [i_2] [i_3]) : (((/* implicit */unsigned long long int) var_6)))) >> (((max((((/* implicit */unsigned int) arr_4 [8LL])), (var_3))) - (1774403688U)))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_1] [i_1 + 1]) - (((/* implicit */int) arr_6 [(unsigned char)8]))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) (unsigned char)124)))))))) ? (((unsigned long long int) arr_4 [i_1 + 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((879192752192895145ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114)))))))));
        arr_14 [i_1] = ((long long int) ((((((/* implicit */_Bool) var_10)) && (var_5))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_1] [1ULL] [1ULL] [i_1 - 2])), (arr_7 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (arr_5 [i_1 + 2] [i_1 + 2])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_1 + 3] [i_1]) : (((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_1] [i_1] [i_1 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 2])) <= (arr_5 [i_1 - 2] [1U])))))));
    }
}
