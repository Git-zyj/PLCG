/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89596
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_12 -= ((/* implicit */long long int) (unsigned short)30);
                            var_13 = ((long long int) (short)-19637);
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_8)))) ? (min((18446744073709551606ULL), (((/* implicit */unsigned long long int) (unsigned short)65505)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65484)) * (((/* implicit */int) var_11))))))) | (((/* implicit */unsigned long long int) var_8))));
                            var_14 = ((/* implicit */_Bool) (signed char)56);
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_4))));
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) min((((short) max((7939201898122989082ULL), (((/* implicit */unsigned long long int) (short)-19630))))), (((/* implicit */short) ((11124444340928154822ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (unsigned char)12))))))))));
        var_17 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_16 [i_4]), ((-(arr_16 [i_4]))))))));
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_18 [i_5])), (var_4))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))))))) % (max((((/* implicit */unsigned int) ((short) (signed char)-48))), ((((_Bool)1) ? (5248055U) : (17U))))))))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_29 [i_5] [i_7] [i_5] [i_5] = ((unsigned long long int) min((arr_18 [i_7]), (arr_18 [i_5])));
                        arr_30 [i_5] [i_7] [i_5] [i_5] = var_6;
                        var_19 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)255));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 2) 
    {
        var_20 = ((((unsigned long long int) arr_28 [i_9 + 2] [i_9 + 1])) / (arr_28 [i_9 + 2] [i_9 + 1]));
        arr_34 [i_9] [i_9] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (short)19612)) / (((/* implicit */int) arr_17 [i_9 + 1])))));
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        var_21 += ((/* implicit */short) max((arr_16 [i_10]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) -525223300)) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) > (var_10))))) : (max((arr_18 [i_10]), (((/* implicit */long long int) arr_15 [i_10]))))))));
        var_22 = ((/* implicit */signed char) min(((unsigned short)65296), (((/* implicit */unsigned short) (_Bool)1))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_10])) ? (((/* implicit */long long int) arr_10 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (arr_4 [i_10] [i_10])))) ? (max((((/* implicit */int) (_Bool)1)), (var_8))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_22 [i_10])) : (((/* implicit */int) var_1))))));
        var_24 ^= ((/* implicit */unsigned char) arr_28 [(unsigned char)16] [i_10]);
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 12; i_13 += 2) 
                {
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)29221)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_12] [i_11] [i_10])) ? (arr_25 [i_10] [i_11] [i_12]) : (arr_25 [i_13] [i_12] [(short)13]))))));
                        var_26 = (-(((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) 3121464449U))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)62))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_11]))) : (arr_18 [i_13])));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 23; i_14 += 3) 
    {
        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2216615441596416ULL))))));
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((unsigned int) arr_46 [i_14])))));
        arr_49 [i_14] = ((/* implicit */unsigned char) (_Bool)1);
        var_30 = ((/* implicit */unsigned int) ((15597208313595626931ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5)))));
        /* LoopSeq 4 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)1))));
            arr_52 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)235)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185)))));
            var_32 = (~(((arr_47 [i_15]) << (((var_10) - (17102937515086952363ULL))))));
            var_33 = ((/* implicit */unsigned short) ((int) var_8));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */int) (unsigned short)65305);
            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((unsigned char) (unsigned char)233)))));
            /* LoopSeq 2 */
            for (signed char i_17 = 2; i_17 < 21; i_17 += 1) 
            {
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_54 [i_14] [i_17] [i_17 - 2]))));
                arr_58 [(signed char)19] [i_16] [i_16] [(short)1] = ((/* implicit */long long int) var_6);
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_65 [i_16] [(unsigned short)18] [i_18] [10ULL] [i_16] [i_14] [i_16] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_60 [i_18] [11ULL] [11ULL] [11ULL])))));
                            var_37 += ((/* implicit */signed char) (-(((unsigned long long int) arr_46 [i_18]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 1; i_20 < 21; i_20 += 4) 
                {
                    arr_68 [(unsigned char)0] &= ((/* implicit */unsigned short) ((arr_61 [0ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) : (arr_54 [i_17 + 2] [i_17 + 2] [i_20 + 2])));
                    /* LoopSeq 2 */
                    for (short i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        arr_72 [i_16] [i_16] [i_16] [(signed char)21] [2U] [(signed char)18] = ((/* implicit */unsigned short) arr_55 [i_17 + 2] [i_16]);
                        var_38 = ((/* implicit */short) var_10);
                    }
                    for (unsigned short i_22 = 1; i_22 < 22; i_22 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_64 [i_17] [(short)11] [i_17] [i_16] [i_17 + 1] [(unsigned char)13] [i_17])) ^ (((/* implicit */int) arr_64 [i_17] [i_17] [i_17] [i_16] [i_17 - 1] [i_17] [i_17]))));
                        var_40 = ((((/* implicit */_Bool) 3739592673390965112LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_14] [i_20 - 1] [(unsigned short)11] [i_20]))) : (var_9));
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (unsigned char)132))));
                    }
                    arr_75 [20U] [9] [i_16] [i_17] [i_20] [i_20] = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((var_3) + (266261683428381574LL))) - (4LL)))));
                }
                for (unsigned int i_23 = 0; i_23 < 23; i_23 += 4) 
                {
                    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (signed char)36))));
                    var_43 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (short)-30934)) || (((/* implicit */_Bool) (short)25633))))));
                }
            }
            for (signed char i_24 = 2; i_24 < 21; i_24 += 1) 
            {
                var_44 = ((/* implicit */long long int) var_1);
                var_45 += ((/* implicit */unsigned char) (_Bool)1);
            }
            var_46 = ((((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_14] [i_14] [i_16]))) : (((((/* implicit */_Bool) var_3)) ? (2441884352880370685LL) : (((/* implicit */long long int) var_2)))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            var_47 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18444527458267955213ULL)) ? (var_3) : (((/* implicit */long long int) var_2))))) < (arr_45 [i_14])));
            /* LoopNest 3 */
            for (unsigned short i_26 = 2; i_26 < 21; i_26 += 4) 
            {
                for (unsigned short i_27 = 0; i_27 < 23; i_27 += 1) 
                {
                    for (unsigned long long int i_28 = 1; i_28 < 21; i_28 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned char) arr_70 [i_26] [i_25] [i_26] [i_25] [i_14]);
                            arr_89 [i_14] [i_14] [21LL] [i_25] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) * (arr_82 [i_28] [i_25] [i_26]));
                            var_49 -= (unsigned char)23;
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_29 = 2; i_29 < 22; i_29 += 1) 
        {
            var_50 = ((/* implicit */long long int) (-(((/* implicit */int) arr_70 [i_29] [i_29] [i_29 + 1] [i_29] [i_29 - 1]))));
            arr_94 [i_14] [i_14] = ((unsigned long long int) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) (short)20892)) : (((/* implicit */int) arr_80 [i_14] [i_14]))));
            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_69 [i_29] [(_Bool)1])) ? (((arr_61 [(unsigned char)2]) ? (10ULL) : (289575348826131063ULL))) : (((/* implicit */unsigned long long int) var_5))));
        }
    }
    /* LoopSeq 2 */
    for (int i_30 = 3; i_30 < 19; i_30 += 1) 
    {
        var_52 = ((/* implicit */unsigned long long int) ((unsigned int) var_3));
        var_53 = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) ((short) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166)))))))));
        var_54 = ((/* implicit */signed char) 18157168724883420558ULL);
        var_55 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)25654)), ((unsigned short)7405)))) ? (arr_45 [i_30 + 1]) : (((/* implicit */unsigned long long int) arr_19 [18ULL] [i_30] [i_30])))), (((/* implicit */unsigned long long int) (signed char)79))));
    }
    /* vectorizable */
    for (short i_31 = 0; i_31 < 19; i_31 += 3) 
    {
        var_56 &= ((/* implicit */int) arr_66 [i_31] [(unsigned char)4] [i_31] [i_31]);
        arr_99 [i_31] [i_31] = ((/* implicit */unsigned short) ((int) arr_95 [i_31] [i_31]));
        arr_100 [i_31] = ((/* implicit */short) ((unsigned char) arr_18 [i_31]));
    }
}
