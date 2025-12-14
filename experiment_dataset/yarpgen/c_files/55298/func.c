/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55298
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
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)4096)))) == (((/* implicit */int) (unsigned short)12))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 *= var_13;
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)32512)))))));
                                var_19 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4 + 1] [i_4 - 1] [i_4 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_16 [i_6] [(unsigned short)11] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)6] [i_0])) ? (((/* implicit */int) arr_11 [(unsigned short)13] [(unsigned short)13] [(unsigned short)13])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)52818)))) : (((/* implicit */int) min((arr_13 [i_0] [i_1] [(unsigned short)17] [i_5 - 2]), (arr_0 [i_0])))))), (((/* implicit */int) ((unsigned short) (unsigned short)65508)))));
                                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) arr_5 [(unsigned short)12] [(unsigned short)12])) : (((((/* implicit */int) arr_10 [i_0])) * (((/* implicit */int) (unsigned short)7346)))))) / (((((/* implicit */_Bool) arr_2 [i_5 - 2] [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_2 [i_0] [i_2] [i_6])) : (((((/* implicit */int) (unsigned short)51488)) / (((/* implicit */int) (unsigned short)65532))))))));
                                arr_17 [i_6] [i_5] [(unsigned short)7] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min(((unsigned short)3116), (arr_9 [i_6] [i_6] [i_0] [(unsigned short)14])))) ? (((/* implicit */int) max((var_11), (var_6)))) : (((/* implicit */int) max((arr_4 [(unsigned short)0] [i_1] [i_0]), ((unsigned short)51465)))))), (((/* implicit */int) var_1))));
                                arr_18 [i_0] [i_1] [i_2] [i_5 - 1] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65531))));
                                var_21 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_2)) | (((/* implicit */int) arr_10 [i_2 + 1])))), (((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (unsigned short)57512)) : (((/* implicit */int) (unsigned short)30740))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
                {
                    {
                        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)65523), (arr_27 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1])))) ? (((/* implicit */int) min((var_0), ((unsigned short)12699)))) : (((/* implicit */int) (unsigned short)7725))));
                        arr_30 [i_0] [i_9] [(unsigned short)18] [i_9] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_5 [i_9 - 1] [i_9 - 1]))))));
                        var_23 = min(((unsigned short)36984), (max(((unsigned short)41467), (var_11))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
    {
        var_24 = arr_32 [i_10] [i_10];
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 22; i_11 += 3) 
        {
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 2; i_13 < 23; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 23; i_14 += 3) 
                        {
                            {
                                arr_45 [i_10] [i_11] [i_12] [i_12] [i_13] [i_14] = arr_40 [i_14 - 2] [(unsigned short)10] [i_14] [i_14];
                                arr_46 [(unsigned short)11] [(unsigned short)13] [(unsigned short)22] [i_14] = (unsigned short)47351;
                            }
                        } 
                    } 
                    arr_47 [i_10] [i_11] [(unsigned short)23] [i_10] = ((/* implicit */unsigned short) ((max((((/* implicit */int) (unsigned short)12)), (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_38 [i_10] [i_10] [(unsigned short)2] [i_10] [(unsigned short)8] [i_10])))))) <= (((/* implicit */int) var_1))));
                    var_25 |= (unsigned short)63748;
                    arr_48 [i_10] [i_10] [i_10] [(unsigned short)20] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_42 [i_10] [i_10] [i_11 - 1] [i_12] [(unsigned short)18])) ? (((((/* implicit */_Bool) arr_31 [i_10])) ? (((/* implicit */int) (unsigned short)24500)) : (((/* implicit */int) arr_39 [i_11] [i_11] [(unsigned short)23] [(unsigned short)22] [(unsigned short)6])))) : (((/* implicit */int) min(((unsigned short)62889), (arr_35 [i_10] [i_10] [i_12])))))) >= (max((((/* implicit */int) min((var_5), (arr_41 [i_10] [i_10] [i_10] [i_10] [(unsigned short)20])))), ((+(((/* implicit */int) var_4))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
    {
        arr_53 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_52 [i_15])) : (((/* implicit */int) (unsigned short)41456))));
        /* LoopSeq 2 */
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [(unsigned short)20] [i_15])))))));
            /* LoopSeq 4 */
            for (unsigned short i_17 = 0; i_17 < 25; i_17 += 4) /* same iter space */
            {
                var_27 &= ((unsigned short) ((((/* implicit */_Bool) (unsigned short)61128)) ? (((/* implicit */int) (unsigned short)38357)) : (((/* implicit */int) (unsigned short)18155))));
                arr_59 [(unsigned short)20] [i_17] [(unsigned short)10] [(unsigned short)22] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)27179))));
            }
            for (unsigned short i_18 = 0; i_18 < 25; i_18 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_19 = 3; i_19 < 23; i_19 += 3) 
                {
                    for (unsigned short i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        {
                            arr_70 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)47345))));
                            arr_71 [i_18] [i_16] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_51 [i_15] [i_19])))) % (((/* implicit */int) (unsigned short)24327))));
                            var_28 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_2))))));
                        }
                    } 
                } 
                arr_72 [i_16] = var_0;
                var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)56000)) || (((/* implicit */_Bool) var_15)))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned short)11370))));
                var_30 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_60 [i_15] [i_15] [i_15])) & (((/* implicit */int) (unsigned short)52724))));
            }
            for (unsigned short i_21 = 0; i_21 < 25; i_21 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_22 = 1; i_22 < 24; i_22 += 3) 
                {
                    for (unsigned short i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)9535)) / (((/* implicit */int) (unsigned short)34478)))))));
                            var_32 = var_8;
                            arr_81 [(unsigned short)6] [i_16] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)18185)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_37 [i_15] [i_16] [i_21] [i_21]))))));
                        }
                    } 
                } 
                arr_82 [i_15] [i_15] [i_15] [i_21] |= arr_63 [i_15] [i_15] [i_21] [i_15] [i_15] [(unsigned short)0];
            }
            for (unsigned short i_24 = 0; i_24 < 25; i_24 += 4) /* same iter space */
            {
                arr_86 [i_16] = var_11;
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_54 [i_15] [i_16] [i_24])) != (((/* implicit */int) (unsigned short)31622))));
            }
        }
        for (unsigned short i_25 = 0; i_25 < 25; i_25 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65527)) <= (((/* implicit */int) arr_83 [i_15] [(unsigned short)2] [i_25]))));
            /* LoopSeq 4 */
            for (unsigned short i_26 = 0; i_26 < 25; i_26 += 3) 
            {
                var_35 = arr_91 [(unsigned short)11] [i_25] [i_15];
                arr_92 [i_15] [i_15] [i_26] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_74 [i_26])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_74 [i_26]))));
            }
            for (unsigned short i_27 = 0; i_27 < 25; i_27 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_28 = 0; i_28 < 25; i_28 += 4) 
                {
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_73 [i_25] [i_25] [i_27])) ? (((/* implicit */int) arr_79 [(unsigned short)20] [i_15] [i_28] [(unsigned short)18] [(unsigned short)16] [i_15] [i_15])) : (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)35640))))));
                    var_37 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_79 [i_15] [i_15] [i_27] [(unsigned short)14] [(unsigned short)14] [i_15] [i_15])) > (((/* implicit */int) (unsigned short)54100))))) % (((((/* implicit */_Bool) arr_64 [(unsigned short)16] [i_25] [i_25])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_56 [i_28] [i_27] [i_27] [(unsigned short)20]))))));
                    var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_63 [i_15] [i_25] [i_27] [i_28] [i_28] [i_25])) % (((/* implicit */int) var_7)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_29 = 0; i_29 < 25; i_29 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned short) max((var_39), ((unsigned short)38223)));
                        arr_100 [i_15] [i_15] [i_15] [i_15] [(unsigned short)21] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned short)11429))))) % (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) arr_38 [i_15] [i_15] [i_27] [(unsigned short)7] [(unsigned short)4] [(unsigned short)21])))))));
                        var_40 ^= var_9;
                        arr_101 [i_15] [i_25] [(unsigned short)22] [(unsigned short)13] [(unsigned short)14] [i_29] = arr_39 [(unsigned short)3] [i_25] [i_27] [i_28] [(unsigned short)3];
                    }
                }
                for (unsigned short i_30 = 0; i_30 < 25; i_30 += 4) 
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24080)) <= (((/* implicit */int) (unsigned short)26158))));
                    var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                    arr_104 [(unsigned short)23] = arr_91 [i_27] [i_27] [i_27];
                    var_43 = arr_94 [i_25] [i_27] [i_30];
                }
                arr_105 [i_27] [i_15] [i_15] [i_15] = (unsigned short)49182;
                var_44 = ((/* implicit */unsigned short) max((var_44), (var_4)));
                /* LoopNest 2 */
                for (unsigned short i_31 = 0; i_31 < 25; i_31 += 4) 
                {
                    for (unsigned short i_32 = 3; i_32 < 24; i_32 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_67 [i_27] [i_31] [i_27] [i_27] [i_27] [(unsigned short)18] [i_15])) << (((((/* implicit */int) var_7)) - (33065))))) << (((((/* implicit */int) (unsigned short)62889)) - (62882)))));
                            arr_110 [(unsigned short)17] [(unsigned short)20] [i_27] [i_27] [i_27] = ((unsigned short) ((unsigned short) var_3));
                            arr_111 [i_15] [i_15] [i_15] [(unsigned short)16] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_103 [i_32 + 1] [i_32 + 1] [i_32] [i_32 + 1] [i_32 - 2] [i_32])) <= (((/* implicit */int) arr_103 [i_32 - 1] [i_32 - 1] [i_32] [i_32] [i_32 - 1] [i_32]))));
                            var_46 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16353)) ? (((/* implicit */int) arr_38 [i_32 + 1] [i_32] [(unsigned short)22] [i_32] [i_32 - 1] [i_32])) : (((/* implicit */int) arr_42 [i_32 + 1] [i_32 + 1] [i_32 + 1] [i_32] [i_32 - 1]))));
                            arr_112 [i_15] [i_15] [i_15] [i_31] [i_32] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)2179))));
                        }
                    } 
                } 
            }
            for (unsigned short i_33 = 0; i_33 < 25; i_33 += 4) 
            {
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6274)) ? (((((/* implicit */_Bool) arr_31 [i_15])) ? (((/* implicit */int) (unsigned short)27312)) : (((/* implicit */int) (unsigned short)24068)))) : (((/* implicit */int) (unsigned short)6239))));
                arr_116 [(unsigned short)23] [i_25] = (unsigned short)31082;
                var_48 = ((unsigned short) (unsigned short)33409);
                arr_117 [i_33] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_31 [(unsigned short)9]))));
            }
            for (unsigned short i_34 = 0; i_34 < 25; i_34 += 4) 
            {
                var_49 *= (unsigned short)3;
                var_50 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5332)) ? (((/* implicit */int) (unsigned short)15043)) : (((/* implicit */int) (unsigned short)65523))));
                arr_120 [i_15] [i_15] [(unsigned short)21] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)39984)) >= (((/* implicit */int) (unsigned short)33409))))) / (((/* implicit */int) var_9))));
            }
            arr_121 [i_15] [i_25] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_84 [(unsigned short)10])) ? (((/* implicit */int) arr_84 [(unsigned short)14])) : (((/* implicit */int) arr_84 [(unsigned short)2]))));
        }
        arr_122 [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [(unsigned short)18] [i_15])) | (((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [i_15] [i_15]))));
        var_51 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)46670))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned short)6262))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [i_15] [(unsigned short)14])))))));
    }
    var_52 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (var_8))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), ((unsigned short)50726)))))))));
}
