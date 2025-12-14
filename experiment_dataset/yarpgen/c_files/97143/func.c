/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97143
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
    var_13 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7))) >= (((/* implicit */unsigned long long int) ((long long int) 66060288U))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [8ULL] [i_2] [i_1] = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) min((-2147483626), (((/* implicit */int) arr_3 [i_1] [i_2 - 2] [i_1]))))) >= (max((var_11), (4294967295U))))));
                                var_15 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_5)) ? (4294967288U) : (arr_14 [i_0] [i_0] [i_0]))) ^ (((((/* implicit */_Bool) (unsigned char)164)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))))))), (((4294967283U) ^ (1253679075U)))));
                                var_16 += ((/* implicit */unsigned char) (((((-(arr_7 [i_0]))) >= (((unsigned int) (short)-17297)))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))) : (4294967295U)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) var_7);
                    arr_15 [8ULL] [i_1] = ((/* implicit */unsigned char) arr_7 [i_1 - 1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        for (long long int i_6 = 4; i_6 < 16; i_6 += 2) 
        {
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min(((~(((/* implicit */int) arr_20 [i_6 + 2] [i_6 + 1])))), (min((((/* implicit */int) var_9)), (arr_18 [i_6 - 2] [i_6 + 2]))))))));
                var_19 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (~(arr_18 [i_5] [i_6 - 1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_7 = 2; i_7 < 22; i_7 += 1) 
    {
        var_20 |= ((/* implicit */unsigned long long int) 4294967291U);
        arr_24 [i_7] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_21 [i_7 - 1])) ? (arr_21 [i_7 + 1]) : (arr_21 [i_7 - 1]))));
    }
    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_8] [i_8] [i_8] [i_8]))));
        var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) ((arr_16 [i_8]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (15U)))));
        var_23 += ((/* implicit */unsigned long long int) ((18446744073709551610ULL) >= (((/* implicit */unsigned long long int) (-(3041288217U))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        var_24 = ((/* implicit */int) arr_25 [i_9]);
        var_25 = ((/* implicit */unsigned char) var_1);
    }
}
