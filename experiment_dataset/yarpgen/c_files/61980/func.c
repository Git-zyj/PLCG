/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61980
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((short)5850), (((/* implicit */short) var_3))))), (((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [(short)8]))))) : (((arr_4 [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : (8945704972848127333ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9501039100861424271ULL)) ? (8945704972848127333ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (-((~((~(((/* implicit */int) var_14))))))));
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_16 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (9501039100861424287ULL)))) ? (((/* implicit */unsigned long long int) (-(2993196120U)))) : ((-(12244994758780292119ULL)))))) ? (min((((/* implicit */int) ((_Bool) arr_5 [i_3]))), (((((/* implicit */int) var_14)) - (((/* implicit */int) var_3)))))) : ((+(((/* implicit */int) (unsigned short)28027))))));
                        arr_17 [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) var_5))))) ? (((9501039100861424278ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (min((((/* implicit */unsigned long long int) 1269023881U)), (arr_13 [(_Bool)1] [(_Bool)1] [i_5]))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) min((((unsigned int) arr_8 [i_2])), (((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_2])), ((~(((/* implicit */int) arr_6 [i_2])))))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (~(var_15)));
        var_23 = ((unsigned long long int) 9992896336008302184ULL);
        var_24 = ((((arr_19 [i_6] [i_6]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_6]))))) << (((/* implicit */int) (_Bool)1)));
        arr_20 [i_6] = ((/* implicit */_Bool) (unsigned short)21466);
    }
}
