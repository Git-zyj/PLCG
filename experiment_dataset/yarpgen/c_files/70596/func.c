/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70596
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((short) min((((/* implicit */unsigned long long int) var_4)), (11992721169226356998ULL))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (-1885053518807611461LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (arr_4 [i_1])))) : (((/* implicit */int) var_9)))));
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_0] [i_0] [i_2] [i_3] [i_3]) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) 3LL))))) : (((/* implicit */int) ((unsigned short) arr_9 [i_0] [7ULL] [i_1 + 1] [i_3] [i_3])))));
                        }
                    } 
                } 
                var_10 = ((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1]);
                arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (~(arr_8 [(_Bool)1] [i_1] [i_1] [i_0] [i_1]))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (arr_0 [i_0] [i_1 + 1])))), (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 3]))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9)))), (((arr_2 [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)6])) : (((/* implicit */int) var_0)))))))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_11 = min((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]), (((var_3) >> (((((/* implicit */int) arr_20 [i_1] [(short)22] [(short)22] [i_1 - 1] [i_1 + 1])) + (1907))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_2))))) != (arr_18 [i_6] [i_5] [i_4])))));
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) arr_20 [(unsigned char)20] [i_0] [i_0] [4U] [i_0])), (var_8))))) ? (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 - 3] [(unsigned short)15] [(unsigned short)15] [i_6]))))) ? (((var_7) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_5] [i_5] [i_4] [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4273725784277990049LL)) || (((/* implicit */_Bool) arr_21 [i_5] [i_5] [3LL] [i_5] [(unsigned short)21] [i_1])))))))) : (arr_8 [i_0] [i_1] [i_4] [0ULL] [i_1])));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1 - 1]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))) + (arr_18 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
    var_14 = ((/* implicit */int) min((((-228621634064136353LL) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) != (((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    var_15 = ((/* implicit */unsigned char) min((((((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_2))))) * (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (var_8)))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (3067921405U)))) ^ (((((/* implicit */int) var_0)) + (((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) arr_16 [(_Bool)1] [i_7])) : (((/* implicit */int) var_7))))) ? ((+(var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8)))))));
        arr_27 [i_7] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [i_7] [10] [i_7] [i_7] [i_7])))) != (((/* implicit */int) (unsigned char)26)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7]))) - (595678183U)))));
        arr_28 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (max((((/* implicit */unsigned int) arr_15 [(unsigned short)16] [i_7])), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
    }
}
