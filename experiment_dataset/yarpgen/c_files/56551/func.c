/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56551
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] [(unsigned short)0] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)33033)), (((((/* implicit */int) arr_6 [i_2] [(short)8] [i_3])) + (((/* implicit */int) (short)19433))))));
                        var_11 = ((short) max((((/* implicit */unsigned int) (unsigned short)0)), (1044928681U)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_3 [i_1 + 3] [i_1 + 1] [i_1 + 3]), (arr_3 [i_1 + 3] [i_1] [i_1 + 3])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 2]))))) : (min((((/* implicit */unsigned int) var_2)), (var_5)))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            var_13 = ((/* implicit */int) ((long long int) arr_1 [i_0]));
                            arr_17 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32765))));
                            arr_18 [i_0] [i_0] [i_2] [i_2] [(unsigned char)3] = ((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] [10]);
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_0 [i_1 - 1])) : (arr_15 [i_1 - 2] [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_5 - 1] [i_5 - 1])))) ? ((+(-2679375497479901820LL))) : (((/* implicit */long long int) max((arr_0 [i_1 - 1]), (arr_0 [i_1 + 2])))))))));
                        }
                        var_15 = ((/* implicit */short) var_10);
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) 3250038614U);
                    }
                    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        arr_24 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29745))) / (((3584617391U) >> (((1450351338U) - (1450351314U))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_9 [i_7] [i_7] [3]) && (((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_1] [i_1] [i_0])))) ? (arr_10 [i_1] [i_1] [(unsigned char)6] [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 - 1])) / (((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 1]))))) : (var_5)));
                            arr_28 [i_2] [5ULL] [5ULL] [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_7] [i_0] [i_2] [i_1] [i_0])) ? (arr_20 [(signed char)3] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2950)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) || (((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)65535))))))))));
                        }
                        var_17 *= ((/* implicit */signed char) var_7);
                    }
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1] [i_2] [i_8]);
                        arr_33 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((short) arr_3 [i_2] [i_1 + 1] [i_2]))), (min((((/* implicit */long long int) arr_3 [(signed char)0] [i_1 + 1] [i_8])), (-5138548009465276747LL)))));
                        var_19 = var_9;
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_2]))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_36 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((unsigned int) 4294967295U)) != ((+(3250038617U)))))) > (((/* implicit */int) min((arr_6 [i_2] [i_1 + 1] [i_1 - 1]), (arr_6 [i_2] [i_1 - 2] [i_1 + 1]))))));
                        arr_37 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [(short)5] [(short)5] [i_2] [i_9]) != (((/* implicit */unsigned int) 1246423891)))))) == (min((((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_2] [i_9])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) / (var_6)))))));
                        var_21 = ((/* implicit */_Bool) var_0);
                        arr_38 [i_2] = ((/* implicit */short) min(((-((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (short)32767))));
                    }
                    arr_39 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) min((max((var_6), (((/* implicit */unsigned int) arr_21 [i_1 + 3] [i_1] [i_2] [i_1 - 1] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [i_1] [i_1] [i_0] [i_0] [i_0])) ? (arr_32 [i_0] [i_0] [i_0] [i_0]) : (1044928677U)))) ? (((/* implicit */int) (unsigned char)255)) : (((var_3) - (-782037834))))))));
                    arr_40 [i_0] [i_2] [i_1 + 2] [(unsigned short)9] = arr_9 [i_2] [i_1 - 2] [i_0];
                }
            } 
        } 
        arr_41 [i_0] = ((/* implicit */int) var_7);
    }
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_11 = 4; i_11 < 9; i_11 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((((/* implicit */long long int) 1030724370)) % (-5138548009465276747LL))))))));
            arr_48 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2844615958U)) ? (arr_32 [i_11] [i_11] [(short)3] [(short)3]) : (arr_35 [i_11] [i_11] [i_10] [i_10])))) ? (((/* implicit */int) (signed char)-33)) : ((+(((/* implicit */int) arr_21 [i_10] [6LL] [i_11] [6LL] [(short)4]))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-32325), (((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_10] [(short)6] [i_11]))))))))) : (var_10)));
            var_23 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_11])) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-2)))) : (((((/* implicit */_Bool) (short)18763)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10] [i_10]))) : (arr_5 [i_10] [i_11] [i_11])))))));
        }
        for (long long int i_12 = 1; i_12 < 10; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                arr_54 [i_10] [i_12] [i_12] = ((/* implicit */signed char) (((~(1044928671U))) == (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-1), (((/* implicit */short) (unsigned char)130))))))));
                var_24 = ((/* implicit */short) (+(var_6)));
                arr_55 [i_10] [i_12] [(unsigned char)7] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -782037817))));
                arr_56 [i_10] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) min((1830669550U), (((/* implicit */unsigned int) (unsigned short)0))));
            }
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_59 [i_10] [i_12] [i_12] = ((/* implicit */_Bool) ((((unsigned long long int) (~(1152921504606846720LL)))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) var_0))), (max((((/* implicit */long long int) (_Bool)1)), (var_10))))))));
                arr_60 [i_12] [(_Bool)1] [i_14] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)21)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [(_Bool)1] [i_12] [i_14]))) : (((/* implicit */unsigned long long int) ((unsigned int) var_2)))))));
                arr_61 [i_10] [i_10] [i_12] = ((/* implicit */signed char) (_Bool)1);
                arr_62 [(short)8] &= ((/* implicit */short) min((((((/* implicit */_Bool) 3250038614U)) ? (((/* implicit */int) (unsigned short)28776)) : (((/* implicit */int) (_Bool)1)))), ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [2])) : (((/* implicit */int) arr_44 [i_10]))))))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                arr_66 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (-(min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [(_Bool)1]))) : (14U))), (((/* implicit */unsigned int) (short)-8266))))));
                arr_67 [i_12] [i_12] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_52 [i_10] [(unsigned char)4] [i_12] [i_12])), ((short)32767)))))))));
            }
        }
        arr_68 [i_10] [i_10] = max((((/* implicit */int) (unsigned short)65535)), (-1666785616));
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            arr_71 [i_16] [i_10] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_16] [i_16] [i_10] [i_10]))) * (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [i_16] [i_16] [i_10] [(unsigned char)3] [i_10])), ((unsigned short)65535)))))));
            var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65515)) >= (((/* implicit */int) min((((/* implicit */short) arr_21 [i_10] [i_10] [i_16] [10ULL] [10ULL])), (arr_45 [i_16] [i_10]))))))) != (((/* implicit */int) var_2))));
            var_26 = ((/* implicit */_Bool) var_7);
        }
        arr_72 [i_10] [10LL] = ((arr_47 [i_10]) >= (((((/* implicit */_Bool) arr_47 [i_10])) ? (arr_47 [i_10]) : (arr_47 [i_10]))));
    }
    var_27 = min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)0));
}
