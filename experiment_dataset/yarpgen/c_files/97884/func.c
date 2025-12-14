/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97884
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
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) (short)9183)))))));
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_17)) + (((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-9169))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_0 + 4])))) : (((var_7) + (((/* implicit */int) (short)9189))))))) : ((+(var_1)))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) var_16);
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 + 2] [i_1])) >= (((/* implicit */int) (short)-9192))))) <= ((-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 4])) <= (((/* implicit */int) (unsigned short)65535))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            {
                arr_17 [i_5] = ((/* implicit */long long int) max((((/* implicit */int) arr_16 [i_4] [i_5])), (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (unsigned short)65531))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (short i_7 = 3; i_7 < 23; i_7 += 4) 
                    {
                        {
                            arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16199))) : (-5122586950879964814LL)));
                            arr_25 [i_7] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), (max((var_14), ((unsigned short)49337)))));
                            arr_26 [i_7] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >= (((/* implicit */int) max((arr_18 [i_7 - 2] [i_7 - 1] [i_7 - 1]), (arr_18 [i_7 + 2] [i_7 - 2] [i_7 - 3]))))));
                            arr_27 [i_7] = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) arr_23 [i_6] [i_6] [i_7 + 2] [i_7])))));
                        }
                    } 
                } 
                arr_28 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49337)) <= (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) (unsigned short)49355)) ? (((/* implicit */long long int) var_7)) : (arr_13 [i_5])))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    for (short i_9 = 1; i_9 < 23; i_9 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned char i_10 = 3; i_10 < 22; i_10 += 2) /* same iter space */
                            {
                                arr_38 [i_10] [i_4] [i_8] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_10 - 3] [i_9 + 1] [i_5] [i_5] [i_4] [i_4])) ? (((/* implicit */int) arr_32 [i_10 - 3] [i_9 + 1] [i_9] [i_9] [i_8] [i_8])) : (((/* implicit */int) (unsigned short)240))));
                                arr_39 [i_4] [i_5] [i_8] [i_9 + 2] [i_10] = ((/* implicit */int) arr_34 [i_4] [i_5] [i_8] [i_8] [i_9] [i_10 - 2] [i_10 + 3]);
                                arr_40 [i_4] [i_5] [i_8] [i_9] [i_9] = var_9;
                            }
                            for (unsigned char i_11 = 3; i_11 < 22; i_11 += 2) /* same iter space */
                            {
                                arr_43 [i_4] [i_5] [i_8] [i_11] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775788LL)) ? (((/* implicit */int) (short)9183)) : (1348849501)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)123))) : (((((/* implicit */_Bool) arr_16 [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-9223372036854775789LL)))))));
                                var_22 = max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))))), ((+((~(((/* implicit */int) arr_41 [i_4] [i_4] [i_5] [i_8] [i_8] [i_4])))))));
                            }
                            /* vectorizable */
                            for (signed char i_12 = 1; i_12 < 21; i_12 += 1) 
                            {
                                var_23 -= ((/* implicit */unsigned char) arr_46 [i_9] [i_12] [i_12 + 2] [i_12 + 4] [i_12] [i_12] [i_12 + 2]);
                                arr_47 [i_9] [i_9] [i_9 + 1] = ((/* implicit */unsigned short) ((int) (unsigned short)65535));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_31 [i_5] [i_9] [i_9] [i_9 + 1])) : (((((/* implicit */_Bool) arr_44 [i_4] [i_5] [i_8] [i_9] [i_12 + 1] [i_8])) ? (((/* implicit */int) (unsigned short)0)) : (1353297622)))));
                            }
                            /* LoopSeq 3 */
                            for (short i_13 = 4; i_13 < 23; i_13 += 1) 
                            {
                                var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49704)) ? (((/* implicit */int) (short)23856)) : (((/* implicit */int) (signed char)121))))) ? (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) arr_18 [i_9 + 1] [i_9 - 1] [i_13 - 4]))))) : (((/* implicit */int) max(((unsigned short)49694), (((/* implicit */unsigned short) (signed char)123)))))))));
                                arr_50 [i_4] [i_5] [i_8] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_5] [i_9 - 1] [i_13]))));
                            }
                            for (short i_14 = 2; i_14 < 24; i_14 += 1) 
                            {
                                var_26 -= ((/* implicit */unsigned short) arr_36 [i_4] [i_8] [i_9]);
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_4] [i_5] [i_8])) & (((((/* implicit */_Bool) arr_52 [i_8] [i_14 + 1] [i_14 + 1] [i_9 - 1] [i_8] [i_5] [i_8])) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_14 [i_4])))))))))));
                                arr_53 [i_4] [i_5] [i_8] [i_9] [i_14] = ((/* implicit */short) (unsigned short)49694);
                                var_28 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_14 + 1])))))));
                            }
                            for (short i_15 = 1; i_15 < 23; i_15 += 1) 
                            {
                                arr_56 [i_15] [i_5] [i_5] [i_9 - 1] [i_15] [i_5] |= (~(((/* implicit */int) (unsigned short)511)));
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (+(var_4))))))))));
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((long long int) var_14)))));
                                arr_57 [i_4] [i_5] [i_8] [i_9 - 1] [i_15] = arr_42 [i_9] [i_9 + 2] [i_15] [i_15 + 2] [i_15] [i_15 - 1] [i_15 + 1];
                            }
                        }
                    } 
                } 
                var_31 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_4] [i_5] [i_5])))))));
            }
        } 
    } 
    var_32 = ((((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_13))))), (var_1))) + (9223372036854775807LL))) >> (((((/* implicit */int) max((var_16), (((/* implicit */unsigned short) var_10))))) - (25517))));
}
