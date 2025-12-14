/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8353
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((int) var_1))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned int) var_2)) : (((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        var_19 += ((/* implicit */unsigned short) min((max((max((((/* implicit */long long int) 3481959211U)), (arr_1 [i_0 + 1] [i_0 + 1]))), ((+(9223372036854775807LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15488)) || (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 4])))))));
        var_20 = ((/* implicit */unsigned int) 9223372036854775807LL);
        arr_2 [i_0 - 2] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 2]))))) ? ((-(((/* implicit */int) arr_0 [i_0 - 2])))) : ((-(((/* implicit */int) arr_0 [i_0 - 2]))))));
    }
    for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((5400618698076441180ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
            var_22 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)107))));
            var_23 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1 + 2] [6ULL]))));
            var_24 = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 4 */
            for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                var_25 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
                {
                    var_26 ^= ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_3] [i_3 + 1] [i_3]));
                    arr_15 [9ULL] [i_2] [(unsigned char)7] [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_8 [i_4 + 1] [i_4 + 1] [i_1]));
                    var_27 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (504403158265495552LL)));
                    var_28 = (~(arr_11 [i_1] [i_3 - 1] [i_1]));
                }
                for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_3 + 1] [i_1 + 1]))));
                    var_30 ^= ((/* implicit */unsigned long long int) (~(var_8)));
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (unsigned short)0))));
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned short)0)))))));
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (arr_16 [i_3 - 1] [i_3 - 1] [i_5]) : (((/* implicit */unsigned long long int) arr_9 [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 1])))))));
                }
                for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */_Bool) ((unsigned char) ((unsigned int) 9223372036854775807LL)));
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_2] [i_2]))))));
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_10 [i_1 - 3]))))));
                }
                var_37 = ((/* implicit */int) ((signed char) (unsigned char)0));
                var_38 = ((/* implicit */unsigned long long int) max((var_38), ((~(arr_11 [i_3] [i_3 - 2] [i_3])))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    arr_27 [i_1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) (+(1915540338)));
                    var_39 = ((unsigned int) ((((/* implicit */_Bool) 8191U)) ? (((/* implicit */unsigned long long int) 8679062628566155412LL)) : (var_1)));
                }
                for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    var_40 *= ((/* implicit */int) ((_Bool) ((arr_16 [i_2] [i_2] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22573))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 2; i_10 < 7; i_10 += 3) 
                    {
                        arr_33 [i_1] [i_9] [i_7] [i_7] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_4)))) ? ((-(15788324592111648599ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_1]))));
                        var_41 = ((/* implicit */_Bool) ((unsigned char) 142989288169013248LL));
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (~(9223372036854775807LL))))));
                        var_43 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_10 + 3])) ? (arr_26 [i_9] [i_7] [i_1]) : (((/* implicit */int) arr_30 [i_10] [i_9] [i_9] [i_7] [i_2] [i_1]))))));
                        var_44 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2]))))));
                    }
                    var_45 &= ((/* implicit */unsigned long long int) ((1078428141U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [8ULL])))));
                }
                arr_34 [i_1] [i_2] [2U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (unsigned short)0)))));
                var_46 -= ((/* implicit */unsigned int) (~(4180662828336777434ULL)));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_47 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 2013265920))))));
                /* LoopSeq 1 */
                for (unsigned int i_12 = 2; i_12 < 9; i_12 += 3) 
                {
                    var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) (unsigned char)140))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        arr_44 [i_1] [i_11] [i_2] [i_1] = ((/* implicit */signed char) ((((int) arr_18 [i_11] [i_13])) + (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_19 [i_1]))))));
                        var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                        var_50 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1212644824)) ? (1920U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28077))))))));
                    }
                    arr_45 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)4));
                }
                /* LoopSeq 1 */
                for (int i_14 = 2; i_14 < 9; i_14 += 2) 
                {
                    var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                    var_52 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_53 = ((/* implicit */unsigned short) ((786432) & (((/* implicit */int) arr_23 [i_14 + 2] [i_14 + 2] [i_1 - 1] [i_1 - 3]))));
                    var_54 -= ((/* implicit */unsigned int) 1060684429);
                }
                /* LoopSeq 2 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    var_55 = ((/* implicit */unsigned char) (~(arr_18 [i_1 - 2] [i_15 - 1])));
                    var_56 = ((/* implicit */signed char) (-(((/* implicit */int) arr_42 [i_1] [i_15 - 1] [i_11] [i_15] [i_1 + 1] [i_11] [i_2]))));
                }
                for (unsigned char i_16 = 2; i_16 < 10; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 1; i_17 < 10; i_17 += 3) 
                    {
                        arr_58 [i_17] [i_1] [i_11] [i_1] [i_1 - 3] = ((/* implicit */unsigned char) (~(var_8)));
                        arr_59 [i_1] [i_1] [i_1] [i_1 - 1] = arr_40 [i_11];
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 1; i_18 < 7; i_18 += 3) /* same iter space */
                    {
                        var_57 = ((/* implicit */unsigned short) var_5);
                        var_58 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))));
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 7; i_19 += 3) /* same iter space */
                    {
                        arr_64 [i_2] [i_2] [i_2] [i_1] [(unsigned short)3] = ((/* implicit */_Bool) 0U);
                        var_59 ^= ((/* implicit */int) arr_37 [(unsigned short)10]);
                        var_60 = ((/* implicit */unsigned int) arr_36 [i_1] [i_1] [i_1]);
                        arr_65 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -672712181)))))));
                    }
                    for (int i_20 = 2; i_20 < 9; i_20 += 1) 
                    {
                        var_61 = ((/* implicit */long long int) min((var_61), (((long long int) arr_40 [i_16 + 1]))));
                        var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)228)))))));
                    }
                }
            }
            for (int i_21 = 0; i_21 < 11; i_21 += 2) 
            {
                arr_71 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)123);
                arr_72 [i_1] [i_1] [i_21] &= ((/* implicit */unsigned int) arr_20 [i_21] [i_2]);
            }
        }
        var_63 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 4095329263U)) >= (arr_6 [i_1]))))));
    }
    var_64 = ((/* implicit */unsigned short) (unsigned char)48);
}
