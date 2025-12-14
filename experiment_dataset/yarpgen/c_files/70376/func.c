/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70376
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) < (((((/* implicit */_Bool) -487723533)) ? (((/* implicit */unsigned int) -487723509)) : (var_3))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_1)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_4 [(unsigned short)21] [i_0] = ((/* implicit */_Bool) var_7);
            arr_5 [i_0] = ((/* implicit */short) arr_2 [i_0] [i_1]);
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((short) max((arr_3 [i_0] [i_1]), (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
            var_17 *= ((/* implicit */_Bool) var_14);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_1)), (var_10))))), ((-(((/* implicit */int) var_9))))));
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(var_3))), (((arr_7 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4)))))) && ((!(((((/* implicit */int) var_9)) < (((/* implicit */int) var_5))))))));
        }
        arr_11 [i_0] = (unsigned short)35320;
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) max((((arr_2 [i_3] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))))), (((long long int) arr_2 [i_3] [i_3]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_19 [i_5] [i_4] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_3] [i_4]) : (arr_3 [i_4] [i_5])));
                arr_20 [i_3] [i_4] [i_5] [i_3] &= arr_0 [i_5] [i_5];
            }
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                arr_23 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_15 [8LL] [i_3] [i_3]))) ? (((arr_22 [i_4] [i_4] [i_4]) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_17 [i_3] [i_4] [i_6]))));
                var_18 = ((/* implicit */unsigned short) var_6);
                arr_24 [2U] [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4]))));
                arr_25 [i_4] = ((/* implicit */_Bool) var_1);
            }
            /* LoopSeq 3 */
            for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                arr_28 [i_4] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) arr_0 [i_7] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                arr_29 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) var_8);
                var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) arr_21 [i_7 + 1] [i_3] [i_7 + 1]))));
                arr_30 [i_4] = ((/* implicit */unsigned char) ((int) var_12));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_8]))))))));
                var_21 ^= ((/* implicit */unsigned long long int) arr_31 [i_3] [i_4] [i_8] [i_4]);
                var_22 = (+(arr_2 [i_3] [i_8]));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_35 [i_3] [i_3] [i_9] |= ((/* implicit */short) arr_22 [i_3] [i_4] [i_9]);
                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_8 [i_3]))));
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    arr_38 [i_3] [i_4] [i_4] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((arr_27 [i_10] [i_4] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)196)))))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_4))));
                }
            }
        }
    }
    var_25 = ((/* implicit */unsigned char) var_6);
    var_26 += ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_8)));
}
