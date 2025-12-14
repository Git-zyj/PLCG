/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92182
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_0))))))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) (short)-11615)) : (((/* implicit */int) (signed char)44))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1] [i_0]))))) : (((/* implicit */int) var_0))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))) ? ((+(((/* implicit */int) arr_4 [i_1] [i_2] [i_2])))) : ((+(((/* implicit */int) (signed char)48))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) arr_0 [i_0]))))) ? ((+(((/* implicit */int) (unsigned short)49283)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_3])), (var_2))))));
                        arr_12 [i_0] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3]))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)11613), (((/* implicit */short) arr_11 [i_0] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)29512)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)-37)), ((short)-2505))))))) ? (max((arr_8 [i_0]), (-9223372036854775788LL))) : (min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_5 [i_2])), (var_13)))), (arr_8 [i_0])))));
                        arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [(unsigned short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), ((-(var_14)))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)49256)) ? (((/* implicit */int) (unsigned short)18682)) : (((/* implicit */int) arr_6 [i_0] [(unsigned char)6] [i_2] [i_3]))))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? ((-(-3949898744452913843LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */short) ((arr_0 [i_2]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-11614)))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_6 [i_4] [i_1] [(unsigned char)14] [(_Bool)1])) : (((/* implicit */int) (unsigned short)16256))))));
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_12)), (3949898744452913843LL)))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1394696536)) : (14897096812370595418ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_5]))))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_11 [i_2] [i_5])))))));
                        var_22 = ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_5])) ? (arr_15 [i_5]) : (var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)7] [i_5]))))) ? ((-(((/* implicit */int) (signed char)71)))) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_5])))))));
                        var_23 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) (short)-4858)), (-9223372036854775788LL))), (((/* implicit */long long int) max((arr_9 [i_5]), (((/* implicit */int) arr_18 [i_5])))))));
                        var_24 += ((/* implicit */unsigned char) max((min((var_14), (((/* implicit */unsigned long long int) (unsigned short)17014)))), (min(((~(3851240964870292181ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_1] [i_1] [(signed char)12])) : (((/* implicit */int) var_6)))))))));
                    }
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (max((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)25833)), (arr_9 [(signed char)12])))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        for (int i_7 = 4; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_7 - 4] [i_7] [i_7 - 1] [i_6 + 1])))));
                                arr_26 [i_6] [i_6] [i_2] [(unsigned short)7] [(_Bool)1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775782LL)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [(_Bool)1] [i_6])) ? (((/* implicit */int) (unsigned short)16282)) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_6])) : (arr_22 [i_6] [i_1] [i_2] [i_7 - 1])))))) ? (((/* implicit */int) max((arr_20 [i_0] [i_1] [i_2] [i_7 + 2] [(signed char)12] [i_1]), (arr_20 [(_Bool)1] [5LL] [i_7] [i_7 - 4] [i_7] [i_7])))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)49283)), (var_9)))) ? (((((/* implicit */_Bool) var_12)) ? (-1320208522) : (((/* implicit */int) arr_16 [i_1] [i_6] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6])))))))));
                                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_8 = 3; i_8 < 9; i_8 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18715)) ? (((/* implicit */int) (unsigned short)16256)) : (((/* implicit */int) (unsigned short)16260))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(unsigned char)2])) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8] [i_8])) ? ((-9223372036854775807LL - 1LL)) : (var_9))))), (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) arr_5 [i_8 - 2])) : (((/* implicit */int) var_13))))))))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+((+(((/* implicit */int) var_1)))))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_8 - 1] [i_8 - 1] [(signed char)15]))))) : (((((/* implicit */_Bool) -9223372036854775788LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_11]))) : (arr_31 [i_8] [i_8] [i_10] [i_11 - 1])))))) ? (((((/* implicit */_Bool) max(((short)29492), (((/* implicit */short) arr_24 [i_10] [i_10] [i_10] [i_10]))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) arr_27 [i_8 + 1])) : (((/* implicit */int) var_6))))));
                        arr_36 [i_8] [(short)9] [(short)7] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (((((/* implicit */_Bool) (unsigned short)32640)) ? ((~(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) arr_33 [i_8 + 1] [(unsigned short)3])) ? (1816835611) : (((/* implicit */int) arr_19 [i_8] [i_8] [i_9] [i_8] [i_8]))))))));
                        arr_37 [i_8] [i_8] [i_11] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_27 [i_8 - 3])) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (~(arr_23 [i_8] [i_8] [i_9] [i_10] [i_11] [i_11 - 1] [i_11])))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_33 [i_8] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)64053))))))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56283))))), (min((5507018216168410580LL), (((/* implicit */long long int) 1041878141))))))) ? ((+(var_14))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (14897096812370595413ULL)))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) 858530328U)) ? (arr_14 [i_8] [i_8] [i_8 - 3] [i_8 - 1] [i_8] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_32 [i_8 - 3] [i_8] [i_8] [i_8 + 1])) : (-8539730668817614008LL))))))));
    }
}
