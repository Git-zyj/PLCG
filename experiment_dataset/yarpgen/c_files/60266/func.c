/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60266
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48191)) ^ (((/* implicit */int) (!(((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (unsigned short)17344))))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max(((unsigned short)17344), ((unsigned short)17344)));
        var_21 = ((/* implicit */unsigned long long int) max((min(((-(var_11))), (((((/* implicit */long long int) var_3)) - (var_11))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)48192)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) arr_2 [i_0])))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_3])))) || (((/* implicit */_Bool) arr_0 [i_3]))))) == (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3]))))) < (min((((/* implicit */int) arr_3 [i_0])), (arr_0 [i_3]))))))));
                            var_23 = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]);
                        }
                        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            var_24 = (unsigned short)65505;
                            var_25 = ((/* implicit */short) arr_13 [10U] [i_1] [i_1] [i_0] [i_0] [i_5]);
                        }
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_21 [i_1 - 2] [10] [i_3] [i_0] = ((signed char) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1 - 3] [i_2 + 1] [i_0] [i_0]))));
                            var_26 |= ((/* implicit */unsigned long long int) (~(arr_8 [i_2 + 1] [i_2 + 1] [i_3])));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_1 - 2] [i_0] [i_3] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)48191)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_8 [i_0] [i_2 - 2] [i_3])));
                            var_27 = ((/* implicit */unsigned long long int) var_8);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_10 = 1; i_10 < 16; i_10 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_11 = 2; i_11 < 18; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            arr_41 [i_8] [i_8] [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) % (2285885117U)));
                            arr_42 [i_8] [i_9] [i_10] [i_10] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_11 + 1] [i_9] [i_9])) ? (((/* implicit */int) arr_32 [i_10 - 1] [i_11 - 1])) : (((/* implicit */int) arr_32 [i_11 - 1] [i_12]))));
                            arr_43 [i_8] [i_8] [i_8] [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (((/* implicit */long long int) arr_39 [(unsigned short)6] [(unsigned short)6] [18U] [i_10 + 2] [2] [i_12] [i_12])) : (((((/* implicit */_Bool) (unsigned short)17344)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (4171517182417220128LL)))));
                            arr_44 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17357)) ? (((/* implicit */int) (unsigned short)48191)) : (((/* implicit */int) arr_36 [i_8] [i_10] [(_Bool)1]))))) ? (arr_35 [i_8] [i_8] [(_Bool)1] [i_12]) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_29 [(short)17])))));
                        }
                    } 
                } 
                arr_45 [i_8] = ((/* implicit */unsigned char) 18356479049782865538ULL);
            }
            for (signed char i_13 = 1; i_13 < 16; i_13 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    var_28 = ((/* implicit */unsigned short) ((_Bool) arr_47 [i_8] [i_13]));
                    /* LoopSeq 3 */
                    for (short i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_48 [i_8] [(unsigned short)0] [i_13] [i_13]);
                        var_30 = ((/* implicit */_Bool) ((short) ((arr_28 [i_15]) / (var_3))));
                        arr_55 [i_8] [i_9] [i_9] [i_13] [13U] = ((/* implicit */unsigned int) ((arr_40 [i_8] [i_13 + 1] [i_13]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48121)))));
                        var_31 |= ((/* implicit */unsigned short) ((_Bool) 8936830510563328ULL));
                        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    }
                    for (short i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_13 + 3])) / (((/* implicit */int) arr_29 [i_13 + 1]))));
                        arr_58 [i_8] [i_13] [i_13] [i_14] [0] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (short)8184)))));
                        arr_59 [i_13] [i_14] = ((/* implicit */unsigned int) (~(var_13)));
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_13 + 3] [i_9] [i_16] [i_13 + 3] [i_16])) && (((/* implicit */_Bool) arr_49 [i_13 + 1] [i_9] [i_16] [i_9] [16U])))))));
                    }
                    for (long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) var_18);
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_13 - 1] [i_14] [i_13 + 1] [i_13 + 2] [i_13 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_13 + 3] [i_13 + 2] [i_17]))) : (arr_56 [i_13 + 3] [i_14] [i_13 + 1] [i_13 - 1] [i_13 + 3]))))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    arr_66 [i_8] [(_Bool)1] [i_9] [i_9] [i_9] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_13] [i_13 + 2] [i_13 + 1] [4ULL] [i_13 + 2] [i_13 - 1] [i_13 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_39 [i_13] [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 + 1] [i_13 + 3])));
                    var_37 |= ((unsigned short) (~(var_11)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        arr_71 [i_8] [i_9] [i_9] [i_13] [i_19] = ((/* implicit */signed char) arr_61 [i_18] [i_18] [i_13] [i_18] [i_18]);
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (~(((/* implicit */int) (short)-31442)))))));
                        arr_72 [i_13] [i_13] = ((/* implicit */unsigned char) (!(((14646599280634202047ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    }
                }
                /* LoopSeq 2 */
                for (short i_20 = 0; i_20 < 19; i_20 += 1) 
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [i_9] [i_13 - 1] [i_13 + 2] [(short)4] [i_20] [i_13] [i_20])) / (((/* implicit */int) (short)23522))));
                    var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_49 [7ULL] [7ULL] [i_13] [i_20] [7ULL]))));
                    var_41 = arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8];
                }
                for (signed char i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    var_42 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 0U)))))));
                    arr_80 [i_13] [i_9] [i_13] [i_21] = ((/* implicit */unsigned char) ((((int) var_5)) % (((((/* implicit */_Bool) (short)23522)) ? (((/* implicit */int) arr_69 [i_8] [i_9] [i_9] [i_21] [i_13])) : (((/* implicit */int) arr_76 [i_21]))))));
                    arr_81 [i_8] [i_13] [i_13] [(unsigned short)16] = ((/* implicit */long long int) (unsigned short)47489);
                }
            }
            var_43 = ((/* implicit */unsigned short) 3579802062651263453ULL);
        }
        /* LoopNest 2 */
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            for (long long int i_23 = 0; i_23 < 19; i_23 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_24 = 0; i_24 < 19; i_24 += 2) 
                    {
                        for (long long int i_25 = 0; i_25 < 19; i_25 += 3) 
                        {
                            {
                                var_44 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) >> (((-4171517182417220129LL) + (4171517182417220133LL))))))));
                                arr_94 [i_25] [(unsigned short)10] [i_23] [i_24] [i_24] [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) var_12)) : (arr_34 [i_22 - 1] [i_22 - 1] [i_22 - 1]))))))) ? (((var_0) % (((/* implicit */unsigned long long int) arr_84 [i_22 - 1] [i_22 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2199023255551ULL)) ? (((/* implicit */int) arr_29 [(_Bool)1])) : (var_3))) < (((/* implicit */int) (!(((/* implicit */_Bool) 576460752303423472LL)))))))))));
                            }
                        } 
                    } 
                    arr_95 [i_8] [i_22] = ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_8] [i_22 - 1] [(unsigned short)0] [i_23] [(unsigned short)16]))) != (arr_79 [i_22] [i_22] [i_22] [i_23])))) & ((-(-1))))), (var_5)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_26 = 0; i_26 < 19; i_26 += 3) 
        {
            for (int i_27 = 1; i_27 < 17; i_27 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_28 = 0; i_28 < 19; i_28 += 1) 
                    {
                        var_45 = ((/* implicit */signed char) arr_61 [14U] [i_27 + 1] [6U] [i_28] [(short)6]);
                        var_46 = ((/* implicit */unsigned int) var_12);
                    }
                    /* LoopNest 2 */
                    for (long long int i_29 = 0; i_29 < 19; i_29 += 4) 
                    {
                        for (unsigned short i_30 = 0; i_30 < 19; i_30 += 1) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) arr_32 [i_29] [i_26])))), ((+(((/* implicit */int) (short)32767)))))))));
                                var_48 = ((/* implicit */long long int) arr_64 [i_30] [i_27]);
                                var_49 = ((/* implicit */int) ((((((long long int) (_Bool)0)) | (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_8] [i_26] [i_8] [i_30] [i_30]))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(arr_57 [i_8] [i_8] [i_26] [i_8] [i_29] [i_30] [i_30])))) > (((((/* implicit */_Bool) arr_102 [i_27] [i_27])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_51 [i_8] [i_26] [i_27 - 1] [i_30]))))))))));
                                var_50 -= min((((/* implicit */short) var_15)), ((short)-24474));
                            }
                        } 
                    } 
                    arr_109 [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_3)) <= ((-((~(arr_37 [i_8] [i_8] [i_8] [9U])))))));
                    /* LoopSeq 2 */
                    for (short i_31 = 1; i_31 < 18; i_31 += 4) 
                    {
                        var_51 = ((/* implicit */_Bool) 1238735474);
                        arr_112 [(unsigned short)2] |= ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) & (arr_102 [i_26] [i_31 - 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
                        arr_113 [i_8] [i_31] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19))));
                    }
                    for (unsigned char i_32 = 4; i_32 < 17; i_32 += 3) 
                    {
                        arr_116 [i_26] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-14531))));
                        var_52 = ((/* implicit */unsigned char) ((arr_35 [i_8] [i_26] [15U] [i_32 + 2]) / (((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_8] [0] [18LL] [i_27] [18LL] [(signed char)10] [i_32 - 2])) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) ^ (1293569550U)))))))));
                    }
                    arr_117 [13U] = ((/* implicit */unsigned short) (+(((arr_65 [i_8] [i_27 - 1] [i_27 - 1] [i_27 + 2] [i_8] [i_8]) & (arr_65 [i_8] [i_27 - 1] [i_27 - 1] [i_26] [i_8] [i_8])))));
                }
            } 
        } 
        var_53 = ((/* implicit */unsigned short) arr_53 [i_8]);
    }
    var_54 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))))), (((var_0) ^ (((/* implicit */unsigned long long int) 4171517182417220128LL)))))) % (2542184114672255551ULL)));
    var_55 = ((/* implicit */_Bool) var_6);
}
