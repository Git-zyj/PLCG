/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66474
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_17 = ((/* implicit */signed char) ((max((arr_7 [(signed char)3] [i_1] [i_1]), (arr_7 [i_0] [i_1] [i_2]))) ? (((/* implicit */int) min((arr_7 [i_0] [i_1] [i_2]), (arr_7 [i_0] [i_1] [i_2])))) : (((arr_7 [i_2] [i_1] [i_0]) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) var_9))))));
                    arr_10 [14ULL] [i_1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)32417)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_0])))), (((/* implicit */int) arr_7 [i_0] [i_1] [8U]))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_1] [13U] [(signed char)6] = ((/* implicit */unsigned int) (((-(arr_3 [i_3] [i_1] [i_0]))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)49152)))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)114))))) ? ((-(((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (arr_13 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [15LL] [i_1] [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */int) (unsigned short)35630)) : (((/* implicit */int) (unsigned short)12255)))))));
                    var_19 &= ((/* implicit */short) var_8);
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)155))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12)))))) : ((+(arr_0 [i_1] [i_0])))));
                    arr_18 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)16383));
                    arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_5 [i_0]))));
                }
                arr_20 [i_0] [i_0] = ((/* implicit */short) ((3438708748349023614ULL) >> (((((((/* implicit */_Bool) 536870400U)) ? (1941777194U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) - (1941777152U)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-947810882), (-2099045817))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        var_22 = ((/* implicit */long long int) (short)-32747);
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            arr_26 [5ULL] [i_6] [5ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(3548951143635870750ULL)))) ? ((+(2147483648U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_23 = ((/* implicit */_Bool) arr_22 [i_5] [i_5]);
                var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)28663))))) || (((/* implicit */_Bool) ((short) (unsigned char)27)))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        {
                            arr_36 [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_27 [i_9] [i_9] [i_9]))));
                            var_25 -= ((/* implicit */short) ((unsigned char) (_Bool)1));
                            var_26 = ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) 9U))));
                arr_37 [i_5] [i_6] [i_8] [i_6] = ((/* implicit */signed char) var_4);
                arr_38 [i_5] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52913)) ? (((/* implicit */unsigned long long int) 947810881)) : (864691128455135232ULL)))) ? (((/* implicit */int) ((short) arr_32 [i_5 + 3] [i_6]))) : (((/* implicit */int) (unsigned short)49162))));
            }
            var_28 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)49162)) : (((/* implicit */int) (_Bool)1))))) | ((+(arr_24 [i_5] [i_6])))));
        }
        for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            arr_43 [i_5] [i_5] [i_5] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (1460261146U)))));
            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_12))))));
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (long long int i_13 = 1; i_13 < 22; i_13 += 4) 
                {
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) -1570946527458505651LL)) ? ((~(((/* implicit */int) (short)-32757)))) : (((/* implicit */int) (_Bool)0)))))));
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_5] [i_12] [i_5] [(_Bool)1])) || (((/* implicit */_Bool) arr_31 [i_5 + 3] [i_12] [i_5] [(signed char)16])))))));
                    var_32 += ((arr_44 [i_13 + 2]) - (arr_44 [i_13 - 1]));
                }
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    arr_52 [i_14] [i_12] [i_11] [i_5] = ((/* implicit */signed char) arr_33 [i_14] [i_14] [i_12] [i_14] [i_5 + 1]);
                    arr_53 [i_5] [i_12] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32744)) ^ (((/* implicit */int) (unsigned char)6))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((unsigned int) arr_24 [i_5] [i_5 - 1])))));
                    var_34 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                    var_36 = ((/* implicit */signed char) arr_47 [i_5] [i_5] [11LL] [i_15]);
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)16383)))))));
                    var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_27 [i_5 + 1] [i_5 + 1] [i_15]))));
                    var_39 = ((/* implicit */unsigned long long int) (signed char)-113);
                }
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    var_40 = ((/* implicit */signed char) (~(arr_44 [i_5 - 1])));
                    var_41 -= ((/* implicit */unsigned short) 255189404U);
                }
                arr_60 [i_5 + 4] [i_12] [i_11] = ((/* implicit */short) (+(((/* implicit */int) arr_25 [i_5 + 4] [i_5 + 2]))));
                var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_5] [i_5] [i_5 + 3])) % (((/* implicit */int) var_9))))) ? (((1570946527458505658LL) + (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_5 + 3] [i_11] [(_Bool)1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (arr_48 [i_5] [i_5 - 1] [i_5] [i_5]) : (((/* implicit */int) (short)32744)))))));
            }
            for (signed char i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (int i_18 = 2; i_18 < 20; i_18 += 3) 
                {
                    arr_65 [10U] [i_17] [(signed char)20] [(signed char)20] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_40 [(unsigned char)23] [i_11] [i_18 - 1])) * (arr_39 [i_5] [i_18])))) ? (((/* implicit */int) arr_58 [i_5 + 4] [i_5])) : (((/* implicit */int) ((signed char) var_13)))));
                    var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (~(((/* implicit */int) (short)11635)))))));
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) arr_40 [i_17] [20ULL] [i_17]))));
                }
                for (unsigned int i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    var_45 *= ((/* implicit */short) ((arr_40 [i_5] [i_5 + 2] [(_Bool)1]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 3; i_20 < 23; i_20 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-117))))))))));
                        arr_71 [i_5] [8U] [i_17] [i_19] [i_20] [i_17] = ((/* implicit */unsigned long long int) ((arr_45 [i_5 + 3] [i_20 - 3]) >= (arr_45 [i_5 + 3] [i_20 - 2])));
                        arr_72 [(short)16] [i_11] [i_11] [i_17] [i_19] [i_20] = ((/* implicit */long long int) (short)-11635);
                        var_47 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_19] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-32749)) >= (((/* implicit */int) arr_21 [i_5])))))) : (arr_67 [i_5])));
                    }
                    for (unsigned short i_21 = 3; i_21 < 21; i_21 += 1) 
                    {
                        arr_75 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_21] [i_17])) ? (((/* implicit */int) (unsigned short)16379)) : (((/* implicit */int) arr_29 [(short)9] [i_17] [i_11]))))) % (arr_45 [i_17] [i_21])));
                        var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [(signed char)19] [i_21] [i_17] [i_21 - 2] [i_21] [i_17]))) + ((-(arr_22 [i_21 + 2] [i_11]))))))));
                        arr_76 [i_21] [i_19] [i_17] [i_11] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_19] [i_17])) ? (((/* implicit */int) (unsigned short)29952)) : (((/* implicit */int) arr_34 [i_5 + 4]))));
                        var_49 = ((/* implicit */unsigned long long int) max((var_49), (arr_24 [i_5] [i_11])));
                        var_50 = ((/* implicit */short) (~(((/* implicit */int) arr_21 [i_5 + 4]))));
                    }
                    var_51 = ((/* implicit */unsigned char) 1023ULL);
                    var_52 += ((/* implicit */signed char) (-((+(((/* implicit */int) (short)-27264))))));
                }
                for (unsigned short i_22 = 0; i_22 < 24; i_22 += 4) 
                {
                    arr_80 [i_5 + 4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_3);
                    var_53 = ((/* implicit */_Bool) (~(arr_77 [(signed char)8] [i_11] [i_11] [i_11])));
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_54 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)32758)) : (947810882)));
                    var_55 = ((/* implicit */int) ((1152921435887370240ULL) * (2007828887029009436ULL)));
                }
                arr_84 [i_5 + 4] [i_5] [i_17] [i_11] = ((/* implicit */_Bool) (-(var_11)));
                var_56 += ((/* implicit */short) (~(arr_78 [3ULL] [i_11] [i_11] [i_5 + 4])));
            }
            arr_85 [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) 4402820505163199938LL)))))));
            var_57 = ((/* implicit */signed char) ((long long int) arr_83 [i_5 + 3] [i_5] [i_11] [i_11]));
        }
        for (unsigned int i_24 = 0; i_24 < 24; i_24 += 4) 
        {
            arr_88 [i_24] [i_5] [i_5] &= (+(0U));
            arr_89 [i_5] [i_5] [i_5] |= ((((/* implicit */_Bool) 947810873)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_5] [(signed char)19] [i_24])) ? (arr_40 [i_5] [i_5] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_5] [i_5] [i_24] [i_24]))) : (var_8))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_25 = 0; i_25 < 25; i_25 += 4) 
    {
        var_58 = ((/* implicit */signed char) arr_90 [(short)10] [(short)10]);
        arr_94 [i_25] [i_25] = ((/* implicit */unsigned long long int) max(((_Bool)0), ((((+(var_10))) > (((/* implicit */long long int) ((/* implicit */int) ((8477240978933000320LL) != (((/* implicit */long long int) -2027494324))))))))));
        var_59 = ((/* implicit */_Bool) arr_90 [i_25] [i_25]);
    }
}
