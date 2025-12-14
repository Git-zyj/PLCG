/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70185
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
    var_11 = ((long long int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_6))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                                var_13 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [6LL] [i_4])))))) - (min((((/* implicit */int) ((288230376149614592ULL) >= (((/* implicit */unsigned long long int) 1982217522U))))), (((((/* implicit */int) var_7)) + (((/* implicit */int) var_6))))))));
                                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0]) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_2 [i_4] [i_1] [i_2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_1] [i_3 - 2])) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 - 3] [i_0] [0U] [i_3 - 1]))))) : ((~(min((((/* implicit */unsigned int) var_5)), (arr_4 [i_4] [i_4])))))));
                                var_15 *= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_4])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((arr_2 [i_0] [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (arr_1 [(unsigned short)6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_2] [i_2])), (var_3)))) ? (((arr_1 [i_5 - 1]) / (arr_1 [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                                var_17 = (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_1])) ? (arr_2 [i_0] [i_0 - 3] [i_2]) : (arr_2 [(unsigned char)13] [i_0 - 1] [i_0 - 1]))));
                                arr_17 [i_2] [i_0] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 13140875085132991401ULL)))) : ((((!(((/* implicit */_Bool) 2513982551705241164ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_13 [i_2] [i_1] [i_1] [(unsigned char)10]) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 3; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_19 = arr_9 [i_7] [i_8] [i_7] [0LL] [(unsigned char)7];
                        var_20 = ((/* implicit */signed char) min((arr_10 [i_10] [i_9 - 1] [10ULL] [i_7] [11ULL]), (((((/* implicit */int) arr_16 [i_8 + 1] [i_8] [i_9] [i_8] [i_8])) != (((/* implicit */int) arr_16 [i_8 + 1] [i_8] [i_9] [i_8] [i_8]))))));
                    }
                } 
            } 
        } 
        var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_7])) >> (((((/* implicit */int) arr_28 [i_7] [i_7] [i_7] [i_7])) + (11505)))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_6);
}
