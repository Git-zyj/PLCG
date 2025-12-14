/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8636
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
    var_20 *= ((/* implicit */long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 5099472610731892274LL)) == ((-(var_16))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
            var_21 ^= ((/* implicit */unsigned short) ((arr_1 [i_1]) >> (((/* implicit */int) var_5))));
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_22 = ((/* implicit */signed char) (+(((var_6) / (636021212533764989LL)))));
                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_0 [14U] [14U]))));
                arr_13 [i_0] [i_2] [(_Bool)1] &= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) < ((((_Bool)1) ? (((/* implicit */unsigned int) -1845830578)) : (181779664U))));
                arr_14 [i_3] [i_2] = ((/* implicit */_Bool) var_12);
            }
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_23 = ((((/* implicit */_Bool) ((signed char) arr_16 [i_4] [i_2] [i_0]))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_19)))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned short i_6 = 4; i_6 < 13; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 8220180439985855311ULL))));
                            arr_24 [i_0] [i_6] [i_2] [i_0] [i_6] = ((((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_22 [i_5] [i_4] [i_4] [i_5] [i_6]))) / (var_6));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_1))));
                            var_26 = ((/* implicit */long long int) (-(arr_21 [i_5] [i_2] [i_6 + 2])));
                            arr_25 [i_0] [14] &= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))));
                        }
                    } 
                } 
            }
            var_27 = (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (var_7))));
            var_28 = ((var_4) ? (arr_10 [i_2] [i_2] [i_2]) : (arr_10 [i_0] [i_2] [i_0]));
            var_29 = ((/* implicit */signed char) ((var_7) >= (((var_5) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)23)))))));
        }
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
        {
            var_30 += ((/* implicit */_Bool) var_12);
            var_31 = ((/* implicit */int) ((unsigned char) var_15));
            var_32 = ((/* implicit */long long int) max((var_32), ((-(var_8)))));
        }
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
        {
            arr_31 [i_0] &= (+(((/* implicit */int) var_19)));
            arr_32 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
        }
        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
        var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) var_12))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_9 [i_0]))) : (((/* implicit */long long int) ((var_10) ? (1845830578) : (-1845830578))))));
        arr_33 [i_0] = ((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [4] [i_0]);
    }
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        var_35 = (-9223372036854775807LL - 1LL);
        var_36 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_35 [i_9] [i_9])))) + (((/* implicit */int) min((var_15), (arr_35 [i_9] [i_9]))))));
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) 1845830583))));
        var_38 ^= (((_Bool)1) ? (((long long int) (-9223372036854775807LL - 1LL))) : ((~((-(arr_34 [i_10]))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)8)) >> (((/* implicit */int) (_Bool)1))))) ? (-1845830578) : (((/* implicit */int) var_15)))))));
        /* LoopSeq 3 */
        for (int i_12 = 2; i_12 < 15; i_12 += 3) /* same iter space */
        {
            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_12 + 1]))) / (-2769543847929558404LL))))))));
            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (!(((880733762U) <= (((/* implicit */unsigned int) 1576982229)))))))));
        }
        for (int i_13 = 2; i_13 < 15; i_13 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    {
                        arr_51 [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)26305))));
                        var_42 = ((/* implicit */int) 4294967287U);
                        var_43 &= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_11))) : (((/* implicit */long long int) (((_Bool)1) ? (var_3) : (var_3))))));
                        var_44 = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_13]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11] [i_15]))) + (-4466010914519865143LL)))));
                    }
                } 
            } 
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_13 - 2] [i_13 - 1])) ? (-511810804415828905LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
            var_46 = ((/* implicit */int) ((long long int) -5584375622553765931LL));
        }
        for (int i_16 = 2; i_16 < 15; i_16 += 3) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
            /* LoopSeq 1 */
            for (int i_17 = 2; i_17 < 15; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    for (int i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        {
                            var_48 = ((/* implicit */long long int) max((var_48), (arr_59 [i_16 - 1] [i_16 - 2] [i_16 - 2] [i_17 - 1] [i_19] [i_19])));
                            var_49 = ((1727047119108286568LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_50 = ((/* implicit */int) max((var_50), (((int) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [7LL]))) : (511810804415828908LL))))));
                            var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_46 [i_18])))))))));
                            arr_61 [i_11] [i_16] [i_17] [i_18] [i_19] [(signed char)9] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) 1891852495)) ? (1483764510U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_16))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_52 ^= ((/* implicit */_Bool) var_7);
                    arr_65 [i_17] [7LL] [(signed char)11] [0LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_39 [i_11] [i_16]))));
                    var_53 = 1073741792;
                }
                for (long long int i_21 = 0; i_21 < 16; i_21 += 4) 
                {
                    var_54 -= ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                    var_55 ^= ((/* implicit */signed char) (+(((long long int) var_1))));
                }
                var_56 = ((((/* implicit */_Bool) arr_58 [9LL] [i_16] [i_11] [i_11])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_16 - 1] [i_16] [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 2]))));
                arr_70 [12LL] [i_16 - 1] &= ((unsigned int) var_0);
            }
            var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) 1483764510U))));
        }
        /* LoopNest 3 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (short i_23 = 3; i_23 < 15; i_23 += 2) 
            {
                for (long long int i_24 = 0; i_24 < 16; i_24 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_58 &= ((/* implicit */_Bool) (+(1915869302)));
                            arr_81 [2LL] |= ((signed char) var_10);
                        }
                        for (long long int i_26 = 0; i_26 < 16; i_26 += 3) 
                        {
                            arr_84 [i_22] [i_22] [i_22] [i_22] = -9223372036854775804LL;
                            arr_85 [i_11] [i_11] [i_22] [i_23 + 1] [i_24] [i_22] = var_0;
                            var_59 &= ((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_24] [i_26])) > (((/* implicit */int) arr_37 [i_11] [i_11]))));
                        }
                        for (long long int i_27 = 0; i_27 < 16; i_27 += 2) 
                        {
                            var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_22] [i_23 - 3] [i_23 + 1])) ? (((6809168857030912519LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
                            var_61 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_66 [i_11] [i_23] [i_24] [i_27]))));
                        }
                        arr_88 [i_22] [i_22] [i_23] [i_22] = ((/* implicit */signed char) ((((_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)29237))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_62 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        arr_89 [i_24] [i_22] [i_22] [i_11] = (((_Bool)0) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_35 [i_23 - 1] [i_23 - 2])));
                        var_63 = ((/* implicit */_Bool) max((var_63), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_2) : (var_13)))) ? ((-9223372036854775807LL - 1LL)) : (var_6))))));
                    }
                } 
            } 
        } 
    }
    var_64 = ((/* implicit */signed char) 7377108767505972574LL);
    var_65 = ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))) ? ((-(((long long int) var_9)))) : (min((((/* implicit */long long int) min((var_12), (((/* implicit */unsigned char) var_10))))), (min((((/* implicit */long long int) 1483764510U)), (var_13))))));
}
