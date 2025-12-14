/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80655
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 6; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_1] = ((short) (short)14008);
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
                arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_7);
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (signed char i_4 = 3; i_4 < 9; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(18446744073709551601ULL)))) || (((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0]))))), (min((((/* implicit */unsigned long long int) ((unsigned int) var_17))), (((((/* implicit */_Bool) arr_1 [8U])) ? (17ULL) : (((/* implicit */unsigned long long int) var_15))))))));
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] [i_2] [i_0] = ((/* implicit */long long int) (unsigned short)64568);
                        }
                    } 
                } 
            }
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned char)181))))), (9223372036854775806LL))) << ((((-(((((/* implicit */_Bool) var_11)) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))) - (18446744073709551597ULL)))));
                arr_22 [i_0] = (((!(((/* implicit */_Bool) (short)-3280)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */unsigned int) ((((arr_19 [i_0] [i_0] [(short)3]) + (2147483647))) >> (((((/* implicit */int) (unsigned char)181)) - (180)))))) : (min((((/* implicit */unsigned int) var_15)), (1782418779U))))));
                var_20 = ((/* implicit */int) min((var_20), (var_15)));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_25 [(unsigned short)5] [i_1] = ((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_5] [i_6]);
                    arr_26 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */int) (signed char)16);
                    var_21 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_23 [i_0] [i_5] [i_5] [i_5] [i_5])) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14031)))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) (short)3279))))) : (((/* implicit */int) ((2147483647) < (((/* implicit */int) (short)-18935)))))));
                        var_23 ^= ((/* implicit */unsigned short) (short)-13999);
                    }
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        var_24 -= ((/* implicit */signed char) ((((arr_34 [i_0] [i_0] [i_1] [i_5] [i_7] [i_1]) ? (1782418777U) : (var_8))) >= (((/* implicit */unsigned int) arr_18 [i_1] [i_1 + 1]))));
                        var_25 = ((/* implicit */long long int) var_5);
                        arr_36 [i_0] [(unsigned char)5] [i_5] [i_7] [i_9] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [i_1 - 2] [i_1 + 2]))));
                        arr_37 [i_1 + 3] [i_1] [i_1] [i_1] [i_1 - 1] [2] = ((/* implicit */unsigned short) var_16);
                    }
                    arr_38 [i_0] [i_1] [i_5] = ((/* implicit */unsigned long long int) (+(var_1)));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        arr_41 [i_10] [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (short)-4975)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))));
                        arr_42 [i_0] [i_1 - 2] [i_5] [3] [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_12 [i_10] [i_1 - 1] [i_1 - 1] [i_7])) : (((/* implicit */int) var_16))));
                    }
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((signed char) var_2));
                        arr_45 [i_0] [i_1] [i_5] [i_7] [i_11] [i_1] = ((/* implicit */signed char) (_Bool)1);
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    arr_49 [i_0] [i_1 - 2] [i_5] [i_12] [i_0] = ((/* implicit */int) ((max((18446744073709551587ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */unsigned int) var_15)) : (3593279254U)))))) != (((/* implicit */unsigned long long int) ((unsigned int) ((signed char) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    arr_50 [i_5] [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned long long int) -3683352855863764614LL);
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (short)14010))));
                }
            }
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
            {
                var_28 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */long long int) 265114915U)) : (-3683352855863764614LL))) % (((/* implicit */long long int) ((/* implicit */int) (short)14002)))));
                var_29 = ((/* implicit */short) max((701688050U), (((/* implicit */unsigned int) ((short) (short)120)))));
            }
            for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
            {
                var_30 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-119))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (268173312U)))), (max((((/* implicit */unsigned long long int) (short)-14002)), (19ULL)))))));
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_33 [i_0] [i_1 + 3]) ? (var_15) : (((/* implicit */int) arr_33 [i_0] [i_1 + 3]))))) ? (((/* implicit */int) max((arr_33 [i_0] [i_1 + 3]), (arr_33 [i_0] [i_1 + 3])))) : (((/* implicit */int) ((_Bool) arr_33 [i_0] [i_1 + 3])))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    arr_59 [i_0] [i_0] [i_14] [i_15] [i_15] = 9223372036854775806LL;
                    arr_60 [i_0] [i_0] [i_14] [i_15] = ((/* implicit */long long int) var_12);
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) var_10);
                        arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(536870910U)));
                        var_33 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned int) 1452279414))), (max((((/* implicit */unsigned long long int) ((unsigned char) -3683352855863764639LL))), (((((/* implicit */_Bool) -9223372036854775807LL)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))))))));
                    }
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        arr_67 [i_0] [(signed char)2] [i_1 + 3] [i_14] [i_15] [i_15] [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_35 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_35 [i_1 + 3] [i_1 - 2] [i_1] [i_1] [i_1] [i_1] [i_1])))) < (((/* implicit */int) var_10))));
                        var_34 = ((/* implicit */_Bool) var_13);
                    }
                }
            }
        }
        for (int i_18 = 2; i_18 < 6; i_18 += 2) /* same iter space */
        {
            var_35 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) 3758096386U)) : (((((/* implicit */_Bool) arr_15 [i_0] [i_18] [i_0] [i_18 + 2] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8726))) : (var_2)))))));
            var_36 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_12 [i_18 - 1] [i_18 + 3] [i_18 + 4] [i_18])))), (((/* implicit */int) ((max((304995641U), (304995633U))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32766))))))))));
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 10; i_19 += 4) 
            {
                for (unsigned int i_20 = 3; i_20 < 8; i_20 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 3) 
                        {
                            var_37 = ((/* implicit */signed char) arr_55 [i_20] [i_18 + 1]);
                            var_38 = (~(max((arr_18 [i_0] [i_0]), (((/* implicit */int) arr_32 [i_18 + 1] [i_20 - 2] [i_21])))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((var_6), (((/* implicit */int) var_11)))))) ? ((~(((/* implicit */int) (short)32739)))) : (((/* implicit */int) ((((/* implicit */int) arr_48 [i_18 + 1] [i_19] [i_19] [i_20] [i_20 + 2])) == (((/* implicit */int) arr_48 [i_18 - 1] [i_18] [i_20] [i_20] [i_20 - 1])))))));
                        }
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [(signed char)4] [i_0]))));
                        var_41 -= ((/* implicit */short) (unsigned short)28);
                        arr_78 [i_18] [i_0] = var_4;
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 10; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 10; i_23 += 2) 
            {
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_25 = 0; i_25 < 10; i_25 += 4) 
                        {
                            var_42 ^= ((/* implicit */short) ((arr_34 [1U] [1U] [i_24 - 1] [i_24] [i_24] [i_24]) ? (((/* implicit */int) arr_34 [i_24] [i_24] [i_24 - 1] [i_24 - 1] [i_24] [i_24])) : (((/* implicit */int) arr_34 [i_24] [i_24 - 1] [i_24 - 1] [i_24] [i_24] [i_24]))));
                            var_43 *= ((/* implicit */unsigned int) arr_4 [i_23] [i_24] [i_23]);
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) arr_87 [i_0] [i_22]))));
                        }
                        for (short i_26 = 3; i_26 < 6; i_26 += 4) 
                        {
                            arr_94 [i_0] [i_22] [i_26] [i_24] [4U] [i_22] = ((/* implicit */signed char) var_0);
                            arr_95 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                            var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) var_10))));
                        }
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_85 [5U] [i_22] [i_23] [i_23])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)14002))))) : (arr_84 [(short)3] [i_23] [i_22])));
                        /* LoopSeq 1 */
                        for (unsigned char i_27 = 0; i_27 < 10; i_27 += 2) 
                        {
                            var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) arr_62 [i_24 - 1]))));
                        }
                        arr_98 [i_22] [i_22] [i_24] = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                        /* LoopSeq 1 */
                        for (int i_28 = 0; i_28 < 10; i_28 += 2) 
                        {
                            arr_102 [i_0] [(short)3] [i_0] [i_0] [i_0] = (-(arr_80 [i_0] [i_22]));
                            var_49 ^= ((/* implicit */signed char) (~((~(1782418779U)))));
                            var_50 = ((/* implicit */unsigned short) (~(((1782418779U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))));
                        }
                    }
                } 
            } 
            arr_103 [i_22] [i_22] = ((/* implicit */_Bool) var_1);
            arr_104 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_2 [i_22] [i_0] [i_0])) ? (9223372036854775806LL) : (((/* implicit */long long int) 0U)))));
            var_51 = (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])));
            var_52 = ((/* implicit */int) var_8);
        }
        var_53 = ((/* implicit */int) var_12);
        arr_105 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1782418796U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0]))) : (3683352855863764613LL)));
    }
    var_54 *= ((/* implicit */_Bool) (-(var_8)));
}
