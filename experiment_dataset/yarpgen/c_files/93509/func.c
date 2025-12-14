/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93509
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)64), (arr_4 [i_0] [i_0 + 1] [i_1 - 4])))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1])))) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                                var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) max(((~(((/* implicit */int) arr_3 [i_1] [i_1])))), (((/* implicit */int) (unsigned short)29772))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)255))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (unsigned short)18762))));
                            var_16 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_11)), ((unsigned char)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned int) min(((unsigned short)36), (((/* implicit */unsigned short) (_Bool)1))))), (((unsigned int) arr_1 [i_0]))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)44)), (2714527322U)))) ? (((((/* implicit */int) arr_1 [i_0 - 1])) / (((/* implicit */int) max(((unsigned short)45139), (((/* implicit */unsigned short) arr_12 [i_0 + 1] [i_5] [i_5]))))))) : (max((((/* implicit */int) arr_7 [(unsigned short)3])), ((~(((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 4; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_7] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), ((unsigned char)13))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_0] [i_0 - 1] [(signed char)13] [i_7] [2U] [i_0 + 1])), (2714527322U)))) ? (((/* implicit */int) arr_7 [i_9 + 1])) : (((/* implicit */int) ((unsigned char) (unsigned char)22)))))));
                                arr_23 [(unsigned short)6] [i_7] [i_7] [i_7] [i_1 + 2] [i_7] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_8])) ? (((/* implicit */int) arr_0 [i_8] [i_9 - 1])) : (((/* implicit */int) arr_13 [(unsigned short)7] [i_9] [(unsigned short)7] [i_8]))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [(unsigned short)13] [i_7] [1LL] [i_7] [i_1 + 1] [i_0] [(signed char)6]), ((unsigned char)22))))) : (max((70368743129088LL), (((/* implicit */long long int) (unsigned char)111))))))));
                                var_18 = ((/* implicit */unsigned char) (-(max((4294967275U), (((/* implicit */unsigned int) arr_17 [(_Bool)1] [i_7] [i_7 - 1] [i_7] [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 114384163U)) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_13 [i_1] [(unsigned short)12] [i_1 + 1] [(unsigned short)12]))))) : (((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_0] [i_0] [i_1] [i_0 - 1])))), (((((/* implicit */_Bool) max(((unsigned char)222), ((unsigned char)34)))) ? (((/* implicit */int) (unsigned char)82)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)231))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (+(((min((8982798837574007536LL), (((/* implicit */long long int) var_3)))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
}
