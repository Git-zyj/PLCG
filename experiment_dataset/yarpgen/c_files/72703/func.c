/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72703
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
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (5658587846208681012LL)))))));
    var_18 *= ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0] [i_1])) <= (((/* implicit */int) var_11)))) ? (((long long int) 5658587846208681015LL)) : (((((/* implicit */_Bool) (short)6980)) ? (((/* implicit */long long int) var_2)) : (-5658587846208681013LL)))));
                        var_20 = ((/* implicit */unsigned long long int) ((int) arr_5 [i_0 + 2] [i_1] [i_1 + 1]));
                    }
                    var_21 ^= ((/* implicit */int) arr_0 [i_0]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((var_5) / (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_11 [i_2])) : (var_0))))))));
                        arr_13 [i_0] [i_1] [11ULL] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1423866518)) / (-5658587846208681015LL)));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) ((unsigned char) arr_9 [i_0])))));
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [(signed char)11]);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 4; i_5 < 14; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */int) arr_6 [i_0] [i_0]);
                            arr_22 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_23 [i_0] [i_2] [i_5] [(signed char)3] = ((/* implicit */short) var_7);
                            arr_24 [i_0] [(signed char)9] [i_2] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_7 [2ULL] [i_1 - 1] [i_2] [i_6])) : (((var_14) * (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))))));
                        }
                        var_24 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-100)))));
                    }
                    arr_25 [i_0] = ((/* implicit */unsigned long long int) arr_17 [i_0]);
                }
            } 
        } 
    } 
}
