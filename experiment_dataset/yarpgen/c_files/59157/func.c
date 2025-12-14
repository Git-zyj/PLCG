/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59157
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
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_6 [i_0]);
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0])))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) var_3);
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) var_11));
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_20 = ((((/* implicit */_Bool) arr_5 [i_0] [i_6] [i_6])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])));
                        arr_20 [i_4] [i_4 - 1] [i_5] [i_5] [i_6] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15))))) : ((~(((/* implicit */int) (unsigned char)224)))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (signed char)122))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_4] [i_4]))));
            var_22 -= ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0]);
            var_23 *= ((/* implicit */signed char) arr_3 [i_4 + 1]);
        }
    }
    for (unsigned char i_7 = 4; i_7 < 17; i_7 += 4) 
    {
        arr_23 [i_7 - 1] = var_4;
        /* LoopSeq 1 */
        for (signed char i_8 = 1; i_8 < 16; i_8 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) arr_24 [i_7 - 4])) & ((~(arr_21 [i_8 + 1]))))))))));
            var_25 = ((/* implicit */long long int) var_9);
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                arr_30 [i_8] [i_8] = arr_22 [i_9] [i_7 - 1];
                var_26 *= ((/* implicit */unsigned short) min((arr_21 [i_8 + 1]), (((/* implicit */unsigned long long int) ((max((arr_21 [i_7]), (arr_22 [i_8 + 3] [i_7 - 1]))) != (arr_28 [i_8 - 1] [i_8 + 1] [i_7 + 1] [i_7 - 1]))))));
                var_27 = ((/* implicit */unsigned long long int) arr_29 [i_7 + 2] [i_7 + 2]);
                var_28 = ((/* implicit */long long int) min((var_2), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) > (4294967295U))))));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_15)) : (arr_24 [i_7 - 3])))) ? ((~(arr_28 [i_7 - 1] [i_7 - 4] [i_7 - 1] [i_8 + 1]))) : (((/* implicit */unsigned long long int) arr_27 [i_8] [i_8] [i_8] [i_8]))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (_Bool)1))))))));
                var_31 = ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (arr_28 [i_7] [i_8] [i_8 + 1] [i_10]) : (((/* implicit */unsigned long long int) arr_29 [i_7] [i_7 - 2])));
            }
            for (int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                var_32 = ((/* implicit */unsigned char) 11ULL);
                var_33 -= ((/* implicit */long long int) arr_27 [i_7 - 2] [i_7 - 3] [i_7 - 2] [i_7 - 2]);
            }
            arr_35 [i_7 - 2] [i_8] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) max((var_12), (min(((signed char)-65), (((/* implicit */signed char) var_9)))))))));
        }
    }
}
