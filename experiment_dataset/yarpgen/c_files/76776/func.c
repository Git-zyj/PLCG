/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76776
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!(arr_0 [i_0]));
        var_18 = ((/* implicit */long long int) (unsigned short)11824);
        var_19 |= ((/* implicit */unsigned short) var_17);
        var_20 -= var_17;
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)21865))))) ? ((~(arr_2 [i_0] [(unsigned short)5]))) : (((/* implicit */unsigned long long int) (~(var_7))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) arr_6 [i_1]);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    arr_14 [i_3] [i_2] [i_2] = (signed char)48;
                    var_22 = ((/* implicit */unsigned short) arr_12 [i_1]);
                    arr_15 [i_2] [i_2] [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_2]), (((/* implicit */int) min(((unsigned short)21856), (((/* implicit */unsigned short) arr_5 [i_1] [i_2])))))))) ? (((((arr_11 [i_1] [i_2] [9LL]) ? (((/* implicit */long long int) var_17)) : (var_11))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53711)) ? (((/* implicit */int) arr_0 [i_1])) : (arr_1 [i_1])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_3])) : (arr_8 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53724))))) / (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_5])) ? (((arr_11 [i_3] [i_4] [i_5]) ? (((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_19 [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4]))))))))))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((arr_9 [9U] [i_5] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43670))) : (var_11)))))))));
                                arr_22 [i_1] [(unsigned char)8] [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                    arr_23 [i_1] [4] [4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (arr_9 [i_1] [i_1] [i_1]) : (arr_9 [i_1] [i_1] [(short)2])))) ? (max((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)112)))), (3311733035U))) : (arr_6 [i_1]));
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned short) (~(min((arr_7 [i_1]), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_0 [i_1])), (arr_19 [i_1] [i_1]))))))));
        var_26 &= ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)11824)), (968509559)));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_6 = 3; i_6 < 23; i_6 += 1) 
    {
        arr_26 [(unsigned char)0] = (+(((/* implicit */int) arr_25 [i_6 - 2])));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_6]))))) ? (((((/* implicit */_Bool) arr_25 [(unsigned char)4])) ? (var_12) : (((/* implicit */int) arr_24 [i_6] [i_6])))) : (((/* implicit */int) (signed char)118))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_30 [7LL] &= ((/* implicit */unsigned int) (~(arr_28 [i_7])));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                arr_41 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min(((signed char)112), ((signed char)44))), (max(((signed char)-97), (((/* implicit */signed char) var_15))))))) ? (((/* implicit */int) (unsigned short)21868)) : (((/* implicit */int) (unsigned char)160))));
                                var_27 = ((/* implicit */signed char) 983234253U);
                                arr_42 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_36 [i_7] [i_8] [i_9] [i_10])), (min((arr_31 [i_9] [i_9]), (((/* implicit */unsigned int) arr_39 [i_7] [i_7] [i_7] [i_7] [i_7])))))))));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 983234255U)) ? (((/* implicit */int) (unsigned short)43670)) : (-1737227153)));
                            }
                        } 
                    } 
                    arr_43 [17] &= ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            {
                                arr_49 [(signed char)8] [(signed char)8] [i_9] [i_9] [i_13] [12ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3643269134U)), (6529886795423682641LL)))) ? (((/* implicit */long long int) var_3)) : (((long long int) arr_35 [i_7] [11U] [i_9] [i_7] [(unsigned char)4]))))) ? ((+(((((/* implicit */_Bool) 983234253U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_13] [i_13] [i_13] [i_13] [i_13] [(unsigned char)5] [i_13]))) : (var_9))))) : (min((var_9), (((/* implicit */long long int) arr_29 [i_12 - 1]))))));
                                var_29 |= ((((/* implicit */_Bool) ((arr_29 [i_12 - 1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_39 [0ULL] [i_8] [0ULL] [i_12] [0ULL])))))))) ? (((int) arr_28 [(_Bool)1])) : (((/* implicit */int) (unsigned short)43684)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_14 = 1; i_14 < 17; i_14 += 3) 
    {
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)96)) : (((/* implicit */int) arr_37 [i_14] [i_14] [(signed char)17] [i_14])))) >= (((/* implicit */int) var_6)))))));
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-97)) / (((/* implicit */int) (signed char)82)))))));
        /* LoopNest 3 */
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                for (unsigned short i_17 = 2; i_17 < 14; i_17 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_40 [i_17] [i_16] [i_16] [i_15] [i_15] [i_14] [i_14]))));
                        arr_59 [i_16] [i_16] [i_17 + 1] [i_15] &= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (arr_31 [i_15] [i_15])))));
                        var_33 = ((((/* implicit */_Bool) (unsigned short)21886)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43631))) : (3643269122U));
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_63 [1] [i_14] [i_16] [i_16] = ((((/* implicit */_Bool) arr_44 [i_16] [i_17 - 2] [i_18] [i_17 - 2])) ? (arr_44 [i_16] [i_17 - 1] [i_17] [i_17 + 4]) : (arr_44 [i_14] [i_17 - 1] [i_17] [i_17]));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_14] [i_16] [i_14] [i_14 - 1])))))));
                            var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_45 [(_Bool)1])))));
                            var_36 &= ((/* implicit */unsigned int) (~(-501946222)));
                            arr_64 [i_14] [i_15] [i_16] [i_17] [i_14] = ((/* implicit */int) (((_Bool)1) ? (arr_28 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_14] [(unsigned short)8] [i_14 - 1] [i_18] [i_14])))));
                        }
                    }
                } 
            } 
        } 
        arr_65 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)72)) ? (-501946231) : (((/* implicit */int) (signed char)84))));
    }
}
