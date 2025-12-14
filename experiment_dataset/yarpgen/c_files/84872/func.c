/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84872
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
    var_16 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [10])) ? (var_9) : (min((((/* implicit */long long int) (unsigned char)166)), (var_6)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -1217582027)) == (((var_10) | (((/* implicit */unsigned long long int) -1217582027))))))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 = ((((arr_10 [i_0] [i_0] [i_0] [i_3] [i_4]) < (((/* implicit */long long int) ((/* implicit */int) ((1217582034) <= (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_3] [i_1])))))))) ? (arr_12 [i_4] [i_3] [i_2] [i_1] [i_4]) : (min((10996310954214310277ULL), (((/* implicit */unsigned long long int) arr_10 [i_4 + 2] [i_1] [i_3] [i_3] [4])))));
                                var_18 = ((/* implicit */signed char) ((min((arr_9 [(signed char)11] [i_4 - 2]), (arr_9 [i_0] [i_4 + 1]))) < ((-(((((/* implicit */_Bool) 7255010298490781658ULL)) ? (((/* implicit */int) (short)-32754)) : (1073741824)))))));
                                arr_14 [i_0] [i_1] [i_3] [i_4] [i_4 + 3] [i_2] [i_4] = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)48)))), (957509031U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 12; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)255)))));
                                arr_23 [i_6] [i_2] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_12);
                            }
                        } 
                    } 
                    arr_24 [0] [i_0] = (((-(((((/* implicit */_Bool) arr_9 [i_0] [1])) ? (((/* implicit */unsigned long long int) arr_17 [i_0])) : (arr_7 [3ULL] [i_1] [i_0] [3ULL]))))) * (arr_1 [i_0]));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_31 [i_7] [i_7] [i_2] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) - (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)0))))), (var_1)))));
                                var_20 = (((-(max((7255010298490781664ULL), (((/* implicit */unsigned long long int) -172706885)))))) < (14114995010409063858ULL));
                                var_21 -= ((/* implicit */signed char) ((max((min((((/* implicit */unsigned long long int) -2208713871486642792LL)), (0ULL))), (min((7255010298490781682ULL), (((/* implicit */unsigned long long int) var_11)))))) == (((/* implicit */unsigned long long int) (~((~(var_6))))))));
                            }
                        } 
                    } 
                    arr_32 [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1] [10] [i_2])) ? (((((/* implicit */_Bool) 1048320)) ? (var_0) : (((/* implicit */int) arr_6 [1] [1] [i_2])))) : (((/* implicit */int) arr_0 [i_0]))))) < (min((((/* implicit */long long int) min(((-2147483647 - 1)), (978498721)))), (arr_8 [i_0] [0] [i_1] [i_2])))));
                }
            } 
        } 
        arr_33 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1217582027)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [13ULL])) : (((/* implicit */int) (signed char)15)))) - (((((/* implicit */int) arr_6 [i_0] [i_0] [14LL])) - (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : ((-(6737636681947699850ULL)))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_12);
}
