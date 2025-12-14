/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86613
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
    var_17 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(-1223079681991598089LL)))), (((min((((/* implicit */unsigned long long int) var_12)), (var_9))) / (var_9)))));
    var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_9)))))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1] [i_0 - 1])) ? (arr_0 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((short) 4294967295U))))));
                    var_20 = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (-(var_14)));
        var_22 = var_3;
        var_23 ^= ((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_0] [i_0]);
        var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1] [i_0])))) : ((-2147483647 - 1))));
    }
    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 1) 
    {
        arr_14 [i_3 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_0))))) - ((~(arr_13 [i_3] [i_3]))))) >= (((/* implicit */long long int) (~(((/* implicit */int) ((-1223079681991598064LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (long long int i_5 = 2; i_5 < 23; i_5 += 3) 
            {
                {
                    var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3]))));
                    var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_3 - 1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_4]))) : (0U))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), ((unsigned char)255)))) ? (((((/* implicit */_Bool) var_3)) ? (arr_15 [i_3 - 2] [i_4] [i_6]) : (arr_15 [i_6] [i_6] [i_6]))) : (max((arr_15 [i_6] [i_7] [i_6]), (arr_15 [i_3] [i_3] [i_6])))));
                                var_28 &= ((/* implicit */unsigned int) arr_27 [i_5 - 1] [i_5] [i_6 + 2] [i_7 - 1] [i_7 + 1]);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) arr_19 [i_4] [i_4] [i_4] [i_5]);
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) min((var_30), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3]))) : (4294967295U))))))))));
        /* LoopNest 2 */
        for (long long int i_8 = 2; i_8 < 24; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 1; i_11 < 24; i_11 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((min((arr_34 [i_9] [i_10]), (((/* implicit */unsigned int) var_1)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((long long int) arr_13 [i_3 + 1] [i_8 - 1]))));
                                arr_41 [i_11] [i_10] [i_9] [i_8] [i_3 - 2] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_0)) + (2147483647))) << (((var_8) - (925676766U)))))));
                                arr_42 [i_3] [i_3] = (!(var_16));
                                arr_43 [i_9] = ((/* implicit */unsigned char) (!(((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) ((arr_23 [i_3 - 3] [i_8] [i_9] [i_11]) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                    arr_44 [i_3 - 2] [i_8] = ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
    }
}
