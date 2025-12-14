/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84252
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_10 *= ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_2] [i_3] [i_4])), (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_4] [i_0])), (4467570830351532032ULL)))))));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(2147483640)))), (arr_10 [i_4] [i_0] [i_2] [i_0])));
                            }
                        } 
                    } 
                } 
                var_11 = ((/* implicit */unsigned char) arr_2 [i_0]);
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_13 [i_0] [i_0] [i_5])))) ? (4467570830351532032ULL) : (13979173243358019586ULL)));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13208983864357497757ULL)) ? (((/* implicit */int) (short)-3004)) : (((/* implicit */int) (unsigned char)131))))) ? (((/* implicit */int) (short)22485)) : (((/* implicit */int) (signed char)-32))))), ((+((-(18446744073709551615ULL)))))));
                                arr_21 [i_0] = ((/* implicit */unsigned int) ((long long int) 2147483647));
                                arr_22 [i_0] [i_0] [i_5] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_6 [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (arr_20 [i_0] [i_1] [i_5] [i_6] [i_7]))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [i_0]))))))))));
                                var_13 = 4467570830351532023ULL;
                                var_14 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_17 [8] [i_1] [8] [8])) : (((/* implicit */int) arr_17 [(unsigned char)2] [i_5] [i_1] [(unsigned char)2])))) ^ (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        {
                            var_15 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0]))))) ? (((/* implicit */int) ((signed char) (unsigned short)37202))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_8] [i_9])))), (((/* implicit */int) ((((/* implicit */_Bool) ((1042729124785273930ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54)))))) || (((/* implicit */_Bool) arr_1 [i_9])))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (4292526970201730015LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_9] [i_9] [i_1] [i_1] [i_1] [i_0])) + (((arr_19 [i_0] [i_0] [i_1] [i_0] [i_9]) * (((/* implicit */int) arr_3 [i_0])))))))));
                            var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4)))) && (((arr_25 [i_0] [i_0] [i_8]) != (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_9]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23026)) || (((/* implicit */_Bool) -42026667))));
    /* LoopNest 3 */
    for (unsigned int i_10 = 3; i_10 < 8; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            for (unsigned int i_12 = 1; i_12 < 6; i_12 += 3) 
            {
                {
                    var_19 -= ((((/* implicit */_Bool) (unsigned short)42510)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (short)-26845)));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((2833730406405075619ULL), (((((/* implicit */unsigned long long int) arr_25 [16ULL] [i_11] [16ULL])) - ((-(15613013667304476004ULL))))))))));
                }
            } 
        } 
    } 
}
