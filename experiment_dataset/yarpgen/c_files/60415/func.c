/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60415
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((var_6), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 32767)), (var_17))))))));
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 15211280111989525962ULL)))) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_11))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_17)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)-1))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (7006484089373921259LL)))) == (((/* implicit */int) (signed char)0))));
                        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)15562)) || (((/* implicit */_Bool) (short)15562)))) && (((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) (short)-1))))));
                        arr_17 [i_4] [(unsigned char)6] [i_3 - 2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_17) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (7626846477797160095ULL)))));
                    }
                }
                var_24 = ((((/* implicit */int) ((var_17) >= (14898763223410445479ULL)))) * (((/* implicit */int) (!(var_1)))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                var_25 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-6784)), ((+(((((/* implicit */int) var_8)) * (((/* implicit */int) var_3))))))));
                arr_22 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_11);
                arr_23 [i_5] [i_0] [i_0] [i_0] |= ((/* implicit */int) (((~(((((/* implicit */_Bool) 4290772992U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (9478289077633153084ULL))))) > (max((((/* implicit */unsigned long long int) ((long long int) var_7))), ((((_Bool)0) ? (var_11) : (13075862302520293542ULL)))))));
            }
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((((_Bool) max((var_12), (((/* implicit */unsigned int) (short)15562))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) >= (((((/* implicit */_Bool) 2555098770U)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) -1))))))));
                        var_27 = ((((((/* implicit */_Bool) ((894928595U) ^ (3972355508U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6759))) : (1667567171U))) - (0U));
                    }
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            arr_32 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (short)32762)))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) min((9478289077633153107ULL), (8968454996076398532ULL)))) ? (((/* implicit */int) (unsigned char)118)) : (((0) * (((/* implicit */int) (signed char)0))))))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_9))));
                var_29 = ((/* implicit */unsigned int) var_11);
            }
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) << (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) min((2627400124U), (2627400123U)))))))) != (1890762057U))))));
        }
        for (unsigned int i_10 = 2; i_10 < 16; i_10 += 4) 
        {
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */long long int) var_9)) * (max((((((/* implicit */long long int) ((/* implicit */int) var_8))) & ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((var_9) ^ (((/* implicit */int) var_8))))))))))));
            arr_37 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))));
            var_32 = ((/* implicit */short) (+((-9223372036854775807LL - 1LL))));
            arr_38 [i_0] = ((/* implicit */unsigned short) -5489692930063748527LL);
        }
        for (int i_11 = 1; i_11 < 16; i_11 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                arr_44 [i_0] [i_0] [i_11] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5489692930063748526LL))));
                var_33 = ((/* implicit */int) (unsigned char)119);
            }
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26170))) ^ (var_15)))) && (((/* implicit */_Bool) ((unsigned long long int) var_2))))))));
                            arr_53 [i_0] [i_0] [i_14] [i_11] = ((/* implicit */unsigned char) (~(1474073073U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_16 = 3; i_16 < 18; i_16 += 3) 
                {
                    for (int i_17 = 2; i_17 < 17; i_17 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) var_7);
                            var_36 = ((/* implicit */long long int) ((((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))))) << (((var_2) - (2650523044U)))));
                            var_37 = ((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) 13982522553469352310ULL))))));
                            arr_58 [i_11] [i_11 + 4] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (unsigned short)65529);
                        }
                    } 
                } 
            }
            for (int i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 20; i_19 += 1) 
                {
                    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) & (((((-4941518680344153593LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-1)) + (34)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) -5489692930063748513LL))) | (((/* implicit */int) (short)-1))))) : (((((/* implicit */unsigned long long int) ((long long int) var_12))) & (((unsigned long long int) var_1))))));
                            arr_67 [i_11] = ((/* implicit */unsigned long long int) (short)-14);
                            arr_68 [i_19] [i_11] [i_11] [i_0] [i_19] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((-998376273432698436LL) + (-3422852429508294737LL)))), (((9478289077633153080ULL) + (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)6517)))) < ((+(((/* implicit */int) (short)-15547)))))))));
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) (~(6172244357775216006ULL))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned int) min((((min((((/* implicit */long long int) 4100714806U)), (-1LL))) % (-2314316640197711949LL))), (2314316640197711948LL)));
                arr_69 [i_11] = ((/* implicit */_Bool) ((((((unsigned int) 452215335548343798LL)) & (((/* implicit */unsigned int) max(((-2147483647 - 1)), (((/* implicit */int) var_14))))))) | (((/* implicit */unsigned int) var_7))));
                arr_70 [i_0] [i_11] [i_0] = ((/* implicit */unsigned long long int) var_12);
            }
            arr_71 [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((((/* implicit */long long int) var_15)) | (-1863471757748489495LL))) + (9223372036854775807LL))) << ((((-(3589009766784533508ULL))) - (14857734306925018108ULL))))))));
        }
    }
    var_41 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (long long int i_21 = 0; i_21 < 19; i_21 += 4) 
    {
        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 3) 
        {
            {
                var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((2627400126U) != (1667567169U))))))) ? ((+((+(((/* implicit */int) var_18)))))) : ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (237463708)))))))))));
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 19; i_23 += 3) 
                {
                    for (long long int i_24 = 0; i_24 < 19; i_24 += 3) 
                    {
                        {
                            arr_82 [i_24] [i_23] [i_23] [i_21] [i_21] = ((/* implicit */unsigned char) var_3);
                            var_43 = ((max((max((var_4), (((/* implicit */unsigned long long int) 1562684762U)))), (((/* implicit */unsigned long long int) var_0)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) > (min((((/* implicit */unsigned long long int) var_1)), (var_17))))))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_8)), ((short)1)))) ? (47297191U) : (((unsigned int) (short)1))))), (max((((/* implicit */long long int) min((2367849337U), (((/* implicit */unsigned int) (short)-2))))), ((((-9223372036854775807LL - 1LL)) % (998376273432698435LL)))))));
                /* LoopSeq 2 */
                for (unsigned int i_25 = 0; i_25 < 19; i_25 += 4) /* same iter space */
                {
                    var_45 += ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned int) var_6)), (var_2)))))) != (((((/* implicit */_Bool) (+(2732282534U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((long long int) var_8))))));
                    arr_85 [i_21] [i_22] [i_25] [i_25] = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */int) (signed char)-4)) == (-736524399)))), (((((/* implicit */int) (short)-13)) - (((/* implicit */int) (unsigned short)10392)))))) < ((+((-(((/* implicit */int) (short)3))))))));
                }
                for (unsigned int i_26 = 0; i_26 < 19; i_26 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 19; i_27 += 4) 
                    {
                        for (unsigned short i_28 = 1; i_28 < 18; i_28 += 1) 
                        {
                            {
                                arr_94 [i_21] [(_Bool)1] [i_21] [(_Bool)1] [i_28] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((5673382317991671886LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-44)))))) ? (((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (unsigned char)181)))) : (((((var_9) + (2147483647))) << (((/* implicit */int) var_8))))))));
                                arr_95 [i_28] [i_27] [i_28] = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_5)))))), (((long long int) ((var_2) == (var_2))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_29 = 0; i_29 < 19; i_29 += 3) 
                    {
                        var_46 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2156902975U)), (-6732482407753161028LL)))) | (min((((/* implicit */unsigned long long int) var_7)), (3281653014129668950ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (736524398) : (((/* implicit */int) (unsigned char)162)))))));
                        var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((max((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (((-2147483647 - 1)) > (((/* implicit */int) (signed char)-44))))))) != (((/* implicit */unsigned long long int) (~(((long long int) (_Bool)1))))))))));
                        arr_100 [i_21] [i_22] [i_26] [i_26] [i_29] = ((/* implicit */signed char) ((((/* implicit */long long int) -736524399)) == (((((/* implicit */_Bool) min((var_5), (var_0)))) ? (((long long int) (short)(-32767 - 1))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        var_48 = ((/* implicit */long long int) min((((((var_11) << (((var_7) - (1922847168))))) * (((var_4) * (0ULL))))), (((unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned short)44826)) - (44809))))))));
                    }
                    for (unsigned long long int i_30 = 1; i_30 < 18; i_30 += 1) 
                    {
                        var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -16LL)) && (((/* implicit */_Bool) 2147483647))))), (min(((+(var_16))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))))))))));
                        var_50 = ((/* implicit */short) (-((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)176))))))));
                    }
                    for (int i_31 = 0; i_31 < 19; i_31 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((int) var_15))))), (min((max((var_16), (((/* implicit */unsigned int) (signed char)-53)))), (((/* implicit */unsigned int) (unsigned short)56574))))));
                        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) max((max((((short) (signed char)14)), (((/* implicit */short) ((var_2) < (((/* implicit */unsigned int) (-2147483647 - 1)))))))), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1815617539458999442LL)) ? (var_13) : (((/* implicit */unsigned long long int) -736524399))))) || (((((/* implicit */_Bool) (unsigned short)46182)) && (((/* implicit */_Bool) var_0))))))))))));
                    }
                    for (unsigned int i_32 = 1; i_32 < 17; i_32 += 3) 
                    {
                        arr_108 [i_32 + 1] [i_26] [i_26] [i_22] [i_22] [i_21] = ((((/* implicit */unsigned int) ((((/* implicit */int) ((var_17) == (((/* implicit */unsigned long long int) var_2))))) << (((((/* implicit */int) (short)6653)) - (6640)))))) != (((max((((/* implicit */unsigned int) -2147483647)), (var_15))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))));
                        var_53 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) var_15)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_14))))), (((unsigned int) var_1)))))));
                        arr_109 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)18713)) ? (((/* implicit */int) (unsigned short)20709)) : (((((/* implicit */int) var_6)) << (((1762010502) - (1762010494))))))));
                        var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) (+(((int) ((var_6) ? (((/* implicit */long long int) -2147483640)) : (var_10)))))))));
                    }
                    arr_110 [9ULL] = ((/* implicit */unsigned char) ((((max((((/* implicit */long long int) (short)(-32767 - 1))), (var_10))) / (((/* implicit */long long int) var_12)))) & (((/* implicit */long long int) ((/* implicit */int) ((short) var_14))))));
                    var_55 -= ((/* implicit */unsigned char) ((long long int) -749239477));
                }
                /* LoopNest 2 */
                for (long long int i_33 = 0; i_33 < 19; i_33 += 3) 
                {
                    for (short i_34 = 0; i_34 < 19; i_34 += 3) 
                    {
                        {
                            arr_116 [i_34] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) var_5)), (var_13)))))) ? ((~(max((((/* implicit */unsigned long long int) 2147483645)), (var_11))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_8))))))))));
                            var_56 = ((/* implicit */long long int) min((var_56), ((~(((max((((/* implicit */long long int) var_5)), (5984413564578643516LL))) + (((/* implicit */long long int) (~(-736524399))))))))));
                            arr_117 [i_34] [i_34] [i_34] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & ((+((+(((/* implicit */int) (unsigned short)34780))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_57 *= ((/* implicit */long long int) (+(max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned short)20709)))))))));
    /* LoopNest 3 */
    for (signed char i_35 = 0; i_35 < 19; i_35 += 4) 
    {
        for (long long int i_36 = 0; i_36 < 19; i_36 += 3) 
        {
            for (unsigned int i_37 = 0; i_37 < 19; i_37 += 4) 
            {
                {
                    arr_127 [i_35] [(short)0] [i_37] [(short)0] = ((/* implicit */unsigned short) ((short) ((((((var_9) + (2147483647))) << (((/* implicit */int) (_Bool)1)))) << (((((var_13) + (15027081158297954463ULL))) - (8512098462470204037ULL))))));
                    arr_128 [i_35] [i_35] [i_35] [i_35] = ((/* implicit */short) max((((/* implicit */unsigned int) ((max((((/* implicit */int) (short)30812)), (-736524399))) & (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (signed char)43)))))))), (var_16)));
                    var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_38 = 0; i_38 < 19; i_38 += 4) 
                    {
                        for (long long int i_39 = 0; i_39 < 19; i_39 += 4) 
                        {
                            {
                                var_59 = ((/* implicit */unsigned int) (unsigned short)56604);
                                var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20705))) >= (min((var_11), (((/* implicit */unsigned long long int) (unsigned char)31)))))))))));
                                arr_135 [i_35] [i_35] = (((!((((_Bool)1) || (var_1))))) || (((((/* implicit */_Bool) ((long long int) (unsigned short)20720))) && (((((/* implicit */_Bool) (unsigned short)12087)) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
                                var_61 = ((/* implicit */signed char) (short)32767);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
