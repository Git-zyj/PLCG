/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84185
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */signed char) arr_0 [i_0]))))), (((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((1417264833848254413ULL) - (1417264833848254413ULL))))))), ((~(((/* implicit */int) (unsigned short)13476))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (short)-21877))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)52055)))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_0] [i_0] [i_0] [i_0] = min((min((min(((unsigned short)13476), (((/* implicit */unsigned short) arr_12 [i_0])))), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [i_3]))))))), (((/* implicit */unsigned short) (_Bool)0)));
                arr_14 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)23119)))), ((!(arr_4 [i_0] [i_0]))))))));
            }
            var_17 ^= ((/* implicit */signed char) min(((~(((/* implicit */int) arr_4 [(unsigned short)6] [(unsigned short)6])))), ((+(((/* implicit */int) arr_4 [(signed char)6] [(signed char)6]))))));
            arr_15 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((1023) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_1])) < (((/* implicit */int) arr_10 [i_0] [0] [i_1]))))))))));
            var_18 += ((/* implicit */signed char) (((((~(((/* implicit */int) ((_Bool) arr_2 [(signed char)16]))))) + (2147483647))) >> (max((((/* implicit */int) arr_8 [i_0] [(signed char)6] [i_1 + 1])), (-315476885)))));
        }
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_19 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)6]))) < (arr_6 [i_4] [i_4]))))));
                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)23105))))))));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 3; i_6 < 13; i_6 += 1) 
                {
                    arr_23 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */int) (!(arr_4 [i_6 - 1] [(_Bool)1])));
                    var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)0))))));
                    arr_24 [i_4] = ((/* implicit */signed char) ((short) min((arr_9 [(short)8] [i_4] [i_5] [i_6 - 3]), (arr_9 [(_Bool)1] [(_Bool)1] [i_6] [i_6 - 3]))));
                    /* LoopSeq 1 */
                    for (short i_7 = 2; i_7 < 12; i_7 += 3) 
                    {
                        arr_27 [i_4] = ((/* implicit */unsigned short) (!(arr_11 [(unsigned short)10] [i_6 - 2] [(unsigned short)10])));
                        arr_28 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)32708)))) + ((+((~(((/* implicit */int) (signed char)-32))))))));
                    }
                }
                for (long long int i_8 = 1; i_8 < 13; i_8 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) max((((unsigned char) (signed char)-4)), (((/* implicit */unsigned char) min((arr_1 [(short)12]), ((signed char)16))))))), ((-(((/* implicit */int) (!((_Bool)1)))))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_8 + 1] [i_8 - 1] [(_Bool)1])))))));
                                var_24 = arr_20 [i_5] [i_5];
                                arr_39 [i_4] [i_5] [i_8] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_30 [(signed char)7] [i_8 - 1] [i_8 + 1] [(signed char)7]))) ^ (arr_31 [i_4] [i_5] [i_8 + 1]))) * (((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8])) % (((/* implicit */int) arr_37 [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8])))))));
                    var_26 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)41)))))))));
                }
                for (int i_11 = 2; i_11 < 10; i_11 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        arr_45 [i_11] = ((/* implicit */long long int) (!((((_Bool)1) && (((/* implicit */_Bool) (signed char)-73))))));
                        arr_46 [i_11] [i_11] [i_4] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (_Bool)1))))));
                    }
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            arr_51 [i_13] [i_11] = ((/* implicit */_Bool) (-(max(((+(((/* implicit */int) arr_9 [i_11] [i_11] [i_11] [i_13])))), (((/* implicit */int) ((((/* implicit */int) (signed char)106)) <= (((/* implicit */int) (unsigned short)42432)))))))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((long long int) (-(((/* implicit */int) arr_12 [i_11 + 3]))))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (min((((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_10 [i_13] [i_13] [i_5])))) != ((+(((/* implicit */int) arr_32 [i_11] [i_5] [i_11]))))))), (((unsigned short) (_Bool)1))))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((long long int) 13878321042784960917ULL)))));
                        }
                        arr_52 [i_4] [i_5] [i_4] [i_11] = max((arr_1 [i_11]), (arr_1 [i_11]));
                        /* LoopSeq 2 */
                        for (short i_15 = 4; i_15 < 11; i_15 += 1) 
                        {
                            var_30 = (!(((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) <= (arr_7 [i_11 + 3] [i_15 - 4] [i_11] [i_15 + 1]))));
                            arr_57 [i_11] = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_8 [i_11] [i_11] [i_11])))), ((((~(((/* implicit */int) (unsigned char)80)))) & ((~(((/* implicit */int) arr_32 [i_4] [(unsigned char)7] [i_13]))))))));
                        }
                        for (short i_16 = 0; i_16 < 14; i_16 += 1) 
                        {
                            var_31 ^= ((/* implicit */_Bool) (signed char)-111);
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) max(((_Bool)1), (arr_56 [i_13] [i_16] [i_13] [i_11] [i_5] [i_13]))))));
                        }
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            arr_65 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) | (((/* implicit */int) max((((/* implicit */signed char) arr_32 [i_11 + 4] [i_11 - 2] [i_11 + 3])), (arr_1 [i_11]))))));
                            arr_66 [i_11] [i_11] [i_11] [i_11] [i_4] = ((/* implicit */unsigned short) arr_64 [i_4] [i_4] [i_5] [i_11 + 4] [i_17] [i_11]);
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_70 [i_4] [i_5] [i_11] [i_17] [i_19] [i_19] = ((/* implicit */_Bool) ((signed char) (+(((arr_17 [i_11 + 1] [i_11 + 1]) - (((/* implicit */int) (_Bool)1)))))));
                            arr_71 [i_4] [i_4] [i_11 + 1] [i_11] [i_19] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)32))));
                            arr_72 [i_4] [i_11] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)38))));
                        }
                        var_33 = ((/* implicit */short) min(((unsigned short)41953), ((unsigned short)37644)));
                        var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) (((-(arr_25 [i_4] [i_4] [i_4]))) / (((/* implicit */int) (_Bool)1)))))));
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) min((7466903723604779755LL), (((/* implicit */long long int) (_Bool)1)))))));
                    }
                    arr_73 [i_11] [i_11] [i_11] [(unsigned char)11] = ((/* implicit */unsigned short) (~(max((arr_34 [i_11] [i_11 - 1] [i_11 - 1] [i_11]), (arr_34 [i_11] [i_11 + 1] [i_11 - 2] [i_11])))));
                }
            }
        } 
    } 
}
