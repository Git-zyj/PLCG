/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57242
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
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) && (var_2))))));
    var_17 = 1930242797U;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) : (var_4))));
            var_18 = ((/* implicit */unsigned int) var_12);
            var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 2] [i_1 - 2])) ? (arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 3]) : (((/* implicit */int) var_11))));
            var_20 = ((/* implicit */int) ((unsigned char) ((var_9) >> (((((/* implicit */int) (unsigned char)135)) - (113))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) ((arr_0 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135)))));
            /* LoopSeq 4 */
            for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                arr_10 [i_3] [i_0] [i_2] [(short)1] = ((/* implicit */unsigned char) ((unsigned int) var_8));
                var_22 = ((((/* implicit */_Bool) (unsigned char)100)) ? (arr_8 [i_0] [i_3] [i_3 + 1] [i_3 + 1]) : (((((/* implicit */_Bool) var_11)) ? (var_15) : (arr_8 [i_0] [i_3] [i_2] [i_3]))));
                var_23 ^= ((/* implicit */unsigned long long int) var_5);
            }
            for (int i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                var_24 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)132));
                arr_15 [17U] [1ULL] [1ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) 684673710))));
                var_25 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
            }
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
            {
                var_26 *= ((/* implicit */unsigned long long int) ((int) (!(arr_9 [i_0] [i_2] [i_5] [i_5]))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 3; i_6 < 17; i_6 += 2) 
                {
                    arr_21 [i_0] [i_0] [i_6 + 1] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_2] [i_0])))) ? (arr_20 [i_6] [i_5] [i_2] [i_6]) : (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) arr_11 [(short)11] [3ULL] [(_Bool)1] [i_2])) : (((/* implicit */int) (unsigned char)255)))))));
                    var_27 = ((/* implicit */int) ((unsigned short) arr_19 [i_6 - 3] [i_6 - 3] [i_6 - 2] [i_6 + 1]));
                    arr_22 [i_6] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)132)) | (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) arr_12 [i_0] [i_5])) : (arr_20 [i_6] [i_0] [i_5] [i_6 - 3])));
                    var_28 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_6 - 3] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 1])) != (((/* implicit */int) arr_18 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 3]))));
                }
            }
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_23 [i_0] [i_2] [i_0]))));
                var_30 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [3] [i_0] [i_2] [i_2])) - (((/* implicit */int) (unsigned short)28))))) ? (var_9) : (((var_13) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [1] [1] [i_2] [7U]))))));
            }
        }
        var_31 = ((/* implicit */_Bool) (short)-32760);
        arr_25 [i_0] = ((/* implicit */unsigned int) var_13);
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (-(arr_20 [i_0] [i_0] [i_0] [i_0]))))));
        var_33 = arr_2 [(short)8];
    }
    var_34 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))))), (var_0)));
}
