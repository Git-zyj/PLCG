/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91290
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
    var_13 -= ((/* implicit */unsigned long long int) (short)-32201);
    var_14 = ((((((/* implicit */int) ((_Bool) -6643898276820044244LL))) * (((/* implicit */int) ((((/* implicit */int) (short)-26302)) > (((/* implicit */int) var_8))))))) % (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))));
    var_15 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_8)) >> (((/* implicit */int) ((short) (_Bool)1))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((6643898276820044243LL) < (-6643898276820044244LL));
                    var_16 = ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_3 + 2] [i_0]))));
                    var_17 = ((/* implicit */signed char) 11720067341743635739ULL);
                }
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    var_18 *= ((/* implicit */short) (unsigned char)255);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */int) var_3)) << (((((/* implicit */int) ((signed char) (unsigned char)235))) + (45)))));
                        var_20 -= ((/* implicit */unsigned char) (short)-24802);
                        arr_17 [i_0] [i_1] = ((/* implicit */long long int) ((569834005) >= (((/* implicit */int) ((900795996U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    }
                    arr_18 [15U] [15U] [i_1] [i_4] = (-(arr_7 [i_4] [i_1] [i_0]));
                    var_21 = ((/* implicit */unsigned int) ((int) (_Bool)1));
                }
                for (short i_6 = 3; i_6 < 18; i_6 += 3) 
                {
                    var_22 += ((((/* implicit */_Bool) (short)32767)) || (((((/* implicit */unsigned long long int) 2147483647)) <= (9ULL))));
                    var_23 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)255));
                }
                for (int i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 ^= (~((~(var_11))));
                        var_25 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [18LL] [i_1] [i_1] [i_1]))) > (9ULL))) && (((/* implicit */_Bool) ((int) (signed char)54)))));
                    }
                    arr_28 [(unsigned char)14] [(signed char)13] [i_1] = ((/* implicit */long long int) (unsigned char)0);
                }
                var_26 = ((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1] [i_2]) >= (6643898276820044243LL)));
                var_27 = ((_Bool) arr_25 [(unsigned short)0] [i_1] [i_2] [i_1] [i_1]);
            }
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_28 = ((/* implicit */short) ((arr_30 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))));
                var_29 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24798))) & ((+(arr_1 [(unsigned short)5])))));
                var_30 += ((/* implicit */unsigned long long int) ((short) arr_14 [i_0] [i_0] [i_0] [i_1] [i_1]));
            }
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) << (((4294967295U) - (4294967288U))))))));
                var_32 = ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24813))) : (-6643898276820044244LL));
            }
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((6643898276820044243LL) | (((/* implicit */long long int) arr_21 [i_11])))))));
                arr_37 [i_1] [i_1] [i_11] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((var_11) >> (((-729099930) + (729099939))))) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    for (short i_13 = 3; i_13 < 16; i_13 += 2) 
                    {
                        {
                            var_34 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-73)) + (2147483647))) << (((((arr_13 [i_0] [i_1] [i_12] [(short)16]) + (548286405))) - (24))))))));
                            var_35 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) var_8))));
                            var_36 = ((/* implicit */_Bool) ((((2147483647) % (((/* implicit */int) var_4)))) | (((/* implicit */int) (short)32767))));
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((((/* implicit */_Bool) 6726676731965915877ULL)) ? (((/* implicit */unsigned long long int) 9223372036854775789LL)) : (18446744073709551615ULL)))));
                            var_38 *= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)61)) <= (((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 3) 
            {
                var_39 -= ((/* implicit */long long int) ((arr_2 [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_50 [i_0] [i_0] [i_1] [i_0] [i_0] [i_14] [i_14] = ((/* implicit */long long int) ((arr_15 [i_14 - 2] [i_14] [i_14 - 3] [i_14 - 1] [17U] [i_14 - 2] [i_14 - 3]) >= (((/* implicit */long long int) var_11))));
                        arr_51 [i_1] [i_1] [i_14] [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) -1))) > (((((/* implicit */int) (short)24802)) >> (((/* implicit */int) arr_0 [i_14] [i_14]))))));
                        var_40 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_44 [i_0] [i_1] [8U])) - (53)))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_36 [i_1]))));
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [(signed char)12] [i_1]))) < (((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned int i_18 = 2; i_18 < 19; i_18 += 2) 
                    {
                        var_43 = ((536870911LL) > (((/* implicit */long long int) -427852652)));
                        arr_57 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_33 [(signed char)4] [i_1] [i_14 + 1]) : (((/* implicit */int) var_2))));
                    }
                    var_44 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24802)) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) var_1))));
                    arr_58 [i_0] [19U] [i_1] [19U] = ((/* implicit */unsigned char) (-(427852636)));
                }
            }
            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) 10890812523373618288ULL)) ? (((/* implicit */int) (unsigned short)12870)) : (((/* implicit */int) arr_36 [i_1]))));
        }
        var_46 &= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (short)24801)) | (((((/* implicit */_Bool) (unsigned short)22122)) ? (((/* implicit */int) (short)-24803)) : (((/* implicit */int) (unsigned char)129))))))), (arr_34 [i_0] [i_0] [i_0] [i_0])));
    }
    for (short i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
    {
        arr_61 [i_19] = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-96)), (-427852633)));
        var_47 += ((/* implicit */unsigned char) arr_7 [i_19] [i_19] [i_19]);
        arr_62 [i_19] &= ((/* implicit */int) ((signed char) arr_56 [i_19] [i_19] [i_19] [i_19] [i_19]));
    }
}
