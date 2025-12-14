/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97168
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
    var_19 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (-2435060656990026024LL)))) ? (((/* implicit */int) min((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_1 [i_0 - 2] [i_0])))), ((!(var_0)))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [(unsigned char)1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_1])) && (((((/* implicit */unsigned int) ((/* implicit */int) (short)11286))) < (var_10))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned int) min((max((((/* implicit */short) arr_1 [i_3] [i_3])), ((short)21452))), (((/* implicit */short) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned char)14))))))))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned short) 9223372036854775798LL))))) ? (((((/* implicit */long long int) ((((/* implicit */int) (signed char)85)) << (((3111871798374457551ULL) - (3111871798374457542ULL)))))) & (((9223372036854775798LL) & (((/* implicit */long long int) arr_10 [i_1] [i_2] [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 9; i_5 += 3) 
    {
        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11292)) ? (3111871798374457551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5 - 1])))))) ? (((/* implicit */int) ((_Bool) 9223372036854775807LL))) : (((/* implicit */int) var_16))));
        var_22 = (short)3555;
        var_23 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_5 + 4] [i_5 - 1] [i_5 + 3] [i_5 + 1] [i_5 + 3])) - (((/* implicit */int) arr_17 [(unsigned short)8]))));
        var_24 = (~(arr_4 [i_5 - 1]));
        /* LoopSeq 2 */
        for (short i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_5] [i_6 - 1] [(signed char)4])) >> (((((/* implicit */int) arr_21 [i_5] [i_6 - 1] [(unsigned char)10])) - (39813)))));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_26 *= ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_5 - 2] [3ULL] [(short)6] [(short)6] [i_7]))));
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) 2229426209U)) ? (175191014U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2690))))))));
                var_28 -= var_11;
            }
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    {
                        arr_30 [i_5] [i_6] [i_5] [i_9] = var_9;
                        arr_31 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_6 + 1] [i_5] [i_5] [i_5 - 2])) || (((/* implicit */_Bool) arr_14 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]))));
                        var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_8)))))));
                    }
                } 
            } 
            var_30 |= ((/* implicit */signed char) (_Bool)0);
        }
        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            arr_36 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_5 - 3] [i_5 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_6 [i_5 + 2] [i_10])));
            var_31 |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (16063914885510305900ULL) : (((/* implicit */unsigned long long int) 3807950030U))))));
        }
    }
}
