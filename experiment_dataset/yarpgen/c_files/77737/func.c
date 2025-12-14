/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77737
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
    var_13 += ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)127)))) < (((unsigned int) (unsigned char)255)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) var_3);
            var_15 = arr_5 [i_1];
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (signed char)15))));
        }
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_1 [(unsigned char)4]), (arr_1 [(signed char)18])))))))));
        var_18 = ((/* implicit */long long int) max((((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)8)))))));
        arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_5)))) ? (max((((/* implicit */long long int) var_9)), (5710390377597438713LL))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (arr_2 [i_0] [i_0])))));
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_10 [(signed char)17] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
        {
            var_20 = ((unsigned char) min((arr_1 [i_3]), (arr_1 [i_3])));
            var_21 = ((/* implicit */signed char) min((((/* implicit */int) max((var_3), (var_1)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_12 [i_2]))))));
            var_22 = ((((((/* implicit */long long int) ((/* implicit */int) var_4))) + (arr_2 [i_2] [i_3]))) ^ ((-(arr_2 [i_2] [i_3]))));
            var_23 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_1 [i_3])))), (((/* implicit */int) ((unsigned char) (signed char)15)))));
            var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_5)) ? (var_2) : (min((((/* implicit */unsigned int) var_10)), (var_8))))), (((/* implicit */unsigned int) (signed char)-37))));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_4)) ? (arr_2 [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        var_26 = (-(1607273951U));
                        arr_24 [i_2] [i_4] [i_5 - 2] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == ((-9223372036854775807LL - 1LL))))) <= (((/* implicit */int) (unsigned char)151))));
                        var_27 = ((unsigned int) arr_19 [i_4] [i_4] [i_5 - 2] [i_5 - 1]);
                    }
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
                var_29 = ((/* implicit */signed char) min((var_29), (((signed char) arr_18 [i_2]))));
                var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_2]))));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_26 [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) var_3))));
                    var_32 &= var_1;
                }
                for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_33 += ((/* implicit */unsigned char) arr_4 [i_4]);
                    var_34 = var_6;
                }
            }
            /* vectorizable */
            for (long long int i_10 = 3; i_10 < 18; i_10 += 2) 
            {
                var_35 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) << ((((-(((/* implicit */int) var_4)))) + (237)))));
                var_36 += ((/* implicit */unsigned char) arr_27 [i_2]);
                var_37 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [(unsigned char)13])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_8))))))));
                var_38 = arr_26 [i_10] [i_10] [i_10] [i_10] [7U] [i_10 - 3];
                var_39 += ((/* implicit */unsigned int) arr_19 [i_2] [i_4] [i_10 - 3] [i_10]);
            }
            arr_34 [i_2] [(signed char)11] [i_2] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_21 [(unsigned char)14] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_21 [2LL] [i_4] [i_4] [i_4]))))), (max((2081688043U), (var_8))));
        }
    }
    for (long long int i_11 = 2; i_11 < 8; i_11 += 2) 
    {
        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 4074603963U)), (var_7)))) ? ((+(((/* implicit */int) arr_21 [18U] [18U] [(signed char)12] [i_11])))) : (((/* implicit */int) ((arr_36 [i_11 + 3] [i_11 + 2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11 - 1]))))))));
        arr_38 [i_11] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_20 [i_11 + 1] [i_11 - 1]), ((signed char)124))))));
        /* LoopNest 2 */
        for (signed char i_12 = 2; i_12 < 10; i_12 += 3) 
        {
            for (long long int i_13 = 4; i_13 < 7; i_13 += 2) 
            {
                {
                    arr_43 [i_12] [(unsigned char)4] = ((long long int) (unsigned char)235);
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) min(((unsigned char)204), (((/* implicit */unsigned char) arr_4 [i_11]))))) : (((/* implicit */int) ((var_7) > (((long long int) var_1))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        arr_47 [i_11] [i_11] [i_11] [i_11] [i_11 + 1] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8))))) ? ((-(((/* implicit */int) (unsigned char)13)))) : (((((/* implicit */_Bool) (signed char)-122)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (unsigned char)34)))) : ((+(((/* implicit */int) (unsigned char)214))))))));
                        arr_48 [i_11 - 1] [i_12 - 2] [i_13 - 4] [i_11 - 1] [i_12 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((long long int) (signed char)118))))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_11 + 3]))) > (((((/* implicit */_Bool) arr_28 [(signed char)6] [i_12] [i_11] [(signed char)16] [i_14])) ? (3056271578U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119)))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 3; i_15 < 10; i_15 += 2) 
                        {
                            var_42 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (signed char)33)))))) / (((unsigned int) (-(4294967281U)))));
                            arr_51 [10LL] [i_12 + 1] [10LL] [i_12 - 1] [i_12 - 2] = ((/* implicit */unsigned int) 288160007407534080LL);
                            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_35 [i_11])), (((((/* implicit */_Bool) -1314437966685425681LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) (signed char)33)))))))));
                            var_44 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                            var_45 += ((/* implicit */unsigned char) ((signed char) (unsigned char)100));
                        }
                        for (long long int i_16 = 2; i_16 < 7; i_16 += 2) 
                        {
                            var_46 = ((long long int) arr_27 [i_14]);
                            arr_55 [i_16] [i_14] [0LL] [i_12] [i_12] [0LL] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)234)) ? (((((/* implicit */_Bool) arr_33 [1U] [i_12 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (min((((/* implicit */long long int) var_12)), (-796687533560650486LL))))) : (((((long long int) var_6)) & (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_13 - 2])))))));
                        }
                    }
                    for (signed char i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */long long int) min((var_47), (max((((/* implicit */long long int) min(((unsigned char)11), (((unsigned char) var_5))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) -6623885940348617589LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [(signed char)3] [i_11] [(signed char)3] [i_12] [(signed char)3] [i_13] [(signed char)3]))))), (((((/* implicit */long long int) var_8)) + (-2948661815527033704LL)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 4) 
                        {
                            var_48 = var_1;
                            arr_60 [i_11] [i_11] [i_17] [3U] [i_11] [i_18] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_11 - 2] [i_11 - 1] [i_12 - 2] [i_13] [i_13 + 4])) ? (((/* implicit */int) ((((/* implicit */int) arr_35 [i_17])) == (((/* implicit */int) (signed char)127))))) : (((/* implicit */int) (unsigned char)14))));
                            var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_11 - 1] [i_12 - 1] [i_13 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-2636175024906220087LL)));
                            var_50 = (+(arr_27 [i_18]));
                        }
                        /* vectorizable */
                        for (long long int i_19 = 4; i_19 < 7; i_19 += 1) 
                        {
                            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_19 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [3U] [3U] [i_11]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-8401840159410522943LL)))));
                            var_52 ^= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_32 [i_13]))))));
                        }
                        var_53 = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) var_6)))));
                    }
                    var_54 = ((unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_53 [i_11] [i_11] [i_11] [i_12] [i_12 - 1] [i_13])) < (((/* implicit */int) (signed char)-28))))), (((((/* implicit */_Bool) (unsigned char)23)) ? (-6710238317383494449LL) : (-6631469144084307265LL)))));
                }
            } 
        } 
    }
}
