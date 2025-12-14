/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68239
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = var_2;
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) var_2);
            var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)59)) ? (arr_6 [i_0]) : (((/* implicit */long long int) 536866816U)))) < (((/* implicit */long long int) ((/* implicit */int) var_18)))));
            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0])) ? ((~(4997212020734619265LL))) : (-2934370363668079759LL)));
            arr_8 [i_1] = ((/* implicit */signed char) 536866816U);
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            arr_13 [i_0] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) < (2934370363668079758LL)))) >> (((/* implicit */int) (unsigned char)7))));
            var_23 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
        }
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_0])) ? (((/* implicit */int) var_5)) : ((-2147483647 - 1))))) | ((+(var_2))))), (((/* implicit */unsigned long long int) arr_7 [i_0]))));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_8))));
            var_26 ^= ((/* implicit */unsigned long long int) arr_16 [i_0]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(arr_14 [i_0] [i_4]))))));
            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0])) ? (var_10) : (((/* implicit */int) var_0))));
            var_29 = ((/* implicit */int) ((var_0) ? (var_2) : (((var_8) / (((/* implicit */unsigned long long int) var_1))))));
            var_30 = arr_6 [i_0];
            /* LoopSeq 3 */
            for (int i_5 = 2; i_5 < 21; i_5 += 3) 
            {
                var_31 |= ((/* implicit */unsigned int) var_7);
                var_32 = ((/* implicit */unsigned short) var_8);
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    var_33 = ((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0]);
                    arr_26 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_5 - 2] [i_5])) ? (var_3) : (((/* implicit */int) var_15))));
                }
            }
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_34 |= ((/* implicit */unsigned long long int) ((long long int) arr_15 [i_4]));
                    arr_31 [18LL] [i_4] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_0])) ? (arr_10 [i_0] [i_4] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7417)))));
                    arr_32 [i_0] [i_4] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_15 [i_0])) % (1466246832441197985ULL))) <= (((/* implicit */unsigned long long int) ((((arr_7 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)255)) - (255))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4] [i_7] [i_0])) << (((2146435072) - (2146435069)))));
                        arr_35 [(unsigned char)0] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_7] [3ULL])) ? (arr_6 [i_0]) : (((/* implicit */long long int) -261378167))));
                        arr_36 [i_0] [i_4] [i_7] [i_4] [i_9] = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_6 [i_9 - 1]));
                        var_36 = ((/* implicit */_Bool) arr_12 [i_4] [i_8]);
                    }
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) var_13))));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-2934370363668079784LL)))) || (((/* implicit */_Bool) ((506340510) | (((/* implicit */int) var_9))))))))));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0] [i_7] [i_7] [i_8] [i_10] [1])) - (((/* implicit */int) arr_21 [i_8] [i_8]))))) ? (((/* implicit */int) arr_37 [i_0] [i_7] [i_8])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_4] [i_4] [i_8])) && (((/* implicit */_Bool) arr_28 [i_0] [i_4])))))));
                        var_40 += ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((-231576329) + (231576333))) - (4)))));
                        var_41 &= ((/* implicit */int) arr_10 [i_10] [14U] [i_10]);
                    }
                    for (long long int i_11 = 3; i_11 < 22; i_11 += 3) 
                    {
                        var_42 = ((((/* implicit */_Bool) var_5)) ? (arr_40 [i_11] [i_11] [i_11] [i_11] [i_11 - 2]) : (2146435072));
                        arr_44 [i_0] [i_0] [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_30 [i_0] [i_0] [i_8] [i_8] [i_11] [i_8]);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (~(arr_7 [i_0]))))));
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(26ULL)))) ? (((var_8) << (((/* implicit */int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))));
                    }
                }
                for (int i_13 = 4; i_13 < 22; i_13 += 4) 
                {
                    arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((5177154122423477088LL) ^ (arr_5 [i_13 - 4] [i_4] [i_4])));
                    arr_52 [i_0] [i_0] [i_0] [i_7] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned long long int) arr_14 [i_0] [i_4]))))) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) arr_25 [i_13 + 1] [i_13 + 1] [i_7] [i_13] [i_13] [i_0]))));
                }
                var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) arr_41 [20] [i_0] [i_7] [i_7] [(unsigned char)8]))));
                arr_53 [i_0] = ((/* implicit */unsigned int) -6081368886992803189LL);
            }
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    for (int i_16 = 2; i_16 < 22; i_16 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned int) arr_58 [6] [i_15]);
                            var_47 = ((/* implicit */signed char) arr_25 [i_16] [i_16] [i_16] [i_16 - 1] [i_16 - 2] [i_16]);
                            var_48 *= ((/* implicit */unsigned short) arr_50 [(_Bool)1] [i_4] [i_14] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_17 = 4; i_17 < 22; i_17 += 1) 
                {
                    var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)4)))))));
                    var_50 = (~(arr_5 [i_17 - 3] [i_17] [i_17]));
                    var_51 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)14920)) & (((/* implicit */int) var_7))));
                }
                for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    arr_68 [i_0] [i_4] [i_14] [i_18] [i_14] = ((/* implicit */signed char) var_7);
                    var_52 = ((/* implicit */int) var_15);
                }
                arr_69 [i_14] [i_4] [i_14] [i_14] = arr_17 [i_0] [i_4] [i_14];
            }
        }
    }
    for (unsigned char i_19 = 0; i_19 < 23; i_19 += 4) /* same iter space */
    {
        arr_74 [i_19] = var_16;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 23; i_20 += 3) 
        {
            for (signed char i_21 = 1; i_21 < 21; i_21 += 1) 
            {
                {
                    arr_81 [i_19] [(signed char)4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_19])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_19])) ? (((/* implicit */long long int) var_11)) : (var_1))))))))));
                    /* LoopNest 2 */
                    for (signed char i_22 = 0; i_22 < 23; i_22 += 4) 
                    {
                        for (long long int i_23 = 2; i_23 < 21; i_23 += 2) 
                        {
                            {
                                var_53 = ((/* implicit */int) min((var_53), ((+(((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_77 [i_21] [i_23]))))), ((signed char)31))))))));
                                var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) arr_49 [10ULL] [i_20] [i_21] [i_21 + 2]))));
                                var_55 |= ((/* implicit */int) (short)-25736);
                            }
                        } 
                    } 
                    var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) arr_85 [i_19] [i_19] [i_21] [i_19]))));
                    var_57 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_5))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 23; i_24 += 3) 
        {
            for (int i_25 = 3; i_25 < 22; i_25 += 1) 
            {
                for (signed char i_26 = 1; i_26 < 22; i_26 += 1) 
                {
                    {
                        var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) (unsigned char)170))));
                        /* LoopSeq 1 */
                        for (unsigned int i_27 = 0; i_27 < 23; i_27 += 3) 
                        {
                            var_59 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_19] [i_19] [i_19])) / (((/* implicit */int) arr_11 [i_19] [i_19] [i_19]))))) ? (max((((/* implicit */unsigned int) arr_11 [i_19] [i_19] [i_19])), (1610898911U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_19] [i_24] [i_19])))));
                            var_60 = ((/* implicit */int) max((var_60), (((/* implicit */int) (!(((/* implicit */_Bool) -6081368886992803189LL)))))));
                            arr_99 [i_19] [i_19] [i_25] [i_26] [i_27] [i_27] [i_25] = ((/* implicit */long long int) var_8);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_28 = 0; i_28 < 23; i_28 += 4) /* same iter space */
    {
        var_61 = ((((/* implicit */_Bool) ((arr_75 [i_28]) ^ (((/* implicit */unsigned long long int) arr_47 [i_28] [i_28]))))) ? (((/* implicit */long long int) arr_33 [i_28] [i_28] [i_28] [i_28])) : (min((arr_7 [i_28]), (((/* implicit */long long int) (signed char)-49)))));
        var_62 += ((/* implicit */int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_56 [i_28] [i_28] [i_28]))), (((((/* implicit */_Bool) arr_56 [i_28] [i_28] [i_28])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138))) : (arr_56 [i_28] [19] [(_Bool)1])))));
        arr_103 [i_28] [i_28] = ((unsigned char) ((((/* implicit */_Bool) arr_94 [i_28] [i_28] [i_28] [i_28])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2460087600U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
    }
    var_63 -= ((/* implicit */signed char) (unsigned char)221);
    var_64 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) ((((unsigned long long int) var_16)) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8))))))));
}
