/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74800
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = arr_2 [i_0] [4] [i_2];
                    arr_8 [i_2] = ((/* implicit */long long int) (+(min((((/* implicit */int) (unsigned short)0)), (var_8)))));
                    arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -396566555)) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_2])) : (-396566573)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_16)), (((var_14) | (((/* implicit */unsigned int) arr_4 [i_1] [8])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_17 = ((var_12) | (((/* implicit */unsigned int) min((arr_10 [i_3]), (((/* implicit */int) var_5))))));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)4064)) : (396566561))) * (((/* implicit */int) ((-746108890) == (((/* implicit */int) (unsigned short)65535)))))));
        arr_14 [i_3] = ((/* implicit */unsigned short) var_9);
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    arr_21 [i_3] [i_3] [2U] [i_3] = min((-8928084790989834564LL), (((/* implicit */long long int) var_3)));
                    var_19 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_10)))) / (((int) 396566573))));
                }
            } 
        } 
        arr_22 [0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_11 [i_3]), (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) 2147483647)) ? (arr_2 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) arr_10 [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -2147483642)) && (((/* implicit */_Bool) var_8))))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) -396566563))));
        arr_25 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61459)) ? (arr_24 [i_6 - 1] [i_6 - 1]) : (arr_24 [i_6 - 1] [i_6])));
    }
}
