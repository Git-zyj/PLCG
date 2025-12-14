/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55374
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
    var_12 *= ((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)12))))) ? (min((((/* implicit */unsigned int) (unsigned char)12)), (var_0))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2641186019U)) ? (2641186019U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_13 -= ((/* implicit */int) (((!(var_7))) || ((!(((/* implicit */_Bool) var_1))))));
            arr_7 [i_0] = ((/* implicit */long long int) ((signed char) var_2));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((+(8790733421369947456ULL)))));
                arr_12 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) / ((-(((/* implicit */int) arr_5 [i_0] [(signed char)8])))));
                var_14 = ((/* implicit */_Bool) var_1);
            }
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                var_15 = ((/* implicit */_Bool) 1653781277U);
                var_16 = ((/* implicit */int) 9656010652339604160ULL);
                var_17 ^= ((/* implicit */unsigned long long int) (!(arr_6 [i_1 - 1] [i_1 - 1] [i_0 - 2])));
            }
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(249987886U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41897))))) : (((/* implicit */int) var_7)))))));
        }
        for (signed char i_4 = 4; i_4 < 10; i_4 += 3) 
        {
            arr_19 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((var_2) ? (arr_17 [i_0 - 2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
            /* LoopSeq 4 */
            for (unsigned short i_5 = 2; i_5 < 9; i_5 += 2) 
            {
                arr_23 [i_5] [i_4] = ((/* implicit */long long int) (+(1653781276U)));
                arr_24 [i_0 + 1] [i_4] [i_5] = ((/* implicit */unsigned char) var_1);
            }
            for (short i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                arr_28 [i_4] [i_4] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) ^ (-2091800179)))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)0)));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 2; i_7 < 8; i_7 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 - 2] [i_4 - 2] [4LL])))));
                    arr_32 [i_0] [i_4 - 4] [i_4 + 1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((arr_9 [i_0 - 3] [i_4 - 2] [i_0 - 3]) ? (((/* implicit */unsigned long long int) var_5)) : (arr_15 [i_4])));
                    arr_33 [i_0] [i_4] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */int) (((~(-1257978398))) < (((/* implicit */int) (!(var_10))))));
                }
                for (short i_8 = 3; i_8 < 10; i_8 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_26 [i_8] [i_6] [8] [i_0])) ? (((/* implicit */int) arr_29 [i_4] [i_6])) : (((/* implicit */int) var_4))))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_42 [i_0] [i_4] [i_4] [i_8] = ((/* implicit */unsigned char) ((arr_15 [i_4]) + (((/* implicit */unsigned long long int) ((var_11) >> (((4503599358935040LL) - (4503599358935038LL))))))));
                        arr_43 [i_0] [i_4] [i_6] [i_8] [i_9] = ((/* implicit */unsigned short) (+(var_0)));
                    }
                    for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1653781301U)) ? (8ULL) : (arr_36 [i_4] [i_4] [i_4] [i_4])));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16777215)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))));
                        arr_46 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8] [(_Bool)1] [0U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_35 [(unsigned char)1] [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) ((arr_40 [i_0 - 3] [i_0 - 3] [i_10]) ? (arr_45 [i_0] [i_0] [i_0] [i_4] [8LL]) : (((/* implicit */long long int) 2641185995U))))) : (8790733421369947456ULL)));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        arr_51 [i_0] [i_4] [i_8 - 3] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        arr_52 [i_0] [i_0] [i_0] [10LL] [i_6] &= ((/* implicit */unsigned int) arr_26 [i_4] [i_4 - 4] [i_4] [i_8 - 1]);
                    }
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_2)) <= (-1257978393))))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [10ULL])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) ^ (10500088310706879636ULL)))));
                        arr_55 [i_0] [i_4] [i_6] [i_8] [(_Bool)1] [i_4] = ((/* implicit */_Bool) (-(0LL)));
                        arr_56 [i_4] [i_8 - 3] = ((/* implicit */long long int) (((+(2641185994U))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238)))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_61 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 8790733421369947455ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_8] [i_13]))) : (var_11))) * (arr_30 [i_0] [i_0] [i_4 - 2] [i_8 + 1])));
                        arr_62 [i_6] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_0 - 1] [i_8 - 1])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 9; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        {
                            arr_68 [6LL] [i_4] [i_4] [i_14] [i_15] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 10500088310706879636ULL)))))) + ((+(var_11)))));
                            var_25 -= ((/* implicit */unsigned int) ((unsigned long long int) arr_25 [i_0 + 1] [i_4 - 4] [i_4 - 1]));
                            var_26 = ((/* implicit */long long int) (+(4U)));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_16 = 4; i_16 < 7; i_16 += 1) 
            {
                arr_71 [i_0] [i_4] [i_4] [i_0] = arr_40 [i_0] [i_4] [i_16];
                /* LoopNest 2 */
                for (unsigned char i_17 = 1; i_17 < 9; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) (+(11U)));
                            arr_77 [i_4] = (+(((/* implicit */int) arr_22 [i_4] [i_4 + 1] [i_4 + 1] [i_4])));
                        }
                    } 
                } 
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_28 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_53 [i_19]))))));
                var_29 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0 - 1] [i_0 - 1]))) : (4503599358935040LL)))));
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (-(11252103011256777421ULL))))));
            }
            arr_80 [i_0 - 1] [i_4] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_0] [i_4])))) >> ((((+(((/* implicit */int) (signed char)58)))) - (34)))));
        }
        var_31 = ((/* implicit */int) arr_18 [i_0 - 2] [(signed char)3] [i_0]);
    }
    /* LoopNest 3 */
    for (long long int i_20 = 1; i_20 < 19; i_20 += 2) 
    {
        for (unsigned int i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            for (int i_22 = 1; i_22 < 18; i_22 += 2) 
            {
                {
                    var_32 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((_Bool) arr_85 [i_20 + 1])))));
                    arr_89 [i_20] [i_21] [i_21] [i_20] = ((/* implicit */unsigned char) ((long long int) arr_88 [i_20 - 1] [i_21] [i_21]));
                }
            } 
        } 
    } 
}
