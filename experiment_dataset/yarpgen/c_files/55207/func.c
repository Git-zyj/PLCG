/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55207
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [20] &= ((var_5) | (((max((((/* implicit */unsigned long long int) var_0)), (var_4))) >> (((var_2) - (3390658598U))))));
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) var_2);
        }
        var_10 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-242))) : (-5900796284898067275LL)))));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_13 [(unsigned char)7] [(unsigned char)7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)165)))) ^ (((((/* implicit */unsigned long long int) var_0)) ^ (var_5)))));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (min((((/* implicit */unsigned long long int) var_7)), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1627534909)) ? (-701336613) : ((~(-1442514241))))))));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~(((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_13 = ((/* implicit */int) min((var_13), (((max((((/* implicit */int) (unsigned char)16)), (1627534909))) + (((((/* implicit */int) var_9)) >> (((var_3) - (14459157609781050293ULL)))))))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                arr_21 [i_4] = ((/* implicit */unsigned char) var_8);
                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2132912439U)) ? (-1529085753) : (-1627534917))))));
            }
        }
    }
    for (unsigned char i_5 = 4; i_5 < 10; i_5 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) (~(var_1)));
        var_16 = ((/* implicit */_Bool) ((short) 2162054885U));
        /* LoopSeq 4 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_27 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) (~(var_8)));
            arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-3421613126719149011LL), (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) ((unsigned char) var_2)))))));
            var_17 = ((/* implicit */unsigned char) var_1);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            var_18 = ((((/* implicit */long long int) var_2)) % (var_1));
            arr_31 [8ULL] [i_7] [i_7] = ((/* implicit */unsigned short) var_4);
            arr_32 [i_7] = ((/* implicit */unsigned char) var_9);
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-701336613) : (((/* implicit */int) var_9))))) % ((~(var_3)))));
            arr_33 [8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((-481455050) + (481455054)))));
        }
        for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 1) 
        {
            arr_37 [i_5] = ((/* implicit */short) var_7);
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned char)193))));
                var_21 = var_0;
                var_22 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_4)) && (var_7)))));
            }
            arr_41 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] = ((/* implicit */signed char) ((unsigned long long int) ((-781319788) | (((/* implicit */int) (unsigned char)85)))));
        }
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            arr_44 [i_5] [(unsigned short)10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)175)), (var_4)));
            arr_45 [i_5] [i_5] [i_10] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_4))) : ((+(var_3))));
            /* LoopSeq 4 */
            for (unsigned char i_11 = 3; i_11 < 11; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
                {
                    arr_52 [i_12] [i_10] [i_5 + 2] [11U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) - (18207701277947943720ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) : (((var_1) / (var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned long long int) var_2)), (var_5)))));
                    var_23 |= ((/* implicit */signed char) ((((var_3) % (((/* implicit */unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)16)) >> (((1627534909) - (1627534901))))))));
                    arr_53 [i_5] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) (!(((var_9) || (((/* implicit */_Bool) var_8))))));
                }
                arr_54 [i_11] [i_11] [(_Bool)1] [i_11] = ((/* implicit */int) 16838397864389605805ULL);
            }
            for (signed char i_13 = 1; i_13 < 10; i_13 += 4) 
            {
                var_24 = ((/* implicit */unsigned short) min((14036373002060549196ULL), (6046412248797385707ULL)));
                arr_57 [9] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) | (5910791033828629861ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) (unsigned char)175)) ? (-4607621877581636918LL) : (((/* implicit */long long int) 3261376947U)))) : (5900796284898067250LL)));
                var_25 |= ((/* implicit */short) max((var_3), (((((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) + (max((((/* implicit */unsigned long long int) var_9)), (var_5)))))));
            }
            for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                arr_61 [0LL] [i_10] = (+((~(-1771633564))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2210986971802041003LL), (var_8)))) ? (max((((/* implicit */unsigned long long int) max((-3607900841209791144LL), (((/* implicit */long long int) (unsigned short)20360))))), (min((8937759000001031877ULL), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((var_8) / (var_8)))))), (((var_4) % (18051360600695938126ULL)))));
                var_28 = ((/* implicit */unsigned char) var_0);
                arr_62 [i_5] [i_10] [i_14] = ((((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_1))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (short)16197)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)16)), (835873372U)))) : (((((/* implicit */_Bool) var_6)) ? (16688853828493931832ULL) : (var_5))))) - (835873348ULL))));
            }
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                arr_65 [i_5] [i_5] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_4) - (((/* implicit */unsigned long long int) var_2)))) * (((/* implicit */unsigned long long int) var_2))))) ? (((((var_7) ? (((/* implicit */unsigned long long int) var_1)) : (var_4))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))))) : (((((var_7) ? (var_5) : (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_7)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_16 = 4; i_16 < 11; i_16 += 4) 
                {
                    var_29 = ((/* implicit */signed char) -259532893);
                    arr_70 [i_5 - 2] [5] [i_5 - 2] [i_5] [i_5 - 2] [(signed char)10] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)81)) >> (((9246730302432333189ULL) - (9246730302432333169ULL)))));
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)58)) >> (((var_4) - (7258214378884486960ULL))))))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) 3017087435022875267LL))));
                    }
                    for (unsigned int i_18 = 4; i_18 < 11; i_18 += 2) 
                    {
                        arr_76 [i_5 - 4] [i_5 - 4] = (!(((/* implicit */_Bool) var_5)));
                        var_33 += ((/* implicit */unsigned char) ((((((/* implicit */long long int) var_0)) % (var_8))) | (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((var_5) + (((/* implicit */unsigned long long int) var_8)))))));
                        var_35 = ((/* implicit */long long int) ((var_2) >> (((var_1) + (6792395310774662417LL)))));
                    }
                    var_36 = ((/* implicit */_Bool) ((((var_1) + (9223372036854775807LL))) >> (((-875523669) + (875523703)))));
                    arr_77 [i_5] [i_5] = ((((/* implicit */long long int) var_0)) % (var_1));
                }
                arr_78 [i_5] [i_5] [i_15] [i_15] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) | (((var_1) % (((/* implicit */long long int) var_2)))))) | (((((/* implicit */long long int) ((/* implicit */int) (short)9053))) | (var_8)))));
                arr_79 [i_15] [i_10] [(signed char)9] [i_5 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) (short)24438)) + (((/* implicit */int) (unsigned char)81))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                arr_84 [(short)0] [i_10] [i_5 - 4] [i_5 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (9508985073708519746ULL) : (var_4)));
                var_37 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (778904861349753870ULL)));
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                arr_88 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-3017087435022875263LL) : (var_8)))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) var_9))));
                var_39 = ((/* implicit */short) ((((395383473013613510ULL) >> (((/* implicit */int) var_7)))) >> (((var_5) - (6326833429318403374ULL)))));
            }
        }
    }
    for (unsigned char i_21 = 4; i_21 < 10; i_21 += 4) /* same iter space */
    {
        arr_91 [i_21] = ((/* implicit */unsigned char) ((((var_1) | (((/* implicit */long long int) ((/* implicit */int) (short)-9046))))) % (((/* implicit */long long int) var_2))));
        arr_92 [i_21] = var_3;
        arr_93 [i_21 + 1] [i_21 - 1] = ((/* implicit */unsigned char) ((((var_8) + (9223372036854775807LL))) >> (((var_4) - (7258214378884486919ULL)))));
        arr_94 [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) | (var_5)));
    }
    /* LoopSeq 2 */
    for (int i_22 = 0; i_22 < 16; i_22 += 1) 
    {
        arr_97 [i_22] [i_22] = max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (signed char)97))))), (var_5))), (((/* implicit */unsigned long long int) var_8)));
        var_40 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) var_2))) | ((((~(var_4))) & (((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */unsigned int) 749561263)))))))));
        /* LoopSeq 3 */
        for (unsigned short i_23 = 2; i_23 < 12; i_23 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_24 = 0; i_24 < 16; i_24 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_41 = ((/* implicit */short) ((10140523777980365043ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2334)))));
                    var_42 += ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) % (((/* implicit */int) max((var_9), ((_Bool)1))))));
                    var_43 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_2)) | (((((/* implicit */_Bool) var_5)) ? (var_3) : (((var_5) >> (((var_4) - (7258214378884486918ULL)))))))));
                    var_44 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27121)) * (((/* implicit */int) (unsigned short)19632))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2188377931U))))) >> (((var_1) + (6792395310774662410LL)))));
                    arr_106 [i_22] [i_23 + 2] = ((/* implicit */long long int) ((short) (((((~(((/* implicit */int) (signed char)32)))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)228)) - (207))))));
                }
                for (unsigned long long int i_26 = 1; i_26 < 13; i_26 += 2) 
                {
                    var_45 = ((/* implicit */_Bool) (short)-9044);
                    var_46 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1750472153)) | (10140523777980365033ULL)))) ? (((((unsigned long long int) (short)9053)) >> (((/* implicit */int) var_7)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) % (10140523777980365043ULL)))));
                    var_47 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) | (((/* implicit */int) var_7)))) >> (((((/* implicit */int) var_7)) >> (((/* implicit */int) var_9))))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)81))))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (var_0)))))));
                    arr_110 [i_22] [i_22] [i_24] [i_26] = ((/* implicit */unsigned char) var_3);
                    arr_111 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) % (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0)))) : (var_4)));
                }
                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -765567010)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) && (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2))))));
            }
            for (unsigned long long int i_27 = 2; i_27 < 15; i_27 += 1) 
            {
                arr_116 [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8306220295729186574ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((10140523777980365043ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : ((~(8306220295729186584ULL)))));
                arr_117 [(unsigned char)6] [i_22] [i_23 + 4] [(unsigned char)10] |= ((/* implicit */short) (+(((var_9) ? (var_8) : (((((/* implicit */_Bool) (short)9046)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                arr_118 [i_22] = ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) + (((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (signed char)-126)))))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_1))) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
            }
            arr_119 [i_22] [i_23] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) var_1))));
        }
        for (int i_28 = 0; i_28 < 16; i_28 += 3) 
        {
            var_49 = ((/* implicit */_Bool) (((~(var_4))) % (((/* implicit */unsigned long long int) ((((var_8) + (9223372036854775807LL))) >> (((1750472175) - (1750472162))))))));
            var_50 |= ((/* implicit */unsigned int) var_3);
            var_51 = ((/* implicit */unsigned int) (unsigned short)53525);
        }
        for (unsigned int i_29 = 0; i_29 < 16; i_29 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_30 = 3; i_30 < 12; i_30 += 3) 
            {
                var_52 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9039))) : (var_4)));
                arr_127 [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_1) : (var_1)));
                var_53 = ((/* implicit */short) var_2);
                /* LoopSeq 2 */
                for (unsigned char i_31 = 0; i_31 < 16; i_31 += 4) 
                {
                    arr_130 [i_22] [i_22] [i_30] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_1))))));
                    arr_131 [i_22] [i_31] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)81)) && ((_Bool)0))))) | (var_0)));
                }
                for (unsigned char i_32 = 0; i_32 < 16; i_32 += 1) 
                {
                    var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))));
                    var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) var_7))));
                    arr_136 [i_22] [i_22] [i_22] = ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)53)) - (50))));
                    var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_1)));
                    arr_137 [2U] [i_29] [i_22] [i_29] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)246)))))));
                }
            }
            var_57 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_2)) : (var_3)))) ? (((((/* implicit */int) (unsigned char)157)) >> (((var_1) + (6792395310774662409LL))))) : (((/* implicit */int) ((signed char) (unsigned char)193))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_33 = 1; i_33 < 13; i_33 += 2) 
    {
        var_58 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) var_0))));
        arr_140 [i_33] &= ((/* implicit */_Bool) ((var_4) + (var_4)));
    }
    var_59 = ((/* implicit */_Bool) var_8);
    var_60 = var_8;
    var_61 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((var_8) | (((/* implicit */long long int) var_0))))) ? (((var_5) >> (((((/* implicit */int) (signed char)-103)) + (116))))) : (((/* implicit */unsigned long long int) ((((var_1) + (9223372036854775807LL))) >> (((var_8) + (5355019188247575908LL)))))))), (((((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))))));
}
