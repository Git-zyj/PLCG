/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71415
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-703786110)))) ? ((~(arr_5 [i_1 - 1]))) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)64518)), ((-(((/* implicit */int) var_7)))))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 |= ((/* implicit */_Bool) arr_9 [i_0] [(signed char)6]);
                    var_19 *= ((/* implicit */short) max(((((+(arr_6 [i_0]))) % (((/* implicit */unsigned long long int) arr_4 [i_0])))), (((/* implicit */unsigned long long int) ((short) ((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                }
                for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_18 [i_4] [i_0] [i_0] [i_0] [i_5] &= ((/* implicit */_Bool) ((min(((!(((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1])))), (((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_0 [i_3 + 1])))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) ((arr_8 [i_4] [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [7] [7])))))) <= (arr_15 [i_0] [i_1 + 1] [i_1 + 1]))))));
                                var_20 = ((/* implicit */signed char) (unsigned short)64518);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned short)65535)) ^ (arr_15 [i_7] [(signed char)7] [i_0]))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_6] [i_6] [i_3 - 1] [i_1] [i_1] [i_6])), (arr_21 [i_0] [i_0] [i_6] [i_7])))) - (16467)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(_Bool)1])) & (((/* implicit */int) arr_24 [i_0] [i_6] [i_3]))))) ? (((((/* implicit */_Bool) (unsigned short)1010)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) (unsigned short)1027)))) : (((((/* implicit */_Bool) ((signed char) (signed char)-28))) ? (((int) (signed char)-1)) : (((/* implicit */int) min((arr_24 [i_0] [i_7] [i_0]), ((signed char)-17))))))));
                                arr_25 [(signed char)16] [i_0] [i_3] = ((/* implicit */unsigned int) (unsigned short)3);
                                arr_26 [i_0] = min((((/* implicit */int) ((unsigned short) var_4))), (-1625285442));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) arr_10 [i_3 - 1] [i_1 - 1] [i_0]);
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (arr_23 [i_8] [i_8] [i_8] [i_8])));
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        arr_34 [i_0] [(_Bool)1] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_33 [12ULL] [12ULL] [i_0] [(unsigned short)5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) : ((-(arr_14 [i_0] [i_0] [i_8] [i_9])))));
                        arr_35 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)64515))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_1 + 3] [(_Bool)1] [i_9])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_27 [i_0] [i_1] [i_8] [i_8]))))))))));
                        arr_36 [i_0] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_3))))));
                        var_25 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (unsigned short)1010)) : (((/* implicit */int) (unsigned short)64526)))));
                    }
                    for (signed char i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        var_26 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_4 [i_10 + 3])) ? (arr_5 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        arr_39 [i_0] [(signed char)1] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))));
                    }
                    for (short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_3 [i_0]))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) 14749749135533523550ULL))))))))));
                        var_28 = ((/* implicit */int) arr_33 [i_8] [i_1] [(_Bool)1] [i_11]);
                        var_29 ^= ((/* implicit */unsigned long long int) arr_5 [i_0]);
                    }
                }
                var_30 *= ((/* implicit */unsigned long long int) ((arr_2 [3ULL]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(unsigned char)10] [(unsigned short)0] [(unsigned char)10] [i_1 + 3] [i_1]))) : (var_6))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 2) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            for (short i_14 = 4; i_14 < 8; i_14 += 4) 
            {
                {
                    arr_51 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned int) arr_10 [i_12] [i_13] [i_14]));
                    var_31 *= ((/* implicit */unsigned long long int) arr_44 [i_12] [i_12]);
                    var_32 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [(_Bool)1])) ? (((/* implicit */int) (unsigned short)1027)) : (((/* implicit */int) arr_41 [i_12]))))) ? (((4290772992U) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_33 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) var_3)))));
                }
            } 
        } 
    } 
}
