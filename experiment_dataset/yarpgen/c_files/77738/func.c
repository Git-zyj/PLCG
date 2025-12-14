/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77738
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_1))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 -= ((/* implicit */unsigned short) arr_0 [i_0]);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_9)));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned int) ((min((var_7), (var_6))) <= ((~(arr_8 [i_2 + 1] [i_2 + 2] [i_1] [i_2])))));
                            arr_14 [i_1] = ((/* implicit */signed char) var_10);
                        }
                        var_16 += ((/* implicit */int) ((((var_9) >> (((((/* implicit */int) (short)-8025)) + (8086))))) & (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-8025)))))));
                        arr_15 [i_1] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */short) (~(var_7)));
                        var_18 = ((/* implicit */unsigned int) ((unsigned char) var_11));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_6] [i_1] [i_6] = ((/* implicit */unsigned char) max(((~(var_9))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_0)))))));
                                var_19 = ((/* implicit */_Bool) (short)-8025);
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_5))));
                                var_21 |= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -491312915)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)229)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) var_3);
                        var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_13 [i_2 + 3] [i_8]), (arr_13 [i_2 - 1] [i_0])))) ? (min((var_6), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_2 + 3] [i_8])))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_0))))) || (((((/* implicit */_Bool) -2147483630)) && (((/* implicit */_Bool) var_8))))));
                        arr_30 [i_1] [i_1] = max((((((/* implicit */_Bool) var_2)) ? (arr_29 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) min((arr_6 [i_1]), (((((/* implicit */_Bool) (signed char)-97)) ? (491312915) : (((/* implicit */int) (short)8026))))))));
                        arr_31 [i_1] [i_1] [8ULL] [1] [i_1] = ((/* implicit */signed char) max((max((var_4), (((/* implicit */unsigned long long int) var_2)))), (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_9])) : (var_6)))));
                    }
                    for (unsigned char i_10 = 4; i_10 < 22; i_10 += 4) 
                    {
                        arr_34 [i_0] [19U] [i_1] [i_2] [8] [i_10] = min((((unsigned long long int) var_4)), (min(((~(var_7))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)18)))))));
                        var_25 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (-(-8118690069854674883LL)));
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            arr_37 [i_11] [17LL] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_11)), (arr_29 [i_0] [(signed char)17] [i_0] [i_11] [i_0] [i_0]))), (max((((/* implicit */unsigned long long int) var_0)), (11750739895913060664ULL)))));
            var_27 = var_6;
            arr_38 [i_11] [i_11] [i_11] = arr_7 [i_0] [i_0] [i_11];
        }
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            var_28 &= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) 3)), (11750739895913060664ULL))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-97)))) : (max((var_6), (var_8)))))));
            var_29 = ((/* implicit */unsigned char) max(((-(var_4))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_12])), (var_0))))));
        }
        /* LoopNest 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                {
                    arr_47 [15U] [(_Bool)1] [i_13] [21] = ((/* implicit */signed char) max((min((1608330681U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) max((var_5), (var_5))))));
                    var_30 ^= (unsigned short)512;
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            arr_51 [i_15] [i_15] = ((/* implicit */unsigned char) ((_Bool) var_6));
            /* LoopSeq 3 */
            for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                var_31 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_1)), (var_10)))));
                var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-8011)) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */int) (_Bool)1)), (491312944))), (max((((/* implicit */int) (short)-8047)), (550560254)))))) : (max((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (~(arr_44 [i_0] [i_16]))))))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) min((((signed char) arr_52 [i_17] [i_15] [9U])), (max((arr_17 [i_0] [(signed char)15] [i_0] [i_0] [i_0]), (var_11))))))));
                var_34 -= ((/* implicit */_Bool) var_0);
                var_35 += ((/* implicit */_Bool) var_8);
            }
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                arr_58 [i_0] [i_15] [i_18] [i_18] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 550560264))))), (max((arr_46 [i_18 - 1]), (((/* implicit */unsigned int) 491312936))))));
                var_36 = ((/* implicit */int) var_4);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_19 = 1; i_19 < 19; i_19 += 2) 
                {
                    var_37 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -8118690069854674876LL)) / (((((/* implicit */_Bool) (unsigned short)64512)) ? (var_4) : (((/* implicit */unsigned long long int) var_9))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */long long int) var_10)) / (arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [i_19 - 1] [i_19] [i_20]))))));
                        var_39 = ((/* implicit */unsigned int) var_3);
                        var_40 += ((/* implicit */signed char) (~(4294967295U)));
                        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_19 - 1] [i_18 - 1] [i_18] [i_18 - 1] [i_18])) / (((/* implicit */int) arr_3 [i_0] [i_15] [i_18 - 1])))))));
                    }
                }
                for (long long int i_21 = 2; i_21 < 20; i_21 += 3) 
                {
                    arr_69 [i_0] [i_15] [i_15] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_0))))));
                    arr_70 [i_15] [i_21] = ((/* implicit */short) max((((((/* implicit */_Bool) 1572231012)) ? (arr_19 [i_21 - 1] [i_21 - 1] [0U] [i_21 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) var_2))));
                    arr_71 [i_15] [i_15] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_5)), (max((max((var_6), (((/* implicit */unsigned long long int) var_1)))), ((~(var_6)))))));
                }
                for (long long int i_22 = 1; i_22 < 21; i_22 += 1) 
                {
                    var_42 -= var_2;
                    var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_15] [i_15] [i_18] [i_18] [i_22]))) + (var_6))), (((/* implicit */unsigned long long int) ((signed char) var_1)))))) ? (var_7) : (((((/* implicit */_Bool) max(((signed char)118), (var_2)))) ? (var_7) : (((/* implicit */unsigned long long int) max((arr_21 [i_15] [(signed char)4] [(signed char)9] [i_22] [i_0] [i_0]), (((/* implicit */unsigned int) var_1)))))))));
                    var_44 = ((/* implicit */_Bool) min((arr_43 [i_0]), (max((var_4), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11197238970765730795ULL)))))))));
                }
            }
        }
    }
    for (unsigned int i_23 = 0; i_23 < 10; i_23 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_24 = 0; i_24 < 10; i_24 += 4) 
        {
            for (long long int i_25 = 0; i_25 < 10; i_25 += 4) 
            {
                {
                    var_45 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_24 [i_24] [i_23]), (var_3)))), (min((var_6), (((/* implicit */unsigned long long int) (_Bool)0))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_26 = 1; i_26 < 8; i_26 += 4) 
                    {
                        var_46 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((var_2), ((signed char)29)))) ? (((long long int) (signed char)105)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                        var_47 = ((/* implicit */short) min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)8026)), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)4032))) : ((~(6082953060262691081LL)))))));
                        var_48 = ((/* implicit */signed char) (unsigned short)32768);
                        arr_86 [(unsigned char)7] [i_26] [i_25] [i_26] = ((/* implicit */short) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (var_4))), (((/* implicit */unsigned long long int) 550560254)))), (((/* implicit */unsigned long long int) ((int) var_11)))));
                    }
                }
            } 
        } 
        var_49 = var_0;
    }
    for (unsigned int i_27 = 0; i_27 < 10; i_27 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_28 = 0; i_28 < 10; i_28 += 1) 
        {
            arr_91 [i_27] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((arr_21 [i_27] [i_27] [i_27] [i_27] [2LL] [14U]), (arr_2 [i_27])))) / (max((18446744073709551605ULL), (((/* implicit */unsigned long long int) var_10))))));
            var_50 *= ((/* implicit */signed char) (+(max((var_9), (((/* implicit */long long int) arr_16 [i_27] [i_27] [i_27] [i_28] [i_28] [i_27]))))));
        }
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 10; i_29 += 4) 
        {
            for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
            {
                for (short i_31 = 2; i_31 < 8; i_31 += 2) 
                {
                    {
                        var_51 = ((/* implicit */unsigned int) var_8);
                        var_52 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) != (((/* implicit */int) var_5)))) ? ((((~(((/* implicit */int) var_5)))) | (((((/* implicit */_Bool) arr_21 [i_27] [i_27] [i_30] [i_27] [i_29] [i_27])) ? (((/* implicit */int) (short)25089)) : (((/* implicit */int) var_2)))))) : (max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) max((var_3), (((/* implicit */signed char) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
    }
}
