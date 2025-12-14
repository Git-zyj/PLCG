/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9009
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
    for (int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))));
                        var_16 = ((/* implicit */int) ((var_2) ? (arr_6 [i_0 + 1]) : (arr_6 [i_0 - 3])));
                        arr_14 [i_0 - 3] [i_1] [6LL] [6LL] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (var_10)));
                    }
                } 
            } 
            arr_15 [(_Bool)1] |= (~(((((/* implicit */_Bool) (signed char)32)) ? (6919742284348810157LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)49))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_17 = ((/* implicit */_Bool) var_0);
            var_18 = ((/* implicit */_Bool) ((short) (unsigned char)11));
        }
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 13; i_7 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) ((_Bool) (unsigned short)28305));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 4])) ? (((/* implicit */unsigned int) ((arr_2 [i_0 - 2]) ^ (((/* implicit */int) (unsigned short)1409))))) : (((((/* implicit */_Bool) (unsigned short)59997)) ? (arr_16 [i_0] [i_7 - 1]) : (((/* implicit */unsigned int) arr_2 [i_0 - 4]))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_29 [i_6] [i_5] [i_6] [(short)6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_6]), (((/* implicit */long long int) arr_26 [i_6]))))) ? (((unsigned int) 709905469205096991LL)) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)255)), (arr_0 [(_Bool)1] [i_5]))))))) ? (min((max((arr_23 [1LL] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_28 [i_7 - 1] [i_6] [i_6] [i_6] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)63)) < (((/* implicit */int) (signed char)-120))))))) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            arr_33 [i_0 - 1] [i_5] [i_6] = ((/* implicit */short) ((var_8) | (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65518)))))));
                            var_22 = ((/* implicit */int) min((var_22), (((((((/* implicit */int) arr_7 [i_7 + 1] [i_0 - 4] [i_0 - 1])) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_5])))))))));
                            var_23 = ((/* implicit */long long int) ((unsigned char) var_9));
                        }
                        for (unsigned short i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-20216)), (8524723006636905473ULL)));
                            arr_37 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((arr_18 [i_0]) - (arr_18 [i_6]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7 - 1] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
                        }
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (arr_4 [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) : (((((/* implicit */int) arr_39 [i_0] [i_0] [i_5] [i_5] [(signed char)0] [i_0 - 2])) << (((-7LL) + (24LL)))))));
                            arr_41 [i_0 + 1] [i_5] [i_6] [i_7] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54007)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : (597353348472952473LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1817704222), (((/* implicit */int) var_2))))) ? (((arr_16 [i_7] [4LL]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_26 [i_6])) : (((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_0] [i_6])))))))) : (((arr_38 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_6] [i_7 - 1] [i_7 - 1]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)21)))))))));
                        }
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) var_15);
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_7])) ? (min((max((3651718033330191674LL), (((/* implicit */long long int) arr_8 [i_6] [i_5] [i_6] [(_Bool)1])))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) 3221225472U))));
                            arr_44 [i_11] [i_6] [i_7 - 1] [i_0 - 4] [i_6] [i_6] [i_0 - 4] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((1121219961751159492LL), (((/* implicit */long long int) (unsigned short)25560))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-1), ((signed char)79)))))))));
                        }
                    }
                } 
            } 
            arr_45 [i_0] [i_5] = ((/* implicit */unsigned char) var_2);
        }
        for (short i_12 = 1; i_12 < 12; i_12 += 2) 
        {
            var_28 = (unsigned char)14;
            var_29 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) (signed char)-5)) >= (((/* implicit */int) (unsigned char)227))))), (((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_12] [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_12 [i_0 - 4] [i_0] [i_12] [i_12])) : (((/* implicit */int) (_Bool)1))))));
            arr_49 [i_12 + 2] [8] = ((/* implicit */unsigned int) arr_8 [10LL] [i_12] [i_12 + 2] [i_12]);
            var_30 += ((/* implicit */long long int) min(((+(((/* implicit */int) (short)-17182)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        }
        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 - 2])) ? (((((/* implicit */_Bool) arr_19 [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 3]))))))));
        arr_50 [i_0 + 2] = ((/* implicit */short) var_9);
    }
    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        arr_54 [(short)14] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_2)))));
        arr_55 [i_13] [i_13] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_52 [(unsigned short)12] [i_13]), (((/* implicit */short) var_2)))))))), (max((((/* implicit */long long int) arr_53 [i_13] [i_13])), (arr_51 [i_13] [i_13])))));
        arr_56 [i_13] [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((1649767579U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_13] [i_13]))))), (var_2))))) < (max((((/* implicit */long long int) arr_52 [i_13] [i_13])), (arr_51 [i_13] [i_13])))));
    }
    var_32 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_2)))))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_7))))));
    var_33 = ((/* implicit */short) max(((+(((var_2) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44094))))))), (((/* implicit */long long int) (_Bool)0))));
    var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (max(((+(((/* implicit */int) (unsigned char)127)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-3665))))))));
}
