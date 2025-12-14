/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68864
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((-(((/* implicit */int) var_3)))) & (((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */short) var_16)))))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */short) (((-(max((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_18)))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65057)))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) (unsigned short)34079);
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (arr_5 [i_0] [i_1] [i_0])))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((min((arr_5 [i_0] [i_2 - 2] [i_1 + 1]), (arr_5 [i_0] [i_2 - 2] [i_1 - 1]))), (((long long int) arr_5 [(_Bool)1] [i_2 - 1] [i_1 + 1]))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (arr_7 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
    {
        var_20 |= ((/* implicit */_Bool) ((((((((/* implicit */int) var_18)) ^ (((/* implicit */int) arr_3 [i_4] [i_4] [i_4])))) == (((/* implicit */int) max((var_3), (var_3)))))) ? ((~(((arr_5 [i_4] [i_4] [i_4]) / (arr_8 [i_4] [i_4] [i_4] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) max(((unsigned short)48028), (((/* implicit */unsigned short) var_11))))) || (((/* implicit */_Bool) ((int) -1403189901083380533LL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) (unsigned short)479)) : (((/* implicit */int) arr_3 [(short)10] [i_4] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65056))))) : (((/* implicit */int) min(((signed char)-40), (var_17))))))))))));
    }
    for (unsigned int i_5 = 3; i_5 < 16; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_29 [i_7] [i_6] [i_8] [i_8] [10U] |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (((/* implicit */int) var_18))))) || (((/* implicit */_Bool) min(((unsigned short)65057), (((/* implicit */unsigned short) var_2))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) arr_20 [i_5 - 3] [i_6])), ((short)-1)))) * (((/* implicit */int) max((arr_20 [i_5 - 1] [i_5 + 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))))))))));
                        var_23 |= ((/* implicit */_Bool) (((~(((/* implicit */int) max(((unsigned short)482), (((/* implicit */unsigned short) var_6))))))) | (max(((~(((/* implicit */int) var_17)))), ((~(((/* implicit */int) var_6))))))));
                    }
                    /* vectorizable */
                    for (short i_9 = 3; i_9 < 15; i_9 += 2) 
                    {
                        arr_33 [i_5] [(_Bool)0] [i_7] [(_Bool)0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_5]))))) : ((-(((/* implicit */int) var_13))))));
                        arr_34 [i_5] [i_5] [i_7 - 1] [i_5] = ((/* implicit */int) (-(-2581723502100845870LL)));
                    }
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        arr_37 [i_5] [i_6] [i_5] = ((/* implicit */signed char) (unsigned short)31479);
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_7] [i_7] [7] [i_10])) ? (((/* implicit */int) arr_26 [i_6] [i_6])) : (((/* implicit */int) var_3))))) ? (arr_32 [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (-(3264097366U))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_5 + 1] [i_5 + 1] [i_5 - 3] [i_6] [i_7 + 3]))))))))));
                        arr_38 [i_5 - 1] [i_5 - 1] [i_10] [i_7] [6ULL] |= (((~(((/* implicit */int) arr_24 [i_6] [(_Bool)1] [i_10])))) | (max((((/* implicit */int) min((((/* implicit */short) var_4)), (arr_25 [i_5])))), ((+(((/* implicit */int) (unsigned short)65043)))))));
                        arr_39 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) max((((int) (_Bool)1)), (((/* implicit */int) var_10))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            arr_45 [i_5] [i_5] [i_5] [i_5 - 3] [(unsigned short)14] |= ((/* implicit */short) (~(((((((/* implicit */int) var_11)) + (2147483647))) << (((((/* implicit */int) var_5)) - (14)))))));
                            arr_46 [i_5] [i_5] [i_7] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_7] [i_12] [i_12] [i_6]);
                            arr_47 [(signed char)14] [i_6] [i_6] [i_6] [0LL] [i_6] |= ((/* implicit */signed char) ((long long int) (unsigned short)65058));
                        }
                        for (signed char i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_13] [(short)8] [i_7] [(short)8] [i_5]))) == (-4587236872001092007LL)));
                            var_27 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)34081)) + (((/* implicit */int) var_16))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (arr_28 [i_5] [i_5] [i_5])));
                            arr_51 [i_5] [i_5] [i_5] [i_5 - 2] [i_5] [i_5 - 2] = ((/* implicit */unsigned int) (-((-(arr_41 [i_5 + 1] [i_5] [i_5] [i_5])))));
                            arr_52 [i_5] [i_6] [i_7] [i_11] [i_5] = ((/* implicit */long long int) ((((330290878U) & (((/* implicit */unsigned int) -39175191)))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5 - 2] [i_5 - 2] [i_5])))));
                        }
                        for (signed char i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
                        {
                            var_29 |= ((/* implicit */int) 11U);
                            arr_56 [i_5] [i_6] [i_5] [i_11] [i_11] = ((/* implicit */unsigned short) ((((long long int) var_16)) != (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_5] [i_7] [i_7 + 2] [i_11] [i_14] [i_11] [i_14])))));
                            arr_57 [(unsigned char)10] [i_6] [(unsigned char)10] [i_11] [i_14] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) >= (((/* implicit */int) arr_54 [i_6] [i_6] [i_6] [i_7 + 2] [i_7] [i_7] [i_7 + 1]))));
                        }
                        arr_58 [i_5 - 2] [i_6] [i_7 + 2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 39175191)) || (((/* implicit */_Bool) (unsigned short)31449))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_15 = 0; i_15 < 19; i_15 += 1) 
    {
        arr_61 [i_15] = ((/* implicit */_Bool) var_1);
        /* LoopSeq 2 */
        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            var_30 = ((/* implicit */unsigned int) min((var_30), (330290883U)));
            arr_64 [i_15] = ((/* implicit */unsigned short) var_7);
        }
        for (int i_17 = 1; i_17 < 16; i_17 += 1) 
        {
            var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((4294967287U), (((/* implicit */unsigned int) arr_62 [i_17] [i_17] [i_15]))))) ? (((/* implicit */int) arr_67 [i_17])) : (max((((/* implicit */int) ((unsigned short) arr_59 [i_17]))), (((int) (short)-1))))));
            var_32 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) -2103579757)) : (1000045553U))));
        }
        var_33 = (-(((/* implicit */int) min((((unsigned char) var_15)), (arr_60 [i_15] [i_15])))));
        /* LoopNest 2 */
        for (signed char i_18 = 1; i_18 < 17; i_18 += 2) 
        {
            for (signed char i_19 = 0; i_19 < 19; i_19 += 2) 
            {
                {
                    var_34 = ((/* implicit */signed char) ((unsigned char) arr_72 [i_18 + 2] [i_18 - 1] [i_18 + 2] [i_18 - 1]));
                    var_35 ^= ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_11)))));
                    arr_74 [i_15] [i_18] [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((arr_73 [i_15] [i_18 + 1] [i_19] [i_19]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_19])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) var_1)))) != (min((((/* implicit */int) var_4)), (-2103579753))))))) : ((~(min((((/* implicit */unsigned int) (unsigned short)478)), (var_7)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 3; i_20 < 17; i_20 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (_Bool)1))));
                        arr_77 [i_15] [i_18] [i_15] [i_20] [(short)11] [(unsigned char)15] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_65 [i_18] [i_20])))) : (((unsigned int) var_9)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_73 [i_18 + 2] [i_18 + 2] [i_19] [i_20])) + (((/* implicit */int) arr_73 [i_18 + 2] [i_18 + 1] [i_19] [1LL])))))));
                    }
                    for (unsigned char i_21 = 3; i_21 < 17; i_21 += 2) /* same iter space */
                    {
                        arr_80 [i_21] [i_19] [i_18] = ((/* implicit */long long int) (short)29160);
                        var_37 |= ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_79 [i_21 + 2])))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [(unsigned short)9])) ? (((/* implicit */int) var_14)) : (39175191)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) arr_70 [i_18])) << (((((/* implicit */int) arr_60 [i_15] [i_15])) - (104)))))))));
                    }
                }
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (short)17542)) : (((/* implicit */int) (unsigned short)31455)))))) <= ((-((+(((/* implicit */int) (unsigned short)479)))))))))));
}
