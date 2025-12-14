/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77984
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
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned char) ((int) var_4));
        arr_3 [i_0] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */int) ((arr_0 [i_0] [i_0]) < (arr_2 [i_0])))))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0 - 3])), (var_0))));
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */int) ((signed char) max((arr_1 [i_0]), (arr_1 [i_0]))))) * (((/* implicit */int) (short)11414)))))));
    }
    for (unsigned int i_1 = 3; i_1 < 8; i_1 += 1) /* same iter space */
    {
        var_12 = arr_0 [10LL] [i_1 + 1];
        /* LoopSeq 2 */
        for (signed char i_2 = 4; i_2 < 8; i_2 += 3) /* same iter space */
        {
            arr_8 [i_1] = ((/* implicit */unsigned char) max((1201060042U), (2592469494U)));
            var_13 = ((/* implicit */_Bool) arr_7 [i_2] [i_1]);
            /* LoopNest 3 */
            for (short i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) var_3);
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)10735)))))));
                            var_16 += ((/* implicit */signed char) ((((/* implicit */int) max((arr_18 [i_1 - 2] [i_2 + 4] [(unsigned char)3]), (((/* implicit */unsigned short) arr_17 [i_1 - 2] [5] [i_3] [i_4] [i_2 + 1] [i_3 + 1] [i_4]))))) ^ (((/* implicit */int) (unsigned short)14236))));
                            var_17 = arr_5 [i_3] [i_3];
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)51295)) && (((/* implicit */_Bool) 3093907254U)))))));
        }
        for (signed char i_6 = 4; i_6 < 8; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_19 = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1 + 1] [i_6 - 4]))) * (min((var_2), (((/* implicit */unsigned int) arr_17 [i_1] [i_1 - 3] [0] [(signed char)1] [i_6] [i_1 - 3] [i_7]))))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) arr_15 [i_1 - 1] [i_1 - 1] [i_7] [i_8] [i_1 - 1]);
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) 7245689828721181886LL)) ? (((/* implicit */int) (short)24863)) : (531940587))))));
                            arr_31 [i_1] [i_6] [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) arr_6 [1U] [1U]);
                            var_22 ^= ((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_7]);
                            var_23 &= arr_20 [i_1];
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_10 = 3; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    arr_34 [(short)0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3093907253U)) ? (((/* implicit */int) (unsigned char)223)) : (592110503)));
                    var_24 ^= ((/* implicit */unsigned int) arr_12 [i_1] [i_1] [10LL] [i_10]);
                    var_25 = ((/* implicit */signed char) min((((/* implicit */short) arr_16 [i_1] [i_6 + 3] [1LL] [i_10] [i_10 - 2])), ((short)30520)));
                }
                /* vectorizable */
                for (short i_11 = 3; i_11 < 10; i_11 += 1) /* same iter space */
                {
                    var_26 ^= (!(((/* implicit */_Bool) var_6)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_27 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)221)) * (((/* implicit */int) (short)-24864))));
                        var_28 = ((/* implicit */int) arr_6 [0] [i_1]);
                        var_29 -= ((/* implicit */unsigned long long int) arr_9 [(short)2] [i_12] [i_7] [i_11]);
                    }
                    for (unsigned short i_13 = 1; i_13 < 11; i_13 += 1) 
                    {
                        var_30 = ((/* implicit */short) ((((_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [(_Bool)1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -510939176)))))));
                        var_31 |= ((/* implicit */int) arr_20 [i_1]);
                    }
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11223379677121136810ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))) : (1201060042U)));
                }
                for (short i_14 = 3; i_14 < 10; i_14 += 1) /* same iter space */
                {
                    arr_46 [i_1] [6LL] [i_7] [i_14] [i_1 + 3] = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_7] [i_6] [i_1])) ^ (((int) var_5))));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_10 [i_7] [i_7]))));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_6 + 1] [i_1 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_6 - 3] [i_1 + 3])) + (146)))))) ? (((/* implicit */int) min((((/* implicit */short) arr_44 [i_1] [i_1] [i_6] [i_7] [i_7])), (((short) arr_15 [i_6] [i_6] [6] [i_14 - 2] [7]))))) : (((/* implicit */int) arr_42 [i_1] [i_1]))));
                }
                for (short i_15 = 3; i_15 < 10; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */long long int) max((var_35), (((((/* implicit */_Bool) (short)11384)) ? (-6759551294991399859LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11417)))))));
                        var_36 &= ((/* implicit */long long int) arr_4 [(signed char)4]);
                    }
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                    {
                        arr_53 [(signed char)6] [i_1] [3U] [0ULL] [i_15] [i_15 + 1] [i_17] = max((((int) arr_37 [i_1 + 4])), (((/* implicit */int) arr_50 [2LL] [i_1 - 2] [10U] [i_1 - 2] [0LL])));
                        arr_54 [i_1] [i_1] [i_1] [i_1] [i_1 + 4] [i_1] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) 1073741824U)) ? (1026278232U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90)))));
                        var_37 ^= ((/* implicit */unsigned long long int) max(((unsigned char)147), (((/* implicit */unsigned char) (signed char)80))));
                    }
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
                    {
                        arr_57 [i_18] [i_1] [i_18] = ((/* implicit */short) ((signed char) 1101935864U));
                        var_38 |= ((/* implicit */short) var_9);
                    }
                    var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)223)), ((+(((/* implicit */int) (unsigned char)22))))))) ? (9873044255978165831ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17698224023729954076ULL)) ? (arr_2 [i_6 + 2]) : (((/* implicit */int) (signed char)2))))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_19 = 3; i_19 < 10; i_19 += 3) 
                {
                    for (int i_20 = 1; i_20 < 8; i_20 += 1) 
                    {
                        {
                            var_40 &= ((/* implicit */unsigned int) ((min((min((((/* implicit */long long int) arr_60 [2U] [i_6] [i_20] [(unsigned char)10])), (7108500968920660043LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1497748631)) || ((_Bool)1)))))) ^ (((/* implicit */long long int) max((((/* implicit */int) min((arr_6 [i_1] [i_1]), (((/* implicit */short) arr_12 [(short)7] [i_19 - 2] [i_7] [i_1]))))), (((((/* implicit */_Bool) (short)-19374)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-21314)))))))));
                            var_41 += ((((/* implicit */_Bool) 1640370383U)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (signed char)-46)));
                        }
                    } 
                } 
            }
            for (unsigned char i_21 = 3; i_21 < 10; i_21 += 3) 
            {
                arr_66 [i_1] [8U] = ((/* implicit */unsigned char) ((9223372036854775799LL) - (((/* implicit */long long int) 3257932217U))));
                arr_67 [i_1] [i_1] [i_1] = ((/* implicit */signed char) 2728563418589525762ULL);
                var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_60 [i_1] [i_6] [i_6 + 4] [10])) ? (((/* implicit */unsigned long long int) -9223372036854775799LL)) : (max((((/* implicit */unsigned long long int) arr_51 [i_1 - 3] [5] [i_1 - 3] [i_1 - 3] [i_1 - 3])), (3687016553712569742ULL))))) * (15718180655120025840ULL))))));
                var_43 |= ((/* implicit */long long int) arr_16 [10] [i_1] [i_6 - 1] [i_21] [(unsigned char)0]);
            }
            for (int i_22 = 1; i_22 < 11; i_22 += 2) 
            {
                var_44 = ((/* implicit */unsigned long long int) arr_44 [i_1] [i_6] [i_22] [i_1] [i_6]);
                arr_70 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (unsigned short)18150)))))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 1; i_23 < 10; i_23 += 2) 
                {
                    for (unsigned short i_24 = 0; i_24 < 12; i_24 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned short) arr_55 [i_1] [1U] [2U] [i_24] [9U] [6U]);
                            var_46 &= ((/* implicit */signed char) min((4294967295U), (3310608805U)));
                        }
                    } 
                } 
            }
            for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
            {
                arr_78 [i_1] [i_1] [i_6 - 4] [i_25 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_59 [i_6] [i_6 - 3] [i_25 + 1] [i_25]))));
                /* LoopSeq 1 */
                for (int i_26 = 1; i_26 < 8; i_26 += 4) 
                {
                    var_47 += ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_1] [i_6] [i_6] [i_25 + 1] [(_Bool)1])) ? (((/* implicit */unsigned int) arr_65 [i_6 - 2] [i_6 - 2] [i_26])) : (min((((/* implicit */unsigned int) var_1)), (((arr_33 [i_1] [i_6 - 3] [i_25] [0U] [i_26]) % (3093907246U)))))));
                    var_48 = ((/* implicit */short) ((unsigned int) 6759551294991399858LL));
                    /* LoopSeq 1 */
                    for (unsigned char i_27 = 3; i_27 < 9; i_27 += 3) 
                    {
                        arr_84 [i_1] [i_1] [i_25] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)47368);
                        var_49 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)18863)), (7855196707357674736LL)));
                    }
                }
                var_50 ^= ((/* implicit */signed char) ((int) var_4));
            }
            arr_85 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 4])) ? (9554197438049217986ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_1] [i_6] [i_6 + 1] [i_1 + 4] [i_1] [i_1])))));
        }
    }
    var_51 &= var_3;
}
