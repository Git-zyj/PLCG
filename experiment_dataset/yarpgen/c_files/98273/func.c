/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98273
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
    var_19 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)255))));
                var_20 = ((/* implicit */signed char) (unsigned short)17716);
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)47820)))) - ((((-(4238293676U))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))))));
                var_21 = ((/* implicit */int) min((var_21), (((((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)36537)) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */int) arr_5 [i_1] [i_0] [(unsigned short)6])) / (var_16))) : (min((((/* implicit */int) var_12)), ((+(((/* implicit */int) var_17))))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_22 -= ((/* implicit */int) ((_Bool) (unsigned short)47820));
                        var_23 = ((/* implicit */unsigned char) (unsigned short)59668);
                        var_24 = ((/* implicit */_Bool) (+((+(arr_4 [i_0] [i_1])))));
                    }
                    var_25 = ((/* implicit */unsigned short) 9151314442816847872LL);
                }
                /* vectorizable */
                for (unsigned short i_4 = 3; i_4 < 16; i_4 += 1) 
                {
                    var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_1])) ? (arr_12 [i_0 - 2] [i_1] [(unsigned char)2] [i_4]) : (((/* implicit */int) (unsigned short)47820))));
                    var_27 = ((/* implicit */unsigned long long int) ((short) ((unsigned char) var_14)));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (~(3543234252U))))));
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -244632222)) == ((+(arr_22 [i_7 + 1] [i_7 + 3] [i_7 - 4] [i_7 - 3] [i_7 + 1] [i_0])))));
                                arr_24 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) max((arr_19 [i_0 + 1] [i_7 - 4] [i_0 + 1]), (arr_4 [i_7 + 1] [i_0 - 1])))) : ((+(((((/* implicit */_Bool) -5891292645338761129LL)) ? (arr_3 [i_1] [i_5] [i_6]) : (((/* implicit */unsigned long long int) var_11))))))));
                                arr_25 [i_0] [i_1] [i_5] [i_0] [(signed char)6] = ((/* implicit */unsigned short) max((min((((unsigned long long int) 3442946469U)), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (244632222)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)24765)), (56673605U))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (_Bool)1)) << (((56673605U) - (56673600U)))))))));
                    arr_27 [i_1] |= ((/* implicit */unsigned long long int) arr_10 [i_5] [i_0 + 1]);
                    var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_5])) ? (((/* implicit */int) arr_2 [i_5] [i_0 + 1])) : (((/* implicit */int) var_17)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (2020806376U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */int) (unsigned short)11010)) + (((/* implicit */int) var_6)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)45)), (var_5))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 1) 
    {
        for (unsigned int i_9 = 2; i_9 < 15; i_9 += 1) 
        {
            {
                var_31 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_20 [i_9] [i_8 + 1] [i_8] [i_8 - 2] [i_8 - 2] [i_8 - 2])) : (((/* implicit */int) var_12))))));
                arr_33 [i_8] [i_8] = ((/* implicit */unsigned char) min((var_8), (((((/* implicit */int) var_17)) >= (((/* implicit */int) arr_31 [i_8]))))));
                arr_34 [i_8] [i_8] [i_8 + 1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) min((arr_9 [i_9] [i_8] [i_8] [i_8]), (((/* implicit */short) arr_23 [i_8] [i_9 + 1] [i_9 + 1] [i_9] [i_8])))))), (((long long int) 2619079796U))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) + (max((((((/* implicit */long long int) var_2)) - (var_4))), (((/* implicit */long long int) var_8)))))))));
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))));
}
