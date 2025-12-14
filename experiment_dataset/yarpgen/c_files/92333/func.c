/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92333
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 + 1])) / (var_4))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_0 - 1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) 2131578615944638724ULL));
                    var_11 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_13 [i_3] [i_3] &= ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((arr_11 [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
        arr_14 [i_3] = ((/* implicit */unsigned short) (+(((var_9) << (((var_1) + (282152247)))))));
        /* LoopSeq 4 */
        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_12 &= ((/* implicit */int) ((16315165457764912887ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [i_4] [i_3]), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))))))));
            arr_18 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned int) (+(arr_16 [i_3] [i_3]))));
            arr_19 [i_3] [i_4] = ((/* implicit */unsigned short) arr_16 [i_3] [i_3]);
        }
        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            arr_22 [i_3] [i_3] = ((((/* implicit */_Bool) ((long long int) arr_11 [i_5]))) ? ((-(16315165457764912887ULL))) : (((/* implicit */unsigned long long int) arr_11 [i_3])));
            var_13 = ((/* implicit */unsigned long long int) arr_15 [i_3]);
        }
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                arr_27 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-(arr_16 [i_6] [i_3])));
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)28)) || (((/* implicit */_Bool) (unsigned short)41978)))))));
                    var_15 *= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_3] [i_3] [i_3]))) / (arr_24 [i_3]))));
                    var_16 &= ((/* implicit */_Bool) (-(arr_24 [i_8])));
                }
            }
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        {
                            arr_38 [i_11] [i_6] [i_11] [i_10] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                            var_17 += ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_11])))))));
                            var_18 = ((/* implicit */long long int) (!(((((/* implicit */unsigned int) (-(((/* implicit */int) arr_37 [i_9] [i_11] [i_9] [i_11] [i_3]))))) >= (arr_31 [i_3] [i_6] [i_9] [i_10])))));
                            var_19 *= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) var_0))), ((+(((/* implicit */int) var_3))))));
                            arr_39 [i_11] = ((/* implicit */int) ((short) var_4));
                        }
                    } 
                } 
            } 
            var_20 *= ((/* implicit */unsigned long long int) (-((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_3] [i_3] [i_3]))) ^ (arr_17 [i_6] [i_3])))))));
        }
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [i_3] [i_3] [i_3]))));
                        arr_50 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned int) var_4));
                    }
                } 
            } 
            arr_51 [i_3] = ((/* implicit */unsigned short) (!(var_7)));
        }
        var_22 *= ((/* implicit */unsigned short) ((int) ((16315165457764912886ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))));
    }
    for (unsigned char i_15 = 1; i_15 < 23; i_15 += 2) 
    {
        arr_56 [i_15] [i_15] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_55 [i_15 - 1])))));
        arr_57 [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_0);
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
}
