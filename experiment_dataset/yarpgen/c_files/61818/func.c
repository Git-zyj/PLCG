/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61818
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((/* implicit */signed char) var_5)), (var_2))))));
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_1))))) ? (var_0) : (((/* implicit */long long int) (+(var_12)))))) > (min((var_16), (((((/* implicit */_Bool) var_16)) ? (var_7) : (var_7)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            var_21 = ((/* implicit */int) (~(arr_1 [(short)2])));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
        }
        var_23 = ((/* implicit */unsigned long long int) (~(min(((~(arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0])))))))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (-((((!(((/* implicit */_Bool) 272159053)))) ? ((-(arr_7 [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_2] [i_2]))))))))));
            var_25 *= ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_10 [i_2] [i_2] [i_3]), (((/* implicit */short) arr_8 [i_3] [21ULL]))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (arr_7 [i_2] [6LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [6U])))))))));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                var_26 -= ((/* implicit */signed char) (-(min((arr_9 [i_2]), (arr_9 [i_2])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_12 [18ULL] [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_12 [i_2] [i_3] [i_4] [i_5]))))) ? (arr_13 [i_2] [i_2] [(short)13] [i_2]) : (((/* implicit */unsigned long long int) (+(arr_11 [i_2] [i_3] [i_4] [i_4]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [(unsigned short)6] [i_3] [(unsigned short)6] [i_5]))));
                        var_29 = ((/* implicit */unsigned int) arr_6 [i_3] [i_6]);
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_15 [i_2] [8LL] [i_7] [(short)2]))));
                        var_31 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2] [i_2]))))));
                    }
                    for (int i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned int) arr_6 [i_2] [(signed char)6]);
                        var_33 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_8] [i_5] [i_4] [i_2] [i_2]))));
                    }
                    var_34 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_5] [i_4])) : (((/* implicit */int) arr_5 [i_2] [i_2]))));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_3] [i_4] [i_5])) ? (arr_19 [i_4] [i_4] [(unsigned char)19] [i_3] [i_2]) : (arr_19 [i_5] [i_4] [i_2] [i_2] [i_2])));
                }
                for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_4] [i_4])), (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_4] [i_9])) : (((/* implicit */int) arr_8 [i_2] [i_3]))))))), (((min((arr_7 [i_3] [i_3]), (((/* implicit */long long int) arr_27 [i_4] [i_4])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [(signed char)1] [(signed char)1])) ? (((/* implicit */int) arr_21 [i_2] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_3] [i_4] [i_9] [i_3]))))))))))));
                    var_37 = ((/* implicit */short) arr_17 [i_2] [i_2] [i_2] [i_2]);
                }
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_11 [i_4] [i_4] [i_3] [i_2])))) ? (arr_11 [i_2] [i_3] [i_3] [i_4]) : (arr_11 [i_4] [i_4] [(_Bool)1] [i_2])));
                var_39 = ((/* implicit */unsigned short) arr_12 [i_2] [i_2] [i_2] [i_2]);
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_40 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(5279733274659434960LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_10] [i_4] [i_10]))) : (arr_14 [i_2] [i_2] [i_2] [i_2] [1ULL] [i_2]))), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_3] [i_4] [i_4]))));
                    var_41 = ((/* implicit */long long int) arr_23 [i_2] [i_2] [i_2] [i_10] [i_4] [i_10]);
                }
            }
            for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_32 [i_11] [i_11]), (arr_29 [i_2] [i_3] [i_11]))))))) ? (((/* implicit */long long int) min((arr_11 [(short)16] [(unsigned short)20] [i_11] [i_11]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_11] [i_2])))))))) : (((arr_29 [i_2] [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_11] [i_3] [i_3] [i_2] [i_2]), (((/* implicit */unsigned short) arr_23 [i_2] [18U] [i_3] [i_11] [i_11] [(unsigned short)22]))))))))));
                var_43 |= (!(((/* implicit */_Bool) 4294967295U)));
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1496330365)) ? (((/* implicit */unsigned long long int) 1777902761U)) : (5721229757042923462ULL)));
            }
            var_45 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((arr_13 [i_2] [9LL] [(short)6] [i_3]), (((/* implicit */unsigned long long int) arr_19 [i_3] [i_3] [i_2] [i_3] [i_3]))))) ? ((-(((/* implicit */int) arr_28 [i_2] [i_2])))) : (((((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [(_Bool)1] [i_3] [i_3])) + (((/* implicit */int) arr_21 [i_2] [i_2]))))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) 1496330369)) ? (956592305U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27334))))))));
            var_47 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? ((-(arr_36 [i_12]))) : (min((((/* implicit */long long int) (_Bool)0)), (6471788353617062757LL)))));
            var_48 = ((/* implicit */int) min((min((min((arr_30 [i_2] [i_12] [i_2] [i_12]), (((/* implicit */long long int) arr_35 [i_12])))), (((/* implicit */long long int) arr_19 [i_2] [i_2] [i_2] [i_2] [9ULL])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_12] [i_12])))))));
        }
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                for (long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    {
                        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_2] [i_15])) ? (((/* implicit */unsigned long long int) ((-6471788353617062758LL) & (-4721823468320505311LL)))) : ((~(arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((((17875602280606692865ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62817))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_2] [i_13] [i_13] [i_2]))))))));
                        var_51 = ((/* implicit */unsigned int) min((4755483137767657139LL), (-4301304032035065714LL)));
                    }
                } 
            } 
            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31328)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) : (956592303U)))) ? (((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)2] [i_13]))) : (arr_38 [i_2] [i_2] [22LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_2] [i_13] [i_13] [i_2]))))))))));
            var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_13] [i_13])) ? (((/* implicit */int) arr_43 [i_2] [i_2] [i_2] [i_13])) : (((/* implicit */int) arr_43 [i_13] [i_13] [(short)23] [i_13]))))) ? (((((/* implicit */_Bool) arr_43 [i_2] [i_2] [10ULL] [i_13])) ? (((/* implicit */int) arr_43 [i_2] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_43 [i_2] [i_2] [i_2] [i_13])))) : (((((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_2] [i_13])) ? (((/* implicit */int) arr_43 [i_2] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_43 [i_2] [i_13] [i_2] [i_2]))))));
            var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) (-(3625973878U))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 3; i_17 < 23; i_17 += 3) 
            {
                var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) min((((((/* implicit */int) (!(arr_47 [i_2] [i_17])))) & (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) (unsigned short)2718)) : (((/* implicit */int) (short)-31640)))))), (arr_19 [i_2] [i_2] [i_16] [i_16] [i_17]))))));
                var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_17 - 1] [i_17 - 3] [i_17 - 1] [i_17] [i_17 - 2] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_17 - 1] [i_17 - 1] [i_17 - 3] [i_17] [i_17 - 1] [(unsigned short)3])))))) : (((((/* implicit */_Bool) arr_24 [i_17 - 3] [i_17 - 3] [i_17 - 2] [i_17 - 3] [i_17 - 3] [i_2])) ? (arr_24 [i_17 - 3] [i_17 + 1] [i_17 - 3] [i_16] [i_17 - 3] [i_16]) : (arr_24 [i_17 - 3] [i_17 - 1] [i_17 - 2] [i_17] [i_17 - 3] [i_16])))));
                var_57 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_16] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_16] [i_17])) : (((/* implicit */int) arr_46 [(unsigned short)9] [i_2]))))))) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_17] [i_16])))));
                var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6471788353617062745LL)) ? (-6471788353617062757LL) : (6507454971469486034LL)));
            }
            /* LoopNest 3 */
            for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) 
            {
                for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    for (int i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        {
                            var_59 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_44 [20] [i_18] [i_16] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_2] [i_16] [i_19] [i_19])))))) ? (min((((/* implicit */int) arr_49 [i_2] [i_2] [11LL] [i_2])), (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2]))) : ((+(((/* implicit */int) arr_46 [i_2] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [(unsigned short)14] [(unsigned short)14] [i_18] [(unsigned short)14])) ? (((/* implicit */int) arr_25 [i_20] [i_19] [i_18])) : (((((/* implicit */_Bool) arr_43 [5] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])) : (arr_33 [i_16] [i_16] [i_16])))))) : (arr_24 [i_2] [i_16] [i_16] [i_2] [i_20] [i_16]));
                            var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_2] [i_16] [i_16] [i_19])) ? (arr_26 [i_2] [i_16] [i_18] [i_19] [i_16]) : (((/* implicit */int) arr_52 [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_20] [i_2] [i_16] [i_16] [i_2]))) > (arr_36 [i_2])))) : (((/* implicit */int) min((arr_25 [i_16] [(unsigned short)19] [i_16]), (((/* implicit */signed char) arr_55 [i_20] [i_20] [i_20] [i_20])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [(_Bool)1]))) : (min((((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_38 [i_2] [i_2] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned short)11] [(unsigned short)11] [8LL] [(signed char)23]))))), (((((/* implicit */_Bool) arr_51 [i_2] [(_Bool)1] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_2] [i_16] [i_18]))) : (arr_53 [i_2] [i_19] [i_2] [i_16] [i_2])))))));
                        }
                    } 
                } 
            } 
            var_61 = ((/* implicit */int) min((arr_36 [i_16]), (((/* implicit */long long int) arr_33 [i_2] [21U] [(unsigned short)9]))));
            var_62 = (+(((/* implicit */int) arr_41 [i_2] [i_2] [10LL] [i_2])));
        }
    }
    for (unsigned int i_21 = 0; i_21 < 15; i_21 += 3) 
    {
        var_63 = ((/* implicit */signed char) (!(((((/* implicit */int) (_Bool)1)) != (2036141142)))));
        var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -249087248796803617LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46965))));
    }
    /* LoopNest 3 */
    for (unsigned short i_22 = 3; i_22 < 16; i_22 += 2) 
    {
        for (unsigned short i_23 = 0; i_23 < 18; i_23 += 1) 
        {
            for (short i_24 = 0; i_24 < 18; i_24 += 3) 
            {
                {
                    var_65 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(4721823468320505312LL))))));
                    /* LoopNest 2 */
                    for (signed char i_25 = 0; i_25 < 18; i_25 += 3) 
                    {
                        for (short i_26 = 1; i_26 < 16; i_26 += 2) 
                        {
                            {
                                var_66 = ((/* implicit */unsigned short) arr_72 [i_22 + 1] [i_26 + 1]);
                                var_67 = ((/* implicit */signed char) max((var_67), (((/* implicit */signed char) arr_15 [i_22 + 1] [i_22 + 1] [i_24] [i_25]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_68 = ((/* implicit */long long int) (!(var_8)));
}
