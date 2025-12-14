/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/835
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */short) ((signed char) var_7))), (max(((short)-32766), ((short)-9793)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_11 = ((short) (+(arr_0 [i_0 - 1])));
        var_12 *= ((/* implicit */unsigned int) (signed char)104);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */signed char) ((unsigned int) arr_12 [5ULL] [i_2] [i_3]));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-104))) : (arr_8 [i_3 - 1] [i_3 - 2])));
                                var_15 = ((/* implicit */long long int) ((arr_8 [i_1] [i_3 + 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 2] [i_3 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 10; i_6 += 2) 
                    {
                        for (int i_7 = 2; i_7 < 8; i_7 += 4) 
                        {
                            {
                                var_16 -= ((/* implicit */long long int) arr_19 [i_6] [i_2]);
                                arr_23 [i_1] [i_1] [i_3 + 1] [i_6] [i_7] [i_1] |= ((/* implicit */signed char) ((int) 2908766108U));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_6] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_14 [i_3 + 1] [i_7] [i_3 + 1])) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3 + 1]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_1])))))) ? (arr_10 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0))))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 7; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-1426629242276470554LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)4096)))) : (((arr_9 [i_9]) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                                arr_30 [i_1] [i_1] [i_3] [i_8 + 4] [(short)3] [i_9] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) -138273)) - (-1426629242276470554LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_10 = 2; i_10 < 9; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 8; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) 4398046511100LL)))))));
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_10 - 1] [i_10 - 2] [i_11] [i_12]))));
                                arr_42 [i_1] [0U] [i_11] [i_12 + 1] [0LL] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -4398046511100LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))))));
                            }
                        } 
                    } 
                    var_22 += (~(((/* implicit */int) ((((/* implicit */int) (signed char)118)) != (((/* implicit */int) (_Bool)0))))));
                    arr_43 [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)109))));
                }
            } 
        } 
        arr_44 [i_1] [i_1] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (4813048814128683829LL))));
    }
    var_23 = ((/* implicit */unsigned int) (short)11264);
}
