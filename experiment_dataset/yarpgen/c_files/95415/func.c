/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95415
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-508023171)))) ? (((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_10)) : (var_17)))) : (var_8)))) ? (1365183443U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)166)), (var_1)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (1365183459U)))) : (((((/* implicit */_Bool) var_4)) ? (-1425086257) : (((/* implicit */int) (signed char)13)))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            arr_6 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2929783864U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1] [0])))));
            arr_7 [i_0] [i_0] &= ((/* implicit */int) ((var_17) == (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0]))));
            arr_8 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_11)))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_3 [i_0]))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_11 [(unsigned short)7] &= ((/* implicit */_Bool) var_10);
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */short) 2929783836U);
            arr_13 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (var_17) : (((((/* implicit */_Bool) arr_5 [(signed char)8] [i_2] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (long long int i_4 = 4; i_4 < 9; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((2929783852U) >> (((((((/* implicit */_Bool) var_11)) ? (arr_18 [i_0] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_0]))))) - (2332930670U))))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_22 [i_0] [i_2] [i_2] [i_2] [6U] [6U] [i_5] = ((/* implicit */signed char) ((unsigned int) arr_15 [0] [i_4 - 3] [(signed char)3] [(unsigned char)7]));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(arr_19 [i_0] [i_4 - 1] [6U] [(signed char)7]))))));
                        }
                        arr_23 [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_4 - 2] [i_4] [i_4 + 2] [1LL])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            arr_26 [i_6] [i_0] [i_6] = ((/* implicit */_Bool) arr_2 [i_0]);
            var_21 ^= ((/* implicit */unsigned int) arr_15 [9U] [i_0] [i_6] [i_6]);
        }
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            arr_30 [i_0] [i_0] [i_0] &= ((/* implicit */int) min((arr_19 [i_7] [i_7] [i_7] [i_0]), (((/* implicit */unsigned long long int) max((min((arr_4 [i_7] [i_7]), (((/* implicit */unsigned int) arr_9 [(unsigned char)9] [i_7])))), (((/* implicit */unsigned int) max((0), (((/* implicit */int) arr_0 [i_0] [i_7]))))))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_19 [i_0] [i_7] [i_8] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned int) -6)), (4225883103U))))), (((/* implicit */unsigned int) (((~(0))) - (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) arr_10 [(short)6] [i_7]))))))))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_0] [i_7] [i_8] [i_9])))))));
                    }
                } 
            } 
        }
        arr_36 [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) ((arr_32 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0])))))))));
    }
    for (unsigned int i_10 = 1; i_10 < 18; i_10 += 2) 
    {
        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) arr_40 [i_10]))));
        arr_41 [(_Bool)1] [i_10 - 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((int) 3922894548U))), (arr_38 [(short)13])));
    }
    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        var_25 -= ((((/* implicit */_Bool) min((((/* implicit */int) arr_39 [i_11])), (((arr_43 [i_11]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_43 [i_11]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13807)))))) : (1365183459U));
        arr_44 [i_11] = ((((/* implicit */_Bool) (-(((int) var_15))))) ? (((arr_43 [i_11]) ? (arr_38 [11U]) : (((/* implicit */unsigned long long int) max((2929783852U), (((/* implicit */unsigned int) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
        arr_45 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3922894548U)))) ? (((var_12) ? (723552286) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_37 [i_11]))))) ? (max((var_8), (((/* implicit */unsigned int) 11)))) : (min((((/* implicit */unsigned int) (_Bool)1)), (1365183444U)))));
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((((/* implicit */_Bool) 2929783859U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2929783854U)))));
        arr_49 [i_12] [(unsigned short)3] |= ((arr_48 [(_Bool)1] [i_12]) ? (((/* implicit */unsigned int) ((arr_48 [i_12] [i_12]) ? (((/* implicit */int) arr_48 [i_12] [i_12])) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_9)) ? (arr_47 [(_Bool)1]) : (arr_47 [i_12]))));
    }
    /* LoopSeq 4 */
    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
    {
        arr_52 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_13] [i_13]))) + (var_4))), (((/* implicit */unsigned long long int) arr_37 [i_13]))))) ? (min((((/* implicit */unsigned int) ((short) var_8))), (arr_51 [i_13]))) : ((-(var_8)))));
        var_27 = ((/* implicit */long long int) ((max((arr_50 [i_13]), (arr_50 [i_13]))) ? (((/* implicit */int) arr_50 [i_13])) : (((((/* implicit */int) arr_50 [i_13])) >> (((/* implicit */int) arr_50 [i_13]))))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */int) ((unsigned short) (_Bool)1));
        arr_57 [i_14] = ((/* implicit */unsigned long long int) ((arr_38 [i_14]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_14]))))))));
    }
    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 2) /* same iter space */
    {
        arr_60 [i_15] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_1), (((/* implicit */short) arr_59 [i_15]))))), (((((/* implicit */int) arr_59 [i_15])) * (((/* implicit */int) arr_59 [i_15]))))));
        arr_61 [i_15] [i_15] = ((/* implicit */int) max((((arr_40 [i_15]) ? (arr_53 [i_15] [i_15]) : (arr_53 [i_15] [i_15]))), (((/* implicit */unsigned long long int) max((arr_51 [i_15]), (arr_51 [i_15]))))));
    }
    for (unsigned int i_16 = 0; i_16 < 15; i_16 += 2) /* same iter space */
    {
        arr_64 [i_16] [i_16] = ((/* implicit */short) arr_48 [3LL] [i_16]);
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_59 [i_16])) % ((~(max((-169655851), (((/* implicit */int) arr_62 [(signed char)13]))))))));
        var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */long long int) arr_51 [(_Bool)1])) <= (-6128314747530620885LL)))), ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_59 [i_16])) : ((+((-(((/* implicit */int) arr_62 [i_16]))))))));
        arr_65 [(unsigned char)6] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) 1365183444U)), (2764090205575442746ULL))) >> (((/* implicit */int) arr_40 [i_16]))));
    }
}
