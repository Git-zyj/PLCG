/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91480
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_1 [i_2] [9LL]))))))) <= ((+(((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2 - 1] [i_2]))))));
                    arr_6 [i_0] [i_0] = ((int) ((short) arr_4 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 1]));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 6; i_3 += 4) /* same iter space */
                    {
                        arr_9 [(unsigned char)3] [i_0] [(unsigned char)2] = ((/* implicit */long long int) ((unsigned char) arr_8 [i_0] [i_0] [i_2 + 1] [i_3]));
                        var_21 *= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_11))))), (((arr_8 [i_0] [i_3] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) arr_8 [i_0] [i_3] [i_2] [i_2 + 2])) : (((/* implicit */int) var_17))))));
                        arr_10 [i_0] [i_0] [i_0] [i_3 + 4] [i_0] [(short)5] = min((((_Bool) var_9)), ((!(((var_11) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_0]))))))));
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_3 + 2] [i_3 - 2] [i_3 + 4])) % (((/* implicit */int) min((((/* implicit */unsigned char) var_16)), (var_6)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 2; i_4 < 6; i_4 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 2] [i_4]))) % (((((/* implicit */_Bool) (signed char)39)) ? (arr_13 [i_1] [i_0]) : (((/* implicit */long long int) arr_3 [i_4 - 1] [i_0]))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
                    }
                    var_24 = ((/* implicit */signed char) var_0);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_25 &= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (+(arr_18 [i_0])))) && (((/* implicit */_Bool) var_14)))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [6] [6LL] [6] [i_6])) || (((/* implicit */_Bool) var_0))))) != (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_24 [i_0] [i_5] [i_0] [i_0] [(unsigned char)9] [1U] = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [(short)2] [i_0] [i_6] [i_7]))))), (((((/* implicit */long long int) arr_18 [i_6])) + (((-1108050613175819573LL) - (-9195483913971798165LL)))))));
                                var_27 = ((/* implicit */short) ((unsigned long long int) -9223372036854775807LL));
                                var_28 |= ((/* implicit */long long int) var_8);
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_5]))) % (var_13))) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8] [i_8] [i_6] [i_6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_9 = 1; i_9 < 18; i_9 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            var_30 *= ((/* implicit */unsigned char) arr_32 [i_9] [i_11] [i_12]);
                            arr_38 [i_9 + 3] [i_10] [i_9 + 3] [i_9 + 3] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) (short)28904);
                        }
                        for (unsigned long long int i_14 = 3; i_14 < 21; i_14 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_9] [i_10 - 1] [i_11] [i_11] [i_12 + 1] [i_10 - 1] [i_14 - 3])) || (((/* implicit */_Bool) arr_40 [i_14 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_11] [i_10] [i_9]))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)254)) / (((/* implicit */int) (_Bool)1)))))));
                            var_33 = ((/* implicit */unsigned char) arr_30 [i_9 + 2] [i_9]);
                            var_34 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_31 [i_10 - 1] [i_10 - 1] [i_9])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2)))) - (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_42 [i_9 + 4] [i_10 - 1] [(_Bool)1] [i_14 - 3] [i_9 + 4]))))));
                        }
                        arr_43 [i_9] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [(unsigned short)16] [i_9] [i_9] [10] [i_9])) || (((/* implicit */_Bool) arr_35 [i_9 + 2] [(short)16] [(short)16] [10LL] [i_12 + 1]))));
                        var_35 *= ((/* implicit */short) arr_36 [14LL] [i_9 + 1] [i_9] [i_9] [14LL]);
                    }
                } 
            } 
        } 
        arr_44 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_36 [12] [i_9] [2U] [12] [12]) : (((/* implicit */long long int) arr_33 [i_9 + 1]))));
        var_36 = ((/* implicit */signed char) var_17);
        var_37 = ((/* implicit */long long int) arr_26 [i_9 + 2] [i_9 + 1]);
    }
    /* vectorizable */
    for (signed char i_15 = 1; i_15 < 18; i_15 += 3) /* same iter space */
    {
        var_38 = ((/* implicit */short) arr_41 [i_15] [(short)14]);
        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-45)) || (((/* implicit */_Bool) (signed char)-30))));
        var_40 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_15 + 3] [i_15 + 3]))) / (((unsigned long long int) var_1))));
    }
    for (signed char i_16 = 1; i_16 < 18; i_16 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_0)) ^ ((~(9223372036854775807LL)))));
        var_42 *= ((/* implicit */_Bool) arr_39 [i_16 + 2]);
    }
    /* LoopNest 2 */
    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 3) 
    {
        for (unsigned char i_18 = 2; i_18 < 23; i_18 += 1) 
        {
            {
                var_43 = ((/* implicit */_Bool) arr_52 [i_17] [i_18] [21LL]);
                var_44 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned char) var_4)), (var_14)))))) / (arr_52 [i_17] [i_18] [i_18 - 2])));
            }
        } 
    } 
    var_45 = ((/* implicit */_Bool) var_9);
    var_46 = ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_4))));
}
