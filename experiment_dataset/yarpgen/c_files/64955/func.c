/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64955
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
    var_17 *= ((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (1888056144) : (((/* implicit */int) (_Bool)1)))));
    var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 3U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) <= (4294967295U)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) (unsigned char)64)))) : (((((/* implicit */int) (unsigned char)191)) + (((/* implicit */int) (_Bool)1)))))) << (min((((/* implicit */unsigned long long int) (+(6U)))), ((((_Bool)1) ? (5983145330522740652ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_15 [i_1] [8LL] [i_1] [i_2 - 1] = ((/* implicit */long long int) (~(-1)));
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)64))));
                    var_20 = (!(((_Bool) var_3)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_6)))) + (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (-1693411368) : (arr_14 [i_4])));
        var_23 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_4]))));
        var_24 = ((((/* implicit */_Bool) arr_7 [4LL] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)77)))))) : (((((/* implicit */_Bool) arr_7 [2ULL] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))) : (arr_6 [16LL]))));
    }
}
