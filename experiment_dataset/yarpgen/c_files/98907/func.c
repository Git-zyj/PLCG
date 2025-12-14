/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98907
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] |= (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_5)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_18 [i_3] [i_1] [i_1] [i_3 - 1] [i_4] = ((/* implicit */signed char) (unsigned short)16631);
                                arr_19 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                            }
                        } 
                    } 
                } 
                var_15 *= var_12;
                arr_20 [i_0] [i_1] = ((/* implicit */signed char) arr_7 [i_0] [i_0] [4LL]);
                var_16 = arr_17 [i_0] [i_0] [i_1] [i_0 - 1] [i_0] [(unsigned short)6] [i_0];
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_10);
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)48905)) <= (((/* implicit */int) (unsigned short)48905))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_0))));
                    arr_30 [4LL] [i_7] = ((/* implicit */_Bool) var_1);
                }
                /* LoopSeq 3 */
                for (signed char i_8 = 4; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) var_7);
                        var_21 -= (unsigned short)48888;
                    }
                    arr_38 [(signed char)7] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_26 [i_5])) < (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (unsigned short)48905))))))) ? (((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [(signed char)4])) : (((/* implicit */int) ((unsigned short) max((var_7), (var_11)))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 2; i_10 < 10; i_10 += 3) 
                    {
                        arr_41 [i_5] [i_10] = arr_33 [i_5] [i_6] [(unsigned short)0];
                        arr_42 [i_10] [3LL] [i_8] [i_10 + 2] [i_5] [3LL] = ((/* implicit */unsigned short) var_9);
                        arr_43 [i_5] [i_10] = ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)-47))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_5] [i_5] [(signed char)7])) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)16623))))))) : (arr_28 [i_5] [i_5] [i_5] [i_10]));
                    }
                    var_23 = var_1;
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((var_5) ? (min((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (((long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))))))))));
                }
                for (signed char i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    var_25 &= ((/* implicit */unsigned short) (+((-(((/* implicit */int) max((var_2), (var_2))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 11; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-114)))) <= (max((var_14), (((/* implicit */long long int) var_1))))))) : (((/* implicit */int) arr_40 [i_12] [i_6]))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */_Bool) (signed char)92)) ? (((8144413097553195561LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48901))))) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_5] [i_6])))))));
                        var_28 = ((/* implicit */long long int) var_6);
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 3; i_13 < 9; i_13 += 1) 
                        {
                            arr_51 [i_5] [i_6] [(signed char)4] [i_5] [i_12] [i_5] = var_1;
                            arr_52 [(unsigned short)4] [i_6] [i_12] [i_13] = ((/* implicit */_Bool) var_1);
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_13])) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (signed char)-69))));
                            var_30 = ((/* implicit */long long int) ((var_7) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (_Bool)0))))));
                            arr_53 [2LL] [i_12] = var_8;
                        }
                    }
                    for (signed char i_14 = 4; i_14 < 11; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16623)) || (((/* implicit */_Bool) (signed char)59)))))));
                        arr_56 [(unsigned short)5] [11LL] [i_11] [i_14] [i_6] = ((/* implicit */unsigned short) var_14);
                    }
                    var_32 = ((/* implicit */signed char) var_10);
                    /* LoopSeq 1 */
                    for (signed char i_15 = 3; i_15 < 11; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) (!((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((-9223372036854775807LL - 1LL)))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)67)))))));
                        var_34 = ((/* implicit */_Bool) 9223372036854775789LL);
                    }
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((arr_22 [i_11]) <= (arr_25 [i_5] [i_5]))) || ((!(((/* implicit */_Bool) (signed char)114)))))))));
                }
                for (signed char i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    var_36 ^= var_0;
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) ((signed char) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) (~((+(((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_10))))))));
                                var_39 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)62))));
                            }
                        } 
                    } 
                    arr_70 [(unsigned short)3] [i_6] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_6] [i_5] [(signed char)8] [i_5] [i_16])) && (((/* implicit */_Bool) var_8))));
                }
                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (-(((/* implicit */int) arr_35 [i_5] [i_5] [(unsigned short)11] [i_6])))))));
                var_41 = ((/* implicit */signed char) ((unsigned short) arr_54 [i_5] [i_5] [i_5] [i_5] [i_5]));
            }
        } 
    } 
}
