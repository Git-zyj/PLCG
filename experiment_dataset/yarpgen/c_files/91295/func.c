/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91295
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_2 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) 67108863ULL))));
                    arr_8 [i_0] [i_1] [i_1] [1U] = ((/* implicit */short) (-(((var_9) | (arr_5 [i_2] [i_1] [i_0])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_12 [i_0 - 3] [i_0 + 2] [i_2 - 1])) : (var_9)));
                            arr_14 [i_0] [19ULL] [19ULL] [11ULL] [i_3] [(_Bool)1] = ((/* implicit */long long int) ((unsigned long long int) var_15));
                            arr_15 [9] [i_4] [i_3] [i_3] [i_2 + 3] [i_1] [i_0 + 2] = ((/* implicit */long long int) (_Bool)1);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0 - 2] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (+(0)))) : (arr_5 [6U] [i_1] [i_1])));
                            arr_20 [i_5] = ((arr_5 [i_0] [i_0 - 4] [i_2 - 1]) >= (((/* implicit */long long int) var_14)));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_1] [19])) : (((((/* implicit */int) arr_4 [12LL] [12LL])) >> (((4572785602262693514ULL) - (4572785602262693507ULL)))))));
                            var_20 = ((/* implicit */unsigned short) ((arr_9 [(_Bool)1] [i_1] [i_2 + 3] [i_2 + 3] [(_Bool)1]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2305842974853955584ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65531)))))));
                        }
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-10)) ? (6808982864595222113ULL) : (((/* implicit */unsigned long long int) (-(1180779859))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_6])) ^ (((/* implicit */int) ((signed char) arr_3 [(_Bool)0])))))), ((((~(var_6))) - (3854470366U)))));
                        arr_25 [i_0 - 1] [i_1] [(signed char)19] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1))))))) ? (((arr_5 [i_2] [16U] [9LL]) & (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (max((((/* implicit */int) min((arr_22 [i_1]), (((/* implicit */signed char) (_Bool)0))))), (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (signed char)2)))))) : (((/* implicit */int) var_15))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        arr_29 [i_0] [i_1] = ((/* implicit */int) (((((_Bool)1) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_24 -= ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)18)))));
                            var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0 - 4]))));
                        }
                        for (short i_9 = 3; i_9 < 21; i_9 += 4) 
                        {
                            var_26 &= ((/* implicit */short) (-((-(((/* implicit */int) var_7))))));
                            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
                            arr_36 [i_9] [i_9] [(_Bool)0] [i_9] [i_0] = ((/* implicit */signed char) ((3472631761U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1])))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            arr_40 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [3U] [i_0 + 2] [i_2 - 1] [i_2 - 1] [i_7 - 2])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [1ULL] [i_0] [i_0] [i_0 - 2] [i_2 - 3] [i_0] [i_7 - 1])))));
                            arr_41 [i_10] [i_7 - 1] [i_0 - 4] [i_7] [i_0 - 4] [i_0 - 4] [i_0 - 4] = (~(4294967295U));
                            var_28 = ((/* implicit */signed char) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 2])))));
                        }
                        for (long long int i_11 = 2; i_11 < 19; i_11 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))))) >= (((((/* implicit */_Bool) 15144633998176871826ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1319270724U))))))));
                            arr_44 [(_Bool)1] [(signed char)10] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_5 [i_0 + 1] [12ULL] [i_2 + 1])))) ? (((((/* implicit */_Bool) 1319270724U)) ? (arr_1 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) 3854470346U))));
                        }
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [(_Bool)1] [i_2 - 2] [i_7 - 2] [i_7 - 2] [i_12])) ? (((/* implicit */int) arr_38 [(unsigned short)3] [11U] [11U] [i_2 - 1] [(_Bool)1])) : (((/* implicit */int) (signed char)11))));
                            arr_47 [i_0] [i_0] [(short)18] [i_7] [i_7] [i_12] = ((/* implicit */unsigned short) arr_33 [i_1]);
                            var_31 = ((/* implicit */_Bool) ((arr_32 [i_7] [i_2 + 2] [i_7] [i_7] [i_7 + 1]) ? ((-(var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_38 [12ULL] [12ULL] [12ULL] [i_7] [12ULL]))))));
                        }
                        arr_48 [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 761724355)) ? (((/* implicit */unsigned long long int) 1319270717U)) : (8935141660703064064ULL)));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                arr_55 [i_13] [i_14] = ((/* implicit */signed char) var_8);
                var_32 = ((/* implicit */unsigned int) (signed char)110);
                var_33 = ((/* implicit */unsigned int) var_13);
                var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-26534)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)15] [i_13] [i_14] [i_13] [i_14]))) | (var_17))) : ((+(5435551527789657870ULL))))) & (((/* implicit */unsigned long long int) (((~(-8038021904177731896LL))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))) - (41504))))))));
            }
        } 
    } 
}
