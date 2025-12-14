/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5755
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) min((((unsigned long long int) arr_4 [i_0] [i_1] [i_0])), (min((arr_4 [i_0 + 1] [i_0 + 1] [i_0]), (arr_4 [i_0] [i_0 + 2] [i_0])))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))))) : ((+(((unsigned long long int) var_0))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0] = ((/* implicit */signed char) var_11);
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_13 [i_3] [i_0] [i_0] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_12 [i_0] [i_3] [i_3] [11ULL] [i_0])))));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [0] [i_2] = ((/* implicit */long long int) ((_Bool) ((long long int) arr_8 [i_0] [i_3 + 1])));
                    }
                    /* vectorizable */
                    for (short i_4 = 3; i_4 < 12; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */short) ((signed char) arr_0 [i_0] [i_4]));
                        var_18 = ((unsigned short) arr_15 [i_4 + 2] [i_1] [i_0 + 1]);
                        var_19 += ((/* implicit */unsigned short) arr_0 [(signed char)12] [2U]);
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned long long int) arr_4 [i_0 + 1] [i_4] [(unsigned char)4])))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_9))));
                    }
                    arr_17 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((short) arr_16 [i_0] [i_1] [i_2] [i_2] [i_0 - 1]));
                    var_22 = ((((/* implicit */_Bool) ((short) arr_3 [i_0]))) ? (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_2])) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1])))))));
                }
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) (-(max((var_7), (((/* implicit */unsigned int) arr_10 [i_0] [(signed char)14]))))))) : (((unsigned long long int) ((unsigned short) arr_5 [i_0] [1])))));
                    arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) min((((short) arr_5 [i_0 - 1] [i_0 - 1])), (((/* implicit */short) ((_Bool) arr_10 [i_0] [(unsigned short)3])))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((int) (_Bool)0)))));
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    var_24 += ((/* implicit */unsigned short) ((short) ((unsigned int) arr_8 [i_6] [i_1])));
                    arr_24 [i_0] [i_6] [(unsigned char)11] [(unsigned short)6] = ((/* implicit */int) ((unsigned short) (unsigned char)130));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_29 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 1] [12LL] [3] [(unsigned char)5]) : (((unsigned long long int) arr_15 [i_0] [(signed char)1] [(signed char)8]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((unsigned short) arr_16 [i_6] [i_7] [i_6] [i_1] [i_0 + 1])), (arr_19 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2]))))) : (((long long int) arr_8 [i_0] [i_1]))));
                                arr_30 [i_0] [i_0] [14] [i_7] [4ULL] [i_1] = ((/* implicit */_Bool) arr_10 [i_0] [i_8]);
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_6] [i_1]))));
                    var_27 = ((/* implicit */int) max((((/* implicit */long long int) ((signed char) var_13))), (((long long int) arr_27 [i_0] [(short)0] [i_0 - 1] [i_0 + 1] [i_0] [i_0]))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        for (long long int i_10 = 1; i_10 < 8; i_10 += 4) 
        {
            {
                arr_38 [5ULL] [i_9] [i_9] = ((unsigned char) min((((/* implicit */short) arr_0 [i_9] [i_10 - 1])), (var_6)));
                var_28 -= ((/* implicit */signed char) ((unsigned short) max((var_1), (((/* implicit */unsigned long long int) arr_22 [i_10 - 1] [9U])))));
            }
        } 
    } 
}
