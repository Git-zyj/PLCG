/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60587
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
    var_17 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) ((arr_2 [i_0] [i_1] [i_0]) >> (((min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (var_1))), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) - (186LL)))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_12))));
                    var_20 = arr_2 [i_0] [i_0] [i_2];
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) -4611686018427387904LL))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_22 |= ((/* implicit */unsigned int) ((_Bool) arr_4 [i_0] [i_3]));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_0] [i_0])));
            arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0]) ? (((/* implicit */int) arr_7 [i_0] [i_0] [11ULL] [i_0])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_0]))) : (arr_9 [i_3])));
            var_23 = ((/* implicit */int) (signed char)115);
        }
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        var_24 = (+(((/* implicit */int) arr_18 [i_4] [i_6] [i_7])));
                        var_25 = ((/* implicit */unsigned char) ((unsigned int) arr_19 [i_4] [i_4] [i_4] [i_4]));
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_6])) & (((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_12 [i_6]))))));
                        var_27 = ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))) + ((-(var_5))));
                    }
                    var_28 = ((/* implicit */int) max((var_28), (arr_14 [i_6])));
                    var_29 = ((/* implicit */long long int) (unsigned char)39);
                }
                for (long long int i_9 = 3; i_9 < 16; i_9 += 4) 
                {
                    var_30 |= ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4]))) : (arr_24 [i_5])))), (arr_21 [i_4] [i_5] [i_4] [i_5]))));
                    var_31 = ((/* implicit */long long int) max((var_31), (-2552376118879077974LL)));
                    arr_27 [i_4] [i_4] [i_4] [i_9] = ((/* implicit */long long int) var_15);
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 15; i_10 += 4) 
                    {
                        for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_10 + 2] [i_5] [i_10 + 2] [i_10 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9 - 2] [i_9 - 2] [i_9] [i_10 + 2]))))) : (((/* implicit */int) ((short) arr_16 [i_10 + 2] [i_10 + 2] [i_10])))));
                                var_33 &= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_9 + 1])) || (((/* implicit */_Bool) arr_13 [i_9 - 2])))))));
                                var_34 |= ((/* implicit */long long int) (+((-(((/* implicit */int) arr_18 [i_4] [i_9] [i_9 - 1]))))));
                                var_35 = ((/* implicit */unsigned char) (short)-6487);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    arr_37 [i_4] [i_4] [i_4] [8ULL] = ((/* implicit */_Bool) (-(arr_36 [i_5] [i_5] [i_12 + 1])));
                    var_36 -= ((/* implicit */unsigned char) var_3);
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_12 + 1] [9ULL] [i_12 + 1] [(unsigned char)10])) ? (((/* implicit */int) arr_19 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) arr_19 [i_12 + 1] [i_12] [i_12 + 1] [i_12]))));
                }
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7357218520309469897LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-1)))))));
            }
        } 
    } 
}
