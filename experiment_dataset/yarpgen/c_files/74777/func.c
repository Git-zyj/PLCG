/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74777
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) (~(min((13266163063218373071ULL), (((/* implicit */unsigned long long int) -1801038785))))));
                    arr_7 [i_1] [(_Bool)1] [(_Bool)1] [i_1] &= ((/* implicit */unsigned short) (!((!((_Bool)1)))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) var_6)), (max((((/* implicit */int) var_10)), (var_9)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = ((_Bool) arr_12 [i_0] [(_Bool)1] [i_2 + 2] [i_3] [i_4] [i_1]);
                                var_16 += ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) arr_16 [i_4] [i_4] [i_2])), (((long long int) arr_12 [5] [5] [5] [2ULL] [i_3] [i_4])))));
                                var_17 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-59))))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)72)), (12326049324789419492ULL)))) ? (((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) : (12326049324789419488ULL))) : (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_13)))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_3 [i_0] [(unsigned short)9])))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] = ((/* implicit */unsigned short) 293468909);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -1801038792)) ? (((/* implicit */int) (short)17135)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (signed char)-73))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))) : (12326049324789419506ULL))))));
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    arr_25 [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5 + 1] [i_5] [i_7] [i_7])) ? (((/* implicit */int) arr_19 [i_5] [i_7])) : (((/* implicit */int) arr_23 [i_5] [(unsigned char)12] [(_Bool)1] [i_6]))))) ? (((/* implicit */int) arr_21 [i_5])) : (((/* implicit */int) max((arr_20 [i_5] [(_Bool)1]), (((/* implicit */unsigned char) (_Bool)1))))))), (((/* implicit */int) arr_19 [i_5] [i_7]))));
                    var_20 = ((/* implicit */_Bool) 6120694748920132128ULL);
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_26 [i_5 + 2] [i_6 + 1]))));
                    /* LoopSeq 1 */
                    for (int i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-31139))))));
                            var_23 = ((/* implicit */signed char) (-(arr_32 [i_9 - 1] [i_6] [i_6] [i_9] [i_10] [i_9 - 1] [i_9])));
                        }
                        for (unsigned char i_11 = 2; i_11 < 22; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) arr_37 [i_5 + 1] [17] [i_5 + 1] [(_Bool)1] [15] [i_11]);
                            arr_38 [i_11] [i_5] [13] [i_5] [i_5] = ((/* implicit */_Bool) var_5);
                            var_25 = ((/* implicit */int) min((var_25), (((((((/* implicit */_Bool) -1541326065)) && (((/* implicit */_Bool) (short)21382)))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 2035633045U)) ? (((/* implicit */int) (unsigned char)229)) : (-1936924455)))))));
                            var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)9))) : (arr_29 [i_5] [i_5] [(_Bool)1] [(unsigned char)6] [i_11]))) : (((/* implicit */long long int) ((int) arr_33 [i_5] [i_11] [i_8] [i_9] [(_Bool)1])))));
                            arr_39 [i_5] [(unsigned char)22] [i_5] [i_9] [(unsigned char)22] [i_11] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        arr_40 [i_6 + 1] [i_6] [i_5] [i_6 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [(_Bool)1])) ? (-1604443600) : (671732078)))) && (((/* implicit */_Bool) -40296721))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_1)) : (((int) arr_23 [i_5] [i_5] [i_6] [i_5]))));
                    }
                }
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-1505277721) : (var_12)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (short i_14 = 4; i_14 < 21; i_14 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)-17313))) ? (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */long long int) var_2)) : (arr_29 [i_13] [i_6 + 2] [i_12] [17] [i_14 - 2]))) : (((/* implicit */long long int) min((((/* implicit */int) var_6)), (104970286))))))) ? ((((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-110)) ? (arr_29 [(signed char)5] [i_6 - 1] [(_Bool)1] [i_13] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                                var_30 = (+(min((-104970300), (((/* implicit */int) arr_22 [i_14 + 1])))));
                            }
                        } 
                    } 
                    arr_48 [i_12] [i_6 - 1] &= ((/* implicit */short) arr_34 [i_5] [i_5] [i_5] [i_6] [(signed char)15]);
                }
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) (unsigned char)134);
}
