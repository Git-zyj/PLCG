/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5527
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) min((var_14), (max((((int) ((((/* implicit */_Bool) (short)-13858)) ? (arr_0 [i_0]) : (arr_0 [i_0])))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_1))))) & (((/* implicit */int) max(((short)-13846), (arr_1 [i_0] [i_0]))))))))));
        arr_2 [i_0] = max((max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_4) : (1483544165))), (((((/* implicit */_Bool) (signed char)-121)) ? (var_9) : (110996486))))), (((((/* implicit */_Bool) max((arr_0 [i_0]), (var_9)))) ? (((/* implicit */int) ((((/* implicit */int) (short)13872)) != (((/* implicit */int) arr_1 [i_0] [i_0]))))) : ((-(var_4))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) arr_3 [i_0]);
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13846))))) ? ((~(arr_7 [i_2] [i_1] [i_1] [(signed char)4]))) : (((arr_7 [(short)12] [i_1] [i_1] [(short)2]) & (-110996487)))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_5 [9] [i_0] [i_0]))))));
        var_16 = ((/* implicit */int) max((var_16), (min((((((/* implicit */_Bool) min((arr_3 [i_0]), (arr_3 [i_0])))) ? (-617077755) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (signed char)14)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [10] [i_0] [i_0])) ? (110996483) : (arr_5 [i_0] [14] [i_0])))) ? (max((2147483647), (arr_3 [i_0]))) : (((/* implicit */int) (signed char)92))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 16; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 3; i_4 < 18; i_4 += 3) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 28672)) ? (arr_11 [i_3] [i_4]) : (((/* implicit */int) (short)-13864))))) ? (617077736) : (((((/* implicit */_Bool) (short)2091)) ? (var_7) : (2147483647)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (signed char i_6 = 2; i_6 < 17; i_6 += 4) 
                {
                    {
                        arr_22 [i_3 + 1] [i_3 + 2] = ((((/* implicit */int) (signed char)68)) & (var_8));
                        arr_23 [i_6] [i_5] [(signed char)8] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483642)) ? (-1607571503) : (((/* implicit */int) (signed char)-69))))) ? (arr_10 [i_3 - 1] [i_6 - 1]) : (arr_17 [(signed char)2] [i_6 - 1] [i_4 + 1]));
                        arr_24 [i_3] [(signed char)8] [i_5] [i_5] = ((((/* implicit */_Bool) arr_21 [i_6] [i_4 + 1] [i_3] [11] [i_3])) ? (arr_21 [i_5] [i_4 - 1] [i_4] [2] [2]) : (var_8));
                        arr_25 [i_3] = ((((/* implicit */_Bool) arr_21 [i_6 + 1] [i_6 + 2] [i_6] [0] [11])) ? (arr_17 [i_3 - 1] [i_3 + 3] [i_4 + 1]) : ((~(arr_16 [i_3] [i_3 - 2]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_7 = 1; i_7 < 16; i_7 += 3) 
            {
                for (int i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        {
                            arr_35 [7] [i_4] [7] [i_7] [i_8] [i_7] [i_9] = ((/* implicit */short) ((((/* implicit */int) var_0)) >> (((var_6) - (944731354)))));
                            arr_36 [(short)1] [4] [i_7] [i_7] [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (signed char)-39)))) : (33423360)));
                        }
                    } 
                } 
            } 
            arr_37 [0] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-120)) ^ (((/* implicit */int) ((arr_15 [i_4]) > (var_7))))));
        }
        arr_38 [3] = 8126464;
        var_18 = ((((/* implicit */_Bool) (short)-29854)) ? (var_5) : (((/* implicit */int) var_13)));
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 16; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), (((19) - (arr_39 [i_3 + 3] [i_10 - 2])))));
                    var_20 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_11])) ? (-110996475) : (-641110673))) + (((/* implicit */int) ((signed char) arr_16 [i_11] [i_3 - 2])))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (8126453) : (((((/* implicit */_Bool) arr_34 [10] [i_10 - 1] [10] [i_10 - 1] [0])) ? (arr_26 [2] [i_10]) : (((/* implicit */int) arr_43 [7])))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_13 = 4; i_13 < 18; i_13 += 3) 
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_34 [i_3] [i_3] [i_12] [i_12] [i_13]))));
                var_23 = var_3;
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_3] [i_13 - 4] [i_13] [i_13 - 3])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_43 [i_12])) : (617077777))) : (((/* implicit */int) arr_27 [(signed char)12] [i_12] [12] [i_3]))));
            }
            for (short i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                var_25 += ((/* implicit */short) var_13);
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 16; i_15 += 1) 
                {
                    for (int i_16 = 4; i_16 < 15; i_16 += 3) 
                    {
                        {
                            arr_58 [i_3 - 1] [i_12] [i_14] [i_14] [i_15 - 1] [i_14] = arr_54 [i_3] [i_3] [(signed char)5] [i_16];
                            arr_59 [i_3] [i_12] [16] [i_14] [i_14] [i_16 + 1] [i_16] = ((((/* implicit */_Bool) arr_32 [i_12] [i_3 + 3] [i_14] [i_14] [i_3] [i_3])) ? (-633472349) : (arr_32 [i_12] [i_12] [i_14] [i_14] [i_3] [i_3]));
                            var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) (short)-2091)) ? (((/* implicit */int) ((-617077755) != (((/* implicit */int) (signed char)-87))))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) arr_43 [(short)7]))))))));
                        }
                    } 
                } 
            }
            for (short i_17 = 4; i_17 < 15; i_17 += 2) 
            {
                arr_64 [i_17] [i_12] [i_12] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11168)) ? (arr_61 [i_3] [i_3] [6] [i_17]) : (var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_43 [i_3 + 3]))))) : (arr_12 [(short)0] [i_12]));
                arr_65 [i_3] [i_17] = ((/* implicit */signed char) (short)32767);
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (short)-2089))));
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 19; i_18 += 3) 
            {
                for (short i_19 = 2; i_19 < 18; i_19 += 4) 
                {
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) (short)-2095)) : (685306481)))) ? (((/* implicit */int) ((short) arr_49 [15] [i_12] [i_18] [i_19]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_3 + 3] [18] [i_18] [i_18] [15] [i_19])) && (((/* implicit */_Bool) var_5))))))))));
                        arr_71 [i_3 + 1] [(signed char)11] [i_12] [i_12] [i_18] [i_18] = ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_51 [i_12] [i_18]))))) % (((/* implicit */int) var_0)));
                        arr_72 [i_19] [i_18] [i_12] [i_18] [i_3] = ((((arr_13 [i_3] [i_12]) <= (arr_13 [i_3] [i_12]))) ? (((((/* implicit */_Bool) var_6)) ? (arr_60 [i_3] [i_18] [i_19 + 1]) : (-8126468))) : (((((/* implicit */_Bool) arr_61 [12] [12] [i_18] [i_19])) ? (((/* implicit */int) (short)-8192)) : (arr_62 [17]))));
                    }
                } 
            } 
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((var_9) <= (arr_51 [i_3 + 3] [i_3 + 2]))))));
            arr_73 [i_3] [i_12] [i_12] &= arr_39 [14] [i_12];
        }
    }
    var_30 = ((/* implicit */short) var_7);
}
