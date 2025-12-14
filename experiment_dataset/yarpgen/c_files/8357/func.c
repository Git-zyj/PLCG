/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8357
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
    var_16 += ((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (max((((/* implicit */int) (unsigned char)255)), ((~(((/* implicit */int) var_12))))))));
    var_17 = ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (short)-3420)) | (((/* implicit */int) var_4))))));
        arr_4 [3ULL] = ((/* implicit */int) (unsigned short)65521);
        var_19 ^= ((/* implicit */unsigned int) (((!((_Bool)0))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_15))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */unsigned int) arr_9 [2U] [i_2] [i_2])) : (0U)))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_1]))) : ((-2147483647 - 1))));
                        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) ((int) min((((/* implicit */int) arr_0 [i_3 + 1])), (0))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) | (var_9));
                var_22 = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned int) var_10)), (var_0))), (((/* implicit */unsigned int) (~(arr_9 [i_1] [i_1] [i_1])))))), (min((arr_1 [i_1]), (((/* implicit */unsigned int) (short)18148))))));
                arr_19 [i_1] [(short)2] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) : (arr_18 [i_1] [i_2]))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1066010232U)) ? (((((/* implicit */_Bool) 536608768)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (14ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1260118303U)), (max((4441521202190613170LL), (((/* implicit */long long int) var_6))))))) : (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])) ? (arr_17 [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_1] [i_1])))));
            }
            /* vectorizable */
            for (short i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                arr_23 [8U] [8U] [i_2] [i_1] |= ((/* implicit */unsigned int) (((_Bool)0) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_22 [i_1] [i_2]))));
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)7))));
                    var_25 = ((/* implicit */short) ((((1900791128U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)2047))))) ? (((0U) << (((/* implicit */int) arr_22 [i_1] [i_1])))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (3462591974U)))));
                    var_26 = ((/* implicit */unsigned char) ((arr_22 [i_1] [i_1]) ? (2433113774484847593LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-74)))));
                }
                for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33808)) ? (-1538523859050589943LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)24)))));
                    var_28 += ((/* implicit */short) (signed char)0);
                    arr_30 [i_6] = ((/* implicit */_Bool) arr_10 [i_6] [i_6]);
                }
                for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_24 [i_10] [i_9] [i_6] [i_2] [2U]))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_10 [i_1] [i_2])))) ? (((/* implicit */int) var_14)) : (arr_26 [i_1] [i_1] [1U] [5U] [(unsigned char)13])));
                        arr_36 [i_6] [i_6] [i_6] [i_6] = ((short) 1608847238U);
                        var_31 = (signed char)117;
                    }
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                    arr_37 [i_1] [i_1] [i_9] [3U] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (2147483631)));
                }
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_33 = ((/* implicit */signed char) ((arr_13 [i_11] [i_6] [i_2] [i_1]) >> (((arr_5 [i_2] [i_2]) - (2243662355U)))));
                    var_34 = ((((/* implicit */_Bool) arr_14 [i_1] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_14 [i_6] [i_6])));
                    arr_41 [13U] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_1] [i_1]))));
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (_Bool)1))));
                }
                var_36 = ((2147483647) ^ (((/* implicit */int) var_4)));
            }
            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                var_37 = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)0)) << (((((unsigned int) (short)-32759)) - (4294934527U))))), (((((/* implicit */_Bool) arr_17 [i_12] [i_2] [i_1])) ? (((/* implicit */int) (short)4094)) : (((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_1] [i_12]))))))));
                var_38 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))))), (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_1] [i_1] [(short)1] [i_1] [i_1])))))));
                arr_45 [i_1] [17U] [(short)13] |= ((/* implicit */short) (~(min((144115188071661568ULL), (((/* implicit */unsigned long long int) arr_39 [i_1] [(short)1] [(short)15] [8U] [i_12]))))));
            }
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_51 [i_1] [i_14] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) var_3);
                        var_39 += ((/* implicit */unsigned int) min((arr_27 [i_1]), (min((((0ULL) ^ (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)255)) < (((/* implicit */int) var_13)))))))));
                        var_40 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned char)255))))) ? ((~(2U))) : (0U))), (((/* implicit */unsigned int) (~(min((0), ((-2147483647 - 1)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_14 [i_1] [i_15]))));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (1939910324)));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 3; i_17 < 17; i_17 += 4) 
            {
                for (unsigned int i_18 = 4; i_18 < 16; i_18 += 1) 
                {
                    {
                        arr_63 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 3710039186U)) + (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53096))) : (var_9)))));
                        var_43 = ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_15)) - (13345))));
                        var_44 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) var_15))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-21157)))));
                        var_45 -= ((/* implicit */unsigned char) var_8);
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
        }
        var_47 += ((/* implicit */signed char) ((_Bool) min((max((((/* implicit */short) var_1)), (var_15))), (((/* implicit */short) min((var_14), (((/* implicit */unsigned char) (signed char)12))))))));
    }
    var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) var_6))));
}
