/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62251
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [(short)4])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0]))))));
                arr_6 [i_0] = ((((/* implicit */_Bool) ((signed char) arr_1 [i_1]))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_1]) : (var_14))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (((unsigned int) var_12))))));
                var_20 -= ((signed char) min((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) arr_3 [(unsigned short)2] [i_0])))), (((/* implicit */int) min(((short)24319), (((/* implicit */short) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            arr_11 [(signed char)0] [i_2] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_7 [i_2]), (((/* implicit */short) var_19))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -714359562)) ? (((/* implicit */int) (unsigned short)25946)) : (((/* implicit */int) (signed char)41))))) ? (min((arr_8 [i_2]), (arr_8 [i_2]))) : (((/* implicit */long long int) var_18))))));
            var_21 = ((/* implicit */short) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((-8460352315148414963LL), (((/* implicit */long long int) (unsigned char)176)))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (unsigned char i_5 = 2; i_5 < 11; i_5 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) var_15);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) (~(((((((/* implicit */int) (short)-17514)) + (2147483647))) << (((17559221147484069078ULL) - (17559221147484069078ULL)))))));
                                arr_22 [i_2] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6] [i_4] [i_7] [i_2] [i_6] [i_5])) ? (((/* implicit */int) arr_16 [i_5] [i_5 + 1] [i_2])) : (((/* implicit */int) arr_9 [i_7]))))), (var_1))), (((/* implicit */unsigned long long int) ((long long int) var_7)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned int) arr_18 [5] [i_5 - 2] [i_2] [(signed char)0])), (arr_19 [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 2]))));
                    var_25 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(signed char)7] [i_4] [i_2] [i_5 + 3])))))) ? (arr_8 [i_2]) : (((/* implicit */long long int) max((((/* implicit */int) (short)-19549)), (-828203166)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_30 [i_2] [(_Bool)1] [i_5] [(short)13] [i_5 - 2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_29 [3ULL] [i_9] [(_Bool)1] [i_2] [i_8] [i_4])) ? (((/* implicit */int) (unsigned short)25931)) : (((/* implicit */int) arr_21 [i_9 - 1] [i_9] [i_2] [i_2] [i_8 - 1] [i_8 - 1])))));
                                var_26 = ((/* implicit */int) arr_10 [i_4] [i_4] [i_4]);
                                var_27 = ((/* implicit */int) arr_19 [(unsigned char)11] [(unsigned char)11] [i_8 - 1] [i_8] [12ULL]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
