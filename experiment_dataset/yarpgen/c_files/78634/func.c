/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78634
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) (_Bool)1)), (var_10))))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 2) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] [(unsigned short)14] [(unsigned short)14] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (signed char)34)))) : (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])) ? (arr_7 [i_0 - 1] [i_0 - 1] [(short)12] [12U]) : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                            var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0 + 1] [11U] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (-445793625812703104LL))))) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_10))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) (~(var_2)));
                            arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [5ULL] [i_5 + 1] = ((/* implicit */unsigned int) (_Bool)1);
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((-1562578800) != (1000036809))))));
                            arr_18 [i_0] [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_3] [(unsigned short)16] = ((/* implicit */short) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1])))));
                            arr_19 [i_5] [18ULL] [i_2] [i_2] [i_1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) var_0)) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))), (((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1])))))));
                        arr_20 [i_0 - 1] [24U] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) arr_12 [i_0] [(signed char)13] [(signed char)13] [i_0] [i_0])) ? (((/* implicit */long long int) arr_5 [i_0])) : (-7250121804124187845LL))) : (((/* implicit */long long int) var_2))))) ? (4294967278U) : (((/* implicit */unsigned int) arr_7 [i_3] [(signed char)1] [i_1] [i_0]))));
                    }
                } 
            } 
        } 
        var_20 = ((((/* implicit */long long int) ((/* implicit */int) var_4))) / ((~(((((/* implicit */_Bool) (short)-6212)) ? (((/* implicit */long long int) var_10)) : (-3499795606939498159LL))))));
        arr_21 [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1])))) & (max((-7250121804124187845LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(short)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520))) : (var_3))))))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_6) >= (((/* implicit */long long int) var_2))))) | (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_1)) + (((/* implicit */int) ((var_8) || (((/* implicit */_Bool) var_13)))))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) -3499795606939498159LL)) ? (2168297303227996440LL) : (((/* implicit */long long int) var_12)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)37))))) | (var_3)))) : (var_7)));
}
