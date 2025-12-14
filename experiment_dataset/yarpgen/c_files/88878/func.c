/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88878
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7826))) / (3956606881644142618ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [(unsigned short)5] [i_1] [i_1])) / (((/* implicit */int) var_12)))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_8)))))))));
                                arr_13 [i_4] [i_3 - 2] [(unsigned char)0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((arr_1 [i_0 + 4] [i_0 - 1]) / (((/* implicit */long long int) arr_11 [i_0 + 2] [i_0 + 1])))) > (((/* implicit */long long int) (~(var_3))))));
                                arr_14 [i_0 - 1] [3U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((6586762919649115361LL), (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                    var_17 = var_15;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((((/* implicit */int) (short)2)) <= (((/* implicit */int) var_4))))), (max((var_10), (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (unsigned char)182)) % (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned short) (unsigned char)39))))))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (unsigned short i_8 = 1; i_8 < 21; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_9 = 3; i_9 < 19; i_9 += 2) 
                            {
                                var_19 = ((/* implicit */short) arr_0 [i_8 - 1]);
                                var_20 += ((/* implicit */short) max((((min((5001515681343964661LL), (((/* implicit */long long int) arr_25 [i_6] [i_8])))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32765)) < (((/* implicit */int) (unsigned short)34733)))))))), (3540524875480735112LL)));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_4 [i_6] [(short)20] [(short)4])), (arr_16 [i_8 + 2]))))));
                            }
                            var_22 |= ((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)7845)) : (((/* implicit */int) var_12)))), ((~(((/* implicit */int) ((short) (short)-12)))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 1) 
                            {
                                arr_31 [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) > (1770005095U)));
                                arr_32 [i_5] [i_6] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_24 [i_5] [2U] [i_7] [i_6] [i_10] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1378154949U)) ? (((/* implicit */int) (short)4367)) : (((/* implicit */int) (short)-20394))))) : (min((arr_24 [i_5] [i_5] [i_5] [i_8] [i_10] [i_10 + 1]), (arr_24 [i_5] [15LL] [i_5] [i_8] [i_10 + 1] [i_10 + 1])))));
                                var_23 = ((/* implicit */unsigned short) 7LL);
                                arr_33 [(unsigned char)2] [i_8] [i_6] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) (short)-1);
                                var_24 *= ((/* implicit */short) arr_22 [i_5] [i_5] [i_5]);
                            }
                            for (unsigned short i_11 = 4; i_11 < 19; i_11 += 1) 
                            {
                                var_25 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2)))) || (((((/* implicit */_Bool) 443068482U)) && (((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_11 - 4] [i_11 - 4] [i_8 - 1] [(unsigned short)22]) : (arr_6 [i_11 - 4] [i_6] [i_8 + 2] [i_5])))));
                                arr_36 [i_7] [i_6] [6LL] [i_7] [i_7] [i_6] [i_5] = ((/* implicit */short) (unsigned short)34139);
                            }
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_12 = 2; i_12 < 20; i_12 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_13 = 4; i_13 < 22; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 3; i_14 < 20; i_14 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-3293))));
                                var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1600393955U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11959))) : (-4638756635395827263LL)));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_5] [i_6] [i_12])) > (((/* implicit */int) (short)4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)39)))))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_8 [i_12 - 2] [i_12 + 1] [(unsigned char)1] [i_12 - 2] [i_12]))));
                    arr_44 [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [(unsigned short)9] [i_5] [i_12 - 1] [i_12 - 2])) ? (((/* implicit */int) arr_9 [10U] [i_12 + 2] [i_12] [i_12] [i_12 - 2])) : (((/* implicit */int) arr_9 [i_12 + 3] [i_12 + 3] [i_12 + 1] [i_12] [i_12 - 1]))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((long long int) arr_10 [i_5] [19LL] [i_15] [i_15])) < (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [12U] [i_6] [4U] [i_15])))))));
                    /* LoopSeq 4 */
                    for (short i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        arr_51 [i_6] [i_15] [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)0))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_6] [i_6] [i_6] [(unsigned short)4] [(short)8])) ? (((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) (unsigned char)251))))) : (max((127LL), (((/* implicit */long long int) (short)7869))))))) ? (((((/* implicit */int) ((4638756635395827263LL) < (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5] [i_16])))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_16] [i_15] [22U]))))))) : (((/* implicit */int) arr_48 [i_6] [(unsigned short)19] [i_15] [i_16]))));
                        var_32 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)161)), (34359738367LL)));
                        arr_52 [i_5] [i_6] [i_15] [i_6] = ((/* implicit */unsigned char) arr_17 [i_5]);
                        /* LoopSeq 3 */
                        for (unsigned char i_17 = 2; i_17 < 22; i_17 += 1) 
                        {
                            arr_56 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) max(((unsigned short)12692), (((/* implicit */unsigned short) (short)(-32767 - 1)))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_24 [3U] [17U] [i_17 - 2] [i_17 + 1] [3U] [i_17 + 1]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_6] [i_6] [i_5] [i_16] [7LL])))))))) ? (((((/* implicit */long long int) var_3)) / (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((min((34359738383LL), (34359738368LL))) <= (arr_15 [i_6] [i_17]))))))))));
                            arr_57 [i_5] [(short)21] [i_6] [7LL] [i_17 - 2] [i_6] [i_5] = ((/* implicit */unsigned char) arr_9 [i_5] [i_5] [i_5] [i_5] [16U]);
                        }
                        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) 
                        {
                            arr_61 [i_6] [16U] [(short)10] [(unsigned short)3] [i_18] [i_16] = ((/* implicit */short) ((long long int) max((((/* implicit */long long int) arr_23 [i_6] [i_6] [17LL])), (min((((/* implicit */long long int) 0U)), (arr_15 [i_18] [13LL]))))));
                            arr_62 [i_6] [i_6] = ((/* implicit */unsigned short) var_5);
                        }
                        for (short i_19 = 1; i_19 < 20; i_19 += 1) 
                        {
                            var_34 = ((/* implicit */short) ((((/* implicit */int) (short)-27398)) * (((/* implicit */int) (short)13))));
                            var_35 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 3961059782U))))), (-1708203341231897275LL)));
                        }
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_5] [i_6] [(unsigned short)6] [(unsigned short)6])) ? (arr_42 [i_5] [3U] [(unsigned char)10] [i_20] [i_20] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_15] [i_5] [i_5])))))) && (((/* implicit */_Bool) arr_22 [i_20] [i_6] [i_5]))))))))));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) max((((/* implicit */unsigned short) ((unsigned char) arr_2 [i_5] [i_5] [i_5]))), (min((arr_39 [i_5] [i_20]), (((/* implicit */unsigned short) ((var_10) >= (arr_8 [(unsigned short)11] [(unsigned short)8] [i_15] [i_20] [(unsigned short)8])))))))))));
                        arr_69 [(unsigned char)17] [i_5] [i_15] [i_5] [i_6] = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_50 [i_5] [i_6] [i_15] [i_6]))))));
                    }
                    for (unsigned int i_21 = 0; i_21 < 23; i_21 += 3) 
                    {
                        var_38 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3298))) : (678636334U)))) & ((-(arr_16 [i_21])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_22 = 2; i_22 < 22; i_22 += 1) 
                        {
                            var_39 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_6] [i_22 - 1] [i_22 - 2] [i_22 - 2] [i_22 - 2])) <= (((/* implicit */int) var_0))));
                            arr_77 [3U] [(short)21] [i_15] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_5] [i_5] [(unsigned char)20])) + (((((/* implicit */int) arr_50 [i_5] [i_5] [i_15] [i_6])) * (((/* implicit */int) arr_18 [i_22]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_23 = 4; i_23 < 22; i_23 += 4) 
                        {
                            var_40 *= ((/* implicit */short) ((((((/* implicit */long long int) 3686343804U)) + (arr_8 [i_23] [i_21] [i_5] [i_5] [i_5]))) / (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                            arr_81 [i_21] [i_15] [8LL] [i_21] [i_6] [9U] = ((/* implicit */short) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_24 = 0; i_24 < 23; i_24 += 1) 
                        {
                            arr_84 [i_5] [i_21] [i_6] = ((/* implicit */short) (unsigned short)16352);
                            var_41 = ((/* implicit */long long int) max((((/* implicit */int) (short)28591)), ((-(((/* implicit */int) (short)0))))));
                        }
                    }
                    for (unsigned short i_25 = 3; i_25 < 22; i_25 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_26 = 0; i_26 < 23; i_26 += 1) 
                        {
                            arr_90 [(short)10] [i_6] [i_15] [i_25 - 2] [i_25 - 3] = ((/* implicit */unsigned short) arr_46 [i_6] [i_6] [i_25 + 1] [(short)6]);
                            var_42 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_27 [i_25] [i_25 - 1] [i_25 + 1] [i_25 + 1] [i_25 - 3]))));
                        }
                        for (short i_27 = 1; i_27 < 21; i_27 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
                            var_44 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))) ^ ((((+(arr_76 [i_15] [i_27] [i_15] [i_27] [(unsigned short)10] [i_25]))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))));
                            var_45 = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_70 [i_5] [i_6] [i_6] [i_25 - 1] [i_6]))));
                            var_46 = ((/* implicit */long long int) ((unsigned short) max((var_6), ((short)-16753))));
                        }
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_6] [i_15]))) - (((((/* implicit */_Bool) arr_59 [i_25] [i_6] [i_25 + 1] [i_6] [(short)15] [i_25 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_38 [i_5] [i_5] [i_25] [i_25])) : (((/* implicit */int) arr_30 [i_5] [(short)14] [(unsigned char)10] [i_25] [i_6] [i_5] [13U]))))) : (((unsigned int) var_3))))));
                    }
                }
                for (short i_28 = 0; i_28 < 23; i_28 += 3) 
                {
                    var_48 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_6] [i_28]) % (arr_1 [i_5] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_6] [i_5]))) : ((~(arr_1 [i_5] [i_6])))));
                    /* LoopSeq 1 */
                    for (short i_29 = 0; i_29 < 23; i_29 += 3) 
                    {
                        arr_101 [i_6] [(unsigned short)22] [i_28] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32762))));
                        arr_102 [i_6] [i_28] [i_28] [i_6] [i_6] = min((((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) < (-3469869906884298440LL))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_73 [i_5] [i_5])), (-2138856531522713918LL))))))), ((short)2));
                        var_49 = (((+(((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_5] [i_5] [i_28] [i_29]))))))) / (((/* implicit */long long int) ((/* implicit */int) var_0))));
                        var_50 -= ((/* implicit */unsigned int) ((max((var_9), (arr_40 [i_6] [15LL] [i_6] [i_6]))) < (arr_40 [i_5] [i_6] [(unsigned short)22] [i_29])));
                        arr_103 [(unsigned char)16] [i_6] [i_6] [i_5] = ((/* implicit */short) (+(max((arr_40 [i_5] [i_5] [i_28] [i_29]), (max((arr_15 [(short)13] [(short)5]), (arr_3 [i_5])))))));
                    }
                }
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_6), (((/* implicit */short) (unsigned char)244)))))))) || (((((/* implicit */int) arr_18 [i_5])) <= (((/* implicit */int) arr_48 [i_6] [i_6] [i_5] [i_6]))))));
            }
        } 
    } 
}
