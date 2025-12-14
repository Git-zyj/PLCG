/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73772
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
    var_16 = ((/* implicit */unsigned int) max((min((((var_0) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) (((!(var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_14))))));
    var_17 = ((/* implicit */unsigned int) -1);
    var_18 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : ((((_Bool)1) ? (((/* implicit */int) (short)4983)) : (((/* implicit */int) arr_1 [i_0]))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) (unsigned short)62709)) : (((/* implicit */int) var_11))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)-1)))) <= (((/* implicit */int) arr_4 [i_0] [i_1 + 2]))));
                    arr_11 [i_0] [i_1] [i_0] [(short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2826)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_8 [i_0] [i_1]) : (arr_8 [0U] [(signed char)6])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_15 [i_0] [i_2] [i_2] [i_1] [0LL] [i_0] = ((/* implicit */short) 9340057685757329646ULL);
                        arr_16 [i_0] [4ULL] [i_2] [5] [(short)1] = ((/* implicit */_Bool) arr_7 [i_1 - 2] [i_0]);
                    }
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2])) >> (((((/* implicit */_Bool) arr_13 [1ULL] [i_1] [(signed char)8] [i_0])) ? (((/* implicit */int) (signed char)0)) : (arr_12 [i_2] [i_1])))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0 + 3] [i_0]);
        arr_18 [i_0 + 2] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_23 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)64)) ? (2906119845595148227ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62696)))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) | (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) (short)64)) : (((/* implicit */int) (_Bool)1)))))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (short)-1))));
        var_22 = ((/* implicit */_Bool) max((((((/* implicit */int) var_0)) & (((/* implicit */int) arr_22 [i_4] [i_4])))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? ((~(((/* implicit */int) (short)15626)))) : (((/* implicit */int) arr_22 [i_4] [i_4]))))));
    }
}
