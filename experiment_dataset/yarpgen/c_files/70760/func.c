/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70760
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
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) max((var_6), ((unsigned short)27156)))) : (((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)-64))))))) ? (((/* implicit */int) min((var_0), (min((var_18), (var_18)))))) : (((((/* implicit */_Bool) 276972724)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (short)26652))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_21 -= ((/* implicit */unsigned long long int) arr_3 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (signed char)73);
        var_22 += ((/* implicit */signed char) (short)3251);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */int) var_6);
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_0 [i_3]))));
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((arr_13 [i_3] [i_2] [i_3 + 1]) >= (((/* implicit */int) var_9))))));
                    var_25 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (short)-26653)) < (((/* implicit */int) arr_5 [1ULL] [i_4])))))));
                    arr_17 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [8LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_19))) << (((((/* implicit */int) arr_14 [12ULL] [10] [i_2 - 1] [i_4 - 2])) + (11826)))));
                    arr_18 [i_4] [i_4] [i_3] [i_4] [(signed char)10] = ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                }
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) arr_20 [i_1] [i_5] [i_5] [i_1])))), (((((/* implicit */_Bool) arr_6 [(short)12])) ? (((/* implicit */int) (signed char)-64)) : (2147483647)))))) ? ((~(((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) (unsigned char)0)))))));
                            arr_26 [i_1] [i_5] [i_1] = ((((/* implicit */_Bool) max((var_19), (((/* implicit */long long int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))))))))) ? (((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) ^ (var_14)))) : (max((((int) (signed char)-1)), (((/* implicit */int) ((((/* implicit */int) (signed char)-88)) > (((/* implicit */int) (unsigned char)188))))))));
                        }
                    } 
                } 
                var_27 *= ((/* implicit */short) (-(((((((/* implicit */int) (short)-26652)) > (33554176))) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) 495792535)))))))));
                arr_27 [i_1] [i_2] = ((/* implicit */long long int) ((unsigned short) arr_5 [(unsigned short)13] [i_5]));
            }
            /* LoopSeq 1 */
            for (unsigned short i_8 = 3; i_8 < 14; i_8 += 3) 
            {
                arr_32 [i_1] [12LL] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((var_8), (var_8))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (-134217728)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */int) min(((+(var_14))), (var_7)));
                            var_29 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_34 [i_9 + 2] [i_9 + 1] [i_9 + 2])))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_1] [0ULL] [(_Bool)1] [i_8 + 1] [0ULL] [i_8 + 1] [i_8 + 1])))))))) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_15))));
                            var_31 = ((/* implicit */signed char) ((unsigned long long int) ((arr_8 [i_2 - 1] [i_8 - 2]) + (arr_8 [i_2 - 1] [i_8 - 3]))));
                        }
                    } 
                } 
                arr_39 [i_2] [i_2] [i_2] [10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -495792529)) + (arr_31 [i_1] [i_2] [i_8])));
                arr_40 [i_2 - 1] [i_2] [(signed char)4] [i_2] = ((/* implicit */long long int) ((max((2147483647), (433144119))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2 + 3] [i_2 - 1] [i_2 - 1])))))));
            }
            var_32 += ((/* implicit */unsigned long long int) arr_5 [i_2] [i_1]);
        }
        var_33 = ((/* implicit */int) var_7);
        arr_41 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((signed char) var_19))), (min((var_8), (((/* implicit */unsigned long long int) arr_37 [(short)1] [i_1] [i_1] [i_1] [i_1] [(signed char)6] [14ULL]))))));
    }
    var_34 = ((/* implicit */unsigned char) var_13);
    var_35 = ((/* implicit */short) max((((/* implicit */int) (((+(var_4))) > (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */long long int) (-2147483647 - 1)))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) / (var_17)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)31268))))) : (((/* implicit */int) (short)31268))))));
}
