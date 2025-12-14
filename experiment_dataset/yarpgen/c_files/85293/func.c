/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85293
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_0]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min(((unsigned short)52268), (var_2))))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_15))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_1 - 2])) ? (((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 2] [i_1] [(unsigned short)3])) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 2] [i_1] [(unsigned short)8]))))) ? (((arr_1 [i_1 - 1] [i_3 + 1]) >> (((((/* implicit */int) var_13)) - (28848))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_1 - 1])) ? (arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_9 [i_1 + 1] [2LL] [i_1 - 1]))))));
                        var_18 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) arr_6 [i_0])), (arr_0 [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [(short)1] [i_3] [i_3 + 1]))))) & (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)52268), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned short)52268)))))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        arr_17 [i_4] [i_1 + 1] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_15 [i_1 - 2] [i_1 + 2] [i_1] [i_1]))))) - (((((/* implicit */_Bool) arr_11 [i_4] [i_1 + 1])) ? (((/* implicit */int) arr_15 [1U] [i_1 + 1] [i_1] [(short)1])) : (((/* implicit */int) arr_15 [i_1] [i_1 + 1] [i_1 + 1] [i_1]))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_4] [i_4])) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])) | (arr_1 [i_0] [(signed char)3]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_4]))))))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((unsigned short) arr_14 [i_4] [i_1 + 2] [i_1]))) : ((+(((/* implicit */int) (unsigned short)52268))))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 - 1])) ? (arr_8 [i_1 - 2] [i_1 - 1]) : (arr_8 [i_1 - 2] [i_1 - 1])))))));
                        arr_18 [i_4] [i_1 - 1] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_8 [i_1 - 2] [i_1 + 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                    }
                    var_21 = ((/* implicit */unsigned short) arr_6 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        var_22 ^= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)27708));
        var_23 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) max(((unsigned short)37834), ((unsigned short)37828))))))));
        var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5 + 1] [i_5 - 1]))) != (var_11)))), ((~(3347846397U)))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_20 [i_5] [i_5]))) ? (((/* implicit */int) arr_20 [i_5] [i_5 + 3])) : ((~(((/* implicit */int) (unsigned short)13268)))))) : (max((((((/* implicit */int) arr_20 [i_5] [i_5])) | (((/* implicit */int) arr_19 [i_5])))), (((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))))));
    }
    var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_6))))));
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned short) ((var_6) ? (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_15)) - (63))))) : (((/* implicit */int) var_14))))))));
}
