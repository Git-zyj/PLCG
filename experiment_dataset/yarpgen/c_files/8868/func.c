/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8868
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            arr_9 [i_0] = ((/* implicit */signed char) (short)-1);
            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3189016396U))));
            var_18 = ((/* implicit */unsigned long long int) ((long long int) var_0));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_5 [i_0] [i_1]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_14 [6LL] [i_2] |= ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0]);
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (var_14) : (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned long long int) (short)-16832)), (15787106458887170892ULL)))))) || (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) min((var_10), (arr_7 [i_0] [15LL] [i_0])))))))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        arr_17 [(signed char)0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-5))))), (arr_0 [i_3]))))));
        var_21 = ((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [i_3]);
    }
    for (int i_4 = 2; i_4 < 10; i_4 += 3) 
    {
        arr_22 [i_4] = ((/* implicit */unsigned int) ((var_2) / (((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_4] [i_4] [i_4])), (var_7)))), (((int) 3189016396U)))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (short i_7 = 3; i_7 < 9; i_7 += 4) 
                {
                    {
                        arr_33 [i_4] [0LL] [i_7] [0LL] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_20 [i_4 - 2])))) ? (((((/* implicit */_Bool) arr_20 [i_7 + 1])) ? (arr_20 [i_5]) : (arr_20 [i_4]))) : (arr_20 [i_4 - 1])));
                        arr_34 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_19 [i_5]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */short) var_13);
    /* LoopSeq 4 */
    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        arr_37 [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_8]))))), (((min((var_16), (var_9))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16))))))));
        arr_38 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_8]), (arr_2 [i_8])))) ? (max((((/* implicit */long long int) 3189016396U)), (arr_2 [i_8]))) : ((~(arr_2 [i_8])))));
        var_23 |= ((/* implicit */short) ((((((/* implicit */_Bool) 3189016385U)) || (((/* implicit */_Bool) (unsigned short)19123)))) ? (((((/* implicit */_Bool) 9140910723680673241LL)) ? (((/* implicit */long long int) 1105950895U)) : (-9140910723680673242LL))) : (max((((/* implicit */long long int) (short)0)), (-9223372036854775804LL)))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) (unsigned short)5674);
        var_25 = ((/* implicit */unsigned short) min(((+(var_1))), (((/* implicit */unsigned long long int) arr_3 [i_9]))));
        var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_5 [i_9] [i_9])), (arr_11 [i_9]))))) + ((-((-(3189016390U)))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [10U])), (arr_39 [i_9])))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_9] [8LL] [i_9])) < (((/* implicit */int) arr_3 [(short)12])))))))) : (min((max((9140910723680673231LL), (-1106076382839400248LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_3 [(unsigned short)2]))))))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_28 += ((/* implicit */unsigned int) arr_13 [i_10] [8]);
        arr_45 [i_10] = ((/* implicit */unsigned short) ((max((7193283806142609230ULL), (((/* implicit */unsigned long long int) 3189016385U)))) * (((var_16) ^ (((/* implicit */unsigned long long int) ((-9140910723680673228LL) | (((/* implicit */long long int) 3098470884U)))))))));
    }
    /* vectorizable */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(var_14))))));
        /* LoopNest 2 */
        for (signed char i_12 = 1; i_12 < 24; i_12 += 2) 
        {
            for (signed char i_13 = 2; i_13 < 23; i_13 += 3) 
            {
                {
                    arr_54 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1062323780U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_46 [i_11] [i_12])))))) : ((-(arr_46 [i_11] [i_11])))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        for (short i_15 = 1; i_15 < 23; i_15 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */short) ((int) var_0));
                                var_31 = ((/* implicit */short) arr_58 [i_11] [i_11] [i_11] [i_12] [i_12] [i_11 - 1] [i_11 - 1]);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */short) (~(arr_59 [i_11 - 1] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 - 1])));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
    {
        var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_16] [i_16] [i_16])) ? (arr_53 [i_16] [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_63 [i_16] = ((/* implicit */_Bool) var_0);
    }
    /* vectorizable */
    for (short i_17 = 0; i_17 < 23; i_17 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (signed char i_20 = 0; i_20 < 23; i_20 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) arr_66 [i_17]);
                        arr_73 [i_17] [i_18] [i_17] [i_17] [i_20] = ((/* implicit */unsigned char) (-(-9144868055323619143LL)));
                    }
                } 
            } 
        } 
        arr_74 [i_17] = ((/* implicit */long long int) arr_50 [(short)3] [i_17]);
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (-(arr_46 [i_17] [i_17]))))));
        arr_75 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_17])) ? (((((/* implicit */int) arr_61 [i_17])) << (((/* implicit */int) (signed char)7)))) : ((~(((/* implicit */int) (unsigned short)2047))))));
        arr_76 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12834)))))) : (var_6)));
    }
}
