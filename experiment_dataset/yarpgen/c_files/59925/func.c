/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59925
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_0] [i_1 - 3] = min((((((/* implicit */_Bool) var_14)) ? (arr_1 [i_1 + 3] [i_1 - 2]) : (arr_1 [i_1] [i_1 - 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 3038021140U)) : (arr_5 [i_1] [i_1 - 2])))));
                var_16 = ((/* implicit */unsigned short) (signed char)123);
                var_17 -= ((/* implicit */signed char) min((((/* implicit */int) (signed char)123)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) (short)-18712)) : (((((/* implicit */int) arr_4 [i_1 + 1] [i_1])) * (((/* implicit */int) (signed char)-1))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_12 [i_2])))) ? (((/* implicit */long long int) 2147483647)) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (arr_13 [i_2] [i_3] [i_2]) : (((/* implicit */long long int) 3038021159U))))));
            arr_15 [i_2] [i_2] [i_3 - 2] = ((/* implicit */short) var_7);
        }
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-18712)) <= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [i_4] [i_2])) : (((/* implicit */int) var_7))))));
            arr_19 [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) (+(arr_17 [i_4 + 2] [i_4] [i_4])));
        }
        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((unsigned char) 3038021159U));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2129)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18689))) : (-8425332559405451984LL)));
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)94))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)28155)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_7] [i_7]))))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_9 [i_5]))));
                    arr_30 [i_2] [i_6] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_28 [i_6] [i_5] [i_6] [i_7] [i_7] [i_2])) : (arr_26 [i_5] [i_5] [i_7])));
                }
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(9223372036854775807LL))))));
            }
            for (short i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */int) var_14);
                arr_34 [i_8] [i_5] [i_8] = ((/* implicit */_Bool) ((var_4) << (((((var_2) ? (var_15) : (1709687289451964292ULL))) - (17924123426790932564ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned short) (+(16737056784257587315ULL)));
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) (signed char)-28)))) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
            }
            for (short i_11 = 1; i_11 < 15; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 1; i_12 < 18; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        {
                            var_27 *= ((/* implicit */short) (unsigned char)83);
                            var_28 = ((/* implicit */long long int) (+(arr_44 [i_13] [i_12 + 1] [i_12 + 1] [i_11 + 2])));
                            arr_48 [i_2] [i_12 - 1] [i_11] [i_5] [i_2] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)229))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(-2147483647))))));
                    arr_51 [i_2] [i_14] [i_11] [i_5] = ((/* implicit */signed char) (~(arr_27 [i_11] [i_11 + 3] [i_11])));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_23 [i_11 + 3] [i_11 + 3])) : (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) var_2)) : (-2147483647)))));
                }
            }
            var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) var_11)))));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4314371209495032966ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2])))))) ? ((+(3038021140U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
        }
        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            var_33 |= ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)188))))));
            arr_55 [i_2] [i_15] [i_15] = ((((/* implicit */_Bool) 15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_2] [i_15] [i_2]))) : (((unsigned long long int) (_Bool)1)));
        }
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_2] [i_2])) % (((/* implicit */int) (unsigned short)65509)))))));
    }
    for (short i_16 = 0; i_16 < 20; i_16 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_17 = 0; i_17 < 20; i_17 += 4) 
        {
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) min((((/* implicit */unsigned char) arr_57 [i_16])), ((unsigned char)61))))))), (((var_2) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_59 [i_16] [i_17])), (arr_61 [i_17])))) : (max((var_12), (((/* implicit */unsigned long long int) var_3))))))))));
            var_36 = var_0;
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        {
                            var_37 = min((max((var_0), (((/* implicit */short) arr_69 [i_16] [i_17] [i_17] [i_18] [i_19] [i_20])))), (var_8));
                            var_38 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */short) var_2)), (var_11)))) ? (((arr_63 [i_18]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) var_9)))))))), (((/* implicit */unsigned long long int) arr_64 [i_19] [i_16] [i_17] [i_16]))));
                            arr_71 [i_20] [i_17] [i_18] [i_18] [i_17] [i_16] [i_16] = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
                var_39 += ((/* implicit */unsigned long long int) max((1256946152U), (((/* implicit */unsigned int) (_Bool)1))));
            }
            /* vectorizable */
            for (unsigned long long int i_21 = 3; i_21 < 19; i_21 += 4) 
            {
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_72 [i_16] [i_21 - 2] [i_21 - 1])) ? (arr_72 [i_16] [i_21 - 2] [i_21 - 3]) : (arr_72 [i_17] [i_21 - 1] [i_21 + 1])));
                /* LoopSeq 2 */
                for (unsigned short i_22 = 0; i_22 < 20; i_22 += 1) 
                {
                    var_41 += ((/* implicit */signed char) (!((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)8))))));
                    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((1709687289451964292ULL) >> (((arr_74 [i_21] [i_21] [i_21] [i_21] [i_21 - 1]) - (1341710341008473857ULL)))))));
                    var_43 += ((/* implicit */unsigned char) arr_58 [i_22]);
                }
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) arr_69 [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_21 + 1] [i_17]))));
                    arr_78 [i_16] [i_16] [i_21 + 1] [i_16] [i_16] [i_21 + 1] = ((/* implicit */_Bool) var_14);
                    arr_79 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */_Bool) (+(arr_72 [i_16] [i_21 - 2] [i_23 + 1])));
                    var_45 = ((/* implicit */short) arr_64 [i_16] [i_16] [i_16] [i_16]);
                }
                var_46 ^= ((((/* implicit */_Bool) arr_65 [i_21 + 1] [i_21 + 1] [i_21 - 2] [i_21 - 2])) ? (((((/* implicit */_Bool) var_4)) ? (arr_77 [i_16] [i_16] [i_16] [i_16]) : (var_6))) : (((/* implicit */unsigned long long int) (+(2022114046U)))));
                var_47 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_64 [i_21 - 3] [i_16] [i_17] [i_16])))) ? (((/* implicit */int) arr_69 [i_21] [i_21 - 3] [i_21 - 3] [i_21] [i_21 - 3] [i_21 - 2])) : (((/* implicit */int) arr_57 [i_21]))));
            }
        }
        for (unsigned long long int i_24 = 1; i_24 < 18; i_24 += 3) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned char) max((-1231330362), (((/* implicit */int) (short)-23206))));
            arr_82 [i_16] [i_16] |= min((((/* implicit */int) ((max((var_6), (((/* implicit */unsigned long long int) (unsigned short)61029)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_16] [i_24 - 1])))))), (max(((-(((/* implicit */int) (unsigned char)188)))), (((/* implicit */int) (unsigned short)26970)))));
            var_49 = ((/* implicit */unsigned short) var_15);
            /* LoopNest 3 */
            for (short i_25 = 4; i_25 < 16; i_25 += 1) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 4) 
                {
                    for (unsigned int i_27 = 0; i_27 < 20; i_27 += 1) 
                    {
                        {
                            var_50 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned long long int) (short)18711)), (0ULL))) : (var_15)))) ? (max((max((((/* implicit */unsigned int) arr_58 [i_26])), (arr_89 [i_16] [i_16] [i_16] [i_16] [i_26] [i_16] [i_16]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)42784), (arr_76 [i_27] [i_25 + 1] [i_25 + 1] [i_24 - 1])))))));
                            var_51 = ((/* implicit */short) (unsigned char)64);
                            arr_90 [i_25] [i_27] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((2272853247U), (((/* implicit */unsigned int) (unsigned short)19658))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)188)), ((short)-23186)))) : (((/* implicit */int) (unsigned char)115))))));
                            var_52 = 4109381257U;
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_28 = 1; i_28 < 18; i_28 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                {
                    {
                        var_53 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))));
                        var_54 -= ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
            var_55 = ((/* implicit */signed char) (+(arr_66 [i_16])));
            var_56 += ((/* implicit */signed char) arr_93 [18U]);
        }
        arr_99 [i_16] = ((/* implicit */signed char) (~(((/* implicit */int) arr_86 [i_16] [i_16] [i_16]))));
    }
    var_57 += ((/* implicit */signed char) var_2);
}
