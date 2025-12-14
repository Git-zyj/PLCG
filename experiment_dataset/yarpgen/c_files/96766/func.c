/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96766
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [8U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [(short)2])));
        var_21 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) var_0)) % (arr_1 [i_0])))));
        var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_12 [i_3] [i_2] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)106)) * (((/* implicit */int) (short)12899))));
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1]))));
                        arr_13 [i_3] [i_2 + 3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_2 - 2] [i_3 + 1] [i_2 - 2])))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_9 [i_4] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_1]))) : (((/* implicit */long long int) min((17U), (((/* implicit */unsigned int) arr_11 [i_4] [i_3] [i_2] [1ULL])))))))));
                        var_24 = ((/* implicit */unsigned short) var_8);
                        arr_14 [i_3] [i_2] [i_2] = arr_2 [i_1];
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_2)))) ? (((/* implicit */long long int) (-(var_16)))) : (max((((/* implicit */long long int) arr_0 [i_5] [i_5])), (arr_10 [i_1] [(short)10] [i_1 + 1] [i_5] [i_5] [i_5])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_5] [i_5] [i_5] [i_1 + 1]), (((/* implicit */unsigned char) arr_15 [(signed char)0] [i_5])))))) : (min((arr_5 [i_1 + 1]), (((/* implicit */long long int) 1U))))));
            var_26 = ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)240)))))) ? (((/* implicit */int) (signed char)-93)) : (min((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])), (-1))));
        }
        for (short i_6 = 1; i_6 < 12; i_6 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned long long int) var_10))));
            var_28 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_6])) : (-68190330)));
            arr_19 [i_1] = ((/* implicit */short) ((((-1314822456008441411LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6 - 1] [i_1 + 1]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6 + 1] [i_1 + 1])))));
            var_29 = ((/* implicit */short) arr_10 [i_1 - 1] [i_6] [i_1] [i_6] [8U] [(signed char)10]);
        }
        for (short i_7 = 1; i_7 < 12; i_7 += 3) /* same iter space */
        {
            arr_22 [i_7] [i_1 + 1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_1 - 1] [i_7 + 2])) / (((/* implicit */int) arr_16 [i_1 + 1] [i_7 + 1]))))) ? (min((-6522002584875161000LL), (((/* implicit */long long int) arr_3 [(unsigned short)9] [i_7 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)0] [i_7 + 1])))));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                var_30 = ((/* implicit */signed char) var_7);
                arr_27 [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7 + 1]))))) : ((-(((/* implicit */int) ((signed char) arr_9 [i_1 - 1] [i_1] [i_7] [7] [i_8]))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_30 [i_7] = ((/* implicit */unsigned long long int) (~(((int) 2900267120U))));
                var_31 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 13832351827482403245ULL)) ? (((/* implicit */int) (short)-10575)) : (((/* implicit */int) (_Bool)1))));
            }
            var_32 = ((/* implicit */_Bool) (~(arr_8 [i_1])));
            arr_31 [i_7] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_1 - 1] [i_7])), (min((1393764545), (((/* implicit */int) (_Bool)1))))));
            arr_32 [i_7] [i_1 + 1] [i_7] = ((/* implicit */unsigned long long int) ((short) var_13));
        }
        arr_33 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1 - 1] [i_1 - 1]))) : (arr_17 [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        var_33 = ((/* implicit */unsigned long long int) (unsigned char)93);
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            arr_40 [i_11] &= ((/* implicit */long long int) var_19);
            var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_34 [i_10])) / (3ULL)));
        }
        for (int i_12 = 3; i_12 < 13; i_12 += 4) 
        {
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_12 - 2] [i_12 - 2] [i_12 + 2])) - (((/* implicit */int) arr_38 [i_12 - 3] [i_12 - 1] [i_12 - 1]))));
            var_36 = ((/* implicit */unsigned short) var_15);
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 2) 
                {
                    {
                        var_37 |= ((/* implicit */unsigned long long int) (-(2482718209U)));
                        arr_50 [i_10] [i_12] [i_12] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [(_Bool)1] [i_12 + 1])) || (((/* implicit */_Bool) arr_1 [i_10]))));
                        var_38 = ((/* implicit */int) var_0);
                    }
                } 
            } 
        }
    }
    var_39 = ((/* implicit */long long int) 4764648705825038446ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 3) 
    {
        for (int i_16 = 3; i_16 < 14; i_16 += 3) 
        {
            {
                arr_55 [i_16] [i_15 + 1] [i_16] = ((/* implicit */short) ((((unsigned long long int) var_0)) * (4764648705825038458ULL)));
                arr_56 [i_16] = ((/* implicit */unsigned long long int) ((_Bool) min((arr_52 [i_15 + 1] [i_16 - 3]), (((/* implicit */unsigned short) arr_53 [i_16])))));
            }
        } 
    } 
}
