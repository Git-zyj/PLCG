/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96996
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))) == (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) var_16))))));
    var_18 = max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)47))))), ((-(-2409072955950426738LL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_1])) & (((/* implicit */int) (unsigned char)47))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                        arr_11 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_2 + 1])) : (((/* implicit */int) ((_Bool) var_10)))));
                        var_21 = ((/* implicit */signed char) (unsigned char)47);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((unsigned short) arr_9 [i_3] [i_3 + 1] [i_3 - 1] [i_2 + 2])))));
                    }
                } 
            } 
        }
        arr_12 [i_0] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_23 = ((/* implicit */signed char) (unsigned char)41);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */short) var_11);
                                var_25 = ((/* implicit */signed char) ((arr_20 [i_5] [5ULL] [i_7 + 2] [i_7]) >= (arr_20 [i_4] [i_4] [i_7 + 1] [(short)14])));
                                arr_25 [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((9005448806809028770ULL) << (((/* implicit */int) (unsigned char)47))));
                                arr_26 [i_4] [i_7] = ((/* implicit */unsigned long long int) ((((var_0) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_23 [i_8] [i_8] [i_7] [i_6] [i_7] [(unsigned short)2] [i_4])), ((unsigned char)209)))))) ? (((/* implicit */int) arr_13 [i_5])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_6] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_7]))))) ? (((((/* implicit */_Bool) arr_20 [i_5] [i_6] [i_7] [(signed char)7])) ? (var_14) : (((/* implicit */int) arr_15 [i_5])))) : ((-(((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) arr_24 [i_6]);
                }
            } 
        } 
        var_27 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4])) + (((/* implicit */int) var_0))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1826025874U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4])) ? ((-(((/* implicit */int) arr_18 [i_4])))) : ((+(((/* implicit */int) var_13)))))))));
        var_28 = ((/* implicit */unsigned char) var_6);
    }
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        var_29 = ((/* implicit */long long int) (-2147483647 - 1));
        var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_29 [i_9])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49471)) ? (arr_27 [i_9]) : (((/* implicit */int) arr_28 [i_9])))))));
    }
}
