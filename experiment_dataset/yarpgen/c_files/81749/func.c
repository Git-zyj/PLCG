/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81749
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) - ((-2147483647 - 1))))) == (((((/* implicit */long long int) ((/* implicit */int) (short)-22198))) + (arr_1 [i_0])))));
        var_12 = ((/* implicit */long long int) min((((/* implicit */int) (signed char)(-127 - 1))), (-1590574368)));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (((_Bool)0) ? (1590574367) : (((/* implicit */int) (unsigned short)16654)))))));
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_3]);
                        arr_11 [i_1] [i_1] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned int) arr_3 [i_1]);
                        var_14 = ((/* implicit */long long int) arr_3 [i_2]);
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_9 [i_1] [i_2])))), (((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2])))) % (((/* implicit */int) arr_2 [i_1])))))))));
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) % (arr_6 [i_1] [i_1]))) << (((((-1081285990) % (((/* implicit */int) (short)22198)))) + (21432))))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned int) ((signed char) arr_4 [i_2]));
        }
        for (long long int i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (signed char i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    {
                        var_18 += ((/* implicit */short) arr_14 [i_5] [i_5]);
                        arr_19 [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1084568366)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) min((var_19), (var_6)));
        }
        var_20 ^= ((((/* implicit */int) (unsigned char)61)) != (((/* implicit */int) (short)20566)));
        var_21 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1]))) + (((((/* implicit */_Bool) arr_15 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_1])))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_6 [i_1] [i_1])))))));
        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) var_5))))) & (min((((/* implicit */long long int) arr_14 [i_1] [i_1])), (arr_7 [i_1]))))) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))));
    }
    for (long long int i_8 = 3; i_8 < 22; i_8 += 2) 
    {
        arr_22 [i_8] [i_8] &= ((/* implicit */long long int) ((((((int) arr_21 [i_8])) / (((/* implicit */int) ((signed char) var_7))))) & (((((/* implicit */int) (short)-22198)) - (((/* implicit */int) (short)22198))))));
        /* LoopSeq 1 */
        for (long long int i_9 = 2; i_9 < 23; i_9 += 1) 
        {
            var_23 = ((/* implicit */signed char) ((((arr_23 [i_9]) - (((((/* implicit */_Bool) arr_20 [i_9])) ? (((/* implicit */long long int) arr_21 [i_8])) : (arr_23 [i_8]))))) * (((((/* implicit */long long int) arr_20 [i_9])) / (min((-5223250466053679961LL), (0LL)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_10 = 1; i_10 < 23; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_32 [i_8] [i_8] [i_9] [i_11] [i_11] [i_8] = (i_11 % 2 == zero) ? (((/* implicit */unsigned char) ((((var_0) + (2147483647))) << (((arr_31 [i_8] [i_9] [i_11] [i_10] [i_8] [i_11] [i_12]) - (490937205U)))))) : (((/* implicit */unsigned char) ((((var_0) + (2147483647))) << (((((arr_31 [i_8] [i_9] [i_11] [i_10] [i_8] [i_11] [i_12]) - (490937205U))) - (483531018U))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) (short)-12595)) >= (((((/* implicit */int) (short)16518)) & (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_8])) || (((/* implicit */_Bool) ((((arr_21 [i_10]) + (2147483647))) >> (((((/* implicit */int) arr_24 [i_8] [i_8] [i_8])) - (20281))))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) ((_Bool) (signed char)127));
                            arr_39 [i_8] [i_8] [i_8] [i_13] [i_8] [i_13] |= ((/* implicit */unsigned char) ((int) (short)22197));
                        }
                    } 
                } 
                arr_40 [i_8] [i_9] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)158)) ? (969430766) : (((/* implicit */int) (unsigned char)112))));
            }
            var_27 = ((/* implicit */long long int) var_0);
            var_28 |= ((/* implicit */short) ((((/* implicit */int) arr_34 [i_8] [i_8] [i_9] [i_9])) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (var_1)))) || (((/* implicit */_Bool) var_3)))))));
        }
    }
    var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6))))) >> (((((/* implicit */int) var_7)) - (130)))))), (((((7532595253424626487LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))) % (((/* implicit */long long int) ((/* implicit */int) (short)22197)))))));
    var_30 = ((/* implicit */unsigned int) ((int) max((((/* implicit */int) min(((short)22198), (((/* implicit */short) var_6))))), (max((151424868), (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            arr_46 [i_15] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_15] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_10)) : (((-1590574368) & ((-2147483647 - 1))))));
            arr_47 [i_15] &= ((/* implicit */long long int) arr_34 [i_15] [i_15] [i_15] [i_16]);
            arr_48 [i_15] = ((/* implicit */_Bool) arr_44 [i_15] [i_15]);
        }
        for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            arr_51 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) (+(((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)79)) || ((_Bool)1)))) * (((var_9) ? (((/* implicit */int) arr_28 [i_15] [i_15] [i_15] [i_17] [i_17])) : (((/* implicit */int) var_10))))))));
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_55 [i_17] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_15] [i_15] [i_18] [i_15]))) / (arr_45 [i_17])))))));
                /* LoopSeq 2 */
                for (long long int i_19 = 3; i_19 < 20; i_19 += 2) 
                {
                    arr_58 [i_19] = ((/* implicit */int) ((((long long int) ((((/* implicit */int) arr_28 [i_15] [i_17] [i_19] [i_15] [i_15])) * (((/* implicit */int) arr_41 [i_19]))))) != (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)176)) & (((/* implicit */int) (_Bool)0)))))));
                    var_31 = var_4;
                }
                for (unsigned short i_20 = 3; i_20 < 17; i_20 += 2) 
                {
                    var_32 = ((/* implicit */int) arr_27 [i_15]);
                    var_33 += ((/* implicit */int) ((((arr_37 [i_15] [i_17] [i_15] [i_20] [i_15]) * (((unsigned int) arr_34 [i_15] [i_15] [i_15] [i_15])))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_53 [i_15] [i_17] [i_15]) != (((/* implicit */int) var_4))))))));
                    var_34 = ((/* implicit */_Bool) ((((((((arr_52 [i_17] [i_17]) ? (arr_21 [i_15]) : (arr_29 [i_15] [i_17] [i_18] [i_20] [i_20]))) / ((+(((/* implicit */int) arr_52 [i_17] [i_20])))))) + (2147483647))) << (((min((((/* implicit */int) var_7)), (((((/* implicit */int) arr_38 [i_20] [i_15] [i_15] [i_15] [i_20])) + (((/* implicit */int) var_6)))))) - (155)))));
                    arr_62 [i_18] [i_18] [i_18] [i_20] [i_18] = ((/* implicit */short) (+(((/* implicit */int) ((short) var_9)))));
                    arr_63 [i_20] [i_17] [i_17] = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) arr_29 [i_15] [i_15] [i_15] [i_15] [i_20]))), ((-(arr_53 [i_20] [i_18] [i_15])))));
                }
            }
        }
        for (long long int i_21 = 1; i_21 < 18; i_21 += 2) 
        {
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_43 [i_21]))));
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (((+(((/* implicit */int) var_2)))) + (((/* implicit */int) ((((/* implicit */long long int) ((arr_29 [i_15] [i_15] [i_15] [i_15] [i_15]) >> (((arr_25 [i_15]) + (8942236747077427119LL)))))) <= (((long long int) arr_56 [i_21] [i_15] [i_15]))))))))));
            /* LoopSeq 2 */
            for (int i_22 = 0; i_22 < 21; i_22 += 4) 
            {
                var_37 = ((/* implicit */long long int) ((unsigned short) ((long long int) 2147483647)));
                var_38 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)177)) && (((/* implicit */_Bool) (unsigned char)84))))) + (arr_54 [i_15] [i_15] [i_15] [i_15])));
                arr_69 [i_15] [i_15] [i_15] [i_15] = ((((/* implicit */long long int) (+(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_4)))))))) + (arr_43 [i_21]));
            }
            for (long long int i_23 = 0; i_23 < 21; i_23 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_24 = 3; i_24 < 20; i_24 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_25 = 0; i_25 < 21; i_25 += 2) 
                    {
                        var_39 *= var_9;
                        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_7))))))));
                        arr_76 [i_15] [i_21] [i_23] [i_23] [i_25] &= ((/* implicit */long long int) ((int) arr_61 [i_15]));
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) arr_68 [i_21] [i_21] [i_21]))));
                        var_42 = ((/* implicit */long long int) min((var_42), (((((((/* implicit */long long int) 1037313237)) + (-1LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_15] [i_21] [i_15])) ? (((/* implicit */int) arr_49 [i_21])) : (((/* implicit */int) var_10)))))))));
                    }
                    for (unsigned char i_26 = 2; i_26 < 20; i_26 += 2) 
                    {
                        arr_79 [i_15] [i_24] = ((/* implicit */short) min((((/* implicit */long long int) (((~(arr_70 [i_15] [i_21]))) < (((/* implicit */int) var_4))))), (((min((var_10), (var_9))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        var_43 |= ((/* implicit */short) (((-(2674863551808242158LL))) - (((/* implicit */long long int) var_0))));
                        arr_80 [i_15] [i_15] [i_24] = ((((long long int) ((arr_66 [i_26] [i_26] [i_26]) >= (((/* implicit */long long int) arr_20 [i_15]))))) % (((/* implicit */long long int) ((arr_21 [i_15]) / (((/* implicit */int) arr_35 [i_15] [i_15] [i_15] [i_15]))))));
                    }
                    arr_81 [i_15] [i_15] [i_15] [i_23] [i_15] |= min((((((long long int) arr_78 [i_23] [i_15] [i_21] [i_15] [i_23] [i_24])) - (((/* implicit */long long int) ((/* implicit */int) min(((signed char)49), ((signed char)106))))))), (((/* implicit */long long int) ((arr_57 [i_23]) == (((/* implicit */unsigned int) 1686492349))))));
                }
                /* vectorizable */
                for (int i_27 = 2; i_27 < 19; i_27 += 4) 
                {
                    var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) arr_67 [i_21] [i_21]))));
                    arr_84 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_50 [i_15])) ^ (((/* implicit */int) arr_56 [i_15] [i_15] [i_15])))));
                    arr_85 [i_15] [i_15] [i_15] [i_27] = ((/* implicit */unsigned int) arr_66 [i_27] [i_27] [i_27]);
                }
                for (signed char i_28 = 0; i_28 < 21; i_28 += 1) 
                {
                    var_45 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) ((100380125) % (-2058940634))))), (((-1LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)49)) <= (1147909917)))))))));
                    arr_89 [i_15] [i_21] [i_15] [i_23] [i_28] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_68 [i_15] [i_21] [i_23])) ? (((arr_74 [i_15] [i_23] [i_23] [i_23] [i_23]) & (((/* implicit */int) var_10)))) : (((/* implicit */int) var_2)))) * (((/* implicit */int) arr_28 [i_15] [i_21] [i_23] [i_15] [i_21]))));
                    var_46 = ((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-22197)));
                }
                var_47 = ((/* implicit */unsigned char) arr_88 [i_15] [i_23] [i_21] [i_21] [i_15] [i_15]);
                var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) (((_Bool)0) ? (2801423201837283632LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
            }
        }
        arr_90 [i_15] [i_15] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-22198))));
        var_49 = ((/* implicit */short) min((((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_36 [i_15] [i_15] [i_15] [i_15])) && (((/* implicit */_Bool) var_3))))))), (((((/* implicit */_Bool) -1048156299843089785LL)) ? (-6522188996598235104LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)70)))))));
        arr_91 [i_15] [i_15] = ((/* implicit */int) var_4);
        arr_92 [i_15] = ((((/* implicit */int) arr_61 [i_15])) + (((/* implicit */int) var_6)));
    }
}
