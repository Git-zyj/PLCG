/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9631
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_10 = (~(-1894576789));
                        var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (signed char)33)) : ((+(((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_0] [i_1] [i_3]))))))) % (2079915314306461386ULL)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (short i_6 = 4; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_13 ^= ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((((/* implicit */_Bool) 2079915314306461405ULL)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (signed char)-34))))))));
                            var_14 = (+(((/* implicit */int) (signed char)-29)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-53))))) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (signed char)-24))))));
                var_16 ^= var_3;
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_7 = 3; i_7 < 15; i_7 += 2) 
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_7])) || (((/* implicit */_Bool) (short)10299))));
                arr_23 [i_7] [(_Bool)0] [i_7 + 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-10289))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                var_18 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (short)29855)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (803670496U))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)37)))));
                arr_26 [i_0] [i_1] [14] = ((/* implicit */unsigned long long int) ((unsigned char) (short)10281));
                arr_27 [i_8] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (signed char)44);
                            var_20 = ((/* implicit */short) arr_21 [i_1]);
                        }
                    } 
                } 
            }
        }
        var_21 = ((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0] [i_0]);
    }
    for (short i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 3; i_14 < 8; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 8; i_15 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */int) ((unsigned short) max((arr_39 [i_15 - 1] [i_15 - 1] [(_Bool)1] [i_13]), (((/* implicit */unsigned char) (signed char)12)))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((_Bool)1) ? (3221225472U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19928))))))));
                                arr_44 [i_11] [i_12] [i_13] [i_13] [i_15 + 2] [i_11] [(short)3] = ((/* implicit */_Bool) min(((short)30454), ((short)-10318)));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((int) arr_10 [i_12] [i_15]))))) ? (((((((/* implicit */_Bool) (short)-27739)) ? (((/* implicit */unsigned long long int) 3722909600U)) : (5535686164761552374ULL))) ^ (((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (57344)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (485147372)))), (min((arr_19 [(signed char)15] [i_12] [i_13] [i_14]), (((/* implicit */short) (unsigned char)202))))))))));
                            }
                        } 
                    } 
                    arr_45 [i_11] [i_11] [i_11] [0ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_13] [i_11] [9])) ? (((/* implicit */int) arr_43 [i_13] [i_11] [i_11])) : (((/* implicit */int) arr_43 [i_11] [i_11] [i_13]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_13] [i_11] [i_13])) >> (((((/* implicit */int) (short)-31791)) + (31820)))))) : (((unsigned long long int) (unsigned short)15075))));
                    var_25 = ((/* implicit */_Bool) (short)30448);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            var_26 = ((/* implicit */_Bool) ((arr_2 [i_11]) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_11] [i_11] [i_16])) ? (5535686164761552363ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55))))))))) : (((/* implicit */int) arr_41 [i_11] [i_11] [i_16] [i_16]))));
            var_27 = ((/* implicit */unsigned short) (~(((int) (~(((/* implicit */int) (_Bool)1)))))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)37)) ? (((((/* implicit */_Bool) -389032375)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31795))) : (-1066055158763905540LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (max((((int) (unsigned short)7722)), (((((/* implicit */_Bool) (short)112)) ? (((/* implicit */int) arr_35 [i_11] [i_16])) : (((/* implicit */int) (short)-7)))))) : (max(((~(((/* implicit */int) (signed char)71)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) > (16612833338176783445ULL))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_17 = 1; i_17 < 9; i_17 += 3) 
            {
                var_29 -= ((/* implicit */unsigned short) 1070888390);
                var_30 = ((/* implicit */unsigned char) (+(arr_15 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 - 1])));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        {
                            arr_59 [i_11] [i_11] [i_11] [i_11] = ((((/* implicit */int) (short)27548)) + (((int) (short)-8192)));
                            var_31 ^= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)-12936)) ? (((/* implicit */int) arr_34 [i_19] [i_16])) : (((/* implicit */int) (signed char)66)))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned short i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                for (unsigned char i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    for (signed char i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        {
                            arr_69 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (signed char)-89);
                            arr_70 [i_20] [i_11] [i_20] [i_21] [i_11] [(signed char)9] = arr_48 [i_20] [(unsigned short)7];
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_25 = 0; i_25 < 10; i_25 += 3) 
                {
                    var_32 ^= ((/* implicit */signed char) (+(((/* implicit */int) (short)-2338))));
                    var_33 = ((/* implicit */unsigned char) ((int) ((short) (-(((/* implicit */int) (signed char)103))))));
                }
                for (unsigned int i_26 = 0; i_26 < 10; i_26 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 2) 
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) 1833910735532768157ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-88))))) : (max((max((arr_13 [i_11] [i_23] [i_26] [i_27]), (((/* implicit */unsigned long long int) (short)8191)))), (((/* implicit */unsigned long long int) arr_10 [i_11] [i_11]))))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_56 [i_11] [i_11] [i_11] [i_11] [i_11]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_56 [(_Bool)1] [i_26] [i_24] [i_26] [i_27])) || (((/* implicit */_Bool) arr_56 [i_11] [i_11] [i_11] [i_11] [i_11]))))) : (((((/* implicit */int) (signed char)93)) - (((/* implicit */int) (unsigned char)8))))));
                        arr_85 [i_11] [i_11] = ((/* implicit */_Bool) ((arr_25 [i_11] [i_11] [i_11]) ? (((((/* implicit */int) (_Bool)1)) / (1341025288))) : (((arr_51 [i_11] [i_26] [0LL]) ? (((/* implicit */int) (short)-8186)) : (((/* implicit */int) arr_25 [i_11] [i_23] [i_11]))))));
                        arr_86 [i_11] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_11] [i_23] [i_11])))))));
                    }
                    for (short i_28 = 0; i_28 < 10; i_28 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((unsigned long long int) arr_41 [(short)4] [7ULL] [i_23] [i_11])))));
                        var_37 = ((/* implicit */int) ((max((((((/* implicit */_Bool) (short)32361)) ? (1066055158763905569LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8186))))), (((/* implicit */long long int) var_4)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)12940)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (short)32354)))))));
                        arr_90 [i_11] = ((/* implicit */long long int) arr_79 [i_11] [i_24] [i_26] [i_11]);
                    }
                    arr_91 [(unsigned char)9] [i_11] [i_23] [i_11] [i_24] [i_26] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) var_8)))), ((_Bool)1)));
                }
                arr_92 [i_11] [i_11] [i_11] = ((/* implicit */signed char) (short)8184);
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 2; i_29 < 8; i_29 += 2) 
                {
                    for (unsigned short i_30 = 3; i_30 < 8; i_30 += 2) 
                    {
                        {
                            arr_99 [i_11] [i_11] [i_24] [i_11] [i_24] = ((/* implicit */short) arr_34 [(_Bool)1] [i_23]);
                            arr_100 [i_11] = ((/* implicit */unsigned short) ((_Bool) arr_94 [i_11] [i_11] [i_11] [i_11]));
                        }
                    } 
                } 
                arr_101 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((short) var_1));
                /* LoopSeq 1 */
                for (long long int i_31 = 0; i_31 < 10; i_31 += 3) 
                {
                    var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32341)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) -888921222535326253LL)))))))));
                    var_39 = ((/* implicit */unsigned long long int) arr_0 [i_31]);
                    arr_104 [i_11] [i_23] [i_11] [i_31] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (short)-32365)) - (((/* implicit */int) (_Bool)1))))), ((+(max((((/* implicit */long long int) arr_89 [i_11] [i_11] [i_11] [i_11] [4ULL] [i_31])), (arr_40 [i_11] [i_23] [i_23])))))));
                }
            }
            for (short i_32 = 2; i_32 < 9; i_32 += 4) 
            {
                var_40 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (unsigned char)152))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (3472433238392821704ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_16 [(_Bool)1] [i_32 - 1] [i_32])), ((short)12947))))));
                var_41 = ((/* implicit */unsigned int) (short)8197);
                /* LoopNest 2 */
                for (unsigned long long int i_33 = 0; i_33 < 10; i_33 += 3) 
                {
                    for (signed char i_34 = 3; i_34 < 6; i_34 += 3) 
                    {
                        {
                            arr_112 [i_11] [(_Bool)1] [i_11] [(short)9] [i_11] = ((/* implicit */int) max(((short)8179), (((/* implicit */short) (_Bool)1))));
                            var_42 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((arr_49 [i_32 - 1]), ((short)32351))))) ? (((((/* implicit */_Bool) arr_98 [i_11] [i_23] [i_23] [i_32] [i_33] [(short)8])) ? (((/* implicit */int) arr_96 [i_11] [i_23] [i_32] [i_33] [i_34])) : (((/* implicit */int) arr_111 [i_32 - 2] [i_33] [i_34 + 2] [i_34 - 2] [i_32])))) : (((/* implicit */int) (short)32355))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) arr_61 [i_23] [i_11] [i_32] [i_32 + 1])) : (((((/* implicit */int) (short)-32376)) % (((/* implicit */int) (short)-13020))))));
            }
            arr_113 [i_11] [i_23] = ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_8 [i_23] [i_11] [i_11] [i_23] [i_11] [i_11]) && (((/* implicit */_Bool) arr_75 [(_Bool)1] [i_11] [(_Bool)1] [(_Bool)1]))))), (max((((/* implicit */long long int) (short)-32380)), (max((arr_22 [i_23] [i_23] [i_11] [i_11]), (((/* implicit */long long int) arr_18 [i_11] [i_11] [i_11] [i_23] [i_23] [i_23]))))))));
            var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_94 [i_11] [i_11] [2] [i_23])) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14751))))))))));
        }
        /* vectorizable */
        for (unsigned int i_35 = 0; i_35 < 10; i_35 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_36 = 0; i_36 < 10; i_36 += 2) 
            {
                for (unsigned int i_37 = 0; i_37 < 10; i_37 += 4) 
                {
                    {
                        var_45 = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_37])) - (((/* implicit */int) (unsigned short)14745))));
                        var_46 = ((/* implicit */unsigned long long int) arr_51 [i_11] [i_35] [i_36]);
                        var_47 = ((((/* implicit */_Bool) (short)-29085)) ? (((/* implicit */int) arr_41 [i_11] [(_Bool)1] [i_36] [i_11])) : ((-(((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            arr_121 [i_11] = ((((/* implicit */int) (short)-32381)) * (((/* implicit */int) var_9)));
        }
        /* vectorizable */
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            arr_126 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (unsigned short)50790))));
            var_48 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (arr_118 [i_11] [i_38] [i_38])));
            var_49 = ((/* implicit */short) ((int) ((unsigned long long int) (_Bool)1)));
            var_50 ^= ((/* implicit */unsigned char) ((int) (short)12917));
        }
    }
    for (unsigned short i_39 = 2; i_39 < 21; i_39 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_40 = 1; i_40 < 23; i_40 += 4) 
        {
            arr_133 [i_40] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-3073)) ? (((/* implicit */int) (short)32043)) : (394249077)));
            var_51 = (+((~(((/* implicit */int) arr_127 [i_39 + 3] [i_40])))));
            arr_134 [i_39] [i_40] [i_40] = ((/* implicit */_Bool) arr_132 [i_40] [i_39 + 4] [i_40 + 1]);
        }
        var_52 ^= ((/* implicit */unsigned int) arr_130 [i_39] [i_39] [i_39]);
        var_53 *= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (short)-12917)) && (((/* implicit */_Bool) var_5)))));
    }
    var_54 = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) (short)-32383)))))) ? ((-(2015706080U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)14732)))))));
}
