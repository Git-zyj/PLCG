/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66776
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (16U)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [11U]))))))));
        var_11 -= ((/* implicit */unsigned short) ((unsigned int) var_9));
        var_12 *= ((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned int) ((arr_1 [i_0 + 2]) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) (unsigned short)28507))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_13 = ((/* implicit */signed char) ((2684822613297642514LL) << (((((/* implicit */int) (unsigned short)37028)) - (37028)))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), ((((+(arr_3 [i_1] [i_1]))) + (((/* implicit */unsigned long long int) -8349915129122951432LL))))));
        var_15 = ((((arr_3 [i_1] [i_1]) << (((arr_4 [i_1] [i_1]) - (262444853))))) != (((arr_3 [i_1] [i_1]) >> (((arr_4 [i_1] [i_1]) - (262444856))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((5313099221294867586ULL) % (((/* implicit */unsigned long long int) 4294967274U))));
                        var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((-(arr_8 [i_3] [i_4]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)7)) >= (((/* implicit */int) arr_11 [i_2] [i_3] [i_4] [i_5])))))))), (((((/* implicit */_Bool) ((arr_10 [i_2] [i_2]) ? (arr_8 [i_3] [i_3]) : (((/* implicit */long long int) 2147483623))))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_7 [i_2] [i_2])))));
        arr_15 [i_2] [(signed char)3] = ((((/* implicit */unsigned long long int) ((30U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)13264)))))) / (((((arr_10 [i_2] [i_2]) && (((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) (unsigned short)52154)) ? (((/* implicit */unsigned long long int) 2147483647)) : (18446744073709551615ULL))))));
        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4123))) : (arr_5 [i_2])))), (((((/* implicit */_Bool) 15678873193280563976ULL)) ? (4194303ULL) : (((/* implicit */unsigned long long int) 4294967281U))))));
    }
    var_20 ^= ((/* implicit */short) var_4);
    var_21 ^= min((((/* implicit */int) var_1)), (((((int) var_4)) / (((-1392640685) % (var_5))))));
}
