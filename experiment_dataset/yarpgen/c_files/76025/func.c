/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76025
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1581277613) | (((/* implicit */int) (signed char)123))))) ? (((var_12) ? (1955120127U) : (((/* implicit */unsigned int) 1830816739)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? ((~(((((/* implicit */long long int) var_13)) ^ (var_11))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)123)) ^ ((~(((/* implicit */int) var_8))))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((~(((/* implicit */int) ((((/* implicit */int) var_4)) < (var_3)))))) < (((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_3 [i_0 + 2] [i_2 + 1]))) : (((long long int) max((arr_4 [i_0] [i_2]), (((/* implicit */int) (unsigned char)78))))));
                    arr_9 [i_0] [i_0] = (((+(arr_3 [i_2 - 3] [i_2]))) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2]))));
                    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((~(((/* implicit */int) var_8)))) > (((/* implicit */int) var_10)))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) 1955120127U)), (2143290850281848550LL)))) ? (((long long int) arr_7 [i_0] [i_0] [i_2 + 2] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                    var_19 = ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)6] [i_2 + 1] [i_2 + 1])) ? (max((((/* implicit */int) arr_5 [i_0 + 4] [i_1] [i_2] [i_0 - 1])), ((~(((/* implicit */int) var_10)))))) : (((/* implicit */int) ((((var_10) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_1)))) < (26)))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [(short)4] [i_0] [i_0])), (arr_8 [i_0] [5ULL] [i_0 + 4] [(unsigned char)7]))))))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_21 = ((/* implicit */short) (+(((/* implicit */int) (!(min((arr_11 [i_3] [(unsigned char)2]), (arr_11 [i_3] [i_3]))))))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((((/* implicit */int) (_Bool)0)) < (26))), ((!(((/* implicit */_Bool) arr_10 [i_3])))))))));
    }
    var_23 = ((/* implicit */long long int) (-(var_6)));
}
