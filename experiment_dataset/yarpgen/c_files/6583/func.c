/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6583
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_0] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0 + 2])) + (2147483647))) << (((((((/* implicit */_Bool) arr_6 [(signed char)18])) ? (4098984710U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1] [i_3] [i_0]))))) - (4098984710U)))));
                            var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_0 [i_3]))))));
                        }
                        for (signed char i_5 = 4; i_5 < 21; i_5 += 3) 
                        {
                            var_15 -= ((/* implicit */signed char) min((((arr_16 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_14 [6U] [i_1] [i_1])))) : (min((arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5 - 3]), (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 0U)))))))));
                            var_16 = (i_3 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)248)) << (((((/* implicit */int) ((signed char) ((arr_10 [(_Bool)1] [i_3] [i_3] [i_2 + 1] [i_3] [i_0]) ? (arr_2 [i_0] [i_5]) : (3448670988U))))) + (65)))))) : (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)248)) << (((((((/* implicit */int) ((signed char) ((arr_10 [(_Bool)1] [i_3] [i_3] [i_2 + 1] [i_3] [i_0]) ? (arr_2 [i_0] [i_5]) : (3448670988U))))) + (65))) - (56))))));
                        }
                        for (short i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_2 + 1] [i_3] [i_6] &= ((_Bool) (+(min((3448670960U), (((/* implicit */unsigned int) (_Bool)1))))));
                            arr_20 [i_0 + 1] [i_1] [(unsigned char)22] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_6 - 1] [i_0 + 2])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) max((var_1), (var_1)))) : ((+(846296291U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_2 + 1] [i_2])), (arr_8 [19U] [i_1] [i_2 + 1] [1LL] [20U])))) * (((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1)))))))));
                            var_17 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_18 [i_1] [i_1] [i_1])))) < (((/* implicit */int) ((unsigned short) 3448670988U)))))), (((((unsigned long long int) arr_0 [i_3])) << ((((~(((/* implicit */int) var_9)))) + (51)))))));
                        }
                        arr_21 [(_Bool)1] [i_1] &= ((/* implicit */long long int) 0U);
                    }
                    var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_2 - 1])), (var_2)))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_8 [(unsigned short)6] [i_2] [i_2 + 1] [i_2 - 1] [i_0 + 3])))), (((/* implicit */int) ((signed char) ((3448671004U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [20U] [i_1] [i_1] [i_1] [i_1] [8U])))))))));
                    var_19 &= ((/* implicit */int) (~(3448670979U)));
                    arr_22 [i_0 + 3] [i_1] [i_2] [(_Bool)1] = (~((+(((7532953968660854078LL) / (((/* implicit */long long int) arr_11 [i_0] [(unsigned char)8] [i_2] [i_0] [(signed char)22] [(_Bool)1])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_2) == (((/* implicit */unsigned int) var_1))))), (3448670974U)))) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */short) var_11))))) ? (((long long int) var_9)) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
    var_21 = ((signed char) ((long long int) (+(((/* implicit */int) (_Bool)1)))));
    var_22 |= ((/* implicit */long long int) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)0))))) : (((((/* implicit */_Bool) -1919801506)) ? (((/* implicit */int) (unsigned char)169)) : (var_1))))));
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) & (((/* implicit */int) var_7)))) != (((/* implicit */int) (!(((/* implicit */_Bool) 9252792312858927602ULL)))))))), (846296308U)));
}
