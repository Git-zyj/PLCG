/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86329
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
    var_17 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    arr_10 [i_2] [i_1] [i_1] = ((/* implicit */signed char) var_12);
                    var_18 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2] [i_0]))));
                    arr_11 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_2]) * (var_14)))) || (((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1]))));
                }
                for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    arr_14 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) arr_0 [i_0])) - (22006)))))), (((((/* implicit */_Bool) arr_9 [i_0] [(signed char)16] [i_3] [i_3 + 1])) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (2147483647)))))));
                    arr_15 [i_0] [i_1] [(unsigned short)12] = max((arr_9 [i_1] [i_1 + 1] [i_1 + 1] [i_3 + 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)4931))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((max((((unsigned int) arr_18 [i_0] [i_3 - 1])), (((/* implicit */unsigned int) arr_1 [(unsigned short)9] [i_1 - 1])))), (((/* implicit */unsigned int) arr_8 [i_1] [i_3 + 1] [i_5]))));
                                arr_22 [i_5] [i_3] [i_3] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_16 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 + 2])))));
                                var_20 = ((unsigned int) (+(((/* implicit */int) (short)-4961))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (short i_6 = 4; i_6 < 21; i_6 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) arr_24 [i_1 + 1] [15U] [i_1 - 2]))), ((-(((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_6 + 1]))))));
                    var_22 = ((/* implicit */signed char) (short)-4932);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                arr_30 [i_0] [i_1 + 1] [i_6] [(signed char)8] [i_7] = min(((-(arr_28 [i_0] [i_0] [i_0] [(unsigned short)5] [i_0] [i_1 - 1] [i_6 + 1]))), (((/* implicit */unsigned int) -374255331)));
                                var_23 += 4294967295U;
                            }
                        } 
                    } 
                }
                for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1 - 2] [(signed char)5]))));
                    var_25 = ((/* implicit */short) max((4294967293U), (2015261554U)));
                }
                /* vectorizable */
                for (signed char i_10 = 3; i_10 < 20; i_10 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_10 - 1]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) ((unsigned int) arr_9 [i_0] [i_10 + 1] [i_0] [i_1 + 1]));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_11] [i_1 - 1] [i_10 + 2])) - (((/* implicit */int) arr_33 [i_11] [i_1 - 1] [i_11]))));
                        arr_41 [i_0] [i_0] [i_1] [(unsigned short)7] [i_11] [i_11] = ((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_10])) : (((/* implicit */int) var_16)));
                        arr_42 [i_0] [i_0] [i_11] [i_10] [i_11] = arr_12 [i_10 - 2] [i_1 - 1];
                    }
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [(signed char)18] [(signed char)18] [i_0])) ? (((((/* implicit */int) arr_24 [i_0] [i_0] [(signed char)1])) << (((((/* implicit */int) var_1)) - (141))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_30 = ((/* implicit */signed char) var_3);
                        arr_45 [i_0] [i_0] [i_10 - 2] [i_12] [i_0] [6] = ((/* implicit */unsigned char) arr_38 [i_0] [i_0]);
                    }
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_31 += ((/* implicit */short) (-(arr_2 [i_0] [i_1 - 1])));
                        arr_48 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) arr_38 [i_10] [i_10]));
                    }
                    var_32 = ((/* implicit */signed char) min((var_32), (arr_17 [i_1 - 1] [i_10] [(signed char)18])));
                    arr_49 [8U] [i_1] = ((/* implicit */unsigned int) ((short) arr_21 [i_0] [(signed char)18] [i_10] [i_1 + 1] [i_1 + 1] [i_10 - 2]));
                }
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    arr_52 [i_0] [i_14] [(signed char)16] [i_0] = ((/* implicit */unsigned int) ((signed char) (-(((930453032U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49548))))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        for (short i_16 = 1; i_16 < 19; i_16 += 2) 
                        {
                            {
                                arr_59 [i_0] [i_14] [i_0] = arr_21 [i_0] [(signed char)10] [i_0] [i_0] [i_15] [8U];
                                arr_60 [i_14] [i_16] = ((/* implicit */unsigned int) ((signed char) var_0));
                                arr_61 [i_0] [i_1 + 1] [i_14] [i_16] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_1] [i_14] [i_14] [(unsigned char)2])) && (((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_14] [i_15] [i_14] [i_14])))))));
                            }
                        } 
                    } 
                    arr_62 [i_0] [i_14] [i_14] [i_1 + 1] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) max((arr_55 [i_0] [i_0] [i_1] [i_1 - 2] [i_14]), (var_8)))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (((unsigned short) 486894493U)))))));
                    arr_63 [i_14] [(unsigned short)4] [(short)18] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1] [i_1 + 1]))) ? (((var_14) | (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_1] [i_1 - 2] [i_1 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_44 [(unsigned short)10] [i_1] [i_1] [i_1 - 2] [i_1 + 1]))))));
                }
                arr_64 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_31 [(unsigned char)10] [(unsigned char)10]))), (((((/* implicit */int) arr_31 [(signed char)2] [(signed char)2])) >> (((((/* implicit */int) arr_31 [(signed char)16] [(signed char)16])) - (31589)))))));
            }
        } 
    } 
    var_33 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (var_9)))) ? (min((((/* implicit */unsigned int) var_11)), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
    var_34 = ((/* implicit */unsigned char) 2279705741U);
    var_35 = ((/* implicit */unsigned short) var_3);
}
