/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69013
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */signed char) max((((unsigned int) arr_4 [i_2])), (((/* implicit */unsigned int) ((arr_2 [i_0]) ? (arr_6 [i_2] [17ULL] [(signed char)4] [i_1]) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [5LL])) ? (arr_6 [(short)7] [i_1] [(_Bool)1] [(_Bool)1]) : (arr_6 [i_0] [i_1] [i_1] [i_0]))))))));
                    var_14 = ((/* implicit */long long int) min((var_14), (min((min((((var_6) / (var_6))), (((/* implicit */long long int) arr_3 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_3 [(_Bool)1]) : (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) min((var_7), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [0LL]))) < (var_2)))))))))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (_Bool)1))));
                    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((arr_2 [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) > (((/* implicit */int) ((_Bool) var_7))))))) < (arr_3 [i_0])));
                }
            } 
        } 
        arr_8 [i_0] |= ((/* implicit */unsigned int) (((~(((/* implicit */int) ((signed char) (_Bool)1))))) / (((/* implicit */int) ((short) (~(516220149)))))));
        arr_9 [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (min((var_3), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8)))))), (((((/* implicit */_Bool) (+(var_8)))) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 516220149)))))));
        arr_10 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_4]))))) ? (((arr_15 [i_3] [i_3]) % (((/* implicit */int) arr_12 [i_4])))) : ((+(((/* implicit */int) arr_12 [i_3]))))))) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) ((arr_14 [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_11 [i_3])))) ^ (((/* implicit */int) var_1)))))));
                    var_20 += ((/* implicit */signed char) (-(arr_14 [(short)12])));
                }
            } 
        } 
        arr_18 [11LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) : (var_0))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (short i_8 = 3; i_8 < 18; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    {
                        arr_31 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (signed char)-47))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))));
                        arr_32 [i_6] [i_7] [i_8] [i_6] [i_9] [i_9] = var_4;
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_6] [i_10 + 2] [i_6] [i_12] [(_Bool)1] [i_13] = ((/* implicit */_Bool) arr_11 [(_Bool)1]);
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_11] [i_12] [i_11]))))), (-516220159)))) ? (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) arr_23 [i_11] [i_13])) : (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_29 [(_Bool)1] [i_10 + 1] [i_10] [i_10] [i_10 - 1]))))) : (((((/* implicit */_Bool) arr_34 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_15 [i_10 + 3] [i_10 + 3])) : (min((var_8), (((/* implicit */unsigned long long int) 516220159))))))));
                            var_22 = ((/* implicit */signed char) ((_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (arr_13 [i_11]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_6] [i_10 + 3] [i_6] [i_13]))))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_23 ^= ((/* implicit */short) max((((/* implicit */int) arr_35 [i_6] [i_6] [i_6])), (((((/* implicit */int) ((_Bool) (short)12288))) << (((arr_15 [i_10 + 1] [i_10 + 3]) - (47379850)))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max(((_Bool)1), (var_5)))))) & ((~((+(0ULL)))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_28 [i_6] [i_11] [i_14])) : (((/* implicit */int) min((min((var_4), ((_Bool)1))), (((((/* implicit */_Bool) arr_28 [i_14] [i_10 - 1] [i_12])) && (((/* implicit */_Bool) arr_11 [i_12])))))))));
                            arr_47 [i_6] [i_10] [i_11] [i_12] [(_Bool)1] [(_Bool)1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_36 [i_14]) ? (((/* implicit */int) arr_37 [i_10 + 1] [i_11] [i_12] [i_14])) : (((/* implicit */int) arr_37 [i_6] [i_10] [i_11] [i_12]))))) ? ((+((((_Bool)1) ? (arr_45 [1ULL] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_11] [i_12]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_46 [i_10 + 2] [(_Bool)1] [i_10 + 2] [i_10 + 2]))))));
                        }
                        var_26 = ((/* implicit */int) arr_29 [i_11] [i_10] [7U] [i_12] [17ULL]);
                    }
                } 
            } 
            var_27 ^= (_Bool)1;
        }
        for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 4) 
        {
            arr_51 [i_6] [i_6] [i_6] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) arr_40 [i_6] [i_6] [i_6] [i_6] [i_15])) : (((/* implicit */int) var_10)))) < (((/* implicit */int) arr_27 [i_6] [17LL] [(short)17] [i_15]))));
            arr_52 [i_6] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) (_Bool)1))), ((+(arr_38 [i_6] [i_15] [i_15 - 1])))));
        }
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) (_Bool)1);
        arr_57 [i_16] = ((/* implicit */unsigned long long int) arr_35 [i_16] [i_16] [i_16]);
        var_29 |= ((/* implicit */_Bool) arr_55 [i_16] [i_16]);
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_37 [(_Bool)0] [18LL] [i_17] [i_17])) > (((/* implicit */int) ((565000978459432367ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))))));
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (signed char i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                {
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((arr_55 [i_17] [i_17]) & (var_2))))));
                    arr_65 [i_19] [i_18] [i_17] = ((/* implicit */signed char) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) min((var_32), ((!(((/* implicit */_Bool) 17881743095250119249ULL))))));
                                arr_72 [i_17] [(signed char)5] [9LL] [i_20] [i_20] [i_17] [(signed char)0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_17]))) : (((/* implicit */unsigned long long int) ((int) arr_53 [(_Bool)1])))));
                                var_33 = ((/* implicit */signed char) arr_27 [i_17] [i_17] [i_17] [i_18]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 2) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_46 [5] [6U] [14ULL] [5]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 17881743095250119255ULL))))));
                                var_35 = ((/* implicit */signed char) ((arr_40 [i_23] [i_19] [i_19] [i_22] [i_23]) ? (((/* implicit */int) arr_40 [i_17] [i_18] [i_18] [i_22] [i_23])) : (((/* implicit */int) arr_40 [i_17] [i_18] [i_19] [i_22] [i_23]))));
                                arr_78 [4U] [(signed char)2] [2] [i_18] [i_17] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_17] [10LL] [i_19] [(signed char)9] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_79 [i_17] [i_17] = ((/* implicit */long long int) (_Bool)1);
    }
}
