/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59531
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (signed char)-70);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-70)))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (arr_0 [i_0])))), ((-(((/* implicit */int) (unsigned short)57884))))));
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)16692)) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125))))))) % (((/* implicit */int) (short)-25779))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    arr_15 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) -1286237964344278906LL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= ((~(((/* implicit */int) (signed char)-20)))))))));
                        arr_19 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) arr_14 [i_1] [i_1]);
                    }
                }
                var_20 -= ((/* implicit */unsigned char) arr_12 [i_1]);
                var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) (short)29849))));
            }
            for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_6 = 1; i_6 < 19; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) min(((signed char)14), ((signed char)-65)));
                        arr_30 [i_0] [i_1] [i_5] [i_0] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((((/* implicit */int) (signed char)-70)) % (((/* implicit */int) (signed char)-20))))))), (max((((((/* implicit */_Bool) arr_23 [i_7] [i_1] [i_5] [i_1])) ? (((/* implicit */long long int) arr_20 [i_0] [i_1] [i_0])) : (6375156394075530096LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_8)) >= (8502088386790891171ULL))))))));
                    }
                    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-91))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_33 [i_0] [i_1] [i_0] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (4095LL)));
                        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    }
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)93)) << (((((/* implicit */int) (short)-6835)) + (6840)))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_1])), (-1856253973)))) ? (min((arr_23 [i_0] [i_1] [i_5] [i_6]), (((/* implicit */unsigned long long int) (signed char)30)))) : (((/* implicit */unsigned long long int) min((-6375156394075530087LL), (((/* implicit */long long int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))))));
                    var_26 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))));
                }
                arr_34 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)1502)))) & (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) arr_5 [i_0]))))))) - (((((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-1591059019147056853LL))) >> (((min((((/* implicit */unsigned long long int) -6964243007029751680LL)), (16835498596826495530ULL))) - (11482501066679799918ULL)))))));
                arr_35 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            }
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)210)) - (((/* implicit */int) (unsigned char)52)))))))));
        }
        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            arr_38 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)0))));
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) ^ (((/* implicit */int) (unsigned char)4))))) && (((/* implicit */_Bool) arr_4 [i_0])))))));
        }
    }
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_40 [i_10]))))));
        /* LoopSeq 3 */
        for (signed char i_11 = 1; i_11 < 22; i_11 += 4) /* same iter space */
        {
            arr_44 [i_10] = ((/* implicit */long long int) ((int) (signed char)14));
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                arr_48 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) 1994779185U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (72057525318451200LL)));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (-((((-(((/* implicit */int) (_Bool)1)))) + ((~(((/* implicit */int) arr_46 [i_12] [i_11] [i_10] [i_10])))))))))));
            }
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    arr_54 [i_13] [i_11] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_42 [i_11] [i_13] [i_14])) : (17718317178469207231ULL)))) || ((!(((/* implicit */_Bool) (signed char)3))))));
                    var_30 = ((/* implicit */unsigned char) arr_43 [i_13]);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 1) 
                    {
                        arr_57 [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)52))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_15 - 1] [i_11 - 1] [i_13] [i_14] [i_15]))) % (arr_49 [i_10] [i_10] [i_10] [i_10]))))));
                        var_32 -= ((/* implicit */unsigned char) (-(18158513697557839872ULL)));
                        arr_58 [i_10] [i_13] [i_14] [i_15] = (~(arr_42 [i_11 + 1] [i_11 - 1] [i_11 + 1]));
                    }
                    for (signed char i_16 = 3; i_16 < 20; i_16 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) arr_59 [i_13] [i_11] [i_13] [i_13] [i_14] [i_16] [i_16]);
                        var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_1)))) ^ (arr_59 [i_13] [i_13] [i_14] [i_14] [i_11 - 1] [i_13] [i_13])));
                        arr_62 [i_10] [i_13] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_10] [i_11] [i_16]))) % (17718317178469207231ULL))));
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 21; i_17 += 2) 
                    {
                        arr_67 [i_10] [i_11] [i_13] [i_14] [i_13] = ((unsigned short) arr_66 [i_11] [i_14]);
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), ((+(arr_59 [i_14] [i_11 + 1] [i_13] [i_14] [i_17 + 2] [i_11 + 1] [i_17])))));
                    }
                    for (int i_18 = 2; i_18 < 20; i_18 += 2) 
                    {
                        arr_72 [i_10] [i_13] = arr_40 [i_13];
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_14] [i_13] [i_13] [i_11])) ? (arr_49 [i_14] [i_13] [i_11 + 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)19)))));
                    }
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_10] [i_11] [i_13] [i_14])))))));
                }
                for (signed char i_19 = 0; i_19 < 23; i_19 += 3) 
                {
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)59727)))) & ((+(((/* implicit */int) arr_64 [i_10] [i_10] [i_10] [i_10] [i_10])))))))));
                    var_39 += ((/* implicit */_Bool) (~(2170378319295235594LL)));
                }
                for (signed char i_20 = 0; i_20 < 23; i_20 += 2) 
                {
                    arr_79 [i_10] [i_13] [i_11] [i_13] [i_20] [i_20] = ((((((/* implicit */int) arr_60 [i_10] [i_10] [i_10] [i_10] [i_10])) + (2147483647))) << ((((+(((/* implicit */int) (unsigned char)14)))) - (14))));
                    /* LoopSeq 1 */
                    for (long long int i_21 = 2; i_21 < 20; i_21 += 2) 
                    {
                        var_40 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5808))));
                        var_41 = ((/* implicit */unsigned short) min((var_41), (((unsigned short) (short)-17))));
                        arr_84 [i_10] [i_11] [i_13] [i_13] [i_13] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_53 [i_10] [i_11] [i_11]))))) ? (((unsigned int) arr_82 [i_10] [i_10] [i_13] [i_10] [i_10])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_10] [i_11] [i_13] [i_20] [i_11])))));
                    }
                    arr_85 [i_13] = ((/* implicit */int) ((((((/* implicit */int) arr_70 [i_13] [i_11] [i_20] [i_10] [i_20] [i_10] [i_20])) == (((/* implicit */int) (signed char)127)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_11] [i_11] [i_11 - 1] [i_11 + 1] [i_11]))) : ((-(arr_55 [i_10] [i_11] [i_13] [i_13] [i_20])))));
                }
                arr_86 [i_10] [i_13] = ((/* implicit */int) (-(arr_81 [i_11])));
                /* LoopSeq 1 */
                for (int i_22 = 3; i_22 < 21; i_22 += 1) 
                {
                    arr_89 [i_10] [i_11] [i_13] [i_22] [i_22] = ((/* implicit */unsigned int) ((unsigned short) (signed char)0));
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (short)9603)))))));
                }
                var_43 = ((/* implicit */long long int) (-(((/* implicit */int) arr_39 [i_11]))));
            }
            arr_90 [i_10] [i_11] = ((/* implicit */unsigned long long int) ((long long int) -18LL));
        }
        for (signed char i_23 = 1; i_23 < 22; i_23 += 4) /* same iter space */
        {
            var_44 = ((/* implicit */long long int) (-(min((arr_42 [i_10] [i_23 - 1] [i_10]), (((/* implicit */unsigned int) (signed char)0))))));
            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_10] [i_23 - 1] [i_10])) + (((/* implicit */int) arr_70 [i_23] [i_10] [i_23 - 1] [i_23 - 1] [i_23] [i_23] [i_23 - 1]))))) ? (((int) ((((/* implicit */_Bool) arr_74 [i_10] [i_10] [i_23] [i_23] [i_23])) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (signed char)-16))))) : (((/* implicit */int) ((unsigned short) 448901301129940860LL)))));
        }
        for (int i_24 = 0; i_24 < 23; i_24 += 2) 
        {
            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))))))));
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_50 [i_10] [i_24]))) ? (-3997799551339436176LL) : (((/* implicit */long long int) 3458989657U))));
        }
    }
    for (unsigned int i_25 = 3; i_25 < 14; i_25 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_26 = 0; i_26 < 18; i_26 += 2) 
        {
            var_48 ^= ((/* implicit */unsigned short) (-(arr_29 [i_25] [i_26] [i_25 - 3] [i_25] [i_25] [i_25 - 2] [i_25 - 3])));
            /* LoopSeq 2 */
            for (unsigned short i_27 = 0; i_27 < 18; i_27 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_28 = 0; i_28 < 18; i_28 += 2) 
                {
                    arr_107 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_64 [i_25] [i_25] [i_27] [i_27] [i_26]))) + (arr_55 [i_25] [i_26] [i_28] [i_27] [i_28])));
                    var_49 = ((/* implicit */unsigned long long int) (signed char)-78);
                    var_50 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_25] [i_25] [i_26] [i_26] [i_27] [i_28]))));
                    arr_108 [i_25] [i_26] [i_26] [i_26] [i_27] [i_26] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)15))));
                }
                for (unsigned char i_29 = 0; i_29 < 18; i_29 += 2) 
                {
                    arr_111 [i_26] [i_27] = ((/* implicit */signed char) (~(((/* implicit */int) (short)1838))));
                    var_51 = ((((/* implicit */int) (signed char)6)) >= (((/* implicit */int) (signed char)36)));
                    var_52 *= ((/* implicit */unsigned short) var_5);
                }
                var_53 += ((/* implicit */unsigned int) arr_55 [i_25] [i_25] [i_26] [i_26] [i_27]);
                var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) arr_101 [i_27] [i_25 + 3] [i_27] [i_26]))));
                var_55 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_46 [i_25] [i_26] [i_27] [i_26])))) || ((!(((/* implicit */_Bool) (unsigned char)143))))));
            }
            for (unsigned short i_30 = 0; i_30 < 18; i_30 += 2) 
            {
                var_56 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9254)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_31 [i_26] [i_26]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1696884132U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) : (1696884116U)))) : (27ULL)));
                arr_114 [i_25] [i_25] [i_25] = ((unsigned long long int) 835977625U);
                var_57 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-113))))));
                /* LoopSeq 1 */
                for (signed char i_31 = 0; i_31 < 18; i_31 += 1) 
                {
                    arr_118 [i_25] [i_31] [i_31] [i_31] = ((/* implicit */_Bool) -7962588050138383776LL);
                    arr_119 [i_31] [i_30] [i_25] [i_31] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_105 [i_25] [i_26] [i_30] [i_31])) | (var_8))) | (((/* implicit */int) (_Bool)1))));
                }
            }
        }
        arr_120 [i_25] = ((/* implicit */signed char) (+(5814972336932141877ULL)));
        var_58 = ((/* implicit */signed char) max((var_58), (((/* implicit */signed char) 266338304))));
        var_59 = ((/* implicit */long long int) 4660412396278856471ULL);
    }
    var_60 = ((/* implicit */int) var_0);
}
