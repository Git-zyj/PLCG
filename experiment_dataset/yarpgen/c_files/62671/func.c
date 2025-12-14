/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62671
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
    var_17 -= ((/* implicit */_Bool) (-(max((((/* implicit */int) (signed char)42)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    var_18 = var_8;
    var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (_Bool)1;
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3 + 1] = min(((signed char)38), ((signed char)109));
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) (!((_Bool)1)))) % (((/* implicit */int) arr_8 [i_1] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2])))) | (((/* implicit */int) (_Bool)1))));
                        var_22 &= ((signed char) (((+(((/* implicit */int) (signed char)-14)))) - (((var_5) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) (signed char)79))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 3; i_5 < 23; i_5 += 1) 
            {
                arr_17 [i_0] [i_4] = (_Bool)1;
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)15))));
                    var_23 = var_13;
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_23 [(signed char)9] [i_7] [i_7] [(signed char)9] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_9 [i_5 - 3] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) arr_19 [i_5 - 3] [i_5 - 3] [i_5 - 3]))));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 2; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_4] [i_7] [(signed char)16]))))));
                        var_25 = (_Bool)0;
                        arr_26 [i_0] [i_4] [i_5 - 1] [i_7] [i_8 - 2] [i_0] [i_0] = arr_3 [(signed char)23];
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_8 + 1] = ((/* implicit */signed char) arr_5 [(_Bool)1] [i_8 - 1] [(_Bool)1]);
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_9 = 2; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        arr_30 [i_0] [i_4] [i_7] [i_4] [i_7] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_19 [i_0] [i_5 + 1] [i_7]))))));
                        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))));
                        var_28 &= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-102))));
                        var_29 -= ((/* implicit */_Bool) ((signed char) (_Bool)1));
                    }
                    for (signed char i_10 = 2; i_10 < 23; i_10 += 3) /* same iter space */
                    {
                        arr_34 [(signed char)7] [i_4] [i_5 - 1] [i_7] = (signed char)-115;
                        arr_35 [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_6 [i_4] [i_5 + 1]))));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_38 [i_11] [i_5] [i_5 - 2] [i_4] [(_Bool)1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_4] [i_5 - 3]))));
                    arr_39 [i_11] [i_5] [i_5] [(_Bool)1] [(signed char)13] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)10))))) ? (((/* implicit */int) min((arr_4 [i_5 - 2]), ((signed char)11)))) : (((/* implicit */int) arr_4 [i_5 + 1]))));
                    var_30 -= ((/* implicit */signed char) max((((arr_19 [i_5 - 3] [i_5 - 3] [(signed char)7]) ? (((/* implicit */int) arr_19 [i_5 - 3] [i_4] [(_Bool)1])) : (((/* implicit */int) var_7)))), (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)85)))))));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)82))))))))));
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_42 [i_0] [i_0] [i_4] [i_12] = ((/* implicit */_Bool) min(((~((~(((/* implicit */int) (signed char)-56)))))), (((((/* implicit */_Bool) arr_22 [i_12])) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) (signed char)-111))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_49 [i_0] = ((((arr_28 [i_12] [i_4]) && (arr_28 [i_4] [i_14]))) || (((/* implicit */_Bool) min((((/* implicit */signed char) arr_28 [i_4] [i_13])), ((signed char)-56)))));
                            var_32 += (_Bool)1;
                            arr_50 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
            }
            /* LoopSeq 4 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_33 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_15] [(_Bool)1] [i_0])) << (((((/* implicit */int) arr_15 [i_0] [i_4] [i_15])) << (((/* implicit */int) arr_15 [i_15] [i_4] [i_15]))))));
                var_34 -= (signed char)-25;
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        {
                            arr_60 [i_17] [i_16] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_16] [i_17]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)2))))) : (((/* implicit */int) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (_Bool)1))));
                            var_35 = (_Bool)0;
                            arr_61 [i_0] [i_4] [i_15] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-108))));
                            arr_62 [i_17] [i_16] [i_15] [i_4] [i_0] |= arr_1 [i_0];
                        }
                    } 
                } 
                arr_63 [i_0] [i_4] = (_Bool)0;
            }
            for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
            {
                var_36 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_51 [i_4] [i_0])))), ((+(((/* implicit */int) arr_51 [i_18] [i_4]))))));
                arr_67 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-80)))), (min((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_33 [i_4])))), (((/* implicit */int) min((((/* implicit */signed char) var_8)), ((signed char)55))))))));
                arr_68 [i_0] [i_0] [i_4] [i_18] = ((/* implicit */signed char) (_Bool)1);
            }
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                var_37 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_0] [i_4] [i_19 + 1])) >= (((/* implicit */int) arr_14 [i_0] [i_4] [i_19 + 1])))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_19 + 1])) : (((/* implicit */int) (signed char)-102))))));
                /* LoopSeq 3 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_38 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)56)) & (((/* implicit */int) arr_31 [i_0] [i_4] [(signed char)18] [i_19] [i_19] [i_19] [i_20]))))) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)120)))), (((/* implicit */int) (_Bool)1))));
                    arr_76 [i_0] [i_0] [(_Bool)1] [(signed char)11] [i_19 + 1] [i_20] = (signed char)-54;
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (_Bool)0)))))))));
                        var_40 = (signed char)-68;
                        var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_65 [i_19 + 1] [i_19 + 1]), (arr_65 [i_19 + 1] [i_19 + 1]))))));
                    }
                    for (signed char i_22 = 1; i_22 < 22; i_22 += 1) 
                    {
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_22])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (signed char)-63)))), (((/* implicit */int) arr_8 [i_0] [i_4] [i_19 + 1] [i_20] [i_19]))))) ? (min((((/* implicit */int) arr_56 [(_Bool)1] [i_19] [i_20] [i_22 - 1])), ((((_Bool)1) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_70 [i_0])))))) : (((/* implicit */int) max((arr_14 [i_0] [i_0] [i_0]), (arr_71 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1]))))));
                        var_43 = ((/* implicit */_Bool) ((signed char) ((var_11) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_45 [i_22 - 1] [i_19 + 1])))));
                    }
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_0] [(signed char)3] [i_19] [i_23]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_37 [i_0] [i_23]))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((arr_11 [i_0] [i_4] [i_19 + 1] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_54 [i_19 + 1]))))));
                    arr_86 [i_0] [i_4] [i_4] [(_Bool)1] [i_23] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (((arr_33 [i_0]) ? (((/* implicit */int) arr_33 [i_19 + 1])) : (((/* implicit */int) (signed char)39)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_29 [i_19 + 1] [i_23] [i_19] [i_23] [i_23])), (arr_71 [(signed char)15] [i_19] [i_19 + 1] [(signed char)15]))))));
                }
                for (signed char i_24 = 4; i_24 < 23; i_24 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        arr_94 [i_0] [i_25] |= ((/* implicit */_Bool) (signed char)15);
                        var_45 = ((/* implicit */_Bool) arr_13 [i_24 - 4]);
                        arr_95 [i_0] [i_4] [(signed char)4] [i_24 - 3] [i_25] = ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) arr_72 [i_19] [i_4] [i_4] [i_19])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))))));
                        arr_96 [i_0] [i_4] [i_0] [i_24 - 1] [i_4] = ((/* implicit */_Bool) (~(min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_8))))))));
                    }
                    arr_97 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114))))))));
                    arr_98 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_75 [i_0] [(signed char)9] [i_19] [i_24 + 1] [i_24 + 1])) : (((/* implicit */int) arr_6 [i_24 - 4] [i_19 + 1]))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) arr_6 [i_19 + 1] [i_24 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
                var_46 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_71 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1])))) : (((/* implicit */int) (signed char)99))));
            }
            for (signed char i_26 = 1; i_26 < 21; i_26 += 3) 
            {
                var_47 -= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-50))));
                var_48 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((signed char)-87), (((/* implicit */signed char) arr_29 [i_26 - 1] [i_26 - 1] [i_26] [(signed char)19] [(signed char)17])))))));
            }
        }
    }
    var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_2))))) * (((/* implicit */int) (signed char)-90))))) ? (((/* implicit */int) var_1)) : (((((((/* implicit */int) var_11)) == (((/* implicit */int) var_10)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)99))))));
}
