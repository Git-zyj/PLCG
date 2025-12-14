/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58930
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 ^= ((((long long int) arr_3 [i_0] [i_1])) ^ (((long long int) arr_1 [i_0] [i_1])));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_18 = min((((((/* implicit */_Bool) 1152921504606846975LL)) ? (arr_8 [13LL]) : (arr_7 [i_0] [i_0] [i_0]))), (max((arr_0 [i_1]), (var_9))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                            {
                                var_19 = max((arr_11 [i_0] [6LL] [i_0] [i_0]), (1152921504606846988LL));
                                var_20 = ((((/* implicit */_Bool) -1152921504606846952LL)) ? (-1152921504606846994LL) : (((((/* implicit */_Bool) 8388352LL)) ? (1152921504606846987LL) : (6232012457412731641LL))));
                                var_21 &= ((long long int) ((((/* implicit */_Bool) 1152921504606846978LL)) ? (((long long int) 6LL)) : (((long long int) 860908394160794706LL))));
                                var_22 = ((/* implicit */long long int) max((var_22), ((~(var_1)))));
                                var_23 = ((((/* implicit */_Bool) ((((long long int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0])) & (arr_8 [i_0])))) ? (max((arr_5 [i_0] [i_2] [i_3] [i_4]), (max((var_12), (var_8))))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((long long int) -3699452755990681316LL)) : (-1152921504606846963LL))));
                            }
                            for (long long int i_5 = 1; i_5 < 24; i_5 += 2) 
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] &= ((long long int) ((arr_12 [i_0] [i_5 + 1] [i_5] [i_5] [i_5]) / (arr_12 [i_2] [i_5 - 1] [17LL] [i_5] [i_5])));
                                var_24 = arr_13 [i_1] [i_1] [i_5 + 1] [15LL] [i_0] [i_2] [i_0];
                                var_25 = max(((-(arr_12 [i_5 + 1] [i_1] [12LL] [i_2] [i_0]))), (((/* implicit */long long int) ((arr_12 [i_5 - 1] [i_2] [i_0] [i_5 - 1] [i_5 + 1]) <= (var_13)))));
                                var_26 &= ((((/* implicit */_Bool) 1212898483956496434LL)) ? (max((5819505956010764126LL), (6509375449903935334LL))) : (((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_0] [i_3] [i_3])) ? (-5665951361091405131LL) : (-6406417501460620136LL))));
                            }
                            var_27 = ((/* implicit */long long int) min((var_27), (((long long int) min((arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]), (-1152921504606846989LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
        {
            {
                var_28 = (-(-8127135980862177850LL));
                /* LoopSeq 3 */
                for (long long int i_8 = 3; i_8 < 12; i_8 += 2) 
                {
                    var_29 = ((/* implicit */long long int) max((var_29), (min((4810273648874809793LL), (6113811708927951319LL)))));
                    arr_23 [i_7] [i_7 + 3] [11LL] = arr_8 [i_7];
                }
                for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    var_30 = ((long long int) 8388355LL);
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (long long int i_11 = 1; i_11 < 12; i_11 += 2) 
                        {
                            {
                                var_31 = max((((max((arr_12 [i_6] [i_11] [i_11] [i_10] [i_10]), (arr_6 [i_11] [24LL] [i_7]))) / ((-(var_3))))), (min((((var_3) ^ (var_2))), (((long long int) arr_27 [i_6] [i_7] [i_9] [i_10] [i_7] [i_11])))));
                                arr_31 [i_9] [i_7] [i_9] [6LL] [i_11] [i_9] [i_10] = ((long long int) ((long long int) -8388358LL));
                                var_32 &= ((long long int) arr_10 [i_6] [i_7 - 1] [i_9] [i_9] [i_11] [23LL]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    var_33 = ((/* implicit */long long int) min((var_33), (((long long int) ((long long int) 8588655055683461348LL)))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            {
                                var_34 = ((long long int) (-(arr_36 [i_6] [i_12] [i_13] [0LL])));
                                var_35 &= ((long long int) 6509375449903935341LL);
                                var_36 &= ((long long int) arr_9 [i_7 - 1] [i_7 - 1] [i_7 + 3] [i_7 + 2] [i_6] [i_6]);
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_6] [i_12] [2LL] [i_7] [i_12])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_7 + 3] [12LL] [i_7] [i_7])) ? (785705270493479069LL) : (6509375449903935307LL))))));
                    var_38 = ((/* implicit */long long int) (((+(7031872830946576199LL))) >= (((((/* implicit */_Bool) -951083226067809783LL)) ? (7891985242527708189LL) : (-3417951637910522304LL)))));
                }
                var_39 = ((/* implicit */long long int) min((var_39), (((long long int) ((long long int) 4596323685969857965LL)))));
                var_40 = 288230376151711743LL;
            }
        } 
    } 
    var_41 = ((long long int) (!(((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL))))));
}
