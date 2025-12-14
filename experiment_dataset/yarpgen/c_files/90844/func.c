/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90844
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
    var_16 = ((/* implicit */unsigned short) var_8);
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (signed char)1))));
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (short)-303))))), ((-(((/* implicit */int) ((((/* implicit */int) var_13)) == (var_5))))))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_1 [12])) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)65535)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_1 [i_1]))) * (((var_5) / (((/* implicit */int) (short)192))))));
            var_21 = ((/* implicit */unsigned long long int) var_14);
        }
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_1 [i_2])))) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0])));
            var_23 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) / (((/* implicit */int) var_3))));
        }
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) var_11);
            var_25 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_13))))));
        }
        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_4 + 3])) ? (((unsigned long long int) arr_12 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [(_Bool)1] [i_0 - 1])))));
            arr_13 [i_4] [1LL] = (~(((((/* implicit */int) arr_8 [i_0 - 2] [i_0])) + (((/* implicit */int) var_0)))));
        }
    }
    for (int i_5 = 1; i_5 < 11; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (int i_7 = 4; i_7 < 9; i_7 += 4) 
            {
                for (short i_8 = 4; i_8 < 12; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        {
                            arr_26 [i_5] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_17 [i_8 + 1] [i_8] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (arr_0 [i_8]))))));
                            arr_27 [i_5] [i_5] = ((/* implicit */signed char) arr_15 [i_5] [i_5]);
                            var_27 *= ((/* implicit */unsigned short) (_Bool)1);
                            var_28 = ((/* implicit */unsigned char) var_10);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (arr_1 [i_5])))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) (signed char)-20)))) + (2147483647))) >> (((((/* implicit */int) max((var_2), (arr_8 [i_5] [i_6 - 1])))) << (((/* implicit */int) min((arr_20 [i_5] [(unsigned short)0]), (((/* implicit */unsigned char) (_Bool)1))))))))))));
        }
        for (int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            arr_31 [i_5] = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_14 [i_5])) + (arr_1 [i_5]))) * (((((/* implicit */_Bool) 255)) ? (((/* implicit */int) (_Bool)1)) : (638321767))))) % (((int) ((_Bool) (_Bool)1)))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    {
                        arr_37 [i_5] [i_12] = ((/* implicit */unsigned long long int) ((long long int) 9223372036854775794LL));
                        arr_38 [i_5] [i_5] = ((/* implicit */long long int) min((arr_16 [i_5 + 2] [i_10] [i_12]), (((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_11] [i_12])) ? (((/* implicit */int) arr_24 [i_5 - 1] [i_5 - 1] [i_10] [i_11] [i_10])) : (((/* implicit */int) var_14))))));
                        var_30 = ((/* implicit */int) min((var_30), (((max((arr_4 [i_11] [i_10]), (-638321767))) & (arr_16 [3] [i_10] [i_11])))));
                        var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_5])) ? (((((/* implicit */int) var_2)) + (arr_4 [i_5] [i_5]))) : (((((/* implicit */int) (unsigned short)9598)) / (arr_4 [15LL] [(unsigned char)14])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1]) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_5 + 1] [i_5 + 1] [i_5 + 1])) : (var_8)))) : (((((/* implicit */_Bool) arr_7 [i_5 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_5 + 2] [i_5]))) : (arr_19 [i_12])))));
                    }
                } 
            } 
            arr_39 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_32 [i_5] [i_10] [i_10])), (max((((/* implicit */int) var_13)), (var_10)))))) ? (((/* implicit */int) arr_29 [i_5 + 2] [5] [3])) : (((((/* implicit */int) arr_14 [i_5 - 1])) - (((/* implicit */int) arr_7 [i_5 - 1]))))));
            arr_40 [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_25 [i_5]);
        }
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)-10)) / (-530777102))))) ? (((/* implicit */int) (signed char)20)) : ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)15))))))));
        var_33 = ((/* implicit */long long int) min((var_33), (max((((/* implicit */long long int) (signed char)19)), (9223372036854775779LL)))));
        /* LoopSeq 2 */
        for (long long int i_13 = 2; i_13 < 10; i_13 += 1) 
        {
            arr_44 [i_5] [i_5] = ((/* implicit */short) (_Bool)1);
            var_34 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1))))))), (((arr_21 [i_13] [(unsigned char)4] [i_5] [i_5] [(unsigned char)4] [i_5]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) (signed char)109)) - (85))))))))));
        }
        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_35 = ((/* implicit */short) (unsigned short)0);
            arr_47 [i_5] = ((/* implicit */long long int) min(((~(((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))))), ((((+(((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_3 [i_5] [i_5] [i_14])) : (((/* implicit */int) arr_34 [i_5] [i_5] [i_14] [i_14]))))))));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 10; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_7)) >= ((~(((/* implicit */int) arr_42 [(unsigned char)1] [(unsigned char)1]))))))), (((((/* implicit */_Bool) min((7794778522144853815ULL), (((/* implicit */unsigned long long int) -638321785))))) ? (((/* implicit */int) ((_Bool) var_8))) : (((((/* implicit */int) arr_34 [i_5] [i_5] [i_5] [i_5 + 1])) - (((/* implicit */int) arr_50 [(unsigned short)6] [(unsigned short)6] [i_5]))))))));
                            arr_58 [i_15] [i_5] [i_15 + 1] [i_16] [i_17] [i_17] = ((/* implicit */signed char) 9223372036854775794LL);
                        }
                        for (signed char i_18 = 3; i_18 < 10; i_18 += 1) 
                        {
                            var_37 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_1))))));
                            var_38 = 1222023642;
                        }
                        /* vectorizable */
                        for (unsigned char i_19 = 1; i_19 < 12; i_19 += 4) 
                        {
                            var_39 = ((/* implicit */short) arr_3 [i_19] [i_16] [i_14]);
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_5 + 1] [i_15 + 1])) ? (((/* implicit */int) arr_42 [i_5 - 1] [i_15 - 1])) : (((/* implicit */int) arr_42 [i_5 - 1] [i_15 + 3]))));
                        }
                        var_41 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (-638321783))))));
                        var_42 = ((/* implicit */unsigned long long int) arr_7 [i_15 + 3]);
                        var_43 = ((/* implicit */short) 4177920);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 13; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (signed char i_22 = 0; i_22 < 13; i_22 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((short) arr_23 [i_5] [i_5] [i_5] [i_5])))));
                            arr_75 [i_5] [i_20] [(short)5] [i_22] = ((/* implicit */signed char) max((min((min((((/* implicit */long long int) var_0)), (2406789080166668566LL))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)30)) || (((/* implicit */_Bool) arr_63 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5] [i_5]))))), (var_14))))));
                        }
                    } 
                } 
            } 
            arr_76 [(signed char)12] [(signed char)12] [i_14] |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_5 + 1] [i_14] [i_14]) > (arr_16 [i_5 + 2] [i_5 + 2] [i_5]))))) < (2406789080166668571LL)));
        }
    }
    for (unsigned long long int i_23 = 2; i_23 < 24; i_23 += 1) 
    {
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_79 [i_23 - 2])) - (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned char)99))))))) ? (((/* implicit */int) ((arr_77 [i_23 - 1]) > (((/* implicit */int) var_14))))) : ((~(((/* implicit */int) (signed char)127))))));
        /* LoopSeq 1 */
        for (unsigned short i_24 = 2; i_24 < 22; i_24 += 4) 
        {
            arr_82 [i_23] [i_23] [i_23] = ((/* implicit */int) min((((/* implicit */long long int) min((((arr_77 [i_24]) / (2147483647))), (((/* implicit */int) (short)25))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (max((9223372036854775794LL), (((/* implicit */long long int) arr_81 [18]))))))));
            var_46 = ((/* implicit */_Bool) var_10);
        }
    }
}
