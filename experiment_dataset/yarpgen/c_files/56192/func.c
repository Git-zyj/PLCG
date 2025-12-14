/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56192
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
    var_10 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (((((/* implicit */_Bool) 1844123792)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) : (65052723223403117ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) ((short) (short)505))))))));
    var_11 = ((/* implicit */short) max((((long long int) (~(10071615465256819211ULL)))), (((/* implicit */long long int) (short)505))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(unsigned short)3] [i_3] [i_2] [i_0] [i_0])) ^ (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)28))) : (((/* implicit */int) ((unsigned short) (short)482))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) && (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) arr_5 [i_2 - 2] [i_0] [i_0] [i_2 - 2])))))));
                                var_14 = ((/* implicit */int) (unsigned char)64);
                                var_15 = ((/* implicit */unsigned long long int) var_2);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (short)8123))));
                        var_17 = ((/* implicit */unsigned int) (-(var_3)));
                        arr_13 [i_1] [i_1] [i_2 - 3] [i_5] = ((/* implicit */short) arr_1 [i_0] [i_0]);
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12763391406713122107ULL)) ? (((/* implicit */int) arr_12 [i_0] [(signed char)1] [i_0] [i_0])) : (arr_11 [(short)4] [(short)4] [i_0])))) ? (((/* implicit */int) arr_16 [i_6] [i_1] [1ULL])) : (((/* implicit */int) arr_1 [i_1] [i_2 - 2]))));
                            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)71)) || (((/* implicit */_Bool) var_8)))))));
                            arr_17 [i_0] [i_1 - 1] [(signed char)5] [i_5] [i_1] = ((((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [3ULL] [i_5] [(short)11] [i_1 - 3] [i_0]))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))));
                        }
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_20 -= ((/* implicit */unsigned char) 12486265460174333265ULL);
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32640)) ? (((/* implicit */int) (unsigned short)14126)) : (((/* implicit */int) (unsigned short)11523))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned short)15))))) : (arr_19 [i_2 - 2] [i_1 - 1] [i_2] [i_1 - 3] [i_7] [i_0]))))));
                            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) 13795637818073504844ULL)) ? (((/* implicit */int) (unsigned short)32766)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            arr_24 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(arr_3 [i_1])));
                            var_23 += ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned char)0))))));
                        }
                    }
                    for (unsigned int i_9 = 2; i_9 < 12; i_9 += 1) 
                    {
                        arr_28 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)192)) == (var_3)));
                        arr_29 [i_0] [i_1 - 2] [i_1] [12ULL] = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)252)))) ^ (((/* implicit */int) arr_15 [i_2] [i_2] [i_1] [i_1 - 2] [i_0]))));
                    }
                    var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) var_4)) : (arr_19 [i_2 - 1] [i_1 - 3] [i_2 + 1] [i_2 + 1] [i_0] [i_2 - 1]))))))));
                    var_25 = (-(((/* implicit */int) arr_20 [i_2 + 4] [i_2 + 1] [(unsigned short)11] [i_2 + 1] [i_2])));
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    for (int i_11 = 1; i_11 < 11; i_11 += 3) 
                    {
                        {
                            arr_36 [i_0] [i_1 - 3] [i_0] [i_11] [i_1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)0))));
                            arr_37 [i_1] [8] [i_1] [i_1 - 3] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)54012))))))) ? (((/* implicit */int) max((arr_12 [i_10] [i_10 + 2] [i_10 + 2] [i_11 + 1]), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_11] [i_11])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((var_4) ^ (var_6));
}
