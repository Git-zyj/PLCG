/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57161
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
    var_11 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) max((((/* implicit */int) var_2)), (var_8))))), (var_5)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_1]))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */int) (!(arr_4 [i_0])))) : (((/* implicit */int) arr_2 [i_1] [i_2]))));
            }
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                arr_11 [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_3 + 1]))));
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(var_1))))));
            }
            arr_12 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? ((~(((((arr_5 [i_0] [i_0] [i_1] [i_1]) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0])) - (1))))))) : ((~(((((arr_5 [i_0] [i_0] [i_1] [i_1]) + (2147483647))) >> (((((((/* implicit */int) arr_9 [i_0])) - (1))) - (138)))))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_0] [8ULL])) <= (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [(unsigned char)8] [(unsigned char)8])) : (var_8)))));
        }
        for (signed char i_4 = 2; i_4 < 15; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_16 = min((min((((((/* implicit */int) var_2)) + (((/* implicit */int) arr_21 [i_6] [i_6])))), (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), (arr_21 [i_0] [i_4])))) < ((-(((/* implicit */int) arr_0 [i_0]))))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_6] [i_0])) ? (arr_20 [i_0] [i_4] [i_5] [i_4] [i_7]) : (((/* implicit */int) arr_0 [i_0])))), (min((((/* implicit */int) arr_3 [i_0] [i_0])), (var_8)))))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0])) / (((/* implicit */int) var_3))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7]))) / (var_5)))))));
                            arr_24 [i_0] [1ULL] [i_5] [i_6] [i_7] [i_0] = arr_2 [i_4] [i_6];
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_14 [i_4 - 2] [i_0] [i_4 + 1])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                var_19 = arr_20 [i_0] [i_4 + 1] [i_8] [i_8] [i_8];
                var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_16 [i_0] [(_Bool)1] [i_0] [(_Bool)1])), (var_9)))) ? (arr_19 [i_0] [i_0] [i_8] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_4] [i_8])))) >> (((/* implicit */int) max((arr_21 [i_0] [i_8]), (((/* implicit */short) arr_17 [i_0] [i_4] [i_0] [i_8]))))))))));
            }
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_25 [i_0] [i_0] [i_4] [i_4])), (arr_13 [i_0] [i_4] [i_4])))) ? ((-(var_8))) : (((/* implicit */int) arr_1 [i_0])))))));
        }
        for (signed char i_9 = 2; i_9 < 15; i_9 += 1) /* same iter space */
        {
            arr_30 [i_0] = ((/* implicit */int) ((min((((arr_16 [i_0] [i_9] [i_9] [i_9]) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_9] [i_9])) : (((/* implicit */int) arr_15 [i_0])))), (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_9] [i_9])))))) != ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_9] [i_0])) : (arr_20 [i_0] [i_0] [i_0] [i_9 + 1] [i_0])))))));
            var_22 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [(unsigned char)12]);
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_23 [i_0] [i_9 - 2] [i_9 + 1] [i_0] [i_0]))) ? (((/* implicit */int) min((arr_23 [i_0] [i_0] [i_9 + 1] [i_9] [i_9 + 1]), (arr_23 [i_0] [i_0] [i_9 - 2] [i_9] [i_9 + 1])))) : ((~(((/* implicit */int) arr_23 [i_9] [i_9] [i_9 - 1] [i_9] [i_9]))))));
            var_24 = ((/* implicit */signed char) (-(var_1)));
        }
        arr_31 [i_0] = ((/* implicit */signed char) min((min((arr_23 [i_0] [i_0] [i_0] [i_0] [13ULL]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_0]))))))), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_4 [i_0])), (var_0))) < (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    var_25 = max((max((max((var_4), (((/* implicit */int) var_2)))), (((/* implicit */int) ((short) var_2))))), (max((((((/* implicit */int) var_7)) - (((/* implicit */int) var_2)))), (max((((/* implicit */int) var_7)), (var_8))))));
}
