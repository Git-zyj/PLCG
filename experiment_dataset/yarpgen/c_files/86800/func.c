/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86800
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [i_0] [i_2] [i_0] [i_0]), (arr_11 [18LL] [i_1] [i_2] [18LL]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [(signed char)4] [i_0 + 1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0])))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                            {
                                var_19 &= ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) arr_6 [(unsigned short)16] [i_3])))));
                                var_20 = ((/* implicit */unsigned char) ((unsigned short) -5169624116435311105LL));
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [10U] [(unsigned char)1] [i_0]))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_16 [i_4 - 1] [i_0] [i_4 - 1] [i_0 + 1] [i_0] [i_0 + 1]) : (((/* implicit */long long int) -1563853543))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 435128288))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_9 [i_1] [18LL] [i_1] [i_5]))));
                                arr_20 [i_1] [i_1] [i_1] [i_3] [i_2] [i_1] [i_0] = 570232712;
                                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 7667242786713573528LL)) ? (arr_11 [i_0 - 1] [i_1] [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0 - 1] [18LL] [18LL]))));
                        arr_26 [i_0] [i_6] [11LL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (1222202638)))) ? ((-(arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) arr_7 [(signed char)6] [i_0] [i_0] [(signed char)6]))))) ? (((/* implicit */int) arr_7 [i_7] [i_0] [i_7 - 3] [i_7 + 3])) : (((((/* implicit */_Bool) -791960789)) ? (1769131066) : (((/* implicit */int) (unsigned short)12)))))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_26 = (+(((((/* implicit */_Bool) (signed char)-8)) ? (arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))));
                        var_27 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0 + 1] [i_1] [i_6] [i_8])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -445212140200439570LL)) ? (281474976709632LL) : (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_8]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_1] [i_1] [i_1] [i_6] [i_8])) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) arr_6 [i_8] [i_1]))))) : ((~(5383074606585913979LL)))))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        arr_31 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35713))) : (1972016819915794134LL)));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            arr_36 [i_9] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_1] [11LL] [i_9] [i_1])) ? (((long long int) arr_35 [16LL] [i_1] [16LL] [i_9] [i_9] [i_1])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_9] [i_9] [i_10])) ? (-1776003511629970675LL) : (1152921504606846976LL)))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
                            arr_37 [i_0] [i_9] [i_6] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10231)) ? ((+(((/* implicit */int) arr_6 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_22 [i_0] [i_0] [(signed char)6] [i_0]))))));
                            var_29 = ((/* implicit */unsigned short) arr_15 [i_6] [16LL] [(unsigned char)0] [(unsigned char)0] [i_10] [(signed char)4] [i_10]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        arr_42 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [(unsigned short)5] [i_11])) : (((/* implicit */int) arr_1 [(unsigned char)8]))))));
                        /* LoopSeq 3 */
                        for (long long int i_12 = 2; i_12 < 18; i_12 += 3) 
                        {
                            arr_46 [i_0] [i_1] [16] [i_12 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [(signed char)5] [i_1] [i_6] [(signed char)5] [i_11] [(unsigned short)16])) ? (arr_41 [i_0] [i_6] [i_0 + 1] [i_12 - 1] [i_0] [(unsigned char)18]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3122055077U))))))));
                            arr_47 [i_0] [15LL] [i_6] [6LL] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_12] [i_11] [i_6] [i_1])) ? (((/* implicit */int) arr_23 [i_0 + 1])) : ((~(((/* implicit */int) arr_30 [i_0] [i_1] [i_6] [(unsigned short)1] [i_0]))))));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)32))) : (-1827425047918743868LL)))) ? (-4687717429371280764LL) : (((long long int) 0LL))));
                        }
                        for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) arr_49 [14] [(unsigned char)17] [i_6] [i_0] [(unsigned short)10] [i_13]);
                            var_32 = ((/* implicit */int) (+(((long long int) (unsigned char)172))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [(unsigned short)10] [i_11] [i_11] [2]))) : (536870911LL)))) ? (3098527243914273726LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_6] [i_11] [i_13] [(unsigned char)7])) ? (436638728) : (((/* implicit */int) arr_15 [i_13] [i_11] [i_6] [i_6] [i_1] [i_1] [i_0])))))));
                        }
                        for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (-5361577873950439149LL)))) ? ((~(arr_32 [i_6] [i_0] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [(unsigned char)11] [(unsigned char)11] [i_0] [(unsigned char)11] [(unsigned char)11] [i_0 + 1])))));
                            var_35 = ((/* implicit */unsigned int) ((long long int) (signed char)16));
                        }
                        var_36 = ((/* implicit */long long int) max((var_36), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [(unsigned char)6] [i_1])) ? (((/* implicit */int) arr_48 [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_6] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [12LL] [i_6] [i_11])))))) : (arr_40 [i_0 - 1] [i_0 + 1])))));
                    }
                    var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_0] [(unsigned short)4] [i_0 + 1] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-3742246954801260257LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_0 - 1] [12LL])) : (((/* implicit */int) (unsigned short)54545))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (6704276788236278928LL) : (arr_41 [4LL] [i_1] [i_6] [i_6] [i_1] [i_1])))))) ? (((/* implicit */long long int) min((2046518010), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54597)))))))) : ((+(max((-1LL), (((/* implicit */long long int) arr_24 [i_0 - 1] [i_0] [i_0] [2LL] [i_6] [(unsigned char)0]))))))));
                    arr_52 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [7LL])) : (arr_19 [i_0 - 1] [10LL] [i_1] [i_1] [(unsigned short)7] [i_6]))))), ((~((~(arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])))))));
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((204221507U), (((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_1] [i_1] [i_0 + 1])))))))))))));
                }
                var_39 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [12LL] [i_0] [i_0] [i_1])) ? (-4095687738461483254LL) : (((/* implicit */long long int) arr_4 [i_0] [(unsigned char)12] [i_0]))))) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [i_0 + 1])) : ((+(((/* implicit */int) (signed char)95)))))));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned char) max(((~((+(((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned short) (signed char)106))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)18473)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((signed char) 1387177084)))))));
    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (+(-1LL))))));
    var_42 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (((/* implicit */long long int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50972))) : (var_11))))))));
    var_43 = ((/* implicit */unsigned char) var_3);
}
