/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6415
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) var_9))))) > ((-(-9223372036854775791LL)))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (1803801799)));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9992))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [(unsigned short)10] [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_19 = ((/* implicit */int) var_10);
        /* LoopNest 2 */
        for (short i_3 = 4; i_3 < 12; i_3 += 4) 
        {
            for (short i_4 = 3; i_4 < 13; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned short) (short)38);
                                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */int) min(((short)-9992), ((short)-9992)))) > (((/* implicit */int) (short)9992))))), ((short)32753)));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_2] = ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_13))), (((/* implicit */unsigned int) (short)-32753))));
                    var_22 = ((/* implicit */unsigned int) ((short) ((var_5) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)9991)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)9346))))))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 0U))) ? (max((arr_23 [i_7]), (arr_23 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
        arr_25 [i_7] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned int) (unsigned char)212)), (4294967295U)))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -277620692517679865LL)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-41))))), (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (short)24992)) : (((/* implicit */int) (short)(-32767 - 1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3U)))))));
        var_24 |= ((/* implicit */long long int) min((arr_8 [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)1173)))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_9 = 3; i_9 < 19; i_9 += 2) 
        {
            arr_32 [i_8] = ((/* implicit */unsigned int) ((_Bool) 2755067633U));
            var_25 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 277620692517679861LL)) ? (((/* implicit */int) (unsigned short)53603)) : (((/* implicit */int) (unsigned char)22)))) / (((/* implicit */int) (unsigned char)186))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            var_26 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)11933)))));
            var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_33 [i_8] [i_8]))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)9561)))))));
        }
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            arr_37 [i_11] = ((/* implicit */unsigned int) var_6);
            var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) 489456975)) & (arr_7 [i_8])));
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) >= (((((/* implicit */_Bool) arr_33 [(short)15] [i_8])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))))))));
                            var_30 = ((((/* implicit */int) ((short) (short)(-32767 - 1)))) * (((/* implicit */int) arr_6 [i_11] [i_14])));
                            arr_45 [i_12] [i_11] [i_12] [(unsigned short)8] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-2147483647 - 1)) % (-1315460913)))) && ((!(((/* implicit */_Bool) 9223372036854775807LL))))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (~(1641530418U))))));
        }
        for (int i_15 = 1; i_15 < 20; i_15 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                var_33 = ((/* implicit */int) var_2);
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (unsigned char i_18 = 3; i_18 < 19; i_18 += 2) 
                    {
                        {
                            var_34 += (-(((/* implicit */int) (unsigned short)11933)));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (short)9992))));
                            var_36 *= ((/* implicit */unsigned char) ((signed char) ((arr_53 [i_8] [i_15] [i_16] [i_17]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_58 [i_15] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)32749)))) < (((((/* implicit */int) (short)-9993)) ^ (((/* implicit */int) arr_6 [i_8] [i_19]))))));
                var_37 = ((/* implicit */unsigned int) ((_Bool) arr_36 [8U]));
                arr_59 [i_15] [i_15 - 1] [i_15 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_15 + 1] [i_15 + 1])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5)))) : (((unsigned long long int) (-9223372036854775807LL - 1LL)))));
                /* LoopSeq 3 */
                for (unsigned int i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    arr_62 [i_8] [i_15] [i_8] [i_8] = ((/* implicit */unsigned short) var_4);
                    arr_63 [i_15] [(unsigned char)16] [(signed char)17] [(unsigned char)16] [i_20] = ((/* implicit */int) ((unsigned int) (short)-9992));
                }
                for (int i_21 = 1; i_21 < 20; i_21 += 3) 
                {
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_8]))) == (arr_53 [i_8] [(_Bool)1] [i_19] [i_21 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) (short)-32744)) - (((/* implicit */int) var_9)))))))));
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) var_11))))) + (((-7391128759118207823LL) - (((/* implicit */long long int) ((/* implicit */int) (short)32744)))))));
                    var_40 = ((/* implicit */unsigned int) ((_Bool) var_9));
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) var_1))));
                }
                for (unsigned char i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    arr_69 [i_8] [(signed char)4] [i_8] [i_8] |= ((/* implicit */unsigned short) (~(((arr_57 [i_8] [i_8] [(signed char)14] [18]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33799)))))));
                    var_42 = ((/* implicit */int) max((var_42), ((-(((/* implicit */int) arr_30 [i_15 - 1]))))));
                }
            }
            arr_70 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [(_Bool)1] [i_15 + 1])) ? (((/* implicit */long long int) (+(var_5)))) : (((long long int) 0U))));
        }
        /* LoopSeq 3 */
        for (long long int i_23 = 0; i_23 < 21; i_23 += 2) 
        {
            /* LoopNest 3 */
            for (short i_24 = 2; i_24 < 19; i_24 += 3) 
            {
                for (unsigned int i_25 = 0; i_25 < 21; i_25 += 2) 
                {
                    for (short i_26 = 0; i_26 < 21; i_26 += 2) 
                    {
                        {
                            arr_83 [i_8] [i_23] [i_8] [i_24] [i_24 - 2] [i_25] [3LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_24 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_26 [i_8])))));
                            var_43 = ((/* implicit */unsigned int) (~(-7391128759118207826LL)));
                        }
                    } 
                } 
            } 
            var_44 ^= ((/* implicit */short) ((unsigned long long int) arr_77 [i_8] [i_23]));
        }
        for (short i_27 = 1; i_27 < 18; i_27 += 1) 
        {
            var_45 = ((/* implicit */int) ((478292021U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_8] [i_27 + 2] [i_27 + 2] [i_27 - 1])))));
            var_46 = ((/* implicit */unsigned int) var_7);
            arr_88 [i_27] [i_8] [i_8] = ((/* implicit */short) arr_51 [i_8] [i_8] [i_27]);
        }
        for (unsigned int i_28 = 3; i_28 < 18; i_28 += 4) 
        {
            var_47 = ((/* implicit */_Bool) arr_86 [i_8]);
            var_48 = ((/* implicit */unsigned short) ((3734407211U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-9992)))));
        }
    }
    for (unsigned short i_29 = 0; i_29 < 16; i_29 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)99)) ? ((-9223372036854775807LL - 1LL)) : (-5707107999168203848LL))))));
            var_50 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_64 [i_29] [i_30] [i_30]), (((/* implicit */int) var_3))))), (((18446744073709551597ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_29] [i_29] [i_30])))))));
        }
        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) (~((~(-9223372036854775799LL))))))));
        /* LoopNest 2 */
        for (unsigned int i_31 = 0; i_31 < 16; i_31 += 2) 
        {
            for (int i_32 = 2; i_32 < 14; i_32 += 2) 
            {
                {
                    var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((7391128759118207823LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1997044227)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7391128759118207796LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-7985))))) : (0U)))) : (((((/* implicit */_Bool) 1524650612)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3732998795937935128LL)))));
                    arr_102 [i_29] [i_29] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_52 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] [(unsigned short)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_29] [i_31] [i_31] [i_31]))) : (arr_26 [i_29]))))))));
                }
            } 
        } 
    }
}
