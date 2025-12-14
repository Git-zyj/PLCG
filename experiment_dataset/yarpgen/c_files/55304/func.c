/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55304
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((+(var_1))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8)))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (2499960451173282894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (16163038U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)255))))))))));
    var_11 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2499960451173282887ULL)) ? (12559237607623066012ULL) : (((/* implicit */unsigned long long int) 1931744163U)))), (((/* implicit */unsigned long long int) (~(((-3965327716507067073LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
                    arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [2U]))))) ? (max((4278804257U), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [2U] [i_1] [i_1] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) arr_11 [4LL] [4LL] [i_3] [i_3]);
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13ULL)) && (((/* implicit */_Bool) max((12559237607623066012ULL), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */int) (_Bool)1))))))))));
                                var_15 = min(((+(((/* implicit */int) min(((signed char)46), (arr_1 [i_0])))))), (min(((~(1094730383))), (((/* implicit */int) ((unsigned short) -62719836329128100LL))))));
                                var_16 &= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-47)) != (((/* implicit */int) var_5)))) ? (min(((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (904474997) : (((/* implicit */int) (unsigned short)41500))))))) : (((/* implicit */unsigned long long int) (~((~(4081775162U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)27)) ? (var_1) : (-1226482008)))) ? (arr_16 [i_5]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) != (max((((/* implicit */int) (signed char)120)), (-1226482008)))));
                    arr_23 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) == (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16163038U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_19 [i_5] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2499960451173282893ULL)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                arr_29 [i_5] [i_7] [i_9] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((-644156878) | (644156878)))) ? (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_21 [i_9] [i_7] [i_5] [i_5])))) : (((((/* implicit */int) (signed char)-120)) ^ (625712464))))));
                                arr_30 [i_5] [5] [i_6] [i_5] [i_8] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned char)64)))))));
                                var_18 = (~(((/* implicit */int) ((signed char) 5236975241704720514LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((signed char) 2110125623U);
        arr_31 [i_5] [i_5] = (~(arr_16 [i_5 - 2]));
    }
    for (unsigned int i_10 = 2; i_10 < 16; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_11 = 2; i_11 < 16; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_12 = 4; i_12 < 16; i_12 += 1) 
            {
                arr_41 [i_12] = ((/* implicit */signed char) 2147483647);
                arr_42 [i_12] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_39 [i_12])))) != (((/* implicit */int) ((short) var_2)))));
                arr_43 [i_12] [10LL] [i_12] = ((/* implicit */signed char) (+(arr_25 [i_10 + 1])));
                var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_10] [i_10] [i_10] [i_12 - 1]))) * (2499960451173282887ULL)))));
            }
            arr_44 [(unsigned char)12] = ((/* implicit */unsigned char) (+(1536299790)));
            arr_45 [i_10] [i_11] [i_11] = ((/* implicit */_Bool) ((((arr_16 [i_11]) < (((/* implicit */int) arr_39 [18ULL])))) ? (((/* implicit */int) arr_18 [i_11 + 2])) : (((((/* implicit */int) (signed char)-106)) / (var_1)))));
        }
        /* LoopNest 3 */
        for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                for (long long int i_15 = 1; i_15 < 16; i_15 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-46)) <= (((/* implicit */int) (signed char)-86))))))));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((var_3) | (((/* implicit */unsigned int) arr_46 [i_13] [i_14] [i_16]))))));
                        }
                        /* vectorizable */
                        for (signed char i_17 = 2; i_17 < 17; i_17 += 1) 
                        {
                            arr_60 [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)120)) | (((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_61 [i_10] [16ULL] [i_14] [16ULL] [i_10] &= ((/* implicit */long long int) (+(((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            var_23 = ((/* implicit */unsigned char) ((var_4) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_58 [i_10] [i_13] [i_15 + 3] [i_15] [i_17 - 2]))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_18 = 0; i_18 < 19; i_18 += 1) /* same iter space */
                        {
                            arr_64 [i_14] [i_15] [i_14] [i_13] [i_14] = ((/* implicit */unsigned char) (+((~(-2147483647)))));
                            var_24 = ((/* implicit */unsigned short) min((max((2499960451173282886ULL), (((/* implicit */unsigned long long int) ((arr_50 [i_10] [i_13] [i_14]) >= (((/* implicit */unsigned long long int) arr_55 [i_10] [i_10] [i_10] [i_14] [i_10] [i_10]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) 213467916))), (arr_37 [i_15 + 3]))))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) ((((381440150) & (((/* implicit */int) (unsigned char)1)))) & (-237059697)))) ? (-2953594266881787303LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_9))) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) (short)-2474)))) : (max((var_1), (((/* implicit */int) (short)32745)))))))))));
                            arr_65 [i_10] [i_10] [i_14] [i_14] [i_18] = 1654943456U;
                            arr_66 [i_14] [i_13] [i_13] [i_13] [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_15 - 1] [i_15 + 3] [i_10 - 1] [i_10])) ? (((((/* implicit */_Bool) var_8)) ? (((1032825166) % (((/* implicit */int) (signed char)-101)))) : (381440150))) : ((~(-1843325497)))));
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 19; i_19 += 1) /* same iter space */
                        {
                            arr_69 [i_10] [i_13] [i_14] [i_15] [i_19] [i_19] = ((/* implicit */signed char) (-(var_0)));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32767)) && (arr_68 [i_15] [i_15] [i_15] [(signed char)2] [i_15 - 1] [i_15 + 1] [13LL])));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_10] [18LL] [i_19])) ? (((((/* implicit */_Bool) -1321565969)) ? (((/* implicit */int) (unsigned short)31221)) : (-644156868))) : (((/* implicit */int) (_Bool)0))));
                            arr_70 [1] [i_15] [i_14] [i_13] [i_10] = ((/* implicit */unsigned char) (~(arr_62 [i_10 - 1] [i_13] [i_13] [i_15 + 2] [(unsigned short)11])));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) (short)11058)) << (((/* implicit */int) arr_47 [i_10 - 2]))));
                        }
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) arr_20 [i_15] [i_14] [i_10])))), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-1)), (arr_35 [i_10] [i_13])))))))));
                        var_30 = ((/* implicit */signed char) min(((((~(arr_50 [i_15] [i_14] [i_13]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1159587646)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))))), (((((((/* implicit */_Bool) 16698500800031846933ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) : (arr_58 [i_15] [i_14] [i_14] [i_13] [i_10]))) != (max((((/* implicit */long long int) -1474505244)), (arr_28 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))))));
                    }
                } 
            } 
        } 
        arr_71 [i_10] = ((/* implicit */signed char) arr_55 [i_10] [i_10] [12] [(unsigned short)0] [i_10] [i_10 - 2]);
        var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_40 [i_10] [6] [i_10] [i_10 + 2])) != (7ULL)));
        /* LoopNest 2 */
        for (int i_20 = 2; i_20 < 18; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 2; i_21 < 17; i_21 += 1) 
            {
                {
                    var_32 -= ((/* implicit */long long int) var_7);
                    arr_77 [i_21] = ((((/* implicit */_Bool) (+((+(0U)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_34 [i_21]) > (((/* implicit */int) var_5))))), (min((16698500800031846911ULL), (((/* implicit */unsigned long long int) 3709110523U))))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned long long int) var_1)), (var_8))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((var_0) + (5933664726885824615LL)))))))));
}
