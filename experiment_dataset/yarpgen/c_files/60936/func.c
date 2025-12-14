/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60936
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) var_5);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)2)) || (((/* implicit */_Bool) 2845907820U))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) 2888015262U)) ? (15900016413228411180ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))))), (((((/* implicit */_Bool) var_14)) ? (2546727660481140435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [(unsigned char)4]) >= ((~(var_14)))))) >> (((min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (((var_7) ^ (((/* implicit */long long int) var_0)))))) + (129LL)))));
                    arr_22 [i_0] [i_0] = ((/* implicit */int) var_3);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            var_19 = ((/* implicit */int) max((var_19), (max(((+(((/* implicit */int) arr_16 [i_0] [6] [6] [i_0] [10LL] [i_7] [i_7])))), (((((/* implicit */int) arr_16 [i_0] [i_7] [i_7] [i_7] [0U] [i_7] [i_7])) / (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1]))))))));
            arr_25 [i_0] [(signed char)17] = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (720376445U)));
            arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(3574590837U)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (((((((/* implicit */_Bool) var_7)) ? (7853684061309250215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0]))))) * (((/* implicit */unsigned long long int) (-(var_3))))))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_1 [i_8] [i_8]))));
        arr_30 [i_8] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [(unsigned char)4])) : (((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8]))))) ? (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8])))) : (((/* implicit */int) min((arr_12 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_12 [i_8] [i_8] [i_8] [(unsigned char)16] [i_8]))))));
        arr_31 [i_8] [i_8] = ((/* implicit */long long int) ((min((((/* implicit */int) arr_24 [i_8] [i_8])), ((+(((/* implicit */int) (signed char)109)))))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (signed char)34)) ? (arr_9 [4U]) : (var_3))))) - (4294967180U)))));
        var_21 = ((/* implicit */unsigned int) (((((+(arr_8 [i_8] [18ULL] [i_8] [i_8]))) == (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) var_10))))))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18376059440059390910ULL))) : (((/* implicit */unsigned long long int) ((arr_15 [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8] [22LL]))) : (var_3)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_10 [i_8] [i_8])), (2490692024U))))));
    }
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) / (arr_28 [i_9] [i_9])))) : ((-(var_1)))))));
        var_23 ^= ((5U) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) var_2)) ^ (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 16; i_11 += 2) 
            {
                {
                    var_24 = ((/* implicit */int) (((+(((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) 0U)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    arr_41 [i_10] [(_Bool)1] [i_11 + 1] = var_11;
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_20 [i_9]))));
                }
            } 
        } 
        arr_42 [i_9] |= ((/* implicit */long long int) min((var_3), (min((((/* implicit */unsigned int) arr_18 [i_9])), (24U)))));
    }
    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
    {
        arr_45 [i_12] = ((/* implicit */int) 281474974613504LL);
        arr_46 [i_12] = ((/* implicit */signed char) arr_34 [i_12] [i_12]);
        var_26 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_12] [(short)14] [i_12] [i_12] [i_12]))));
    }
    var_27 = ((/* implicit */_Bool) var_10);
    var_28 = ((/* implicit */unsigned char) (+(min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32756)) && (((/* implicit */_Bool) var_12)))))))));
}
