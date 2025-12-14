/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85738
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 -= ((/* implicit */unsigned int) ((short) arr_1 [i_0]));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((max((arr_4 [i_2] [i_2] [i_2] [i_3 + 3]), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_3 - 1])))), (((/* implicit */unsigned int) arr_0 [i_2] [i_3])))))));
                        arr_9 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) (short)1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)0]))))))))));
                        arr_10 [i_0] [(signed char)0] [i_2] [i_3 + 2] [i_3] = ((/* implicit */int) arr_8 [i_3]);
                        var_14 *= ((/* implicit */unsigned int) var_10);
                        var_15 += ((/* implicit */short) var_1);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_16 *= ((((/* implicit */_Bool) ((short) arr_12 [i_4] [i_4]))) ? (max((((424770548U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)12816))))), (min((((/* implicit */unsigned int) (short)24)), (arr_11 [i_4] [i_4]))))) : (var_4));
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4] [i_4])) - (((/* implicit */int) arr_12 [i_4] [i_4]))))) ? (((((/* implicit */int) arr_12 [i_4] [(signed char)2])) * (((/* implicit */int) arr_12 [i_4] [i_4])))) : (((/* implicit */int) max((arr_12 [i_4] [i_4]), ((short)-10))))));
    }
    for (short i_5 = 2; i_5 < 24; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_7 = 4; i_7 < 24; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 3; i_8 < 21; i_8 += 3) 
                {
                    arr_24 [i_5] = ((/* implicit */unsigned int) ((short) ((((unsigned int) arr_19 [i_5] [i_6] [i_7 - 1] [i_8 + 4])) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5 + 1]))))));
                    arr_25 [i_5] [i_5] [i_7] [i_8 - 2] &= ((/* implicit */short) -886027558);
                    arr_26 [i_5] [i_5] [i_5] [i_8] [(short)22] [i_8] = arr_22 [i_6] [i_5] [i_6] [i_5] [i_5];
                }
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_16 [i_7 - 4] [i_5 + 1]), (3907918543U)))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-96)), ((short)20124)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5]))) - (arr_16 [i_5] [i_6])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    var_19 += ((short) (short)26);
                    /* LoopSeq 1 */
                    for (short i_10 = 1; i_10 < 23; i_10 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-21514)))))));
                        arr_31 [i_5 - 2] [i_6] [i_7] [i_10] = ((/* implicit */int) arr_19 [i_5 - 2] [15] [i_7] [i_5 - 2]);
                        var_21 -= ((/* implicit */short) (+(((/* implicit */int) (signed char)-96))));
                    }
                    var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((422758133U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12543))) : (((unsigned int) (short)26))));
                }
                arr_32 [i_5] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_5 - 1] [i_7 - 3] [(signed char)17] [i_5 - 1] [i_7])), (arr_22 [i_5 + 1] [i_7 - 1] [i_7 - 3] [i_7] [i_7 - 1])))) ? (((((/* implicit */_Bool) arr_19 [i_5] [i_6] [i_7 - 3] [i_7 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 916007095U)) || (((/* implicit */_Bool) var_2)))))) : (max((arr_16 [i_7 - 4] [(signed char)9]), (((/* implicit */unsigned int) arr_23 [i_5 - 1] [i_5] [(signed char)13] [i_6] [i_5 - 1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_20 [i_6])))))))));
                var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_28 [i_5 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1]))) && (((/* implicit */_Bool) ((short) max(((short)10), ((short)-8547)))))));
            }
            var_24 += ((/* implicit */unsigned int) arr_14 [i_5 - 1]);
        }
        var_25 &= (~(var_9));
    }
    for (short i_11 = 4; i_11 < 20; i_11 += 1) 
    {
        arr_36 [i_11] = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned int) arr_27 [i_11] [i_11] [(short)1] [i_11]))));
        arr_37 [i_11 - 4] = ((/* implicit */short) min((arr_33 [i_11] [i_11]), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_34 [i_11]), (((/* implicit */short) (signed char)-86))))) ^ (((/* implicit */int) (short)-20126)))))));
        var_26 ^= (-((((!(((/* implicit */_Bool) (short)0)))) ? (var_8) : (min((var_5), (((/* implicit */unsigned int) -524157303)))))));
        arr_38 [i_11] [i_11 - 3] = ((/* implicit */short) ((((((((/* implicit */int) arr_34 [i_11])) - (((/* implicit */int) (signed char)-102)))) * (((/* implicit */int) (short)4)))) < (((/* implicit */int) min((arr_13 [i_11 - 1]), ((short)-7))))));
    }
    var_27 &= var_0;
    var_28 = ((/* implicit */short) ((signed char) var_10));
}
