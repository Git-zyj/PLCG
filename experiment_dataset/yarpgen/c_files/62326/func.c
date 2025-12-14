/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62326
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned long long int) var_9));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (-(var_6)));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                arr_11 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) var_0)) : (var_4))) : (((/* implicit */unsigned long long int) ((long long int) (signed char)111)))))) ? (max((((/* implicit */int) arr_5 [i_1])), (0))) : (max((((((/* implicit */int) arr_4 [i_3])) | (-1))), (max((((/* implicit */int) (unsigned short)18780)), (arr_0 [i_1])))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))) * (max((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_10 [i_1] [i_1] [i_1] [i_1])))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_15 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_3);
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_8 [i_5])))))) : (((((/* implicit */_Bool) (+(var_0)))) ? (var_4) : (7418230715515785861ULL)))));
                        var_14 = ((/* implicit */unsigned char) var_3);
                        arr_18 [i_1] [i_2] [i_3] [i_1] = (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) (unsigned short)24406)) ? (var_7) : (var_7))))));
                        arr_19 [i_1] [i_2] [i_3] [i_1] [i_2] = ((/* implicit */signed char) var_9);
                        arr_20 [i_5] [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((var_11) >> (((max((((/* implicit */int) arr_5 [i_3])), ((~(var_1))))) - (788817805)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */int) var_0);
                        arr_24 [i_1] [i_2] [i_3] [i_2] [i_6] [i_1] = ((/* implicit */unsigned short) ((signed char) var_5));
                        arr_25 [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_3))) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -7766607512767567119LL)) > (var_4)))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                        arr_30 [i_1] [i_2] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */int) ((((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        var_16 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                        arr_31 [i_1] [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_17 [i_1] [i_1] [i_3] [i_4] [i_3]) : (var_5)));
                    }
                }
                arr_32 [i_1] [i_2] = ((/* implicit */unsigned short) var_5);
            }
            for (short i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                var_17 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (max((var_6), (((/* implicit */unsigned long long int) 17))))));
                var_18 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -215761740116114823LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_2] [i_2] [i_8]))) : (var_2)))));
                var_19 -= ((/* implicit */short) (~(((long long int) (-2147483647 - 1)))));
                arr_35 [i_1] = ((/* implicit */unsigned char) (~(var_5)));
            }
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_8)) : (arr_34 [i_1] [i_1] [i_1] [i_1])))))) ? ((~(var_4))) : ((+(arr_10 [i_1] [i_1] [i_1] [i_1])))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((4720912007406814640ULL) != (((/* implicit */unsigned long long int) var_8)))))) : ((~(((((/* implicit */long long int) var_11)) ^ (var_10)))))));
            var_22 = ((/* implicit */long long int) 2132104130);
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) > (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -4597291559020445113LL)) : (11028513358193765755ULL)))))));
        }
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1])) ? (var_0) : (-6040473721127294993LL)))) ? (((/* implicit */int) ((unsigned char) 0))) : (((/* implicit */int) (_Bool)0))));
        var_25 = ((/* implicit */short) var_9);
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            arr_51 [i_9] [i_9] [i_11] [i_12] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                            arr_52 [i_9] [i_9] [i_9] [i_11] [i_9] [i_9] [i_9] = ((/* implicit */long long int) max((((short) (signed char)-98)), (((/* implicit */short) ((((/* implicit */int) (signed char)-1)) >= (var_11))))));
                            arr_53 [i_13] [i_9] [i_11] [i_12] [i_13] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6548)) ? ((~(((int) 9223372036854775807LL)))) : (((/* implicit */int) (signed char)-1))));
                        }
                    } 
                } 
                arr_54 [i_11] [i_9] [i_11] = max(((+(var_7))), (var_6));
            }
            /* vectorizable */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_57 [i_9] [i_9] [i_9] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_6)));
                /* LoopSeq 3 */
                for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        var_26 = ((((/* implicit */int) (signed char)111)) % ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((var_6) - (9072205246385642483ULL))))));
                        arr_63 [i_15] [i_9] = ((/* implicit */int) (~(((unsigned long long int) var_8))));
                        arr_64 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1)) ? (3047739683848442073ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_0) : (-5442678118825138383LL))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */int) (unsigned short)28666)) & (var_8))) : (var_8))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        arr_68 [i_9] [i_9] [i_9] [i_9] [i_15] [i_17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_47 [i_9] [i_9] [i_9]))));
                        arr_69 [i_9] [i_9] [i_14] [i_9] [i_14] = ((((/* implicit */_Bool) -2132104130)) ? (((/* implicit */unsigned long long int) (+(var_10)))) : (((((/* implicit */_Bool) arr_41 [i_9] [i_9])) ? (var_6) : (((/* implicit */unsigned long long int) var_0)))));
                        arr_70 [i_10] [i_9] [i_15] [i_17] = ((/* implicit */signed char) ((int) ((((var_0) + (9223372036854775807LL))) >> (((var_6) - (9072205246385642431ULL))))));
                    }
                    arr_71 [i_9] [i_9] = ((/* implicit */_Bool) var_6);
                }
                for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 1) /* same iter space */
                {
                    arr_74 [i_9] = ((/* implicit */short) ((long long int) arr_37 [i_9]));
                    arr_75 [i_9] [i_9] [i_14] [i_14] = (((!(((/* implicit */_Bool) (unsigned char)185)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5)))))) : ((~(arr_36 [i_9]))));
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        arr_78 [i_19] [i_9] [i_9] [i_10] [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) (+(((unsigned long long int) 1467562325771697168LL))));
                        var_28 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) var_0))))));
                    }
                }
                for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) <= (var_4)));
                    arr_81 [i_9] [i_10] [i_9] [i_9] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)60714)) && (((/* implicit */_Bool) arr_40 [i_9]))));
                }
            }
            var_30 = ((/* implicit */unsigned short) (+(7587426416465999858LL)));
        }
        /* vectorizable */
        for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 1) 
        {
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_41 [20LL] [i_21])) ? (((/* implicit */unsigned long long int) -483899635553595389LL)) : (7088528959413570369ULL))))))));
            arr_84 [i_9] = ((/* implicit */long long int) (-((~(((/* implicit */int) (signed char)31))))));
        }
        arr_85 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_9] [i_9])) ? (((/* implicit */int) var_9)) : (arr_58 [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (arr_73 [i_9] [i_9] [i_9] [i_9] [i_9])))) : (var_4));
        arr_86 [i_9] = ((/* implicit */signed char) ((1355714277172159848ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) var_1)) : (10128058161429101559ULL)))) ? (((((/* implicit */_Bool) (short)28191)) ? (((/* implicit */int) (short)4697)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9)))))));
        arr_87 [i_9] = ((((/* implicit */_Bool) (-(var_0)))) ? (min((((/* implicit */long long int) -2132104131)), (var_10))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (var_0) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2595))) : (var_2))))));
    }
    for (signed char i_22 = 0; i_22 < 23; i_22 += 1) 
    {
        var_32 = (!(((/* implicit */_Bool) 1359328682)));
        /* LoopNest 3 */
        for (signed char i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            for (signed char i_24 = 0; i_24 < 23; i_24 += 1) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 1) 
                {
                    {
                        arr_100 [i_23] [i_23] [i_23] [i_25] = var_4;
                        var_33 = ((/* implicit */_Bool) arr_97 [i_22] [i_22] [i_22] [i_22] [i_22]);
                    }
                } 
            } 
        } 
        arr_101 [i_22] [i_22] = min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_94 [i_22] [i_22] [i_22])) : (var_8))), ((~(((/* implicit */int) (unsigned short)0)))));
    }
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) ((signed char) var_11)))));
}
