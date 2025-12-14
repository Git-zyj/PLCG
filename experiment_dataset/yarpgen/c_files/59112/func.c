/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59112
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    var_16 *= arr_1 [i_0];
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_17 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_1] [i_1] [i_2] [i_2]) / (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (var_9)))) : ((+(arr_6 [i_1] [i_1] [i_1] [(_Bool)0])))))), (min((((/* implicit */unsigned long long int) arr_0 [i_3])), (arr_8 [i_1] [i_1])))));
                        var_18 = ((/* implicit */_Bool) 21U);
                        var_19 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                        var_20 &= ((/* implicit */unsigned long long int) ((arr_5 [i_1]) && (((/* implicit */_Bool) min((((arr_7 [(unsigned char)16] [i_1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (unsigned short)14407)) ? (-909140547) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1])))))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((14336U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) min((var_3), (((/* implicit */short) arr_9 [i_0] [i_1] [i_1]))))) : ((+(((/* implicit */int) (unsigned short)31414))))))), (((min((((/* implicit */unsigned long long int) 14321U)), (arr_8 [i_1] [i_1]))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0]))))))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_2 + 1])) ? ((~(((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) arr_5 [i_0]))))));
                        var_23 -= ((/* implicit */unsigned int) min(((+(arr_12 [i_2] [i_4] [i_0] [i_0] [i_4] [i_0]))), (((/* implicit */unsigned long long int) max(((signed char)25), (((/* implicit */signed char) arr_9 [i_4] [i_1] [i_4])))))));
                        var_24 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) min((((/* implicit */long long int) 77344380)), (var_9)))))));
                        var_25 = ((/* implicit */long long int) arr_1 [19ULL]);
                        var_26 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_2 [i_0] [i_1] [i_4]))))))) ? (((arr_1 [i_0]) & (min((arr_12 [i_0] [i_4] [(signed char)8] [(signed char)8] [i_2] [i_4]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)31414)))))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)53060)) ? (((/* implicit */int) arr_3 [i_0] [i_2 + 3])) : (((/* implicit */int) var_3)))) < ((+(((/* implicit */int) var_1)))))))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65509)) && (((/* implicit */_Bool) min((((6129238144935623027LL) >> (((((/* implicit */int) var_4)) - (55))))), (((/* implicit */long long int) (unsigned short)53064))))))))));
                            var_29 = ((/* implicit */long long int) ((((1008603453089331898LL) < (var_11))) ? (arr_15 [(unsigned short)7] [i_0] [i_5 - 1] [i_5 - 1]) : (((var_1) ? (arr_15 [(unsigned char)6] [i_0] [i_5 - 1] [i_5 - 1]) : (((/* implicit */int) (signed char)-117))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_9 [(_Bool)1] [i_5 - 1] [i_0]) ? (27021597764222976LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (-27021597764222957LL)));
                        }
                        var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (1073741822LL))))));
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) min(((unsigned short)37), (((/* implicit */unsigned short) arr_7 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_31 |= ((/* implicit */signed char) ((unsigned short) var_9));
}
