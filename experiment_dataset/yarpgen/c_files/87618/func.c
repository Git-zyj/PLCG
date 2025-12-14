/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87618
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((min((arr_1 [i_0 + 1]), ((!(((/* implicit */_Bool) arr_0 [i_0])))))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0 + 1]))) : (((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_2 [(_Bool)1] = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) (+((((((~(((/* implicit */int) (unsigned char)28)))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)56975)) - (56950)))))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_12 |= ((/* implicit */unsigned short) arr_6 [i_1 + 3]);
        arr_8 [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
        var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (783939212) : (((/* implicit */int) (_Bool)0))))));
    }
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) var_0))), ((+(arr_10 [i_2] [i_2])))))) ? (((/* implicit */int) max((arr_5 [i_2 - 1]), (arr_5 [i_2 + 1])))) : (((/* implicit */int) arr_7 [i_2] [i_2]))));
        var_15 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (((((unsigned int) arr_6 [i_2])) << (((/* implicit */int) ((_Bool) var_2)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_2]))))), (arr_7 [i_2 + 1] [i_2 + 2]))))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_16 -= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2 + 2] [i_3]))))) ? (min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))) != (var_4)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) 2345374436U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)8551)))));
            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)181))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                for (unsigned short i_5 = 4; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [17LL])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2719063566U))))) ? ((+(((((/* implicit */int) arr_12 [i_3])) << (((((/* implicit */int) (unsigned char)238)) - (207))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_3] [i_3] [i_4] [i_3] [i_3] [i_2])) + (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_13 [i_3] [i_3])), ((unsigned short)62565)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 2) 
                        {
                            var_19 += ((/* implicit */unsigned int) arr_7 [i_3] [i_5]);
                            arr_25 [i_6] [i_5 - 3] [i_2] [i_4] [i_2] [i_2] [15LL] = ((((/* implicit */_Bool) ((int) arr_18 [i_2 + 2] [i_3] [i_4] [i_6]))) ? (((((/* implicit */_Bool) var_0)) ? (arr_22 [i_2] [i_2] [i_3] [9U] [i_5] [i_6]) : (arr_17 [i_2] [i_2] [i_2] [i_6]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) var_3))))));
                            arr_26 [i_2 + 1] [i_3] [i_2] [20ULL] [i_5] [i_6] [(unsigned short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_7 [i_2 + 2] [i_2])) : (((/* implicit */int) arr_19 [(unsigned char)3] [i_6 - 1] [i_2 - 1] [i_6 + 2] [i_2 - 1] [(signed char)3]))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_7 = 4; i_7 < 20; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_7] [i_2] [i_5 - 2] [i_2] [i_2]))) < (arr_22 [i_2] [i_2] [i_3] [i_3] [i_2] [i_3])))))));
                            var_21 ^= ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) 3104898315U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3]))))), (((/* implicit */unsigned int) arr_9 [i_3])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) arr_20 [i_2] [i_5] [i_4] [i_2] [i_2 - 1] [(_Bool)1])))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) >= (var_7))))))))));
                        }
                        var_22 = ((/* implicit */unsigned char) (+(((long long int) ((unsigned char) arr_17 [(unsigned char)13] [i_3] [i_2] [(unsigned char)13])))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_21 [(unsigned short)10]), (((/* implicit */long long int) arr_5 [i_8]))))) ? (((/* implicit */int) arr_5 [i_2 + 3])) : (((((/* implicit */int) (unsigned char)193)) << (((arr_17 [i_2] [i_2 - 1] [i_3] [i_2]) - (1636295107U)))))))) > (min(((+(var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [(unsigned char)11])))))))));
                arr_31 [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_21 [9U]);
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((_Bool) min((arr_10 [i_2 + 3] [(signed char)6]), (arr_10 [i_2 + 2] [i_2 + 2])))))));
                arr_32 [i_2] [i_3] [i_2] [i_8] = arr_20 [i_2] [i_3] [9U] [i_2] [i_8] [i_3];
            }
            for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_10 [i_3] [i_2]))));
                var_26 = ((/* implicit */long long int) ((unsigned int) (+((~(0U))))));
                var_27 = ((/* implicit */int) arr_18 [i_2 + 3] [i_2 + 3] [i_9] [i_9]);
                var_28 += ((/* implicit */unsigned char) ((((arr_27 [14U] [i_3]) ? (max((((/* implicit */long long int) arr_34 [(unsigned short)17] [(unsigned short)15])), (var_0))) : (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_2] [10U] [(unsigned char)5] [(unsigned char)8] [i_9] [(_Bool)1])) | (((/* implicit */int) arr_5 [i_3]))))))) <= (((/* implicit */long long int) ((arr_30 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_9])) || (((/* implicit */_Bool) arr_33 [(unsigned char)11] [i_3] [i_3] [i_3])))))))))));
                arr_35 [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_18 [i_2] [i_2] [i_2] [i_9])))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1076649915)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)61)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9])))))))) : (((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_2] [i_9])) ? (arr_23 [i_2] [i_2] [i_3] [i_9]) : (arr_23 [i_2] [i_3] [i_3] [i_2])))));
            }
        }
        for (unsigned int i_10 = 2; i_10 < 19; i_10 += 2) 
        {
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) arr_37 [i_10] [i_2] [i_2])) ? (arr_30 [(signed char)13] [i_2] [i_2] [i_10]) : (arr_24 [i_2] [(_Bool)1] [i_2 - 1] [i_10] [i_10]))))))))));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_10 - 2] [i_2]))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2 + 1])) ? (((/* implicit */long long int) ((arr_10 [i_2] [i_2]) << (((arr_30 [i_10] [i_10] [i_10] [i_2 + 1]) - (737177789U)))))) : (max((((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2] [i_2])), (var_0))))) : (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_16 [i_2] [i_2] [i_10])))) | (((/* implicit */int) ((9) == (((/* implicit */int) (unsigned char)138))))))))));
            arr_38 [i_2 + 3] [i_2] = ((/* implicit */_Bool) (-(min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_12 [i_2 - 1]))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_45 [i_13] [i_2] [i_11] [i_2] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_2] [i_2 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_16 [i_2] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_16 [i_2] [i_2 + 2] [i_11])))), (((((/* implicit */int) arr_16 [i_2] [i_2 - 1] [i_2 - 1])) + (((/* implicit */int) arr_16 [i_2] [i_2 - 1] [i_13]))))));
                            arr_46 [i_2 + 1] [i_10] [i_11] [i_12] [i_10] [i_10] [i_13] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_44 [i_2 + 3] [i_10 - 1])) ? (((/* implicit */int) arr_44 [i_2 + 1] [i_10 - 2])) : (((/* implicit */int) arr_44 [i_2 + 2] [i_10 + 1]))))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_22 [i_11] [i_10] [i_10] [i_12] [i_10] [i_10])), (max((arr_36 [i_10 + 1] [i_11]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_10] [i_10] [i_11]))) : (arr_17 [i_2] [i_2] [i_10] [i_2])))))))))));
                            var_32 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(unsigned char)19])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_11] [i_2] [i_13]))))) : ((-(arr_6 [i_2]))))), (arr_34 [i_12] [i_13])));
                        }
                        var_33 *= ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_30 [i_2] [12] [12] [i_2])) ? (((/* implicit */long long int) arr_17 [i_10] [i_10] [i_10] [i_10])) : (var_7))), (((/* implicit */long long int) arr_6 [i_2 + 1])))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((_Bool) arr_42 [i_10] [i_10] [i_10] [i_12])))))));
                        var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) arr_15 [i_2 + 2] [i_10] [i_2 - 1])) : (((((/* implicit */_Bool) arr_21 [i_2])) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) arr_43 [i_10] [i_10] [(_Bool)1] [i_12] [0ULL] [i_10] [(_Bool)1]))))))) || (arr_12 [i_2 - 1])));
                    }
                } 
            } 
        }
        for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            arr_49 [i_2] = ((/* implicit */unsigned short) (+(((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_2] [(_Bool)1] [(_Bool)1] [i_14]))) : (arr_30 [(unsigned char)18] [i_14] [i_2] [i_2]))))));
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    {
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_2] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (133169152)))) ? (((long long int) arr_47 [i_2] [i_2 - 1])) : (((/* implicit */long long int) ((/* implicit */int) max((arr_42 [i_16] [i_14] [i_14] [i_14]), (((/* implicit */unsigned short) var_9)))))))))))));
                        arr_54 [i_2] [i_14] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_2] [i_2] [i_2 - 1])) + (((/* implicit */int) arr_37 [i_2] [i_2] [i_2 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_2 + 2] [i_2 + 3])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_39 [i_2 + 2] [i_14] [(unsigned char)19] [i_16]))))) : (min((var_8), (((unsigned int) (unsigned short)40313))))));
                    }
                } 
            } 
        }
    }
    var_36 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
    {
        var_37 |= ((/* implicit */unsigned int) ((long long int) arr_36 [i_17] [i_17]));
        /* LoopSeq 1 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_61 [(unsigned char)5] &= ((/* implicit */unsigned int) arr_7 [i_17] [i_18]);
            var_38 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_18])) ? (((/* implicit */int) arr_5 [i_17])) : (((/* implicit */int) arr_5 [i_17]))));
        }
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            for (unsigned char i_20 = 3; i_20 < 6; i_20 += 2) 
            {
                {
                    var_39 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) 1076649914)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_21 = 0; i_21 < 10; i_21 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned int) ((arr_50 [i_17] [i_19] [i_20 + 4]) != (arr_50 [i_21] [i_19] [i_19])));
                        /* LoopSeq 2 */
                        for (unsigned char i_22 = 0; i_22 < 10; i_22 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_51 [i_20] [i_20] [i_20 - 1]))));
                            var_42 += ((/* implicit */long long int) (~(((/* implicit */int) arr_51 [i_17] [(unsigned short)18] [i_20 + 1]))));
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            arr_74 [i_21] [i_19] [(_Bool)1] [i_20] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_6))) - ((-(((/* implicit */int) (unsigned char)96))))));
                            arr_75 [i_17] [i_17] [i_20] = ((/* implicit */unsigned int) arr_42 [i_20] [i_19] [i_20] [i_19]);
                            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_20 - 2] [i_20 - 1] [i_20 - 1])) ? (arr_28 [i_20 - 2] [i_20 - 1] [i_20 + 3]) : (arr_28 [i_20 + 4] [i_20 + 1] [i_20 + 3])));
                        }
                    }
                    var_44 = ((/* implicit */unsigned char) arr_63 [i_17] [i_19] [i_20]);
                    /* LoopNest 2 */
                    for (int i_24 = 4; i_24 < 7; i_24 += 3) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 10; i_25 += 1) 
                        {
                            {
                                var_45 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_77 [i_17] [(unsigned short)5] [i_24 + 1] [i_25] [7U]))));
                                var_46 ^= ((/* implicit */int) (unsigned char)48);
                                arr_82 [i_20] = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
