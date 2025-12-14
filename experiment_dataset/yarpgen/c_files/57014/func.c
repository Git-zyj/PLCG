/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57014
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_4 [i_0 + 4] [i_0 + 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0 - 1] [i_0]))) ? (((((/* implicit */_Bool) ((short) (unsigned short)46885))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_0)) >= (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63322))))))))));
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 726156881U)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (unsigned short)2213))))) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-16765))) + (3568810414U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) % (var_4)))) ? (((((/* implicit */int) arr_1 [i_0] [i_1])) ^ (var_10))) : (((/* implicit */int) arr_2 [i_0 + 2])))))));
        }
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            var_12 = ((/* implicit */int) ((((long long int) 2626828962U)) >= (((/* implicit */long long int) ((((((/* implicit */unsigned int) var_7)) ^ (var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [2] [i_2]) > (((/* implicit */int) (unsigned short)4948)))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                var_13 |= ((/* implicit */short) (unsigned short)2212);
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((unsigned char) arr_10 [i_3 + 1] [i_0 + 1] [i_2 + 1])))));
                    var_15 = (i_2 % 2 == zero) ? (((((((/* implicit */int) arr_11 [i_3] [i_4])) % (((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))) - ((-(var_0))))) : (((((((/* implicit */int) arr_11 [i_3] [i_4])) * (((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))) - ((-(var_0)))));
                }
                for (int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_10) : (var_7)))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_3 + 1] [i_5 + 1])))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2]))));
                }
            }
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)34)) % (((/* implicit */int) (signed char)-125))));
                arr_17 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */int) arr_11 [i_0 + 4] [i_6]))))) ? (max((((/* implicit */int) var_3)), ((~(var_10))))) : (((var_2) - (((/* implicit */int) arr_8 [i_2]))))));
            }
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) var_4);
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 + 4]))))) ? (((((/* implicit */_Bool) var_3)) ? (var_2) : (var_2))) : (((int) var_8)))))));
                    }
                    for (int i_10 = 1; i_10 < 11; i_10 += 4) 
                    {
                        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((var_1) + (2147483647))) << (((var_9) - (1409853060340479572ULL))))) < (((((/* implicit */_Bool) arr_10 [i_8] [i_7] [i_2])) ? (((/* implicit */int) arr_8 [i_8])) : (((/* implicit */int) arr_6 [i_7] [0U])))))))) * ((((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (var_1))))))));
                        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (short)25174)) : (((/* implicit */int) (short)-29291))))) ? ((~(var_1))) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) arr_25 [i_0 - 1] [i_8] [i_0 + 4] [i_2 + 1] [i_10 + 1]))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2345346677U)))))) | (((((/* implicit */_Bool) min((-86479299), (arr_3 [i_2] [i_10])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_18 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_2] [i_2] [i_8] [(unsigned char)7]))))) : (arr_18 [i_0] [i_7] [(unsigned short)0])))));
                    }
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) (+(((((var_10) % (var_2))) & (((/* implicit */int) ((((/* implicit */int) var_5)) > (86479299))))))));
                        arr_33 [i_0] [i_0] [i_2 - 1] [i_7] [i_2] [i_11] = (+(((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_26 [i_0] [i_0 + 3] [i_0 + 3] [i_2 - 1] [i_7])))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) var_6))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)24681)) : (((/* implicit */int) var_6))))), (min((15492541835624094468ULL), (((/* implicit */unsigned long long int) (unsigned short)51071))))))));
                    }
                    var_26 = ((/* implicit */long long int) var_6);
                }
                for (unsigned int i_12 = 3; i_12 < 10; i_12 += 2) 
                {
                    var_27 = ((/* implicit */unsigned int) ((int) ((arr_14 [i_0] [i_2] [i_7] [i_12 - 3] [i_2] [i_12 - 3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2 + 1]))))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4948))))) >> (((((15547918897958640812ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))))) - (15547918897958640725ULL)))))) ? (max((((((/* implicit */_Bool) 307928581U)) ? (var_8) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_4)) < (arr_18 [i_0] [i_0] [i_0])))))) : (((arr_12 [i_2] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39257))) : ((+(var_8)))))));
                }
                var_29 = ((((var_2) / (((/* implicit */int) arr_22 [i_0] [i_0 + 2] [i_2 + 2] [i_2])))) % (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_5)), (arr_18 [i_0] [i_2] [i_7]))))));
                arr_36 [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_23 [i_0] [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_2])) ? (3886714548062374392LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_7])))))));
                var_30 += ((unsigned char) min((arr_10 [i_0] [i_0] [i_0]), (arr_10 [i_2] [i_2] [i_0 + 4])));
            }
        }
        for (int i_13 = 2; i_13 < 10; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_31 = ((/* implicit */int) var_9);
                var_32 = ((((((/* implicit */int) arr_22 [i_13 - 1] [i_13 - 1] [i_0 + 3] [i_14])) <= (((/* implicit */int) arr_22 [i_13 + 2] [i_13 + 2] [i_0 + 4] [i_14])))) ? ((-(var_7))) : (var_10));
            }
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                var_33 = arr_30 [i_0] [i_0] [i_0 + 1] [(unsigned short)8] [i_0 + 3];
                var_34 = ((/* implicit */int) (!(arr_12 [i_15] [i_13] [i_15])));
                arr_44 [i_15] &= ((((/* implicit */_Bool) 1895659082)) ? (-86479300) : ((-(((/* implicit */int) (signed char)-10)))));
            }
            /* LoopSeq 1 */
            for (signed char i_16 = 1; i_16 < 9; i_16 += 1) 
            {
                var_35 |= ((/* implicit */short) ((unsigned char) ((((var_10) < (var_10))) ? (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_13 - 2] [i_13 + 1] [(unsigned short)3] [(unsigned short)3] [i_13 + 1]))))) : (((long long int) var_9)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_17 = 4; i_17 < 10; i_17 += 4) /* same iter space */
                {
                    var_36 = ((_Bool) ((var_9) * (((/* implicit */unsigned long long int) arr_32 [i_16]))));
                    var_37 = ((/* implicit */short) ((((/* implicit */int) ((signed char) -86479300))) ^ (((((var_10) + (2147483647))) << ((((~(-2088247473))) - (2088247472)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_18 = 4; i_18 < 10; i_18 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */long long int) var_0);
                    var_39 = ((/* implicit */int) var_6);
                }
                for (unsigned long long int i_19 = 4; i_19 < 10; i_19 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_20 = 4; i_20 < 8; i_20 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((_Bool) ((-5226300678032905776LL) - (929079111497414997LL)))))));
                        var_41 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_16 - 1] [i_16 - 1])) ? (((/* implicit */unsigned int) var_10)) : (2728006856U)))) >= (arr_27 [i_0 - 2] [i_0] [i_0 + 4] [i_0])));
                    }
                    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        var_42 = ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (var_4)))) <= (min((-929079111497414998LL), (((/* implicit */long long int) var_1))))))));
                        var_43 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_0] [i_13] [i_16 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (var_2)))) <= (min((var_9), (((/* implicit */unsigned long long int) arr_53 [5U] [i_19 + 2] [i_16] [i_16] [i_13] [i_0 + 1]))))))), ((-(var_9)))));
                    }
                    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_1 [i_16 + 1] [i_19 - 4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_0] [i_16] [i_16 + 1] [i_19])) ? (var_1) : (((/* implicit */int) (short)3466))))))))) : (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_3)))))))));
                    var_45 &= ((/* implicit */unsigned char) var_5);
                    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((-1233042517) ^ (1895659082))) + (2147483647))) << (((((/* implicit */int) ((var_2) > (((/* implicit */int) arr_40 [i_0] [i_13] [i_16 + 1] [i_19 + 2]))))) - (1)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_13 + 2]))) : (651917374U))) : (((/* implicit */unsigned int) ((var_1) | (((/* implicit */int) ((_Bool) (unsigned char)204))))))));
                    var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)51)), ((short)-29400))))));
                }
                var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)60896)) + (974071637)))) * (min((((/* implicit */long long int) (_Bool)0)), (5441875716164742753LL)))))) ? (((/* implicit */int) arr_43 [i_0 + 2] [i_13] [i_16])) : (((/* implicit */int) (_Bool)1))));
                var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (arr_10 [i_16] [i_16 + 2] [i_0 + 1]))) * (((((/* implicit */_Bool) arr_56 [i_0 + 1] [8ULL] [i_0] [i_0 + 1])) ? (((unsigned int) (_Bool)0)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))))))))));
                var_50 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((929079111497414988LL), (((/* implicit */long long int) (_Bool)1))))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8))))) : (((/* implicit */unsigned long long int) var_1))));
            }
            var_51 &= ((/* implicit */unsigned long long int) var_7);
        }
        var_52 = ((/* implicit */long long int) ((int) var_9));
        var_53 = ((/* implicit */_Bool) min((((((/* implicit */int) ((short) var_9))) << ((((+(var_4))) - (932017563U))))), ((-(((/* implicit */int) var_5))))));
        var_54 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
    }
    for (int i_22 = 2; i_22 < 8; i_22 += 3) /* same iter space */
    {
        arr_68 [i_22 - 2] [i_22 + 2] = ((/* implicit */short) ((((/* implicit */int) var_5)) ^ (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_40 [i_22] [i_22] [i_22] [i_22])) ? (var_2) : (((/* implicit */int) arr_40 [i_22] [i_22] [i_22] [(unsigned short)10])))) : (((arr_20 [8] [i_22 - 1] [i_22]) ^ (var_0)))))));
        var_55 -= ((/* implicit */signed char) ((unsigned short) ((unsigned char) var_7)));
    }
    var_56 = ((/* implicit */long long int) min((var_7), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))) | (((/* implicit */int) ((var_0) < (var_7))))))));
}
