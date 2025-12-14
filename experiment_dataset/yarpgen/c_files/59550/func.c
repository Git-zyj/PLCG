/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59550
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_6))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))) : (var_0))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [2] [i_1] |= ((/* implicit */short) arr_1 [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_10 [(unsigned char)2] [i_1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) 3272240795U);
                            arr_11 [i_0] [i_0] [i_2 + 1] [i_3] = ((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((((/* implicit */_Bool) 12002527164915087586ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) : (1022726500U))) : (4035759706U))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    arr_14 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4] [i_4 + 3] [i_0] [i_4 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (arr_8 [i_4 + 1] [i_4] [i_4 + 3] [i_0] [i_4])));
                    var_13 = ((/* implicit */unsigned long long int) ((signed char) arr_8 [i_0] [i_4 + 2] [i_4] [i_0] [i_1]));
                }
                for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                {
                    var_14 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)(-127 - 1))))) & (((4196334713146277796ULL) - (5125305028364390016ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    var_15 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5855))) ^ (13526623049668782226ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) min(((signed char)34), (arr_12 [17ULL] [i_0] [i_5])))) : (((/* implicit */int) min((((/* implicit */short) (signed char)99)), ((short)-27193)))))))));
                    var_16 = ((/* implicit */long long int) ((unsigned char) 0ULL));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_17 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6 - 1] [6] [i_6 - 1]))) : (arr_9 [20] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))));
                    var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [4U] [4U]))) ? (((/* implicit */unsigned long long int) (-(2291500254U)))) : (((((/* implicit */_Bool) (short)0)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27193)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_6 - 1])) ? (1295290963U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)20] [i_6 - 1])))))) : (((unsigned long long int) max((2288662234635097959ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [(short)4] [i_6])))))));
                    arr_21 [i_0] [i_0] [(signed char)10] [i_0] = ((/* implicit */unsigned int) ((2590492603789504151ULL) == (((/* implicit */unsigned long long int) 0U))));
                    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_8 [i_6 - 1] [i_6 - 1] [i_6 - 1] [14ULL] [i_6 - 1])))) ? ((((_Bool)1) ? (((/* implicit */int) arr_7 [(unsigned char)12] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [i_6 - 1])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (arr_16 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])))));
                }
                for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    arr_24 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10))) & (((arr_18 [i_0]) * (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_0] [i_7])))))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 3; i_8 < 17; i_8 += 4) 
                    {
                        arr_28 [(_Bool)1] [i_1] [i_1] [i_1] [i_0] = arr_22 [i_0] [i_0];
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [(unsigned char)20] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-120)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)57)) == (((/* implicit */int) var_9)))))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_8 + 2] [12] [i_8] [i_8 - 3]))) : (arr_9 [(unsigned short)10] [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8 - 1]))))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        arr_31 [i_0] [i_9] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((arr_1 [i_7]) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) ((432345564227567616ULL) < (var_10)))))) : (((((/* implicit */_Bool) (signed char)-103)) ? (-113156943) : (((/* implicit */int) (_Bool)1))))));
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_7] [i_9] = (i_0 % 2 == 0) ? (((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_1])))) > (((((((/* implicit */int) (short)-32056)) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) arr_30 [i_9] [i_0] [i_0])), (arr_26 [i_0] [i_0] [i_0] [i_0] [i_9]))) - (4579744781013825306ULL)))))))) : (((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_1])))) > (((((((/* implicit */int) (short)-32056)) + (2147483647))) >> (((((max((((/* implicit */unsigned long long int) arr_30 [i_9] [i_0] [i_0])), (arr_26 [i_0] [i_0] [i_0] [i_0] [i_9]))) - (4579744781013825306ULL))) - (4515014567400066740ULL))))))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 2; i_10 < 17; i_10 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((11493318872163444892ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_10] [i_10] [i_10 + 3] [i_10]))))))));
                        var_22 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_10 + 4] [i_10] [i_10 + 3]))) * ((-(arr_34 [i_0] [i_1] [i_10]))));
                        arr_35 [i_0] [i_1] [i_10] |= ((/* implicit */unsigned int) var_9);
                        arr_36 [i_0] [i_0] = ((/* implicit */signed char) ((arr_26 [i_10 - 2] [i_0] [i_7] [i_10] [i_10]) - (arr_26 [i_10 - 2] [i_0] [i_7] [i_10] [i_10])));
                        var_23 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 9786984506039619563ULL)) ? (11373103406045770360ULL) : (6444216908794464029ULL)))));
                    }
                    var_24 *= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)167))));
                    var_25 = ((int) arr_18 [i_0]);
                }
            }
        } 
    } 
}
