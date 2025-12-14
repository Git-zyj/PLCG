/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8514
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((arr_2 [i_2 + 2]), (arr_2 [i_3]))))));
                            arr_12 [i_0] [i_1 - 1] [i_2] [i_3] [(unsigned short)1] [i_2 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((unsigned int) arr_7 [i_0] [i_1] [(unsigned char)3] [i_3])) >> (((((/* implicit */int) max((var_3), (((/* implicit */signed char) (_Bool)1))))) - (75))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) < (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */int) max((arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) : ((-(((/* implicit */int) var_15))))));
                var_17 = ((/* implicit */short) (+((((+(1355324461))) / (((/* implicit */int) (unsigned char)71))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (unsigned char i_5 = 4; i_5 < 22; i_5 += 1) 
        {
            {
                arr_18 [i_4] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) arr_16 [i_4]))))) ? (arr_16 [(short)12]) : (((((/* implicit */_Bool) var_1)) ? (arr_14 [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4])))))))));
                arr_19 [i_4] [i_5] [i_5] = ((/* implicit */_Bool) (~((+(511U)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_10)))))) ? (((var_12) % (((((/* implicit */_Bool) var_2)) ? (522U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (unsigned short i_8 = 3; i_8 < 11; i_8 += 2) 
            {
                {
                    arr_26 [i_6] [i_6] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) < (max(((((-2147483647 - 1)) / (-840909831))), (((/* implicit */int) max((var_9), (((/* implicit */short) arr_20 [i_6])))))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~((-(((/* implicit */int) (short)32767)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 4; i_9 < 10; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        arr_36 [i_6] [6] [i_9 + 1] [i_10] [i_10] [i_10] &= ((/* implicit */short) var_12);
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 2; i_12 < 12; i_12 += 1) 
                        {
                            arr_39 [i_6] [i_6] [6] [i_6] = ((/* implicit */unsigned short) (_Bool)1);
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) var_15)))));
                        }
                        for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                        {
                            arr_44 [7] [i_9 - 2] [(signed char)11] [i_6] [2LL] [i_9] = ((/* implicit */signed char) (unsigned short)54193);
                            var_21 &= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (signed char)105)) - (((/* implicit */int) (unsigned short)54195)))));
                        }
                        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) || (((/* implicit */_Bool) -657999202803493777LL))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                    {
                        arr_47 [i_14] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_37 [i_6] [i_6] [i_6] [(_Bool)1]), (((/* implicit */int) arr_15 [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_6] [i_9 + 1] [i_9] [i_14] [i_14] [i_6] [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 229845851)))))));
                        arr_48 [(unsigned short)12] [i_9] [i_9 + 1] [i_9] [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_33 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */long long int) arr_35 [2U] [i_9 - 4] [i_10] [i_14]))))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) % (max((((/* implicit */unsigned long long int) var_15)), (13757180462492659046ULL)))))));
                        var_23 += ((((/* implicit */_Bool) max((-229845851), (((arr_37 [8U] [i_14] [(unsigned short)10] [i_14]) * (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_24 [i_6] [i_6])) : (((/* implicit */int) arr_15 [i_6])));
                    }
                    var_24 = ((/* implicit */unsigned int) arr_34 [i_6] [i_9] [i_6] [i_10]);
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((503U), (((/* implicit */unsigned int) var_15))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6] [i_6] [i_10]))) : (3644801818U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_6] [i_6])) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) arr_31 [i_6] [i_6] [i_9]))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 2; i_15 < 11; i_15 += 4) 
                    {
                        var_26 -= ((/* implicit */signed char) arr_40 [i_9] [(signed char)2] [(signed char)4] [i_15] [i_15 + 1]);
                        arr_52 [8LL] [i_6] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-1))))) & (var_14)));
                        var_27 ^= ((/* implicit */_Bool) 549755813887LL);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((549755813887LL) + (arr_14 [i_9 + 3])))) && (((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_13)), (2415530499U))))))));
                        var_29 = (((+(((((/* implicit */int) var_1)) | (((/* implicit */int) var_1)))))) >> (((((/* implicit */int) arr_55 [i_10] [i_10] [i_10] [i_10] [i_10])) + (104))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)-53))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (2686585787U))))) : (arr_32 [i_9] [i_10] [i_9 - 3] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) arr_45 [i_6] [i_6] [i_10] [i_17])))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 2; i_18 < 11; i_18 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) (+(max((arr_14 [i_18 + 2]), (((/* implicit */long long int) arr_40 [i_6] [i_18] [i_6] [i_18] [i_6]))))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_35 [(short)9] [i_9 + 1] [i_9 + 1] [i_17]))))) ? ((-(arr_21 [i_6]))) : (((/* implicit */int) (short)-1)))) / (((/* implicit */int) arr_42 [i_6] [(unsigned short)0] [i_9] [i_6] [i_17] [i_18])))))));
                        }
                        /* vectorizable */
                        for (long long int i_19 = 1; i_19 < 10; i_19 += 3) 
                        {
                            arr_62 [i_6] = ((/* implicit */unsigned long long int) ((_Bool) var_3));
                            var_33 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            arr_63 [i_6] [(unsigned short)2] [i_10] |= ((/* implicit */unsigned short) (+(arr_29 [i_10] [i_10])));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_20 = 3; i_20 < 9; i_20 += 1) /* same iter space */
                        {
                            arr_66 [i_6] [i_6] [i_9 + 3] [i_6] = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_2)) ? (-1992824163) : (((/* implicit */int) arr_31 [i_9] [i_6] [i_20])))))) <= (arr_21 [i_20])));
                            var_34 = 2951355603U;
                            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) 549755813887LL))))) ? (((/* implicit */unsigned long long int) ((1200738785U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18)))))) : (((((/* implicit */_Bool) ((arr_17 [i_10] [i_10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64407)))))) ? (max((9088826902767638936ULL), (4603582480038402455ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_20 - 1])) / (((/* implicit */int) var_13))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_21 = 3; i_21 < 9; i_21 += 1) /* same iter space */
                        {
                            arr_69 [i_6] [i_6] [i_6] [i_17] [(_Bool)1] [12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_21 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) -549755813887LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [6LL]))) : (-1381697074003631117LL)))));
                            var_36 = ((/* implicit */_Bool) arr_58 [i_21 - 1] [i_9 - 3] [i_9] [i_9] [i_9]);
                            arr_70 [i_21 - 2] [i_6] [i_9] [i_9] [i_6] [i_6] = ((/* implicit */long long int) (+(var_12)));
                        }
                        for (unsigned short i_22 = 3; i_22 < 9; i_22 += 1) /* same iter space */
                        {
                            arr_73 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_67 [i_6] [i_6] [i_22 + 1] [i_6] [i_22]))))));
                            var_37 = ((/* implicit */signed char) max((max((arr_32 [i_17] [i_6] [i_22 + 1] [i_17]), (((/* implicit */unsigned long long int) ((-1381697074003631123LL) == (((/* implicit */long long int) arr_43 [i_6] [i_6] [i_10] [i_17] [11]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_56 [i_6] [i_6] [6U] [i_6])))))))));
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((((/* implicit */int) arr_35 [i_22] [i_22] [i_22 + 3] [i_22 + 2])) >> (((((/* implicit */int) arr_35 [i_22 + 3] [i_22 + 3] [i_22 + 2] [i_22 + 2])) - (218))))) << ((((~(((/* implicit */int) arr_35 [i_22] [i_22] [i_22] [i_22 + 1])))) + (231))))))));
                        }
                        var_39 = ((/* implicit */long long int) var_5);
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned char) var_10);
    }
    for (unsigned short i_23 = 1; i_23 < 19; i_23 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_24 = 0; i_24 < 21; i_24 += 3) 
        {
            var_41 = ((((((((arr_76 [i_24] [(_Bool)1]) + (2147483647))) << (((((/* implicit */int) var_5)) - (11767))))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_74 [i_23])))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (arr_16 [(short)12]) : (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_23])))))) && (((/* implicit */_Bool) var_10))))));
            var_42 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(529U))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 4) 
            {
                arr_80 [i_23] [i_23 + 1] [i_23 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_75 [(short)5]))) & (arr_14 [4ULL]))))) << (((max((max((-7772701867988456112LL), (((/* implicit */long long int) (signed char)17)))), (((/* implicit */long long int) (unsigned char)255)))) - (255LL)))));
                var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [i_23 + 2] [i_23 + 2])) ? (arr_17 [i_25] [i_24]) : (((/* implicit */unsigned long long int) arr_76 [i_23 - 1] [i_23 - 1]))))))))));
            }
            for (int i_26 = 0; i_26 < 21; i_26 += 4) 
            {
                var_44 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_77 [(_Bool)1]), (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_74 [i_23 + 2]))))), ((-(max((-549755813887LL), (((/* implicit */long long int) (signed char)105))))))));
                var_45 -= ((/* implicit */unsigned short) ((signed char) (unsigned char)15));
            }
            arr_83 [i_24] [i_23] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-105)) == (((((/* implicit */int) arr_82 [(unsigned short)11] [i_24] [i_24])) | (((/* implicit */int) arr_82 [i_23] [2ULL] [i_23]))))));
        }
        var_46 ^= ((/* implicit */int) (_Bool)1);
        arr_84 [9] [i_23] = ((/* implicit */signed char) arr_16 [i_23 + 1]);
        arr_85 [i_23] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) arr_16 [i_23]))))) ? (((-1381697074003631123LL) / (((/* implicit */long long int) 1026178033U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_74 [i_23])) : (((/* implicit */int) var_5)))))))) ? (((9223372036854775790LL) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 796558783)) || ((_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(796558777)))) ? (((/* implicit */int) ((arr_79 [i_23] [5] [6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) : (((/* implicit */int) ((((/* implicit */int) arr_75 [i_23])) <= (((/* implicit */int) (signed char)55)))))))));
    }
}
