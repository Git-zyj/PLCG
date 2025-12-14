/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68383
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        var_15 = ((/* implicit */unsigned int) var_0);
        arr_4 [i_0] = ((((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) - (((min((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_0]))) + (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_11)))))));
    }
    for (long long int i_1 = 2; i_1 < 7; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
        var_16 = ((/* implicit */unsigned int) min((var_16), (min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) | ((+(arr_5 [i_1] [(unsigned short)3]))))), (max((arr_5 [i_1 + 2] [i_1 + 1]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3315)) & (((/* implicit */int) (unsigned short)4213)))))))))));
    }
    for (long long int i_2 = 2; i_2 < 7; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min(((-(max((arr_5 [i_2 + 1] [i_2 + 1]), (arr_10 [i_2]))))), (((/* implicit */unsigned int) ((arr_2 [i_2 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)10]))))))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) max((max((arr_12 [i_2] [i_2 + 3]), (((/* implicit */unsigned int) arr_16 [i_3 + 1] [i_3 - 1] [i_2 + 3] [i_2])))), (((/* implicit */unsigned int) (unsigned short)61324))));
                        arr_18 [i_5] [i_4] [i_4] [i_3 + 1] [i_2] [i_2] = ((/* implicit */unsigned int) arr_14 [i_2] [i_3]);
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) 602258935)) >= (arr_12 [i_3 + 1] [i_2]))) ? (max((((/* implicit */int) var_11)), ((-(-1995277568))))) : (((-602258927) ^ (((/* implicit */int) (short)10648)))))))));
        }
    }
    for (int i_6 = 2; i_6 < 10; i_6 += 1) 
    {
        var_20 *= ((/* implicit */short) ((max((((/* implicit */int) (unsigned short)4206)), (arr_16 [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6]))) + (((/* implicit */int) ((short) var_6)))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_21 |= ((/* implicit */int) (-(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4205))) | (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 602258957)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))));
                    arr_26 [i_8] [i_6] [i_6] [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((arr_16 [(unsigned short)7] [i_6] [i_7] [i_7]) & (((/* implicit */int) var_1))))) ? (max((((/* implicit */unsigned long long int) -1LL)), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9328)))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */int) (unsigned short)61329);
        var_23 -= ((/* implicit */long long int) (unsigned short)4213);
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15)))));
}
