/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56339
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (5362802288890838970LL)));
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_2] [i_2] [i_1 - 2] [i_1 - 2] [i_0 - 1])) ? (((/* implicit */int) ((signed char) -5362802288890838973LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1152721063)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)(-127 - 1))))) : (((unsigned int) (signed char)66))));
                        arr_9 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) (+(arr_1 [i_0] [i_3])));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-56)) ? (-5362802288890838973LL) : (((/* implicit */long long int) 603719087))));
                    }
                } 
            } 
            var_17 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) (short)-7745)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (-2603917556563484996LL))) << (((arr_4 [i_0]) % (((/* implicit */int) (signed char)-61)))))), (((-5362802288890838973LL) % (((/* implicit */long long int) arr_3 [i_1 - 2] [i_1 + 1]))))));
        }
        var_18 = ((/* implicit */unsigned short) (signed char)-1);
        var_19 = arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0];
        var_20 = ((/* implicit */unsigned long long int) min((var_20), ((((+(((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) - (((((/* implicit */_Bool) arr_3 [i_0 - 1] [7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(unsigned char)1] [i_0] [(unsigned char)1] [i_0] [i_0] [(unsigned char)1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) : (arr_4 [i_0])))) : (((((/* implicit */_Bool) (signed char)-56)) ? (11349287465591331997ULL) : (504403158265495552ULL)))))))));
    }
    for (signed char i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 8; i_8 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((-1526044257) + (2147483647))) >> (((((/* implicit */int) (signed char)56)) - (49)))))))) % (arr_1 [i_4] [i_4])));
                                arr_24 [i_8] [i_5] [i_4 - 1] [i_4 - 1] [i_6] [i_7] [i_4 - 1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_16 [i_8])) ? ((((_Bool)0) ? (2292959740480006138LL) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) (-(arr_8 [i_4] [(unsigned short)12] [i_6] [i_7] [i_8] [i_7]))))))));
                            }
                        } 
                    } 
                    arr_25 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_5] [i_5] [i_5] [i_6])) ? (((/* implicit */long long int) arr_3 [i_4] [i_4 + 3])) : (-5362802288890838970LL))))));
                    var_22 = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) 0U)) / (5362802288890838973LL))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 1; i_9 < 8; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((417925831) >> (((((((/* implicit */int) var_2)) << (((/* implicit */int) arr_5 [i_9])))) - (96)))))) ? (((((/* implicit */_Bool) 2315230042U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) : (322632127U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_4 + 3] [i_5] [i_5] [i_5] [i_4 + 3])))));
                        var_24 *= ((/* implicit */signed char) ((unsigned short) 5362802288890838970LL));
                        arr_29 [i_9] [i_6] [i_5] [i_4] [i_4] [i_4] = ((/* implicit */int) var_1);
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4 - 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            var_26 *= ((/* implicit */short) 1450778876U);
            var_27 = ((/* implicit */signed char) ((arr_1 [i_4] [i_10]) > (((/* implicit */unsigned long long int) ((int) arr_22 [i_4] [i_10] [i_4] [i_10] [i_10])))));
            var_28 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (signed char)57)))));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 7; i_11 += 4) 
            {
                for (unsigned char i_12 = 1; i_12 < 7; i_12 += 4) 
                {
                    {
                        var_29 = ((((/* implicit */_Bool) arr_18 [i_4 + 3])) ? (arr_31 [i_10] [i_11 + 3]) : (((/* implicit */int) arr_38 [i_4 - 1] [(unsigned char)8] [i_4 - 1] [(unsigned char)8])));
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_28 [i_4] [i_11 + 1] [i_10] [i_4]) : (((/* implicit */int) (signed char)124)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                for (int i_14 = 2; i_14 < 8; i_14 += 1) 
                {
                    {
                        arr_43 [i_4] [7] [i_10] [i_13] [i_14] [i_14] = ((/* implicit */unsigned long long int) (+(arr_8 [i_4 + 2] [i_14 - 2] [i_14 + 1] [i_4 + 2] [i_4 + 1] [i_4])));
                        arr_44 [i_4 - 1] [i_10] = ((/* implicit */int) arr_7 [i_13] [i_13] [i_14 + 2] [i_14 - 2] [i_14 + 3] [i_13]);
                    }
                } 
            } 
        }
        arr_45 [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */long long int) ((((arr_28 [i_4] [i_4] [i_4 + 1] [i_4]) + (2147483647))) << (((var_7) - (3257803197U)))))) : (min((arr_22 [i_4] [i_4] [i_4] [i_4] [i_4 - 1]), (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4])))))))));
    }
    for (long long int i_15 = 1; i_15 < 9; i_15 += 4) 
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((arr_3 [i_15] [i_15]) + (((/* implicit */int) arr_2 [i_15] [i_15 + 2]))))))) ? (min(((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_15]))))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        var_32 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_23 [i_15] [i_15] [i_15] [i_15] [i_15 - 1] [i_15 + 2]))))), (((signed char) (unsigned short)54609)))));
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 9; i_16 += 2) 
        {
            for (long long int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        for (int i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */int) var_3);
                                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_17] [i_17] [i_15])) ? (((long long int) arr_23 [i_15 + 2] [i_15 + 2] [i_17] [i_18] [i_17] [i_15])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_15])) ? (((/* implicit */unsigned int) -700415468)) : (0U))))))) ? ((+(((arr_8 [i_15] [i_16] [i_17] [i_18] [i_19] [(unsigned short)10]) >> (((((/* implicit */int) arr_19 [i_15] [i_15] [i_15])) - (14507))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_15 - 1] [i_16 + 2] [i_18] [i_16 + 2])) ? (((/* implicit */int) min((var_12), (arr_42 [i_15] [i_15] [i_17] [i_19])))) : (-1)))))))));
                                var_35 = ((/* implicit */unsigned int) min((var_35), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_16] [i_18]))) : (var_7))) + (((/* implicit */unsigned int) ((int) (unsigned short)54898)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_19] [i_18] [i_18] [i_15] [(unsigned char)10] [i_15])) ? (var_9) : (((/* implicit */unsigned int) var_5))))))) : (((unsigned int) ((((/* implicit */_Bool) 2844188420U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_15] [i_15 + 2] [i_15] [i_15]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 4) 
                    {
                        for (int i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            {
                                var_36 |= ((/* implicit */unsigned char) -2147483644);
                                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3194559750U)) ? (((/* implicit */int) ((unsigned char) arr_54 [i_15] [i_16] [i_17] [i_17]))) : ((+(((/* implicit */int) arr_7 [i_15] [i_15 + 1] [i_16] [i_17] [i_20] [i_21]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_22 = 0; i_22 < 11; i_22 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) arr_7 [i_15] [i_15] [i_17] [i_17] [i_22] [i_22]);
                        /* LoopSeq 1 */
                        for (unsigned short i_23 = 1; i_23 < 10; i_23 += 2) 
                        {
                            var_39 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((arr_36 [i_23] [(unsigned char)1] [i_17] [1]) + (2147483647))) >> (((arr_22 [i_15 + 1] [i_16 + 1] [i_17] [i_22] [i_23]) + (4987167723783005294LL))))) : (((/* implicit */int) arr_61 [i_23] [i_17] [i_23] [i_23] [i_23] [i_23 - 1]))));
                            var_40 = ((/* implicit */unsigned char) var_8);
                            var_41 = ((/* implicit */unsigned int) (+(arr_63 [i_17] [i_22] [i_22])));
                            arr_69 [i_15] [i_15] [i_15] [i_15] [i_15 - 1] [(unsigned char)8] [i_15] = ((/* implicit */unsigned short) (~(arr_36 [i_16 - 1] [i_22] [i_22] [i_22])));
                        }
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (long long int i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
                    {
                        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((arr_30 [i_16 - 1] [i_16 + 2] [i_15 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11377))))))));
                        var_44 = ((/* implicit */unsigned char) ((unsigned short) 934531121));
                    }
                }
            } 
        } 
    }
    var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */_Bool) 678902492158019201ULL)) ? (((((/* implicit */int) ((unsigned char) var_5))) >> (((664105611U) - (664105611U))))) : (((/* implicit */int) (signed char)-106)))))));
    var_46 += ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24038)) ? (var_4) : (1308975375)))) ? (((((/* implicit */_Bool) 0ULL)) ? (var_4) : (((/* implicit */int) var_3)))) : (((var_0) - (var_5)))))) : (5362802288890838970LL)));
}
