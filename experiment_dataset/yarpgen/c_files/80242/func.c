/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80242
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_6))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((short) arr_2 [i_1 - 2] [i_1 + 2])))));
            arr_8 [i_1] = max((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (max((2484841350U), (((/* implicit */unsigned int) (short)21933)))))), (((/* implicit */unsigned int) min((((short) (short)-21933)), (max((((/* implicit */short) var_10)), ((short)-6671)))))));
            var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? ((~(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_2 [i_0] [i_1]))))));
        }
        for (unsigned int i_2 = 4; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) : (var_8)))) ? (((/* implicit */int) (short)21941)) : (((((/* implicit */_Bool) arr_6 [(signed char)3] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))))))))) : (((unsigned int) ((unsigned int) (short)20876)))));
            arr_11 [i_2] [i_0] = arr_6 [i_2 - 4] [i_2 - 1];
        }
        for (unsigned int i_3 = 4; i_3 < 13; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_17 ^= ((/* implicit */signed char) min((((short) ((unsigned char) arr_0 [i_0]))), ((short)21941)));
                        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) max(((short)-2084), (((/* implicit */short) arr_10 [i_3] [i_4] [(short)5]))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */short) min((var_19), (arr_0 [i_0])));
            arr_22 [i_0] [i_0] [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_0] [i_3]))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                for (signed char i_7 = 4; i_7 < 13; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_20 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)8128)) ? (max((((/* implicit */unsigned int) (short)20876)), (arr_3 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)32767))))))));
                            arr_32 [i_8] [i_8] [11U] [3U] [i_8] [3U] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(134213632U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) (-(arr_26 [i_0] [i_8] [i_0] [i_7] [(unsigned char)4]))))));
                            arr_33 [i_0] [i_3 - 1] [i_3] [i_6] [i_7] [i_8] [(short)6] &= ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (short)32767)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_3] [(signed char)10] [i_7]))))))) >> (((min((min((arr_26 [i_0] [i_3] [i_6] [i_7] [i_8]), (var_8))), (((/* implicit */unsigned int) arr_2 [i_3 + 1] [i_3 - 4])))) - (112U)))));
                            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)21933)))) + (2147483647))) << (((((((/* implicit */int) (short)-2074)) + (2102))) - (28))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            for (short i_10 = 1; i_10 < 12; i_10 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 4; i_11 < 11; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                        {
                            var_22 *= ((/* implicit */unsigned char) (+((+(((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) arr_25 [i_0] [i_0] [(unsigned char)11] [i_0] [12U]))))))));
                            var_23 = ((/* implicit */short) max((var_23), (var_0)));
                            arr_47 [i_11] &= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)26)) ? (var_8) : (arr_7 [i_9]))))) <= ((-(((/* implicit */int) (short)-16741))))));
                        }
                        for (short i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-20876))))) ? (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) var_0)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(signed char)3] [i_9] [i_11 + 3] [i_11 + 3])))))))))));
                            arr_50 [i_0] [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) - (arr_44 [i_0] [i_9] [i_0] [(short)8]))), (((/* implicit */unsigned int) (short)-32760))));
                            arr_51 [i_9] [i_9] [i_13] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) arr_4 [i_0] [i_9] [i_13])) ? (((/* implicit */int) arr_34 [i_9] [i_10] [i_11])) : (((/* implicit */int) (short)32760)))), (((((/* implicit */int) (short)-64)) | (((/* implicit */int) var_6))))))));
                            var_25 = ((/* implicit */unsigned int) ((unsigned char) ((short) var_7)));
                        }
                        for (short i_14 = 0; i_14 < 14; i_14 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_9])) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_19 [i_9]))))))));
                            var_27 = ((/* implicit */short) arr_28 [i_10 + 1] [i_9] [i_9] [i_0]);
                            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)-18573)))) - (((/* implicit */int) max((arr_1 [(short)8]), (((/* implicit */short) (signed char)51)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)2073)))))) : ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (signed char)124))))) : (((((/* implicit */int) (short)-13892)) * (((/* implicit */int) (short)5368))))))));
                            var_29 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_19 [i_9])) ? (((/* implicit */int) arr_19 [i_9])) : (((/* implicit */int) arr_19 [i_9])))), (((/* implicit */int) arr_19 [i_9]))));
                        }
                        var_30 = ((/* implicit */signed char) min((var_30), ((signed char)31)));
                    }
                    for (short i_15 = 0; i_15 < 14; i_15 += 1) 
                    {
                        var_31 = ((/* implicit */short) min((var_31), (((short) ((arr_3 [i_10 + 2]) >= (arr_3 [i_10 - 1]))))));
                        var_32 = ((/* implicit */signed char) var_1);
                        var_33 = arr_1 [i_10 + 1];
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)32)) ^ (((/* implicit */int) var_6))))))) ? ((-(((/* implicit */int) arr_25 [i_0] [i_10 + 2] [i_9] [i_15] [i_10])))) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) arr_46 [i_10 + 1] [i_10 + 1] [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 1])) : (((/* implicit */int) arr_46 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10 - 1])))) - (((/* implicit */int) arr_46 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10 - 1]))));
                    /* LoopSeq 1 */
                    for (short i_16 = 2; i_16 < 13; i_16 += 2) 
                    {
                        arr_59 [i_9] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) min(((short)12490), (((/* implicit */short) (signed char)82)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-14285)))))) * ((+(arr_4 [i_0] [i_9] [i_9])))))));
                        arr_60 [i_0] [i_0] [i_9] [(unsigned char)1] = ((/* implicit */short) var_9);
                        var_36 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                    }
                    var_37 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_16 [i_0] [i_10 - 1] [i_9] [i_0])) - (((/* implicit */int) var_11))))));
                }
            } 
        } 
        var_38 -= ((/* implicit */unsigned int) var_9);
        arr_61 [i_0] = ((/* implicit */signed char) var_6);
    }
    /* LoopSeq 1 */
    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 4) 
    {
        arr_64 [i_17] = (signed char)-106;
        var_39 -= ((/* implicit */signed char) ((short) ((unsigned char) arr_62 [i_17])));
    }
    var_40 = ((/* implicit */short) var_2);
    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) 4158862425U)) ? (((((/* implicit */int) var_9)) << (((((/* implicit */int) max((var_3), (((/* implicit */short) var_11))))) - (5812))))) : (((/* implicit */int) var_2)))))));
}
