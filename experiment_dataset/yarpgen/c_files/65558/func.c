/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65558
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
        {
            arr_6 [(short)7] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (130023424U)));
            arr_7 [(unsigned short)21] = ((/* implicit */short) arr_4 [i_0]);
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_11 [(signed char)2] = ((/* implicit */long long int) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_0]))))));
            arr_12 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) (!((_Bool)1))));
            arr_13 [i_2] = ((/* implicit */unsigned short) arr_5 [i_0] [i_2] [i_0]);
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(arr_4 [i_3]))) + (max((arr_15 [i_0] [i_2] [i_2] [i_3]), (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (signed char)-119)))))));
                arr_17 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) arr_10 [i_2] [i_2]);
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_0]), ((~(((/* implicit */int) (signed char)119))))))) ? (((/* implicit */long long int) arr_4 [i_0])) : (((((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (min((((/* implicit */long long int) var_10)), (9223372036854775791LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)65529))))))))));
                var_18 |= ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)30925)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39698))) & (arr_3 [i_3] [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_2 [2U] [i_2] [i_3])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))));
            }
            arr_18 [i_0] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) arr_15 [(_Bool)1] [i_2] [i_2] [i_2])) : (2340440338U))))))), ((+(((/* implicit */int) arr_8 [i_0]))))));
        }
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_0] [1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3672901754U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))) ? (((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_4] [i_0])))))))));
            var_19 = ((/* implicit */unsigned short) arr_10 [(unsigned short)10] [i_0]);
            var_20 = ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_2 [i_0] [i_0] [i_4])))) - (((((/* implicit */int) (short)-23333)) - (arr_15 [i_0] [i_0] [(signed char)0] [i_4]))))));
        }
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_10 [i_0] [i_0])) >> (((((/* implicit */int) (short)-4558)) + (4570)))))))) > (arr_14 [i_0] [i_0] [(_Bool)1] [i_0])));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((((/* implicit */int) arr_16 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_10 [i_0] [i_0])) - (174))))))))));
    }
    var_23 |= ((_Bool) var_12);
}
