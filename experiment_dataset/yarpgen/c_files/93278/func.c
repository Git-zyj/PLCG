/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93278
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
    var_20 |= ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [19LL] [i_0 - 3] [19LL] [9U] [(signed char)17] = ((/* implicit */_Bool) arr_7 [i_3 + 1] [i_2] [i_0 - 3]);
                            var_21 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)118))))), (arr_4 [i_2 + 1] [i_2 - 1] [i_2])));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_2 + 1] [i_4] [(unsigned char)13])))))))));
                                var_23 = ((/* implicit */_Bool) var_17);
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (signed char)-73)))))))) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 3] [i_3 + 1] [i_0 - 3] [i_4])) < (((((/* implicit */_Bool) arr_0 [3ULL])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) arr_9 [8LL] [8LL] [i_2 - 1] [i_2]))))))))))));
                                var_25 = ((((/* implicit */_Bool) (unsigned char)77)) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)73)) & (((/* implicit */int) (signed char)66))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_26 = ((/* implicit */unsigned int) arr_9 [i_1] [i_2] [(short)10] [i_2]);
                                var_27 &= ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_3 - 1]))));
                            }
                        }
                    } 
                } 
                var_28 = ((signed char) ((unsigned int) ((((/* implicit */_Bool) 963078839)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) arr_6 [i_0] [(unsigned short)13] [i_1] [(signed char)6])))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                {
                    for (signed char i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6 + 2] [i_7 - 2] [i_6 + 2] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned short)25642)) : (((/* implicit */int) (short)27443)))) : (max((arr_8 [i_7 + 2] [i_7 - 2] [i_6 + 2] [i_0]), (((/* implicit */int) (signed char)121)))))))));
                            var_30 *= ((/* implicit */short) min((((/* implicit */long long int) ((signed char) (signed char)-20))), (((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (arr_1 [i_6 - 1]) : (arr_1 [i_6 + 1])))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_11 [(signed char)0] [i_0 - 2] [i_0 - 1] [(signed char)8] [i_0 - 3] [15] [i_0 - 1]), (arr_9 [6ULL] [i_0 - 2] [i_0 - 2] [i_0 - 2])))))))));
                var_32 += ((/* implicit */unsigned int) arr_16 [(_Bool)1] [(signed char)18] [i_0 - 1]);
            }
        } 
    } 
}
