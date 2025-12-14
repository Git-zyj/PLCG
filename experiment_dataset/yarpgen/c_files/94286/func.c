/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94286
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (17443461142056953755ULL) : (((/* implicit */unsigned long long int) 2401397528U)))))));
    var_14 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min((((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) var_12)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) var_1);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(274877890560LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (arr_3 [i_0 + 2] [i_0 + 2] [i_0 - 1]) : (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 2])))) : (((unsigned long long int) arr_0 [i_0 + 1]))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) + (((/* implicit */int) ((((/* implicit */long long int) (~(var_6)))) <= (274877890560LL))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) var_10);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(arr_7 [i_0 + 1] [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [(short)11])) ? (arr_1 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2597))))) : (arr_8 [i_0] [i_1] [i_2] [i_3])))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) var_7))))))));
                            /* LoopSeq 3 */
                            for (signed char i_4 = 4; i_4 < 22; i_4 += 1) 
                            {
                                var_17 += ((/* implicit */signed char) min((((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_4)))), (((-9223372036854775790LL) == (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [(signed char)15]))))))), ((~(((arr_3 [i_0 - 1] [i_1] [i_0 - 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [(signed char)2])))))))));
                                var_18 ^= ((/* implicit */signed char) arr_1 [i_4] [i_3]);
                                arr_17 [i_1] [i_1] [i_3 - 2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) 627884168401355988LL)))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7957776903007148331ULL))))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min(((+(arr_0 [i_3 - 4]))), (((1316751774U) * (arr_10 [i_0 + 2]))))))));
                                var_20 += ((/* implicit */_Bool) var_1);
                            }
                            for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
                            {
                                arr_21 [i_1] [i_1] [i_2] [15ULL] [i_5 + 1] = ((/* implicit */unsigned int) ((min((arr_16 [i_0 - 1] [i_3 - 2] [i_5 - 1] [i_3 - 3] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)37608)))) % (arr_16 [i_0 + 2] [i_3 - 3] [i_5 + 2] [i_2] [i_2])));
                                var_21 = var_0;
                                arr_22 [i_5] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) >= (((((/* implicit */_Bool) arr_14 [i_0 + 2] [i_0] [i_0] [i_0] [i_0])) ? (1937777544U) : (arr_10 [i_3]))))));
                                arr_23 [i_1] [2U] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) arr_19 [(unsigned short)10] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_1] [i_0] [i_0]))) + (2147483647))) >> (((/* implicit */int) min((var_11), ((!(((/* implicit */_Bool) 21U)))))))));
                            }
                            for (signed char i_6 = 1; i_6 < 22; i_6 += 4) 
                            {
                                var_22 = ((/* implicit */signed char) (((~(((/* implicit */int) var_11)))) | (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]))));
                                var_23 = ((/* implicit */unsigned char) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) (unsigned char)117))));
                                arr_26 [i_0] [i_1] [i_1] [i_3] [i_0 - 1] [i_2] [i_0 + 1] = ((/* implicit */signed char) var_6);
                            }
                            var_24 = ((/* implicit */long long int) min((((/* implicit */short) (unsigned char)114)), (min((var_7), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))))));
                            arr_27 [5ULL] [i_1] [i_2] [22U] = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) (short)-10)) ? (((/* implicit */long long int) arr_10 [i_0])) : (274877890571LL))))), (((/* implicit */long long int) (+((~(782421490U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */int) (-(var_5)));
}
