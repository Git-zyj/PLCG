/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77131
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
    var_10 |= var_6;
    var_11 = ((/* implicit */unsigned int) var_3);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (var_8)))) ? (max((((/* implicit */unsigned int) (unsigned char)191)), (var_1))) : (((/* implicit */unsigned int) -412432336))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) var_6)), (5892219463374319800LL)))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (short)63)))) & (((/* implicit */int) max((arr_2 [i_0 - 1] [i_0 - 1]), (arr_2 [i_0 + 1] [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [(short)11] [i_1] [i_2] [i_3] [(short)11] = ((/* implicit */unsigned char) arr_11 [i_4 + 1] [i_4 + 1] [i_3 - 2] [i_3 - 2] [i_4] [(unsigned short)11] [(_Bool)1]);
                                arr_14 [i_0] [1LL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) (short)-11380)), (var_3)))), (((((/* implicit */int) var_5)) & (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [(short)1] [9U] [i_4]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_0]))))))))) : (max((-7180279416102599972LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [3U] [i_2])))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_9 [i_3] [i_3 - 2] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3 - 2] [i_3])))), ((-(((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_1 - 2] [i_4 + 2] [i_0 - 1] [i_0 - 1])))));
                            }
                        } 
                    } 
                    var_14 = (-(((((/* implicit */_Bool) arr_11 [3] [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [(unsigned short)9] [i_1 - 1] [i_1 + 1] [(signed char)1] [i_1] [i_1] [i_1])))));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */int) arr_4 [i_0] [0U])), (77797685))), (((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) min((arr_7 [11LL]), (((/* implicit */unsigned char) (signed char)55))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0]))))) : ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))));
        var_15 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)5]))) : (max((((/* implicit */unsigned long long int) var_1)), (var_7))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0 - 1] [i_0 + 1])))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            var_16 &= ((/* implicit */unsigned short) (short)-10468);
            var_17 = (~(max((arr_20 [i_5] [i_6]), (((/* implicit */unsigned long long int) arr_21 [i_6])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 1) 
            {
                var_18 *= ((/* implicit */unsigned char) (~((-(arr_23 [i_5] [i_5] [i_7 + 3] [i_7 + 1])))));
                var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5] [i_7] [3ULL] [i_7 + 3])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_7 + 1] [(unsigned char)18] [i_7]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5])) ? (1912287909U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(unsigned short)20])))))) | (arr_20 [i_5] [i_7 - 1])))));
            }
        }
        /* vectorizable */
        for (unsigned short i_8 = 2; i_8 < 24; i_8 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16384))) * (arr_20 [i_8 - 2] [i_8 - 2])));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((arr_20 [i_8 + 1] [i_8 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [14U]))))))));
            arr_28 [i_5] [i_5] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_8 + 1])) && (((/* implicit */_Bool) arr_24 [i_8 + 1] [i_8]))));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 2; i_10 < 24; i_10 += 2) 
                {
                    for (unsigned char i_11 = 3; i_11 < 24; i_11 += 3) 
                    {
                        {
                            arr_37 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_8] [i_8 - 2] [i_11 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))));
                            var_22 &= ((/* implicit */unsigned short) arr_31 [i_5] [i_5] [i_10 - 1]);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned char i_12 = 3; i_12 < 24; i_12 += 4) /* same iter space */
        {
            arr_41 [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_18 [i_12]), (((((/* implicit */_Bool) arr_40 [i_5] [i_12] [i_12])) ? (arr_23 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5])))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-23365))))), (3550259392U)))));
            var_23 = ((/* implicit */unsigned char) arr_35 [i_5] [i_5] [i_12] [7U] [i_5]);
        }
        for (unsigned char i_13 = 3; i_13 < 24; i_13 += 4) /* same iter space */
        {
            arr_46 [i_13] [i_13] = ((/* implicit */unsigned short) arr_18 [i_5]);
            var_24 = ((/* implicit */unsigned int) min((max((((/* implicit */int) (short)-14652)), (arr_26 [(unsigned short)10] [i_13 + 1]))), (((/* implicit */int) ((short) (unsigned char)7)))));
        }
        for (unsigned char i_14 = 3; i_14 < 24; i_14 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) arr_30 [i_14 - 1] [i_14 - 3] [(short)4] [i_5])) ? (2244388625U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))), (max((arr_36 [i_14] [i_14] [i_14 - 2] [i_14] [i_5] [i_5] [i_5]), ((unsigned short)34337))))))))))));
            arr_50 [i_14] [i_14] = ((/* implicit */signed char) 33423360U);
            arr_51 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_27 [i_14 - 2] [(unsigned char)6]), (arr_27 [i_14 + 1] [(unsigned char)4])))) ? (((/* implicit */int) arr_24 [(short)14] [(unsigned short)5])) : (var_8)));
            var_26 = ((/* implicit */int) (+(((arr_23 [i_14 - 3] [i_14 - 2] [24] [i_14 - 3]) % (((/* implicit */unsigned int) arr_48 [i_14 + 1] [i_14 - 1]))))));
            var_27 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-46)), (var_9)))))), (((max((((/* implicit */unsigned int) arr_40 [i_14] [i_5] [i_14])), (2603100917U))) <= (((/* implicit */unsigned int) (-(arr_33 [i_5] [(signed char)2] [i_5] [i_14] [11ULL] [(signed char)2]))))))));
        }
    }
    for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 3) 
    {
        arr_55 [i_15 + 2] [1ULL] |= ((/* implicit */unsigned char) 465274995);
        var_28 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (max((arr_31 [i_15] [i_15] [i_15 - 1]), (arr_31 [12ULL] [i_15] [i_15 + 3])))));
    }
    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)25340))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
}
