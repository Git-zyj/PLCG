/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89850
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (unsigned short)28614);
                        arr_10 [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (unsigned char)128))), ((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_8))));
            var_15 = ((/* implicit */unsigned int) (unsigned char)128);
            var_16 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_0] [i_4])) - (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-98)), ((unsigned char)137))))));
            var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (short)-26325)) % (((/* implicit */int) (signed char)34)))));
        }
    }
    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 2) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min(((unsigned char)136), ((unsigned char)103))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            arr_19 [i_5] [i_5 + 1] [i_5] = arr_11 [i_5 - 2];
            arr_20 [(unsigned char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)14929)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_5] [i_5] [(short)12])))), (((/* implicit */int) ((unsigned short) var_0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14904)) || (((/* implicit */_Bool) (unsigned short)29031))))) : (((/* implicit */int) var_10))));
            arr_21 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_5 + 1]))));
            var_19 ^= ((((/* implicit */_Bool) arr_1 [i_5 + 1] [i_5 - 2])) && (((/* implicit */_Bool) arr_1 [i_5 + 1] [i_5 - 3])));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_20 *= arr_13 [16U] [i_9];
                            arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_11))));
                            var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_28 [i_5 - 2] [i_9] [i_7] [i_5 - 2] [i_5 - 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))))));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)249)), ((unsigned short)14927))))) & (max((((/* implicit */unsigned long long int) arr_11 [i_5])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))) - (var_5)))))));
                        arr_31 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32763)) | (((/* implicit */int) (unsigned short)50632))))) & (((((/* implicit */_Bool) (unsigned char)6)) ? (((4024806811U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (4137211167U)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                        {
                            var_24 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-4)) || (((/* implicit */_Bool) (unsigned short)50600)))))));
                            arr_35 [i_10] [i_8] [i_7] [i_6] [i_5 - 1] = ((/* implicit */_Bool) ((unsigned char) ((short) var_0)));
                            arr_36 [i_5] [i_6] [(short)2] [i_8] = arr_4 [i_10];
                            var_25 -= ((/* implicit */long long int) arr_27 [i_6] [i_6]);
                            var_26 -= ((/* implicit */unsigned short) (~(808310415465796531ULL)));
                        }
                        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-31))) ^ (295611553040700688LL)));
                            arr_40 [i_7] [i_6] [i_5] [i_8] [i_11] = ((/* implicit */_Bool) arr_3 [i_5] [i_6] [i_7]);
                            var_28 += ((/* implicit */unsigned char) min((arr_0 [i_5] [i_5 - 2]), ((-(arr_0 [i_5 + 1] [i_5])))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) min((max(((unsigned short)14963), (((/* implicit */unsigned short) arr_3 [i_5] [i_7] [i_8])))), (((/* implicit */unsigned short) (unsigned char)9)))))));
                            var_30 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) ((unsigned char) arr_2 [i_5])))), (max((((((/* implicit */int) var_1)) | (((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned short) arr_12 [5LL] [i_6])))))));
                        }
                        for (signed char i_12 = 4; i_12 < 15; i_12 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((arr_11 [i_12]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5 - 2])) && (((/* implicit */_Bool) arr_11 [i_5 - 1])))))))))));
                            arr_44 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 808310415465796525ULL)) ? (((/* implicit */int) (unsigned short)12861)) : (((/* implicit */int) (unsigned char)50))));
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        var_32 ^= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (signed char)-40)), ((short)-26996)))) + (((/* implicit */int) arr_49 [i_13] [i_5]))));
                        var_33 = ((/* implicit */short) ((unsigned char) arr_42 [8LL] [i_13] [i_14]));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        var_34 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [16LL] [i_13] [i_14] [(short)19])))))));
                        arr_54 [i_16] [i_13] [i_14] [i_16] [i_14] [i_13] = ((/* implicit */unsigned char) 17638433658243755095ULL);
                        arr_55 [i_13] [i_13] [i_13] [i_13] |= ((/* implicit */_Bool) max((((unsigned short) max((5630085863118030235ULL), (((/* implicit */unsigned long long int) var_10))))), (((/* implicit */unsigned short) var_1))));
                    }
                    for (short i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        arr_60 [i_14] [i_13] [i_13] [i_17] |= ((/* implicit */short) (!(((/* implicit */_Bool) -260226649))));
                        arr_61 [i_5] |= var_3;
                    }
                    var_35 ^= arr_9 [i_5] [i_5] [(unsigned short)2] [i_5];
                    var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))) <= (1884219928U)));
                }
            } 
        } 
        arr_62 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((signed char) var_6))), (max((arr_49 [i_5] [i_5 - 2]), (arr_53 [i_5])))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (((/* implicit */int) arr_17 [i_5 - 1])) : (((/* implicit */int) arr_39 [i_5] [i_5] [i_5])))))) : (((/* implicit */int) arr_3 [i_5] [i_5 + 1] [i_5 - 2]))));
    }
    var_37 = var_7;
    var_38 = ((/* implicit */unsigned short) var_12);
}
