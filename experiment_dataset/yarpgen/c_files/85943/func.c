/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85943
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
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (var_0)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0 + 4])) : (((/* implicit */int) arr_3 [i_0 + 2])))) : (((((/* implicit */int) arr_3 [i_0 + 1])) % (((/* implicit */int) arr_3 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 4; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned short) var_17);
                            var_20 ^= ((/* implicit */short) var_5);
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 2; i_4 < 8; i_4 += 2) 
                            {
                                var_21 = ((((/* implicit */int) var_5)) << (((/* implicit */int) var_3)));
                                arr_14 [i_0] [(_Bool)1] [i_2] [i_3] [5ULL] [5U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_3 + 1] [i_2] [i_1] [i_0 + 4])) % (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1] [i_2 + 1] [i_0] [i_4 - 1])) ? (((/* implicit */int) (unsigned short)24075)) : (arr_13 [i_0] [i_1] [i_1] [i_0] [i_1])))))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_5))));
                            }
                            for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 1) 
                            {
                                arr_18 [i_0 + 3] [i_1] [i_0] [i_2] [i_3] [i_3] [(signed char)1] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_3]);
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) max((arr_9 [i_3 + 1] [(unsigned char)10] [i_3 + 1] [i_3 + 2] [i_0 - 2]), (arr_4 [i_0] [i_5 - 3] [i_5])))))))));
                                var_23 = ((-6775512492141256342LL) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)56)), ((unsigned short)61152))))));
                            }
                            for (unsigned int i_6 = 1; i_6 < 8; i_6 += 2) 
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */signed char) max(((!((_Bool)0))), (((((/* implicit */int) arr_8 [i_6 + 3] [i_2 - 1] [i_2] [i_0 + 1])) > (arr_13 [i_0 - 2] [i_3 + 3] [(_Bool)1] [i_0] [i_6 + 2])))));
                                var_24 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_2 + 1] [i_0] [i_6 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0 + 3] [i_2 + 1] [i_0] [i_6 + 1]))))));
                                var_25 = ((/* implicit */signed char) var_0);
                                arr_23 [8U] [i_0] [8U] [i_3 - 3] [i_3] = ((/* implicit */unsigned int) 68719472640ULL);
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (long long int i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 7; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((((/* implicit */_Bool) 68719472640ULL)) ? (7485606434020610492LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30659))))), (((max((var_13), (var_12))) % (var_12))))))));
                                var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1967008555U)) ? (1) : (((/* implicit */int) (unsigned short)34876))))), (((((/* implicit */_Bool) 1687238268U)) ? (2607729042U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        var_28 += ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_10] [i_10])))))))), (max((((arr_33 [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10]))))), (((/* implicit */unsigned long long int) var_7))))));
        var_29 ^= max((max((((/* implicit */long long int) ((((/* implicit */_Bool) 21)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61152))) : (738312409U)))), (((long long int) arr_33 [i_10])))), (((/* implicit */long long int) ((((var_3) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)41473)))) - (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_6)))))))));
    }
    var_30 = ((/* implicit */signed char) var_1);
    var_31 = var_18;
}
