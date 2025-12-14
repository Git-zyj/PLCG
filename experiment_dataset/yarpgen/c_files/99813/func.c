/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99813
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
    var_17 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 -= (((+(((/* implicit */int) (signed char)37)))) & (arr_0 [i_0]));
        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_2 + 1] [i_2 + 1])), ((unsigned short)30)))) ^ ((((!(((/* implicit */_Bool) 1252411806)))) ? (((/* implicit */int) ((signed char) arr_4 [i_1]))) : (((/* implicit */int) (unsigned char)142))))));
                    var_20 = min(((-(((/* implicit */int) arr_1 [i_2 - 1] [i_2 + 1])))), (((/* implicit */int) (unsigned char)33)));
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((arr_3 [17U] [17U] [23ULL]), ((short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-25)))) : (((/* implicit */int) (!((_Bool)1))))));
                    var_22 = ((/* implicit */short) var_12);
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((/* implicit */int) arr_1 [i_1] [i_2 + 2])), (min((var_8), (((/* implicit */int) (signed char)62)))))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 19; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */short) var_11);
                        arr_18 [(signed char)16] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_2 [i_3] [i_4] [i_5]), (arr_12 [i_5] [i_4 - 1]))))));
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32767))))), ((unsigned short)49777)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4 + 2]))))) : (((/* implicit */int) (short)5119))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((2628562142369769337ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))))))));
                        var_27 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_14 [8U] [i_5 - 1] [(_Bool)1]), (arr_14 [i_5] [i_5 - 1] [i_5])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_4 + 2] [i_5 + 1] [i_6] [i_6]))) + (var_0)))));
                    }
                    for (short i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        var_28 ^= ((/* implicit */signed char) arr_2 [3ULL] [i_4 - 1] [3ULL]);
                        var_29 = ((/* implicit */short) ((long long int) arr_8 [i_4]));
                        var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_4 + 2] [i_4] [i_4])) >> (((/* implicit */int) arr_16 [i_5 + 1] [(_Bool)1] [i_4 + 2] [(_Bool)1] [i_4 - 2]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [(short)21] [i_4 + 3] [i_3] [(short)21]))) > (arr_20 [i_5] [i_4 + 1] [i_4] [i_3])))) : (((/* implicit */int) ((arr_20 [i_4 + 1] [i_4 - 2] [i_4 - 2] [2ULL]) == (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 + 1] [i_4] [i_4 - 2] [(short)8] [i_3]))))))));
                    }
                    var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [i_4 - 2] [i_5 + 1]), (arr_10 [i_4 + 3] [i_5 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4 - 1] [i_5 + 1])))))) : (((((/* implicit */_Bool) arr_10 [i_4 - 2] [i_5 + 1])) ? (arr_10 [i_4 + 1] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) arr_9 [i_3]);
        var_33 = ((_Bool) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [(signed char)7] [5] [i_3] [(signed char)7])))))));
    }
    var_34 = ((/* implicit */unsigned short) max((var_15), (((unsigned long long int) var_6))));
    var_35 = ((/* implicit */_Bool) min((max((var_5), (((/* implicit */unsigned long long int) ((signed char) 1929875308048162180ULL))))), (((/* implicit */unsigned long long int) -8162415))));
}
