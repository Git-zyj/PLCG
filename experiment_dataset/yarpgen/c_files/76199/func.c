/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76199
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
    var_17 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) 4194176ULL)) ? (1355189366) : (-1355189366))) & (((/* implicit */int) ((((/* implicit */unsigned int) -1355189391)) >= (4236143722U))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1010338123)) ? (((/* implicit */unsigned long long int) max((-1355189362), (1355189397)))) : (var_16)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-23671))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_10))));
    var_20 = (+(var_10));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_1] [1ULL] = ((/* implicit */unsigned long long int) var_1);
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), ((+(var_8)))));
                                arr_16 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) -880779181)) ? (1355189370) : (880779183)))))) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3 + 1])))))));
                                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((-1010338134) / (var_9))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) 880779180)) ? (-880779201) : (((/* implicit */int) (unsigned char)236)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -880779183)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) -1355189409)) ? (1089319426U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 3; i_6 < 9; i_6 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (10629946288502911805ULL) : (3ULL)))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_9)) : (13872399856661044673ULL))))));
                    }
                    for (unsigned char i_7 = 4; i_7 < 11; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */int) arr_18 [i_0] [(short)6] [i_5]);
                        var_26 = ((/* implicit */short) (-(((/* implicit */int) ((short) var_7)))));
                        arr_27 [i_7] &= ((/* implicit */unsigned long long int) (short)12244);
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((arr_22 [5] [i_7 - 4] [5] [5]) >> (((880779183) - (880779153))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_28 ^= ((/* implicit */unsigned long long int) 880779187);
                        arr_30 [i_0] [i_1] [i_1] [i_5] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)195)) * (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (880779192) : (((/* implicit */int) (unsigned char)247))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1355189363)) : (arr_29 [i_1])))));
                    }
                    var_29 ^= ((/* implicit */unsigned char) (-(((-880779219) / (((/* implicit */int) var_4))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_33 [i_1] [i_1] [i_5] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)32))))) ? (((((/* implicit */_Bool) (unsigned char)55)) ? (67092480U) : (((/* implicit */unsigned int) 1355189374)))) : (((/* implicit */unsigned int) var_14))));
                        var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [11U] [i_9])) & (arr_0 [i_0])));
                        var_31 = ((unsigned char) arr_31 [i_0] [i_1] [i_5] [i_0]);
                    }
                }
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (int i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        {
                            var_32 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 17669103468671010160ULL)) ? (var_9) : (-1355189391))) + (arr_40 [i_0] [i_1] [(unsigned char)0] [i_11])));
                            var_33 |= ((/* implicit */unsigned long long int) ((1089319426U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165)))));
                            arr_41 [i_0] [i_1] [i_1] [i_11] [i_10] = ((/* implicit */unsigned char) max(((-((+(var_5))))), (((/* implicit */unsigned long long int) arr_26 [i_0] [7U] [i_0] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
