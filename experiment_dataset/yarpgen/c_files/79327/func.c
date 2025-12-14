/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79327
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)10)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)238)))))));
                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(signed char)0] [i_0 - 2])) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_2 [i_1 + 1] [4LL]))))) <= (((arr_3 [i_1 + 2] [i_0 - 3] [i_1 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [(signed char)18])))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 4) 
                {
                    var_21 = ((/* implicit */signed char) arr_1 [i_0]);
                    var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)31))))), (((((/* implicit */_Bool) (signed char)16)) ? (((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_1 - 1] [i_0]))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-68)) || (((/* implicit */_Bool) 2394747168U))))))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                {
                    arr_8 [i_0 + 1] [i_0] [i_3] [i_3] = ((((((/* implicit */int) (unsigned char)254)) <= (((/* implicit */int) (unsigned char)241)))) ? (arr_3 [i_0 - 2] [i_0 + 1] [i_1 - 1]) : (arr_3 [i_1 - 1] [i_1 - 2] [i_0 + 1]));
                    arr_9 [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [(short)22] [i_3])) || (((/* implicit */_Bool) arr_7 [i_0 - 3] [i_1] [i_1]))))) / (((/* implicit */int) arr_6 [i_0] [i_0 - 3] [i_1] [i_3])));
                }
                for (short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                {
                    var_23 = (!(((/* implicit */_Bool) (signed char)-125)));
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (signed char)-17)) / (((/* implicit */int) ((signed char) arr_3 [i_0] [i_1] [i_1]))))));
                }
                for (short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */unsigned int) -12516075)) : (3932870389U)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)2428))))), ((+(((/* implicit */int) (unsigned char)75))))))) : (((((/* implicit */_Bool) (+(3287569312U)))) ? (((((/* implicit */_Bool) -12516075)) ? (1007397978U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1 - 2] [i_5] [i_1 - 2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3584)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_17 [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) ((signed char) (unsigned char)14)))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_0 + 1])) ? (((/* implicit */int) arr_11 [3])) : (((/* implicit */int) arr_11 [i_0]))))));
                        var_27 = ((/* implicit */int) (_Bool)0);
                        arr_22 [i_6] [i_1] [i_6] [i_6] &= ((/* implicit */signed char) 3929940108U);
                        var_28 = ((/* implicit */signed char) (+(((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 - 1] [i_1] [i_1] [i_5] [i_6] [i_1]))) <= (3221512051U))) ? (((/* implicit */int) ((1007397957U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [i_6] [i_0] [(signed char)9])))))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                    }
                }
                arr_23 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)32)) <= ((~(((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_6 [i_0] [i_0 - 3] [i_0] [i_0 - 3]))))))));
            }
        } 
    } 
    var_29 |= ((/* implicit */signed char) ((((long long int) var_3)) & (((/* implicit */long long int) var_2))));
}
