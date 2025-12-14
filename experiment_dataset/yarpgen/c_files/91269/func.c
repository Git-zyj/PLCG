/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91269
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6737592321542793688LL)) ? ((~(6737592321542793688LL))) : (max(((~(-6737592321542793688LL))), (max((((/* implicit */long long int) arr_1 [i_0] [(unsigned short)4])), (arr_2 [i_0] [i_0] [i_0])))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_16 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)67)))) : (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((signed char) (-(18446744073709551615ULL)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_3] = ((/* implicit */unsigned char) max((((unsigned short) max((arr_7 [i_3] [i_0] [i_0]), (((/* implicit */long long int) var_5))))), (var_1)));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_4 - 1] [i_1] [i_3 - 2] [i_3 + 1] [i_3] [i_3]))))) ? ((+(((long long int) (signed char)52)))) : (((/* implicit */long long int) ((unsigned int) arr_10 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_3 + 2])))));
                            arr_14 [3LL] [i_1] [i_1] [1ULL] [i_1] [3LL] [1ULL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_3 [0ULL] [0ULL])), (var_2)));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_9 [i_2] [i_0] [i_2] [i_2] [i_4] [i_4 + 1]))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_18 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)16214))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22467)) ? (arr_10 [i_3 - 2] [i_5] [i_2] [i_3 - 2] [i_2]) : (arr_10 [i_3 - 2] [i_1] [i_2] [i_5] [i_3])))) ? (arr_12 [i_3 - 2] [i_1] [i_3 - 2] [i_5] [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((unsigned long long int) arr_15 [i_3 - 2] [i_3 - 2] [i_2] [i_3 - 2])))))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_22 = var_6;
                        arr_21 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((144115188059078656LL) & (arr_2 [i_0] [i_1] [i_2])))) ? (max((18446744073709551611ULL), (((((/* implicit */_Bool) (unsigned char)28)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11775))))))) : (((7070041188863504897ULL) << (((((/* implicit */int) (short)-16765)) + (16818)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 3; i_7 < 12; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */short) 3230057121719375819ULL);
                            var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_7 - 2] [i_7 - 3] [i_7 - 2])) ? (arr_8 [i_7 + 1] [i_1] [i_1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) arr_17 [i_0] [i_1]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17966))) : (10394880105943786641ULL)))) ? (((/* implicit */unsigned int) -904684187)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)18013))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30123))) : (arr_12 [i_8] [i_0] [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11776)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0)))))))));
                            var_26 -= ((/* implicit */unsigned char) ((unsigned short) min((((unsigned int) var_11)), (((/* implicit */unsigned int) var_11)))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] |= ((((/* implicit */_Bool) ((7738492690719798750ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27741)))))) ? (((var_2) / (((/* implicit */unsigned long long int) arr_2 [i_2] [i_1] [9U])))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_6] [i_6])) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) 6737592321542793676LL)))));
                            arr_29 [i_9] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)22500)) ? (((/* implicit */int) (short)-18684)) : (((/* implicit */int) (short)12718))));
                            arr_30 [i_0] [i_1] [i_0] [i_6] [i_6] [i_6] [i_9] = ((/* implicit */short) (+(((((/* implicit */_Bool) 10394880105943786648ULL)) ? (8051863967765764985ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        arr_35 [i_0] [i_1] [i_2] [i_10] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((unsigned char)0), (arr_22 [i_10] [i_0] [i_0])))) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_10] [i_10])) : ((+(((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */long long int) ((/* implicit */int) (short)-11769))) > (326198197659112540LL))) ? ((~(((/* implicit */int) (short)17970)))) : (((/* implicit */int) arr_15 [i_10] [i_2] [i_1] [i_0]))))));
                        arr_36 [i_0] [i_0] [(_Bool)1] [i_0] = var_4;
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21745)) ? (3373088027U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))));
                    }
                }
                for (long long int i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 3; i_12 < 12; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            {
                                var_28 = (((((~(((((/* implicit */int) arr_33 [i_13] [i_12])) << (((((/* implicit */int) var_11)) - (51668))))))) + (2147483647))) >> (((/* implicit */int) arr_37 [i_12] [i_12] [i_11 - 1] [i_12])));
                                arr_44 [i_0] [4ULL] [4ULL] [4ULL] [0LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) 7519351003331693871LL))), (((((/* implicit */_Bool) (short)4587)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1973664447))))) >= (((/* implicit */int) (unsigned char)53)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)1159)) : (((/* implicit */int) (short)4032))))), (arr_32 [i_11 + 1] [i_11] [i_11 + 1] [i_12] [i_12] [i_12 - 2])))));
                                var_29 = ((/* implicit */signed char) arr_13 [i_12 - 2] [i_1] [i_11 + 1] [i_12 + 1]);
                                var_30 = ((/* implicit */unsigned int) arr_27 [i_0]);
                                arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_2 [i_11 - 1] [i_12 - 2] [i_12 - 3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 12; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 11; i_15 += 4) 
                        {
                            {
                                arr_50 [i_15] [i_15] [i_14] [i_0] [i_14] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_15 [6LL] [10U] [i_11 - 1] [i_14 + 1])) ? (arr_24 [i_14] [i_14 + 1] [i_14] [i_14] [i_14 - 1] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_15 + 1] [i_14] [i_11 - 1] [i_14])))))));
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_26 [i_11] [i_14] [i_11] [i_1] [i_1] [i_14] [i_0])) ? (((/* implicit */int) arr_41 [i_11] [i_11] [i_1])) : (((/* implicit */int) (short)4572)))) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_24 [(short)12] [i_14 + 1] [i_11] [i_15 + 2] [(short)12] [i_11 + 1] [i_14])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)3072))))));
                            }
                        } 
                    } 
                }
                for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    var_32 = ((/* implicit */unsigned short) ((_Bool) arr_16 [i_16] [i_0] [i_0] [i_0] [i_0]));
                    var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))));
                    arr_53 [i_0] [i_1] [(unsigned short)10] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 4237902194003071304LL)) ? (((/* implicit */unsigned long long int) arr_43 [i_16] [i_1] [i_0] [i_0] [i_0])) : (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15506))) : (arr_43 [i_0] [i_0] [i_0] [i_1] [i_16]))))));
                }
                for (int i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    arr_56 [i_0] = ((/* implicit */unsigned short) 18446744073709551614ULL);
                    arr_57 [i_17] [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_9));
                }
                var_34 &= ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) (~(4433230883192832ULL))))), (((((/* implicit */int) (unsigned short)44610)) - (((/* implicit */int) (unsigned short)44611))))));
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((((+(((/* implicit */int) var_4)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))))) : ((-(((((/* implicit */int) var_3)) / (((/* implicit */int) var_12))))))));
}
