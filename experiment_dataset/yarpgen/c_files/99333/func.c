/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99333
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) ((((arr_1 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35666))))) ? (((((/* implicit */_Bool) (short)-3732)) ? (var_1) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)3731)) < (((/* implicit */int) (short)-3732))))))));
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))));
                        var_13 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3721)) | (((/* implicit */int) var_6))))) ? (((/* implicit */int) (short)3731)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)3732)) : (2147483647)))));
    }
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 1866005922)) : (min((((/* implicit */long long int) (-(((/* implicit */int) var_4))))), (var_8)))));
    /* LoopSeq 3 */
    for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) 
    {
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_14 [i_4 + 1]), (((/* implicit */long long int) arr_16 [i_4 + 1])))))));
        var_17 -= ((/* implicit */signed char) (short)3732);
    }
    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) : (max((777993822U), (((/* implicit */unsigned int) 99079869)))))));
        arr_20 [(unsigned short)8] = ((/* implicit */short) arr_12 [(unsigned short)10] [i_5] [i_5] [i_5]);
        arr_21 [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)0)) * (-1866005915)))));
    }
    for (int i_6 = 1; i_6 < 13; i_6 += 1) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(_Bool)1])) ? (((/* implicit */int) (short)3731)) : (((/* implicit */int) (_Bool)1))))) ? (arr_16 [i_6 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6 + 3])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_14 [i_6]))) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_9))))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-919222967)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57670)) ? (arr_15 [i_6]) : (arr_15 [i_6])))) : (var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27274)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967286U)))) ? (((/* implicit */int) arr_22 [i_6 - 1])) : ((+(arr_15 [i_6]))))) : (arr_15 [i_6])));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (+(((((1602248610U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))))) ? (min((arr_15 [i_8]), (var_3))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_29 [i_7]))))))));
                    var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [6ULL] [i_8] [i_8 - 1] [i_8 + 1])))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 4) 
        {
            arr_34 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_31 [i_6 + 3])))) ? (((int) ((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned int) -1)) : (arr_16 [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1358552932U)))))));
            arr_35 [i_6] [i_9] [i_9] = ((/* implicit */long long int) min((((/* implicit */int) max((arr_28 [i_9] [(unsigned short)1] [(unsigned short)1] [i_9 + 1]), (arr_28 [i_9] [i_9] [i_9] [i_9 + 1])))), (((((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9 + 2] [i_9 + 2])) ? (((/* implicit */int) arr_28 [i_9] [i_9] [i_6 + 2] [i_9 + 2])) : (((/* implicit */int) (unsigned short)42286))))));
        }
        for (unsigned short i_10 = 2; i_10 < 13; i_10 += 3) 
        {
            var_21 = arr_26 [i_10] [8];
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_14 [i_6 + 3]), (arr_14 [i_6 - 1])))) ? (((/* implicit */int) arr_29 [2])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)63)) || (((/* implicit */_Bool) (signed char)-125))))))))));
            var_23 = ((/* implicit */unsigned long long int) (-(arr_32 [i_10] [i_10 - 2] [i_10 + 1])));
        }
        for (int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                var_24 = ((/* implicit */int) ((arr_26 [i_11] [i_12]) + (((/* implicit */unsigned long long int) 4116136880U))));
                var_25 *= ((/* implicit */unsigned long long int) arr_15 [i_11]);
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((unsigned int) arr_29 [i_12])))));
            }
            var_27 *= ((/* implicit */unsigned long long int) 313406025U);
        }
    }
    var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23555)) ? (((/* implicit */int) (_Bool)1)) : (849645282)))) ? (var_1) : (((/* implicit */unsigned long long int) 10565631461269817LL))))));
    /* LoopNest 2 */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        for (signed char i_14 = 1; i_14 < 21; i_14 += 2) 
        {
            {
                var_29 = ((/* implicit */long long int) var_10);
                /* LoopSeq 1 */
                for (short i_15 = 4; i_15 < 20; i_15 += 3) 
                {
                    arr_50 [i_14] [i_14] [i_14] [i_15 + 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1135754209)) ? (var_3) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_2)) <= (arr_46 [i_14])))) : (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */int) var_7))));
                    var_30 = ((/* implicit */int) (signed char)127);
                    /* LoopSeq 4 */
                    for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) (+(arr_44 [2ULL])));
                        var_32 = ((/* implicit */unsigned short) (((-(2177014610854751142LL))) <= (((/* implicit */long long int) arr_53 [i_14] [i_14 + 2] [i_13 - 1] [i_14]))));
                        arr_55 [i_14] [i_15] [i_15] [11ULL] [i_14] [i_14] = ((/* implicit */signed char) var_3);
                        var_33 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_47 [i_16])) ? (arr_47 [(signed char)19]) : (((/* implicit */int) var_4))))))) > (arr_46 [i_14])));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_17] [i_13])) ? (((((/* implicit */_Bool) min((arr_56 [14] [i_14] [i_15] [i_15] [i_17]), (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_43 [i_14])) ? (arr_52 [i_13] [i_13 - 1] [i_14] [i_15] [2] [(unsigned short)8]) : (((/* implicit */unsigned long long int) arr_45 [(signed char)4] [(signed char)4])))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)37570)), (1419546300U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_13 - 1])) ? (arr_43 [i_13 - 1]) : (((/* implicit */int) var_7)))))));
                        var_35 = var_3;
                        /* LoopSeq 2 */
                        for (unsigned short i_18 = 0; i_18 < 23; i_18 += 3) 
                        {
                            arr_63 [i_14] [i_13] [i_14] [(signed char)15] [i_13] [i_18] [(unsigned short)3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) | ((+(766543926U)))))) >= (arr_48 [i_13] [i_13])));
                            var_36 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (arr_48 [i_14 - 1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_13] [i_13] [i_17] [i_17])))))) ? (((var_2) | (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_60 [i_18] [i_18] [i_17] [(unsigned short)3] [i_13 - 1] [i_13 - 1]))))), (max((((/* implicit */unsigned long long int) min((-2953559602798227572LL), (((/* implicit */long long int) arr_46 [i_14]))))), (12648626711205138572ULL)))));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) arr_47 [19U]))));
                        }
                        for (unsigned long long int i_19 = 1; i_19 < 22; i_19 += 1) 
                        {
                            var_38 = var_10;
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 560779468398622046LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_13] [13ULL] [i_17] [i_19]))) : (arr_44 [i_13])))) ? (arr_45 [i_14] [i_15 - 4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1610612736)) ? (var_2) : (((/* implicit */int) var_4)))))))) ? (var_8) : (((/* implicit */long long int) arr_45 [i_14] [i_13 - 1]))));
                            var_40 += ((/* implicit */long long int) ((((arr_49 [i_14 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))))) | (((((/* implicit */_Bool) 1231674635)) ? (arr_49 [i_14 + 2]) : (((/* implicit */unsigned int) arr_51 [i_19 + 1] [i_13 - 1]))))));
                            arr_66 [(_Bool)1] [3] [3] [i_14] [7] [i_17] [i_19] = ((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */int) arr_60 [i_19] [i_19] [i_19] [i_19] [i_19 + 1] [8U]))));
                            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_47 [i_13 - 1]))))))));
                        }
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((unsigned int) ((arr_47 [i_13 - 1]) < (arr_47 [i_13 - 1])))))));
                        var_43 ^= ((/* implicit */signed char) ((arr_64 [i_13] [(signed char)2] [i_13 - 1] [i_13] [i_15 + 3] [i_20]) >= (((/* implicit */unsigned int) arr_62 [(signed char)12] [i_20] [i_13 - 1]))));
                        arr_69 [(unsigned short)0] [i_14] |= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_62 [i_15 - 2] [i_14 - 1] [i_13 - 1])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((arr_43 [i_20]) != (arr_59 [i_13] [i_20] [(_Bool)1] [i_13] [i_13])))), (var_10)))) : (max((((unsigned int) 2875420988U)), (((/* implicit */unsigned int) var_6))))));
                        var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_13] [21U] [i_15] [i_20] [i_20])) ? (((long long int) arr_42 [8ULL])) : (0LL))))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 2) 
                    {
                        var_45 = ((/* implicit */_Bool) (unsigned short)65535);
                        var_46 = ((/* implicit */unsigned int) -560779468398622046LL);
                        var_47 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (max((4011317088U), (arr_46 [i_21])))));
                        var_48 &= ((/* implicit */int) var_7);
                    }
                    var_49 = ((/* implicit */signed char) arr_48 [i_13 - 1] [i_13 - 1]);
                    arr_73 [i_15] [i_14] [i_14] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) >= (arr_52 [i_13] [i_13 - 1] [i_14] [i_14 - 1] [i_14] [i_15]))))) ^ (5798117362504413059ULL)))) ? (((/* implicit */int) arr_54 [i_13] [i_14] [i_14] [i_15])) : (((/* implicit */int) (signed char)(-127 - 1)))));
                }
                var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_14] [i_14] [i_14] [i_14] [i_14] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (5798117362504413059ULL)))) ? (((((/* implicit */_Bool) 2548956277U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1419546308U))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_48 [i_13] [i_13])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (1978753438)))) : (arr_45 [i_14] [i_14])))));
                arr_74 [i_14] [i_13 - 1] [i_14] = ((/* implicit */signed char) 1091574020);
            }
        } 
    } 
}
