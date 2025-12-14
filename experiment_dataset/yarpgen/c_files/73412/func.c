/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73412
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                arr_7 [i_0] [i_1] [i_1] = (+((-(((/* implicit */int) arr_3 [i_0])))));
                arr_8 [i_0 - 2] [i_0] &= ((/* implicit */int) ((short) 1261431744));
                var_13 = ((/* implicit */unsigned long long int) ((int) arr_5 [i_2] [i_2 - 3] [i_0] [i_0]));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (short i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_4 + 2] [i_2 - 1] [i_2 - 3] [i_0 - 2] [i_0 + 1] [i_0 - 1]))));
                            var_15 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) arr_3 [i_0 + 1])))));
                            arr_13 [i_0 + 1] [i_1] [13] [i_3] [i_4 - 1] = ((/* implicit */long long int) ((short) arr_4 [i_4 - 1] [i_3] [i_2 - 2] [i_1]));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28672)) && (((/* implicit */_Bool) (unsigned short)28648))))) - (((/* implicit */int) (!(((/* implicit */_Bool) -4696245154654120256LL))))))))));
            }
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) var_7))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(2491466784881462986ULL)))) && (((/* implicit */_Bool) (+(16197411988964238634ULL))))));
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) 1094028220);
                        arr_20 [i_1] [i_6] [(short)2] [i_1] = ((/* implicit */unsigned long long int) (-(var_12)));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17399671800742849554ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12513))) : (732330830U)));
                        arr_21 [i_0 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(-3215422084101062861LL)));
                    }
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((int) (-(var_2))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6] [7LL] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */long long int) var_6)) : (-4696245154654120256LL)));
                    }
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1] [i_5] [i_6] [i_6] [i_5])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        arr_29 [i_6] [i_0] [i_6] |= ((/* implicit */int) ((signed char) ((((/* implicit */int) (short)10840)) << (((var_11) - (8268224424233365637LL))))));
                    }
                    arr_30 [i_1] [(signed char)11] = ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_6 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) arr_26 [i_6] [i_1] [i_6 - 1] [i_5] [i_0 + 1])));
                }
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) -1787463672)) : (arr_0 [i_0 - 1])));
                arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (short)3906);
            }
            for (int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned short) (!(arr_19 [i_1] [i_1] [i_1] [i_1] [i_0])));
                arr_34 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) arr_23 [i_1] [i_1] [i_10] [i_1])) : (1787463658))));
                arr_35 [i_10] [i_1] [i_1] [i_0] = ((/* implicit */int) (-(((unsigned long long int) arr_19 [i_0] [i_0] [10] [i_1] [i_0 - 1]))));
            }
            for (int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
            {
                arr_39 [i_0] [i_0] [i_0] |= ((long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0])) && (arr_19 [i_1] [i_1] [i_11] [i_0] [i_11])));
                var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) ((arr_32 [i_0 - 2] [i_0] [i_0] [i_0]) + (2735372231102142156LL))))))));
                arr_40 [i_1] [7LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_16 [i_0 + 1] [i_0 - 2] [i_0] [19] [i_0 - 2] [i_0]));
                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (9322601842191199206ULL) : (13709362035692442443ULL)));
            }
            var_27 = ((long long int) ((4737382038017109173ULL) | (2249332084745312988ULL)));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 2] [(unsigned char)21] [7U])) ? (arr_33 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150)))));
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (4730549978941782419ULL) : (((/* implicit */unsigned long long int) var_4)))))));
                var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 16481347592068181583ULL)) ? (6970001931665692128ULL) : (((/* implicit */unsigned long long int) 1831753350)))) << (((/* implicit */int) var_10))));
            }
            for (int i_13 = 3; i_13 < 21; i_13 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_37 [8ULL] [i_1] [i_0] [i_0])) : (var_2)));
                arr_47 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) 4294967295U)) - (arr_42 [i_0 + 1])));
            }
        }
        for (int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            var_32 = ((/* implicit */unsigned short) ((long long int) arr_1 [i_0 - 2] [i_0 - 1]));
            /* LoopSeq 2 */
            for (unsigned short i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                arr_55 [i_14] [i_14] = ((/* implicit */unsigned short) ((short) ((unsigned char) (_Bool)0)));
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    arr_60 [i_14] [i_16] [i_15] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4294967270U)))) ? (((/* implicit */unsigned long long int) arr_57 [i_15] [i_14] [i_15] [i_14])) : (((((/* implicit */_Bool) (short)10245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10249))) : (1047072272966702062ULL)))));
                    var_33 = ((/* implicit */int) ((long long int) (~(-2023276920))));
                    var_34 = ((/* implicit */unsigned int) ((unsigned long long int) arr_54 [i_0] [i_0 - 1]));
                }
                for (short i_17 = 1; i_17 < 18; i_17 += 2) 
                {
                    arr_63 [i_0] [i_15] [i_14] [i_14] [i_14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1840928165)) ? (arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_14] [i_0 + 1] [i_14])))));
                    var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_11 [i_17 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1]))));
                    var_36 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_14])) ? (((/* implicit */unsigned int) 1831753350)) : (arr_22 [i_0] [i_0] [i_15] [i_17] [i_0] [i_15] [i_15])))) ? (arr_17 [i_17 + 2] [i_14] [(short)16] [i_17 + 2]) : (((((/* implicit */_Bool) arr_33 [i_0] [i_0])) ? (-4857150476467127794LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8540)))))));
                }
            }
            for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                arr_67 [i_18] [(unsigned char)4] [i_14] [i_18] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_18] [i_0 - 1] [i_18] [i_18] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_18] [i_18] [i_18]))) : (((((/* implicit */_Bool) 13709362035692442473ULL)) ? (1965396481641370054ULL) : (((/* implicit */unsigned long long int) var_12))))));
                var_37 = ((/* implicit */long long int) (-(((/* implicit */int) arr_51 [i_14] [i_18] [i_18]))));
                arr_68 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) ((int) arr_61 [i_0 + 1] [i_0 + 1]));
            }
            arr_69 [i_14] [i_14] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_1)) - (1479693479)))));
        }
        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
        {
            arr_72 [5ULL] [5ULL] [5ULL] = ((/* implicit */_Bool) 93330855);
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_0] [i_0 - 2])) ? (((/* implicit */unsigned long long int) var_6)) : (8480534599917129951ULL)));
            arr_73 [i_0] [i_0] = ((/* implicit */long long int) arr_57 [i_19] [i_19] [i_19] [i_0]);
        }
        for (int i_20 = 0; i_20 < 22; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_21 = 4; i_21 < 21; i_21 += 1) 
            {
                for (signed char i_22 = 2; i_22 < 18; i_22 += 1) 
                {
                    {
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2])) ? (arr_12 [i_0 + 1] [i_0 - 2]) : (((/* implicit */unsigned long long int) var_6))));
                        /* LoopSeq 3 */
                        for (signed char i_23 = 0; i_23 < 22; i_23 += 2) 
                        {
                            var_40 = ((/* implicit */int) min((var_40), (((int) arr_51 [i_23] [i_21 + 1] [i_23]))));
                            var_41 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 0U)) ? (13709362035692442434ULL) : (((/* implicit */unsigned long long int) 522292628))))));
                            var_42 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_75 [i_22])) ? (4857150476467127794LL) : (((/* implicit */long long int) ((/* implicit */int) arr_77 [(short)2] [10] [(unsigned char)2])))))));
                        }
                        for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 1) 
                        {
                            var_43 = ((/* implicit */short) arr_56 [i_22] [i_22] [i_0] [i_22] [i_22 - 1] [i_22]);
                            var_44 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0])) && (((/* implicit */_Bool) arr_24 [i_0] [i_0]))));
                            var_45 = ((/* implicit */int) min((var_45), ((-(((/* implicit */int) ((unsigned short) 16361729101199720652ULL)))))));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)10257)) ? ((~(3613652687507945003ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4857150476467127794LL)) ? (-522292636) : (var_2)))))))));
                            arr_89 [i_25] [i_25] [i_25] [i_25] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_74 [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))));
                        }
                        arr_90 [i_20] = ((/* implicit */int) 9966209473792421665ULL);
                    }
                } 
            } 
            var_47 |= ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 2] [i_0 - 2] [16ULL] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_20] [i_20])) ? (-522292636) : (-1831753372)))) : (((((/* implicit */_Bool) -9223372036854775802LL)) ? (12838248344007357441ULL) : (((/* implicit */unsigned long long int) arr_56 [i_20] [i_20] [i_0] [i_0] [i_0 - 2] [i_0])))));
            /* LoopSeq 4 */
            for (long long int i_26 = 1; i_26 < 21; i_26 += 1) 
            {
                arr_94 [i_26] = ((/* implicit */_Bool) ((int) var_1));
                arr_95 [i_26 + 1] [i_20] [2LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)80))));
            }
            for (unsigned long long int i_27 = 4; i_27 < 21; i_27 += 4) /* same iter space */
            {
                arr_99 [i_20] = ((/* implicit */unsigned long long int) (~(arr_57 [i_0] [i_0 - 2] [i_0] [i_27])));
                arr_100 [(signed char)4] [i_27] = ((/* implicit */short) (unsigned char)219);
            }
            for (unsigned long long int i_28 = 4; i_28 < 21; i_28 += 4) /* same iter space */
            {
                arr_103 [i_28] [4] [i_28] = ((/* implicit */unsigned char) (+(5969153900996923468LL)));
                arr_104 [i_0] = ((/* implicit */int) arr_48 [i_0]);
                var_48 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_77 [i_28] [i_0] [i_0])))) ? ((~(13709362035692442448ULL))) : (((/* implicit */unsigned long long int) ((int) 2644476357U)))));
            }
            for (unsigned long long int i_29 = 4; i_29 < 21; i_29 += 4) /* same iter space */
            {
                arr_108 [i_29] [i_20] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [i_29 + 1] [i_29 - 3] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_76 [i_29 + 1] [i_29 - 3] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (unsigned char)251))));
                var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((((/* implicit */_Bool) 9966209473792421651ULL)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                arr_109 [i_0] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (4857150476467127824LL) : (((/* implicit */long long int) arr_56 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 - 1]))));
            }
            arr_110 [(unsigned char)1] [(unsigned char)1] = ((/* implicit */signed char) (-(6204994200617439234ULL)));
        }
        var_50 = ((/* implicit */short) var_10);
    }
    var_51 |= ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) var_7)));
}
