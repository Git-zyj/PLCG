/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98360
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] |= ((/* implicit */signed char) (-((+(218283899)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) var_7);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) -218283916))))), ((-(((/* implicit */int) var_15))))))) ? ((-((-(((/* implicit */int) arr_1 [i_0] [i_2])))))) : (((/* implicit */int) arr_3 [i_0])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        var_21 -= ((/* implicit */short) (((-(arr_9 [i_2]))) % (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)))));
                        var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1]))));
                        /* LoopSeq 2 */
                        for (short i_4 = 3; i_4 < 18; i_4 += 1) /* same iter space */
                        {
                            var_23 *= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)));
                            var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : ((+(var_2)))));
                            var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64990)) ? (((/* implicit */unsigned long long int) (~(var_18)))) : (11170640424579546818ULL)));
                        }
                        for (short i_5 = 3; i_5 < 18; i_5 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_10)) : (-1714667042)))) ? (18446744073709551595ULL) : ((+(arr_23 [i_0] [i_0] [i_0] [i_0] [i_5]))))))));
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-17244)) : (arr_14 [i_5 + 3] [(_Bool)1] [4U] [i_1] [i_0] [i_0])))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [i_1 - 1])))))));
                            var_28 = ((/* implicit */unsigned short) -218283897);
                        }
                    }
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        var_29 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_24 [i_0] [i_1] [i_1] [i_2] [i_2] [(unsigned char)18])), (max((((((/* implicit */unsigned int) arr_15 [i_1] [i_1 - 1] [(_Bool)1] [i_1 - 1])) - (arr_13 [i_0] [i_0] [i_0] [i_6] [i_0]))), (((/* implicit */unsigned int) arr_17 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_1] [i_0]))))));
                        var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) arr_13 [(short)11] [i_1] [i_0] [i_6] [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))))) : (arr_13 [i_0] [i_1 - 1] [i_2] [i_6 + 1] [i_0]))) >> (((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((int) arr_27 [i_0] [i_0] [i_0])) : ((-(-962474607))))), (arr_15 [i_0] [11LL] [i_0] [i_0]))))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 3) 
        {
            arr_35 [i_7] [i_7] = ((/* implicit */short) var_1);
            arr_36 [i_7] [4LL] [4LL] = ((/* implicit */unsigned short) (short)25945);
            var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */int) (short)-30780)), (arr_18 [14] [14] [14])))) ? (min((arr_14 [i_7 - 1] [i_7 - 1] [(short)12] [i_8] [i_7 - 1] [i_7 - 1]), (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) (_Bool)1)))))) + ((+(((/* implicit */int) (_Bool)1))))));
        }
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((max((1501628171848194489ULL), (((/* implicit */unsigned long long int) (-(1048575U)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -218283890)) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_4))))) : ((-(((/* implicit */int) arr_19 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1]))))))))))));
    }
    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_15)))) == (var_18)))), ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) (+(var_1)))) : (var_9))))))));
}
