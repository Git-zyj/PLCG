/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62637
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_20 = ((/* implicit */short) arr_3 [i_0] [i_0] [i_2]);
                    var_21 = ((/* implicit */unsigned long long int) max((min((((/* implicit */short) arr_1 [i_2] [i_0])), ((short)-10340))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_2])))))));
                }
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) arr_5 [i_3] [i_1])), (var_17))))));
                            /* LoopSeq 1 */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10341)) || (((/* implicit */_Bool) var_13))))), (min((4298475462026909075ULL), (((/* implicit */unsigned long long int) (short)28526)))))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)137)), (3819565973U))))));
                                var_23 |= ((long long int) ((((/* implicit */_Bool) 1276387495)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8033255457154117496LL)));
                            }
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-83)), (arr_4 [i_0])))), (((((/* implicit */unsigned int) 1276387486)) * (1530395457U)))))) * (((arr_6 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((var_15) ? (-2080601870101129942LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_24 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_7 = 4; i_7 < 16; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) * (2521940179U)));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((int) arr_0 [i_7 - 2])))));
                        arr_23 [i_0] = ((/* implicit */long long int) var_18);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */short) arr_10 [i_0] [i_0] [i_1] [i_6] [i_0]);
                        var_28 = (+(((/* implicit */int) ((_Bool) var_17))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_12))))));
                        arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(var_16)))) / (((((/* implicit */_Bool) ((arr_3 [i_9] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3130)))))) ? (min((2553819587883864455ULL), (((/* implicit */unsigned long long int) 5416490334688162900LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-10348), (((/* implicit */short) (unsigned char)5))))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_10 = 4; i_10 < 19; i_10 += 1) 
                    {
                        var_30 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)124))));
                        /* LoopSeq 3 */
                        for (short i_11 = 1; i_11 < 18; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_31 [i_1] [i_1] [i_1] [i_10] [i_11] [i_10]))));
                            var_32 = ((/* implicit */unsigned long long int) var_12);
                            var_33 = ((/* implicit */int) (~(var_0)));
                        }
                        for (long long int i_12 = 2; i_12 < 19; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_10))))) ? (((/* implicit */int) max((var_1), (((/* implicit */short) var_10))))) : (((/* implicit */int) var_12)))) >= (max((((((/* implicit */_Bool) (short)-10351)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_16 [i_1] [i_6] [i_10] [i_12])))), ((-(-1276387503)))))));
                            arr_41 [i_0] [i_6] [i_6] [i_10] [i_12] [i_0] = ((/* implicit */unsigned char) (-(max((arr_17 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_12]), (((/* implicit */unsigned long long int) (short)-18943))))));
                        }
                        for (unsigned short i_13 = 1; i_13 < 18; i_13 += 4) 
                        {
                            var_35 = ((/* implicit */short) min(((~(((/* implicit */int) ((var_4) <= (((/* implicit */int) var_6))))))), (((((/* implicit */int) max(((signed char)-109), (var_2)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                            var_36 = ((/* implicit */long long int) (-(((((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) - (((/* implicit */unsigned long long int) min((51539607552LL), (((/* implicit */long long int) (signed char)112)))))))));
                            arr_45 [i_0] [i_13] [i_6] [i_10] [i_1] = ((/* implicit */int) arr_38 [i_0] [i_1] [i_6] [i_10] [i_13] [i_13]);
                        }
                    }
                    var_37 &= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (short)10420)), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14148268611682642528ULL))))) <= (min((((unsigned long long int) (signed char)39)), (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))))));
                    var_38 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_39 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_36 [i_0] [i_1] [i_1] [i_14])), (((arr_10 [i_1] [i_0] [i_1] [i_0] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_17)) ^ (((/* implicit */int) arr_4 [i_0]))))) ? (max((((/* implicit */int) (signed char)121)), (var_4))) : (((arr_29 [i_0] [i_1] [i_1] [i_14]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))));
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) 9223372036854775807LL)) / (14148268611682642529ULL))))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) == (((long long int) 11839924125836810219ULL))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            var_42 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) >> ((((~(((/* implicit */int) var_12)))) - (25636)))));
                            var_43 = ((/* implicit */int) ((short) (short)10358));
                        }
                        var_44 = ((/* implicit */short) (_Bool)1);
                        arr_55 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) var_19));
                    }
                    arr_56 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                    arr_57 [i_0] = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */int) var_18)) ^ (((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_15]))) : (arr_7 [i_0] [i_1] [i_0] [i_0])))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)10325)))) : (((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) var_11))))))));
                    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32756))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) & (10858922471397604540ULL))) : (((/* implicit */unsigned long long int) (~(var_7))))));
                }
            }
        } 
    } 
    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)31887), (((/* implicit */short) (!((_Bool)1))))))) ? (((/* implicit */int) (signed char)16)) : (((((/* implicit */int) max((((/* implicit */signed char) var_10)), ((signed char)16)))) << (((18446744073709551615ULL) - (18446744073709551598ULL)))))));
}
