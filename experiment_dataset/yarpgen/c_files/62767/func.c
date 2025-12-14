/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62767
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
    var_18 &= ((/* implicit */unsigned char) ((((((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-25114))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (short)25114)))))))) & (((/* implicit */unsigned int) min(((+(((/* implicit */int) (short)25114)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) > (9535420096123063015ULL)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) ((short) ((signed char) arr_0 [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */short) ((((max((var_6), (((/* implicit */int) (short)25129)))) >= (((/* implicit */int) (short)-14542)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)25114)) : (((/* implicit */int) arr_3 [i_4]))))) : (((var_13) << (((/* implicit */int) arr_12 [i_2] [i_4]))))))));
                                arr_13 [i_2] [(signed char)14] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0 + 1]))))), (max((((arr_4 [i_3]) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-25115))))), (((/* implicit */long long int) var_7))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned char) min((arr_2 [i_2] [i_5]), (((/* implicit */int) (signed char)112))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] [i_5])) ? ((~(((/* implicit */int) ((short) var_7))))) : (((arr_6 [i_2 - 3] [i_1 + 2]) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_2 + 1])), (var_16)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-25099)), ((unsigned short)39982))))))));
                                arr_16 [i_2] [i_3] = ((/* implicit */long long int) ((2802419678013217773ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226)))));
                            }
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) 1932584765)) ? (((((var_6) + (arr_8 [i_0] [i_1 - 2] [i_2 + 2] [i_3] [i_0 - 2]))) - (((/* implicit */int) arr_11 [i_0] [i_3])))) : ((-(((/* implicit */int) arr_3 [i_0 - 2])))))))));
                            arr_17 [i_0 - 1] [i_0 - 1] [i_2] [(short)6] [i_0 + 1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_7 [i_0] [i_2])))))))));
                            arr_18 [i_2 + 1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1] [i_3]))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-25133)) ? (((/* implicit */int) (signed char)32)) : (arr_8 [i_0 + 1] [(signed char)7] [(signed char)7] [i_2] [(signed char)7]))))) : (arr_1 [i_2])));
                        }
                    } 
                } 
                var_24 -= (!(((/* implicit */_Bool) min((min((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_0 - 2] [i_1 - 2] [i_1] [6LL] [i_1 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25099)) ? (((/* implicit */int) (short)-9881)) : (((/* implicit */int) arr_3 [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)13011)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)25099))))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-25099))))), (((var_5) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) arr_15 [i_7] [i_1] [i_0])))))) : ((+(((/* implicit */int) (short)25113)))));
                                var_26 = ((/* implicit */signed char) (short)-25099);
                            }
                        } 
                    } 
                } 
                arr_29 [4U] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_23 [i_0 - 1] [4] [i_1] [i_1 + 2] [i_0 + 1])) - (((/* implicit */int) (short)-25099)))) + ((-(((/* implicit */int) (signed char)119))))));
            }
        } 
    } 
}
