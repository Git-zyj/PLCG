/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94555
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
    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)117))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) arr_0 [i_0]);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned char) ((long long int) var_8))))));
                        arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] [i_1] = arr_2 [i_1] [i_2] [i_3];
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [(unsigned char)13] [i_0] = ((/* implicit */signed char) var_5);
                            var_22 = ((/* implicit */long long int) ((signed char) arr_9 [i_0] [i_1 + 1] [i_2] [i_3]));
                            arr_14 [i_2] [i_0] [i_3] [i_3] [8LL] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (arr_7 [i_0] [15LL] [i_2] [i_3])));
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (((/* implicit */int) arr_0 [0LL]))))) ? (((long long int) var_14)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_0] [i_1] [i_1] [i_1])))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_24 *= ((long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3]))));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) arr_2 [i_1] [14LL] [i_2]);
                            arr_20 [i_0] [i_1] [i_2] [i_0] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_1 + 1] [i_1 + 1])) + (((/* implicit */int) arr_17 [i_1 + 1] [i_1 - 1]))));
                        }
                        for (long long int i_6 = 2; i_6 < 23; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [(unsigned char)7] [i_3] [i_0] [i_1] [i_0]))) : (var_12)))) ? (var_0) : (((((arr_2 [i_3] [i_1 - 1] [i_2]) + (9223372036854775807LL))) << (((((var_10) + (6145248243826290576LL))) - (37LL))))));
                            arr_25 [i_0] [16LL] [i_2] [i_3] [i_0] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [(signed char)0] [i_1 - 1] [(unsigned char)8] [i_1])) : (((/* implicit */int) var_8))))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_6)) + (34))) - (22))))))));
                            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [i_6 - 1] [i_6]))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_21 [i_1 - 1] [i_6 + 1] [i_6] [i_6] [i_6 + 1]))));
                            var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                        }
                    }
                    var_28 = ((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) - (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)46)) - (((/* implicit */int) (unsigned char)202))))), (max((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [15LL])), (arr_4 [i_0] [i_0] [i_0] [(unsigned char)20]))))));
                    arr_26 [i_0] = ((/* implicit */long long int) ((var_10) <= (((((/* implicit */_Bool) var_12)) ? (min((arr_11 [(unsigned char)13] [i_0] [11LL] [i_1] [i_2] [i_2]), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))));
                    var_29 = ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [(signed char)14] [i_0]))) ^ (-6143405818449402557LL));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_30 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_11 [i_0] [i_1] [(signed char)24] [(signed char)6] [i_7] [i_7])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_18))) * (34359738367LL))) : (((long long int) arr_4 [i_0] [(unsigned char)10] [i_2] [(unsigned char)16])))))));
                        var_31 = ((/* implicit */long long int) min((var_31), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (var_12) : (arr_23 [i_0] [i_7] [20LL] [i_7] [i_7]))) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_13))))))) : (((((/* implicit */_Bool) ((long long int) arr_27 [i_0] [i_0] [(unsigned char)16] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1] [i_1 + 1] [(signed char)18] [i_1 - 1]))) : (var_1)))))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 24; i_8 += 3) 
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_8 - 1] [i_2] [i_0] [i_1 + 1])) ? (((((/* implicit */_Bool) min((arr_7 [i_0] [i_8] [i_2] [i_8]), (((/* implicit */long long int) arr_29 [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)64))))) : (((long long int) arr_22 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) arr_21 [i_8] [(unsigned char)6] [i_1 - 1] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_23 [i_0] [0LL] [i_0] [i_8] [i_8]))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 3; i_9 < 23; i_9 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) -4086255902338404849LL))));
                            arr_37 [21LL] [i_0] [2LL] [i_0] [i_0] = min((((/* implicit */long long int) min((min((((/* implicit */unsigned char) var_18)), ((unsigned char)59))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0])))))))), ((-(min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_6 [i_1] [i_2] [i_8] [i_9])))))));
                        }
                    }
                }
            }
        } 
    } 
}
