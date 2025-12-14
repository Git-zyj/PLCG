/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94854
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_17)) + (var_2))))))) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))))));
    var_21 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) != (max((((/* implicit */unsigned int) arr_3 [i_1])), (((((/* implicit */_Bool) var_18)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_10))));
                    arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((arr_9 [i_2] [i_1] [i_0] [i_0]), (arr_9 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_2])))) ^ (((((/* implicit */_Bool) ((var_7) * (arr_1 [13ULL])))) ? (((long long int) (short)8192)) : (((/* implicit */long long int) var_8))))));
                }
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (arr_5 [(unsigned short)2] [i_1] [i_3 + 2])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_0])))))))))));
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [13ULL])) ? ((~(((/* implicit */int) arr_11 [i_0] [i_1 + 2])))) : (((/* implicit */int) arr_6 [i_3 + 1] [i_1] [i_0 - 1])))) < (((/* implicit */int) var_13))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        arr_19 [i_3] [(_Bool)1] [i_3 + 1] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_3] [i_5])) + ((-(((/* implicit */int) arr_11 [i_5 + 1] [i_1 + 1]))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((unsigned int) max((((/* implicit */unsigned long long int) 2557152859U)), (arr_7 [i_0 - 1] [i_1 - 1] [i_3] [i_5 + 2])))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [4U] [i_1]))))))));
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((unsigned char) max((arr_4 [(_Bool)0] [(unsigned char)1]), (((/* implicit */unsigned long long int) var_9))))))));
                                var_28 = ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (var_17))))), ((~(((/* implicit */int) arr_0 [i_0]))))));
                                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_4 [i_0] [i_8]) : (arr_4 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) var_16)) : ((-(((((/* implicit */_Bool) arr_11 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_7 - 1])))))));
                                var_30 = ((/* implicit */signed char) arr_16 [i_8] [i_1]);
                            }
                        } 
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) ((arr_21 [i_1 - 2] [i_0] [i_0 - 1] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            {
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_30 [4ULL] [i_10])) ? (((/* implicit */int) arr_33 [i_9] [(signed char)0] [i_9])) : ((-(((/* implicit */int) arr_32 [i_9] [i_10])))))), (((/* implicit */int) arr_28 [i_9] [i_9])))))));
                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) arr_30 [(signed char)14] [i_10]))));
                var_34 ^= ((/* implicit */unsigned long long int) ((short) arr_31 [(_Bool)1]));
                arr_35 [i_9] [i_9] = ((/* implicit */long long int) (+(max((((/* implicit */int) max((((/* implicit */short) var_5)), (var_11)))), (max((var_17), (((/* implicit */int) arr_31 [i_9]))))))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_30 [i_9] [i_9]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_9] [i_10]))))) : (((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_10]))) : (var_18)))));
            }
        } 
    } 
}
