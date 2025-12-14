/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/603
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_1 - 1] [i_1])))))));
                    arr_7 [i_2] [i_2] [i_2] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) == (((((/* implicit */_Bool) (unsigned short)18698)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46837))) : (arr_1 [i_0] [i_0]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_0 [i_3 + 3])) : (((/* implicit */int) var_11))));
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_17 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) var_5));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_4 + 4])) >> (((/* implicit */int) ((((/* implicit */unsigned int) 1761381631)) <= (var_16)))))))));
                            arr_18 [i_0] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) (unsigned short)46837);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                            var_21 = ((/* implicit */unsigned char) 2066564855099925693LL);
                        }
                        for (int i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)38427)) : (((/* implicit */int) (unsigned short)46814)))))));
                            arr_25 [i_0] [i_3 + 2] [i_4 + 2] [i_3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)46837)) : (((/* implicit */int) (unsigned short)18701))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (-(var_3))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)137)) || (((/* implicit */_Bool) (unsigned short)18720))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((57344) & (((/* implicit */int) (short)16178))))) ? (((/* implicit */int) (unsigned short)14079)) : (((((/* implicit */_Bool) 2066564855099925696LL)) ? (((/* implicit */int) (short)-20171)) : (((/* implicit */int) (unsigned char)3)))))))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483639)) ? (1761381634) : (((/* implicit */int) arr_20 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 - 1] [i_3 - 1] [i_3]))));
                    }
                    for (short i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_3] [i_3] [i_3] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)9))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (_Bool)1))));
                    }
                    for (short i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                    {
                        arr_35 [i_3] [i_3] [i_4] [i_11] [i_0] = ((/* implicit */unsigned int) ((_Bool) -2066564855099925694LL));
                        var_28 = ((/* implicit */long long int) ((205399523U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)30342)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)52710)))))));
                        var_29 = ((/* implicit */unsigned int) 10370673634371530439ULL);
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (-(var_12))))));
                    }
                    for (short i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_12] [i_12] [i_12] [i_12] [i_12] [4U])) ? (((/* implicit */int) arr_6 [i_3 + 2] [i_4 + 1])) : (((/* implicit */int) arr_38 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0]))));
                        var_32 = ((/* implicit */short) ((17937772816984470392ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_33 = 1580988659U;
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-26863)) ? (var_5) : (((/* implicit */unsigned long long int) 1167819767)))))));
                    }
                }
            } 
        } 
        var_35 = ((((-1167819752) == (-1761381634))) ? (1956393211241642322ULL) : (((/* implicit */unsigned long long int) 1761381617)));
        /* LoopSeq 1 */
        for (short i_13 = 2; i_13 < 23; i_13 += 3) 
        {
            var_36 = ((/* implicit */_Bool) 1U);
            var_37 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) ((arr_28 [i_0] [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))) + (11712630020841840599ULL))))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                for (long long int i_15 = 2; i_15 < 22; i_15 += 4) 
                {
                    {
                        var_39 = ((/* implicit */unsigned short) ((arr_36 [i_13 - 1] [i_13 - 2] [i_13 - 1] [i_15 + 2]) / (arr_36 [i_0] [i_13 - 2] [i_13 + 1] [i_15 + 2])));
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) 2144279736)) ? (((((/* implicit */int) (short)25185)) ^ (arr_8 [i_14]))) : (((/* implicit */int) arr_11 [(signed char)7] [(unsigned char)1] [i_0]))));
                        var_41 = ((short) (_Bool)1);
                        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((unsigned long long int) (signed char)(-127 - 1))) * (((/* implicit */unsigned long long int) arr_3 [i_15 - 2] [i_15 - 2] [(unsigned short)1])))))));
                    }
                } 
            } 
            arr_47 [9] [i_0] [i_0] = (((_Bool)0) ? (((/* implicit */unsigned long long int) arr_32 [22U] [i_13 + 1] [i_13 - 2] [i_13] [i_13])) : (7814686078946339020ULL));
        }
    }
    for (long long int i_16 = 2; i_16 < 18; i_16 += 3) 
    {
        var_43 = ((/* implicit */short) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) (unsigned short)37707)) - (37699)))));
        var_44 = ((/* implicit */int) arr_51 [i_16]);
        arr_52 [i_16] = ((/* implicit */unsigned char) 1ULL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            var_45 = ((/* implicit */short) var_13);
            arr_56 [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8014253792489347906ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)108))))) ? (((/* implicit */int) arr_42 [i_16 + 1] [i_17] [i_17] [i_17])) : (((/* implicit */int) (unsigned short)37707))));
        }
        arr_57 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((((/* implicit */int) (signed char)-99)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (11325))))), (((/* implicit */int) var_0))))) ? (((unsigned long long int) min(((unsigned short)27824), (((/* implicit */unsigned short) var_15))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (4294967266U))))));
    }
    for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
    {
        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) arr_43 [i_18]))));
        var_47 = ((/* implicit */unsigned char) ((min((((/* implicit */int) (unsigned char)103)), (2068656282))) + (-2042182999)));
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 1; i_20 < 19; i_20 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        arr_67 [i_19] [i_19] [(_Bool)1] [i_19] = arr_8 [i_18];
                        var_48 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned long long int) var_16))))) ? (((((/* implicit */_Bool) arr_32 [i_18] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_16 [i_18] [5] [i_20] [i_21] [i_19]))) : (((/* implicit */unsigned long long int) arr_60 [i_20 - 1])))), (((/* implicit */unsigned long long int) 4294967267U))));
                        arr_68 [i_18] [i_20] |= ((/* implicit */int) min(((((_Bool)1) ? (arr_36 [i_21] [i_20 - 1] [i_20 - 1] [i_20 + 1]) : (arr_36 [i_20 + 1] [i_20 - 1] [i_20 + 1] [i_20 + 1]))), (((/* implicit */long long int) var_6))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned int) (((~(2206642721546104220LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_23 = 1; i_23 < 18; i_23 += 3) 
                        {
                            var_50 = 2068656281;
                            arr_74 [i_18] [i_18] [i_22] [i_20] [i_18] [i_23 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_69 [i_22] [i_23] [i_22] [i_22])) ? (((/* implicit */int) (unsigned short)1024)) : (((/* implicit */int) (signed char)-47))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        for (unsigned int i_25 = 0; i_25 < 20; i_25 += 2) 
                        {
                            {
                                var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_18] [i_19] [i_20] [i_24] [i_25] [i_20 + 1]))))) ? (((31U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_19] [i_25] [i_20 + 1] [i_19] [i_24] [i_25]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_34 [i_20] [i_20] [i_24] [i_24] [i_18] [i_19]), (arr_34 [i_18] [i_19] [i_20] [i_18] [i_24] [i_24]))))))))));
                                var_52 &= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)21374)) + (((/* implicit */int) (unsigned char)18))))))));
                                var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) min((((((/* implicit */_Bool) 772136788611143930LL)) ? ((+(6984638893063661674ULL))) : (((((/* implicit */unsigned long long int) 1860339347)) + (arr_61 [i_19] [10LL] [i_19]))))), (((/* implicit */unsigned long long int) var_0)))))));
                            }
                        } 
                    } 
                    arr_81 [i_19] [i_19] [(signed char)1] [i_19] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)54729)) * (((/* implicit */int) arr_44 [i_20] [i_20] [i_20 + 1])))));
                    var_54 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (5933313817688092039LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27957)))));
                }
            } 
        } 
        arr_82 [i_18] [i_18] = ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned short i_26 = 0; i_26 < 22; i_26 += 2) 
    {
        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((14603383019037350726ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
        /* LoopNest 2 */
        for (signed char i_27 = 1; i_27 < 19; i_27 += 1) 
        {
            for (unsigned int i_28 = 3; i_28 < 21; i_28 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_29 = 1; i_29 < 19; i_29 += 4) 
                    {
                        for (unsigned int i_30 = 3; i_30 < 18; i_30 += 3) 
                        {
                            {
                                var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) ((unsigned int) ((11462105180645889959ULL) | (2147483647ULL)))))));
                                arr_96 [i_26] [i_27] [i_27 + 2] [i_28] [i_28 + 1] [i_29] [i_30] = ((/* implicit */signed char) ((var_8) / (((/* implicit */int) (short)19550))));
                            }
                        } 
                    } 
                    var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_83 [2ULL] [i_28 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_83 [i_28] [i_28 + 1])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            for (unsigned char i_32 = 0; i_32 < 22; i_32 += 3) 
            {
                {
                    var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17317)) & (((/* implicit */int) var_1))));
                    /* LoopNest 2 */
                    for (int i_33 = 0; i_33 < 22; i_33 += 2) 
                    {
                        for (short i_34 = 0; i_34 < 22; i_34 += 3) 
                        {
                            {
                                var_59 = ((/* implicit */unsigned char) ((unsigned int) -5933313817688092051LL));
                                var_60 ^= ((/* implicit */unsigned short) arr_42 [i_26] [i_26] [i_32] [i_26]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_35 = 0; i_35 < 22; i_35 += 4) 
                    {
                        for (int i_36 = 0; i_36 < 22; i_36 += 1) 
                        {
                            {
                                arr_114 [i_31] = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))) - (3169552750U));
                                var_61 = ((/* implicit */int) (unsigned short)31254);
                            }
                        } 
                    } 
                    var_62 = ((/* implicit */unsigned short) ((((long long int) 3143287499U)) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222)))));
                }
            } 
        } 
    }
    var_63 = var_16;
}
