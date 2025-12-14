/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80722
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
    var_14 = ((/* implicit */unsigned int) var_0);
    var_15 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0]))))) || (((/* implicit */_Bool) max((766444898U), (((/* implicit */unsigned int) arr_4 [i_4])))))));
                                var_17 = ((/* implicit */long long int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_4])))));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)8))));
                                var_19 = ((/* implicit */signed char) 2300055671U);
                            }
                            arr_18 [(short)13] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 1119024942);
                            var_20 = ((/* implicit */short) (~(-9223372036854775803LL)));
                            var_21 *= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_3] [i_3])) >> (((max((((/* implicit */unsigned int) arr_5 [i_1] [i_2] [i_3])), (4294967289U))) - (4294967266U)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_6] [i_7] [i_0] = ((/* implicit */_Bool) (signed char)-52);
                                var_22 &= ((/* implicit */unsigned int) var_13);
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_0] [i_1] [i_7] [i_0])), (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    arr_30 [i_0] = var_2;
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) (+(min((862829795U), (arr_21 [16U])))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)59))))) : (max((var_4), (arr_33 [i_0] [i_9] [i_6] [i_6] [(_Bool)1])))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_38 [i_10] [(signed char)8] [(signed char)8] [i_0] |= ((/* implicit */unsigned char) ((((arr_34 [13U] [(_Bool)1] [i_6] [i_0] [i_0] [i_0]) || ((_Bool)1))) ? (((((var_8) || (var_12))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)114)))) : (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) : (arr_1 [(_Bool)1]))))) : ((+(arr_27 [i_10] [i_1] [i_1] [i_0])))));
                            var_25 = var_0;
                        }
                    }
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-32765)), ((unsigned short)615))))));
                        arr_42 [i_0] [(signed char)5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_8 [i_1] [i_0]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203))))))))));
                    }
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_13 [(_Bool)1] [i_0] [(_Bool)1] [i_0] [(_Bool)1]) ? (((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_0] [i_6])) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_0] [16ULL] [(short)1] [i_6])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (-7365343386523925114LL))) : (((/* implicit */long long int) min(((-(((/* implicit */int) var_11)))), ((-(((/* implicit */int) var_9)))))))));
                }
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
                        {
                            {
                                arr_52 [i_13] [i_1] [4U] [(unsigned short)6] [(unsigned short)6] [i_1] &= ((/* implicit */long long int) (_Bool)1);
                                arr_53 [(short)3] [(short)3] [i_0] [i_13] [i_13] = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)8))))), (arr_50 [i_0] [i_13])));
                            }
                        } 
                    } 
                    arr_54 [i_0] [i_1] = ((/* implicit */_Bool) ((arr_43 [i_0] [i_0] [i_12]) ? (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_2))))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
                }
                arr_55 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_2 [i_1]), ((_Bool)1)))))))));
                arr_56 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((max((-6626082381431939728LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_0] [i_1])) || (arr_43 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
