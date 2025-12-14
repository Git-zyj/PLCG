/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64185
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
    var_17 = ((/* implicit */signed char) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 -= ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (short)16970))) + (-741556044470879080LL))), (((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_1 [(unsigned char)18])) + (((/* implicit */int) (unsigned short)36089))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)24));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (unsigned short)22366);
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 4; i_4 < 17; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 15; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_24 [i_3] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (unsigned char)46);
                                var_20 = ((/* implicit */unsigned char) (short)3416);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_8 = 3; i_8 < 17; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 3; i_9 < 17; i_9 += 2) 
                        {
                            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) -628644874)) ? ((-(var_9))) : (((var_15) ^ (((/* implicit */int) arr_1 [(unsigned short)16]))))));
                            arr_31 [i_8] [i_4] [i_5] [i_8] [i_9 - 1] = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_11 [i_3] [i_4 - 4])) : (((/* implicit */int) arr_3 [i_9 - 3])));
                            var_22 = ((/* implicit */_Bool) (+(11609214828853250627ULL)));
                        }
                        for (unsigned long long int i_10 = 4; i_10 < 18; i_10 += 2) 
                        {
                            var_23 ^= ((/* implicit */short) var_11);
                            arr_34 [i_3] [i_8] [12] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((arr_17 [i_4 + 1] [i_8] [i_10]) & (((/* implicit */long long int) -1))));
                            arr_35 [i_3] [i_10] [i_10] [(short)6] [18LL] [i_8] [i_10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) -25203575718307011LL)) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) arr_0 [i_5 - 2] [i_8 - 3]))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_4] [i_8 - 2]) | (((/* implicit */unsigned long long int) -622579849))))) ? (((/* implicit */long long int) arr_8 [i_10 - 2] [i_4 - 4])) : (arr_17 [i_4 + 1] [i_5] [i_8 + 1])));
                        }
                        var_25 = ((/* implicit */unsigned long long int) arr_33 [i_3] [i_4 + 1] [i_5 + 3]);
                        var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1866947327)) ? (var_15) : (var_15)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 2; i_11 < 16; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((arr_13 [i_4 - 3] [i_5 - 1] [i_11 + 1]) / (arr_13 [i_4 - 4] [i_5 + 2] [i_11 + 2])));
                        /* LoopSeq 4 */
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            var_28 *= ((/* implicit */unsigned long long int) (!(arr_2 [i_11 + 1] [i_11])));
                            var_29 = ((/* implicit */unsigned char) 2040606747789914416ULL);
                        }
                        for (short i_13 = 2; i_13 < 18; i_13 += 2) 
                        {
                            arr_43 [i_3] [i_4] [4ULL] [i_11] [i_11] [i_11] [(_Bool)1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (var_15))));
                            var_30 = ((/* implicit */unsigned int) ((arr_17 [i_4 - 3] [i_5 + 3] [i_11 - 2]) ^ (5697907325706548891LL)));
                        }
                        for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_5 + 3] [i_14 - 1])) * (((/* implicit */int) (_Bool)1))));
                            arr_46 [i_4 + 2] [i_11] [i_11] [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)61201))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            var_32 ^= ((/* implicit */short) 7826100877224625638ULL);
                            arr_49 [i_3] [(short)6] [i_3] [i_11] [i_3] = ((int) (unsigned short)61216);
                            arr_50 [i_3] [i_4] [i_11] [i_15] = ((/* implicit */signed char) arr_42 [(unsigned short)12] [(unsigned short)12] [8]);
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((unsigned long long int) 6391334127408502783ULL)))));
                            arr_51 [i_3] [i_11] [i_5] [i_11] [i_15] [i_4] [i_11] = ((/* implicit */int) (unsigned short)42475);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) min((((((/* implicit */_Bool) -20LL)) ? (9005841973857786111LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_9 [(short)14] [(short)14])))))));
                                var_35 |= ((/* implicit */unsigned int) arr_5 [i_4] [i_16]);
                                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_10))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_37 *= ((/* implicit */unsigned char) min((2147483647), (((/* implicit */int) (short)-9558))));
                    /* LoopSeq 1 */
                    for (signed char i_18 = 3; i_18 < 18; i_18 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            arr_61 [(unsigned char)6] [i_4] [(_Bool)1] [(_Bool)1] [i_19] = ((/* implicit */int) max((((/* implicit */unsigned short) min(((short)26997), ((short)15805)))), ((unsigned short)61182)));
                            arr_62 [i_3] [i_3] [i_19] [i_18] [i_19] [i_19] = ((min((((/* implicit */unsigned long long int) min((arr_41 [i_19] [i_19] [6LL] [i_19] [i_19] [10]), (((/* implicit */int) arr_44 [i_4] [i_19]))))), ((-(463904353252653247ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))));
                        }
                        var_38 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_23 [i_4] [i_4] [i_4 - 4] [i_4] [i_4] [i_4] [i_4])), (((((/* implicit */_Bool) ((-3065046844611882266LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_18 + 1])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (4294967295U)))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_20 = 3; i_20 < 18; i_20 += 2) 
        {
            for (signed char i_21 = 1; i_21 < 18; i_21 += 2) 
            {
                {
                    arr_67 [(unsigned char)12] [(_Bool)1] [i_20 - 1] [i_3] = ((/* implicit */int) ((short) ((unsigned int) ((arr_13 [i_3] [i_3] [i_3]) == (var_15)))));
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (-(arr_58 [i_3] [i_20] [i_3] [i_21] [i_21 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_22 = 3; i_22 < 17; i_22 += 2) 
                    {
                        for (short i_23 = 2; i_23 < 18; i_23 += 2) 
                        {
                            {
                                arr_73 [i_3] [i_3] [i_20 - 1] [i_21] [i_21] [8] [i_21] = ((/* implicit */long long int) var_10);
                                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((max((((unsigned long long int) (short)1029)), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-32402)), (-628644874)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                                var_41 -= ((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), ((short)-15826)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_24 = 0; i_24 < 18; i_24 += 2) 
    {
        var_42 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 3707833746254182602LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)82))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -20LL)) ? (((/* implicit */int) arr_0 [i_24] [i_24])) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (arr_22 [i_24] [i_24] [i_24] [i_24] [i_24])))));
        arr_77 [i_24] [i_24] = ((/* implicit */signed char) arr_26 [i_24] [i_24] [i_24] [i_24]);
        var_43 = ((((/* implicit */_Bool) min((arr_45 [i_24] [i_24] [i_24] [i_24] [i_24]), (((/* implicit */short) (_Bool)1))))) ? ((-(((/* implicit */int) arr_45 [i_24] [i_24] [i_24] [i_24] [i_24])))) : ((~(((/* implicit */int) arr_45 [i_24] [i_24] [(short)4] [i_24] [i_24])))));
        arr_78 [10] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1283899845)) ? (((/* implicit */int) (short)-15796)) : (-208798753)));
    }
    for (unsigned char i_25 = 0; i_25 < 24; i_25 += 2) 
    {
        var_44 += ((/* implicit */_Bool) max((min((arr_81 [i_25]), (var_5))), (((/* implicit */int) min((arr_80 [i_25]), (((/* implicit */unsigned char) (signed char)24)))))));
        var_45 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
        var_46 += ((/* implicit */signed char) (unsigned char)0);
        arr_82 [i_25] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13)))) <= (min((((/* implicit */long long int) ((int) 5ULL))), (-1825598230706080921LL)))));
        var_47 -= ((/* implicit */short) ((unsigned int) (_Bool)1));
    }
}
