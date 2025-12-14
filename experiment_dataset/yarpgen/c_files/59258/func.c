/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59258
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((var_10), (((/* implicit */unsigned int) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */int) ((unsigned short) arr_2 [i_0]));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 + 2]))));
                    arr_7 [i_0] [i_0] [i_0] [12ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) arr_5 [0LL])) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_2]))) : (6ULL)))))) ? ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_5 [(unsigned char)0]))))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1] [10ULL] [i_1]))))) : (arr_4 [i_1] [i_1])))));
                    var_20 += ((/* implicit */unsigned char) arr_4 [11ULL] [11ULL]);
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_3 [i_0]))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) (+(arr_2 [i_0])))), ((+(6ULL)))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        var_24 &= arr_0 [i_0] [i_3];
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0 + 2] [i_3] [15U] [i_0])))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_4]))))))) ? (1390610158U) : (((/* implicit */unsigned int) arr_2 [i_3]))));
                        var_27 &= max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3])))))) : (((((/* implicit */_Bool) arr_8 [i_4] [i_5])) ? (arr_5 [5LL]) : (((/* implicit */long long int) arr_12 [i_0] [17U] [i_4] [i_5 + 1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (arr_13 [i_0 + 1] [i_4] [i_4] [i_5] [i_5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120)))))) ? (min((((/* implicit */int) arr_6 [i_0 + 4] [i_0] [i_4] [i_5])), (arr_12 [10ULL] [i_3] [i_3] [i_5]))) : (((/* implicit */int) ((unsigned short) arr_5 [i_5])))))));
                    }
                    var_28 |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_12 [(short)21] [i_3] [4U] [(short)21]), (((/* implicit */int) (unsigned short)61102))))), (arr_5 [i_0])));
                    var_29 *= ((/* implicit */unsigned long long int) (unsigned char)120);
                }
            } 
        } 
        arr_14 [i_0] [i_0] &= ((/* implicit */unsigned int) ((signed char) arr_3 [i_0]));
        arr_15 [5ULL] [i_0] |= ((/* implicit */unsigned int) arr_6 [i_0] [i_0 - 1] [i_0] [i_0]);
    }
    var_30 |= ((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6)))))));
}
