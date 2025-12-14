/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89082
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)233)), (-1)))));
        var_10 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = min((arr_0 [i_0]), ((unsigned char)233));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) arr_9 [i_3] [(unsigned char)14]);
                        var_12 = ((/* implicit */signed char) arr_8 [(short)7] [(unsigned char)12] [(unsigned char)12] [i_1]);
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)233)) && (((/* implicit */_Bool) (unsigned char)23))));
        var_14 *= ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_1] [2LL]);
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) var_0);
                    var_16 *= ((/* implicit */signed char) ((unsigned char) arr_15 [i_1] [1ULL] [12U]));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)26))))) : (((/* implicit */int) ((unsigned char) var_2)))));
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 2) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8 + 1])) ? (((/* implicit */int) arr_6 [i_8 - 1])) : (((/* implicit */int) arr_6 [i_8 - 1]))));
            /* LoopSeq 4 */
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                var_19 = ((((/* implicit */_Bool) arr_17 [i_7] [i_8 - 1] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_17 [i_7] [i_8 - 1] [i_9] [i_9])) : (((/* implicit */int) arr_17 [i_8] [i_8 + 1] [i_8] [i_8])));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [i_8 + 1] [i_9 + 3])) / (arr_25 [i_11 + 1] [i_9 + 1] [i_9 + 3] [i_8 + 1]))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_8] [i_9 + 2] [i_11 + 1])) > (((/* implicit */int) arr_23 [i_8] [i_8] [i_11 - 1]))));
                    }
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_31 [i_9] [i_9 + 2] [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9]))));
                        arr_35 [i_7] |= ((/* implicit */int) ((arr_25 [i_8] [i_9 + 1] [i_8 + 2] [i_8]) > (arr_25 [i_12] [i_9 - 1] [i_8] [i_7])));
                        var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10799))));
                    }
                    /* LoopSeq 1 */
                    for (int i_13 = 2; i_13 < 17; i_13 += 2) 
                    {
                        var_24 = ((/* implicit */int) arr_37 [i_7] [i_10] [i_9] [i_7] [i_7]);
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned short) arr_31 [i_13 - 2] [i_10] [i_10] [i_9] [i_8] [i_7] [i_7])))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8 + 1] [i_9 + 3] [i_9 - 1] [i_9 + 3] [i_9 + 3] [i_9 + 2] [i_13 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4127))) : (arr_37 [i_7] [i_8 + 2] [i_9 + 3] [i_13 + 4] [i_13 + 1])));
                    }
                }
            }
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    arr_47 [i_7] [i_15] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2693074676U)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (_Bool)1))))) * (2693074676U)));
                    var_27 ^= ((/* implicit */int) ((unsigned char) arr_46 [i_7] [i_7] [i_8 + 1] [i_8 + 1]));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((short) arr_32 [i_8] [i_8 + 2] [i_8] [i_8 + 1] [i_8])))));
                }
                /* LoopSeq 4 */
                for (unsigned char i_16 = 2; i_16 < 20; i_16 += 3) 
                {
                    arr_51 [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_7] [i_8 + 2] [20U]))));
                    var_29 ^= ((/* implicit */_Bool) arr_46 [14] [i_14] [i_8] [i_7]);
                }
                for (short i_17 = 1; i_17 < 20; i_17 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */int) arr_10 [i_8] [i_8 - 1] [i_17 + 1] [i_7])) % (((/* implicit */int) arr_48 [i_17] [i_17 - 1] [i_17 + 1] [i_17] [i_17])))))));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_23 [i_7] [i_8] [i_14]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 3; i_18 < 20; i_18 += 2) 
                    {
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (((~(arr_28 [i_8] [1] [i_8] [i_8] [i_7] [i_7]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7] [i_7] [(short)5] [i_7] [(_Bool)1] [i_7] [i_7]))))))));
                        arr_57 [(short)1] [i_17 + 1] [i_14] [4ULL] [i_7] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)229)))));
                        var_33 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28769))) : (1601892631U)));
                        arr_58 [i_8] [i_8] [15ULL] [i_8] [9LL] &= ((/* implicit */_Bool) ((unsigned short) arr_44 [i_7] [i_17 + 1] [i_17 - 1] [i_18 + 1]));
                    }
                }
                for (short i_19 = 1; i_19 < 20; i_19 += 1) /* same iter space */
                {
                    arr_61 [i_7] [i_19] = ((/* implicit */_Bool) ((signed char) arr_32 [i_19 + 1] [i_19 - 1] [i_8 - 1] [i_8] [i_8 + 1]));
                    arr_62 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_8 + 2]))) * (arr_60 [i_19 - 1] [i_19 - 1] [i_19 + 1] [i_8 + 2] [i_8 - 1] [i_8 + 1])));
                    arr_63 [i_7] [i_14] [i_19] = ((/* implicit */unsigned int) ((((unsigned long long int) 4063232)) <= (((/* implicit */unsigned long long int) ((arr_4 [(unsigned char)12]) << (((arr_41 [i_19] [i_14] [i_7]) - (8368082945642166384ULL))))))));
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((_Bool) arr_20 [i_8 - 1])))));
                    var_35 = ((/* implicit */unsigned char) 18220989080229476327ULL);
                }
                for (unsigned int i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    arr_67 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_32 [i_8] [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 - 1]);
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_8 + 1] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) arr_15 [i_20] [i_8 + 2] [i_7])) : (((/* implicit */int) arr_15 [i_8] [i_8 + 1] [(unsigned short)21]))));
                    arr_68 [i_20] [(signed char)16] [i_14] [i_8 - 1] [i_7] = ((/* implicit */_Bool) ((int) arr_11 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]));
                }
            }
            for (short i_21 = 0; i_21 < 21; i_21 += 2) 
            {
                arr_71 [i_8 - 1] [i_8 - 1] = ((/* implicit */long long int) ((_Bool) arr_7 [i_8] [i_8 - 1] [i_8 - 1]));
                var_37 = ((/* implicit */unsigned int) ((signed char) (unsigned char)4));
                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (-(-4063239))))));
            }
            for (unsigned char i_22 = 0; i_22 < 21; i_22 += 4) 
            {
                var_39 = ((((/* implicit */_Bool) arr_7 [(short)10] [(short)8] [(short)8])) ? (arr_60 [i_7] [13] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_7] [i_22] [i_8] [i_7] [15U]))));
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (4063204) : (((/* implicit */int) (signed char)28)))))));
            }
        }
        for (unsigned int i_23 = 2; i_23 < 18; i_23 += 3) 
        {
            var_41 = ((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_7] [i_23] [i_7])), ((unsigned char)215)));
            var_42 &= ((/* implicit */signed char) arr_20 [i_23 - 2]);
            var_43 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)28)), (2830422387U)));
        }
        arr_77 [i_7] [i_7] &= (!(((/* implicit */_Bool) ((arr_40 [i_7] [i_7] [i_7]) / (arr_40 [(_Bool)1] [i_7] [i_7])))));
        /* LoopNest 2 */
        for (unsigned short i_24 = 0; i_24 < 21; i_24 += 1) 
        {
            for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 2) 
            {
                {
                    arr_84 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_7] [i_24] [(_Bool)1] [(unsigned char)8] [i_7])) ? (((arr_32 [i_7] [i_7] [i_7] [i_7] [(_Bool)1]) / (arr_32 [i_7] [i_7] [i_7] [i_7] [i_7]))) : (min((arr_32 [15] [(short)10] [i_24] [i_7] [(short)10]), (((/* implicit */int) (unsigned char)30))))));
                    var_44 = ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)37))));
                    /* LoopSeq 3 */
                    for (short i_26 = 3; i_26 < 20; i_26 += 2) 
                    {
                        var_45 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_74 [i_26 - 2] [i_26] [(signed char)14] [i_26 - 3])) ? (((/* implicit */int) arr_33 [i_26 - 2] [i_26 - 2] [i_26] [i_26 - 2] [i_26] [i_26])) : (((/* implicit */int) arr_48 [i_26 - 3] [i_26 - 2] [(unsigned char)20] [i_26 + 1] [i_26 - 1]))))));
                        /* LoopSeq 1 */
                        for (int i_27 = 0; i_27 < 21; i_27 += 1) 
                        {
                            arr_89 [i_7] [i_26] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(-4063246)))))))));
                            arr_90 [i_7] [i_24] [i_26] [i_26] [i_27] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_31 [5U] [i_27] [i_26 - 1] [i_26 - 2] [i_26] [i_26 - 3] [i_26 + 1])) : (((/* implicit */int) arr_31 [i_26] [i_26] [i_26 + 1] [i_26 - 2] [i_26] [i_26 - 1] [i_26 - 1]))))));
                            arr_91 [i_26] [i_26] = ((/* implicit */int) arr_72 [i_26 + 1] [i_27] [i_27]);
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) 130023424U))));
                        }
                    }
                    for (int i_28 = 0; i_28 < 21; i_28 += 4) /* same iter space */
                    {
                        arr_95 [i_28] [i_28] [i_25] [i_24] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_96 [(_Bool)1] [i_24] [i_25] [i_25] [i_28] [i_25] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)36774)), (4063259)));
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36766)))))))));
                        arr_97 [i_28] [i_25] [(signed char)19] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)51)), (-2081614299)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_70 [i_7] [i_24] [i_7] [i_28])))) : (((((/* implicit */_Bool) arr_44 [i_7] [(signed char)7] [i_25] [i_28])) ? (((/* implicit */int) (unsigned char)0)) : (arr_44 [i_7] [i_7] [i_25] [i_7])))));
                    }
                    for (int i_29 = 0; i_29 < 21; i_29 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) ((4063232) > (((/* implicit */int) (_Bool)0)))))));
                        arr_100 [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_25 [i_29] [i_25] [i_24] [i_7]) + (arr_25 [i_29] [i_29] [i_29] [i_29]))))));
                    }
                }
            } 
        } 
    }
}
