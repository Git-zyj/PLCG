/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76026
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
    var_15 = ((/* implicit */short) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 1])));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((var_5) / (((/* implicit */long long int) arr_1 [i_0] [i_0 + 2]))));
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        var_17 = ((/* implicit */_Bool) ((unsigned int) 0U));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 24; i_1 += 1) 
    {
        var_18 |= ((/* implicit */long long int) ((int) arr_4 [i_1 - 2]));
        var_19 = ((/* implicit */unsigned short) (!((_Bool)1)));
    }
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_5 [i_2])) : (6LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)8] [i_2 + 1])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1221)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (6LL)))))))));
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_10) : (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                var_23 = ((/* implicit */unsigned short) ((((var_14) != (((/* implicit */unsigned int) 170590893)))) ? (((((/* implicit */int) (unsigned short)19505)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1]))));
            }
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                arr_15 [i_2] [i_2] [i_2 + 1] = (+(((/* implicit */int) arr_8 [i_3 - 2])));
                var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2 + 1])) < (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1]))));
                arr_16 [i_2] [i_2] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-91))));
                var_25 = (-((+(2147483647))));
            }
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                arr_21 [i_6] [i_6] [i_3] [i_6] = ((/* implicit */unsigned short) (-(var_2)));
                var_26 = ((/* implicit */int) arr_19 [i_2] [i_3]);
            }
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((_Bool) arr_20 [i_2 + 1] [i_3] [i_2 + 1] [i_3])))));
        }
        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                var_28 ^= ((/* implicit */unsigned short) (!(arr_25 [i_2] [i_2])));
                var_29 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-7)) ? (734135778231555916LL) : (((/* implicit */long long int) 589344))))));
                var_30 = ((/* implicit */unsigned int) arr_22 [i_8] [i_7 + 1] [i_2]);
            }
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) 154149399)) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_27 [i_2] [i_7 + 1] [i_2] [0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(signed char)17] [(signed char)17]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_7] [i_2])) && (((/* implicit */_Bool) (signed char)-91)))))))) : (min((((/* implicit */unsigned int) max((var_4), (var_12)))), (((((/* implicit */_Bool) 3281821785U)) ? (arr_18 [i_2] [i_7] [i_7 + 1] [i_7]) : (var_14))))))))));
            /* LoopSeq 3 */
            for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                {
                    arr_33 [9] [i_7] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) + (8889988060819776174LL)));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_32 ^= ((/* implicit */unsigned short) (short)20563);
                        arr_38 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) ((((((/* implicit */int) arr_14 [i_2] [i_7] [i_7 + 1] [i_2])) ^ (((/* implicit */int) arr_24 [i_2 + 1] [i_7 - 1] [i_7 + 1])))) > ((+(1329828942)))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_37 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))) ? (((((/* implicit */unsigned int) 782535749)) | (arr_37 [i_2] [i_2] [i_2] [i_2 + 1] [i_10]))) : (((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_2] [i_2 + 1] [i_10])) ? (arr_37 [i_2] [i_2] [i_2] [i_2 + 1] [14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                        var_34 += ((/* implicit */signed char) ((2372210877U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1089641647)) ? (-734135778231555916LL) : (((/* implicit */long long int) 536870848U))))) ? (2147483647) : (((/* implicit */int) (signed char)-111)))))));
                    }
                    arr_39 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((arr_30 [i_7 + 1] [i_7 + 1] [i_2 + 1] [i_2 + 1]), (arr_30 [i_7] [i_7 + 1] [i_2 + 1] [i_2])))), (((unsigned int) arr_26 [i_7 - 1] [i_2 + 1]))));
                }
                for (signed char i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
                {
                    var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) arr_25 [i_2] [i_9])) : (((/* implicit */int) arr_8 [i_2]))))) ? (((/* implicit */long long int) (+(arr_7 [i_9])))) : (arr_4 [i_2 + 1])))) ? ((+(((((/* implicit */_Bool) var_9)) ? (arr_29 [i_12] [i_9] [i_7] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_28 [i_7] [i_7 - 1] [i_7] [i_7]) : (arr_28 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_2]))))));
                    arr_42 [i_2] [i_7] [i_9] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4LL)) ? (((/* implicit */long long int) -2147483647)) : (-4LL))) - (min((-5659072161448589316LL), (((/* implicit */long long int) arr_23 [i_2 + 1] [i_2 + 1]))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    arr_45 [i_9] [i_7] [i_9] [i_7] = ((/* implicit */unsigned int) var_9);
                    var_36 = ((/* implicit */int) (+(((unsigned int) arr_41 [i_7] [i_7] [i_7 + 1] [i_7]))));
                }
            }
            for (int i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_49 [i_14] [i_2])) : (var_12)))), (5659072161448589311LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_14] [i_14] [i_14]))) : (((((/* implicit */long long int) 2515618384U)) | (-5659072161448589311LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))))))));
                var_38 = ((/* implicit */_Bool) ((max(((+(878981676198489989LL))), (((/* implicit */long long int) arr_26 [i_7] [i_14])))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) 2147418112))) >= (arr_35 [i_14])))))));
                var_39 = ((/* implicit */signed char) (-2147483647 - 1));
            }
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                var_40 = ((/* implicit */_Bool) arr_5 [i_2 + 1]);
                arr_54 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (((~(arr_52 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]))) != (((/* implicit */unsigned int) (+(2147483647))))));
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_46 [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_46 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */int) ((unsigned short) 19U))) : (((((/* implicit */_Bool) (short)12321)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_46 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
            }
            /* LoopSeq 1 */
            for (int i_16 = 1; i_16 < 15; i_16 += 4) 
            {
                arr_57 [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_7] [i_7 + 1])) ? (var_3) : (((/* implicit */unsigned int) 271871224))))));
                var_42 = ((/* implicit */short) (unsigned short)64314);
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    var_43 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((arr_17 [i_17] [i_17]) <= (var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_17] [i_7])))))) : ((~(var_14)))))), (((((/* implicit */_Bool) max((var_13), (((/* implicit */int) arr_30 [i_2 + 1] [i_7] [i_16] [i_17]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7799048653785044393LL)) ? (((/* implicit */unsigned int) var_9)) : (arr_28 [i_2 + 1] [i_7 - 1] [i_16] [i_17])))) : (-5659072161448589325LL)))));
                    var_44 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_44 [i_16 + 3] [i_16 + 3] [i_7 - 1] [i_17]))))), (max((((var_5) % (1635305881249058902LL))), (((/* implicit */long long int) (_Bool)0))))));
                }
                for (int i_18 = 1; i_18 < 17; i_18 += 2) 
                {
                    var_45 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (arr_18 [i_2] [13U] [i_16 + 1] [i_18])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-53))))) : (((/* implicit */int) ((signed char) arr_55 [i_2] [i_7] [i_16] [i_7]))))))));
                    arr_63 [i_16] [i_16] [i_7] [(signed char)2] [i_16] &= ((((/* implicit */int) ((unsigned short) arr_41 [i_7 - 1] [i_16 + 3] [i_18 - 1] [i_18]))) != (((arr_41 [i_7 + 1] [i_16 + 1] [i_18 + 1] [i_18 + 1]) ? (((/* implicit */int) arr_22 [i_7 - 1] [i_16 + 2] [i_18 + 1])) : (((/* implicit */int) (short)-1352)))));
                }
            }
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) (short)-12330)) : (max((((/* implicit */int) (signed char)-4)), (arr_11 [i_7] [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_7] [i_7 + 1] [16U] [i_2 + 1] [i_2])) ? (((/* implicit */int) (unsigned short)64314)) : (((/* implicit */int) (short)13671))))))) : (min((((((/* implicit */long long int) arr_10 [i_2] [i_7])) - (9223372036854775807LL))), (max((((/* implicit */long long int) (unsigned short)60914)), (-3214109734158206100LL)))))));
        }
        arr_64 [i_2] = var_1;
        /* LoopNest 3 */
        for (unsigned int i_19 = 2; i_19 < 17; i_19 += 4) 
        {
            for (unsigned short i_20 = 2; i_20 < 16; i_20 += 2) 
            {
                for (unsigned int i_21 = 3; i_21 < 16; i_21 += 4) 
                {
                    {
                        arr_76 [(signed char)13] [i_19] [i_19] [i_2] |= ((/* implicit */unsigned int) max((5659072161448589324LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_52 [i_2] [14] [i_20] [14]) + (var_3)))) ? (((/* implicit */int) arr_36 [i_21] [i_21] [i_21] [i_21 + 1] [i_19] [i_21] [i_21])) : (((/* implicit */int) max(((unsigned short)55916), ((unsigned short)9619)))))))));
                        arr_77 [i_2 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned short) (-(((var_4) + (((/* implicit */int) arr_32 [i_21] [i_20 + 1] [i_20] [i_20] [i_20] [i_20]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_22 = 0; i_22 < 25; i_22 += 1) 
    {
        var_47 = ((/* implicit */unsigned int) arr_79 [i_22]);
        var_48 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_79 [i_22])))) & (((arr_4 [i_22]) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_22])) ? (((/* implicit */int) (unsigned short)2046)) : (var_10))))))));
        var_49 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_23 = 0; i_23 < 25; i_23 += 3) 
        {
            var_50 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_78 [(signed char)22] [i_23])) ? ((+(((/* implicit */int) (unsigned short)12290)))) : (((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */int) var_7))))));
            var_51 = ((/* implicit */unsigned short) var_5);
            arr_82 [i_22] [i_22] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_79 [i_22])))) && (((/* implicit */_Bool) 5659072161448589325LL))));
            /* LoopSeq 1 */
            for (int i_24 = 2; i_24 < 23; i_24 += 4) 
            {
                arr_86 [i_22] [i_22] [i_24] = ((/* implicit */_Bool) var_5);
                /* LoopNest 2 */
                for (signed char i_25 = 4; i_25 < 24; i_25 += 2) 
                {
                    for (unsigned int i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_89 [i_22])) ? (((/* implicit */unsigned int) arr_5 [i_24 + 1])) : (arr_81 [i_22] [i_23] [i_24])))) > (var_5)));
                            var_53 = ((/* implicit */unsigned int) arr_4 [i_22]);
                            var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) var_4))));
                            var_55 = ((/* implicit */_Bool) (signed char)-15);
                        }
                    } 
                } 
            }
            arr_91 [i_22] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_4)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))));
        }
    }
}
