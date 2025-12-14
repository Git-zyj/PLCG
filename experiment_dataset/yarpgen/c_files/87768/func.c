/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87768
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) min((7786290965569708231LL), (((/* implicit */long long int) var_7))))) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-63))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_5 [i_2])) ? (966439950923815484LL) : (arr_0 [i_0]))), (min((-1603468858052911722LL), (-966439950923815471LL))))))));
                    arr_10 [i_0] [(short)17] [i_0] = (-(((/* implicit */int) arr_9 [i_0] [(short)6] [i_2] [i_0])));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 966439950923815482LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((-(2608537671056774833ULL))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_11)), (var_18))), (((/* implicit */long long int) (+(2039547262U)))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)31264)) : (((/* implicit */int) (short)11249))))))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) / (17739694294880499830ULL))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 15; i_3 += 2) 
    {
        var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))));
        var_23 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_3])) || (((/* implicit */_Bool) -966439950923815493LL)))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_12 [i_3 - 4])) : (((/* implicit */int) ((signed char) arr_3 [i_3] [i_3] [i_3])))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) ((unsigned long long int) arr_19 [i_4 + 1] [i_3 + 1] [i_3 + 1]));
                    arr_21 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */signed char) ((short) var_16));
                }
            } 
        } 
        arr_22 [i_3 - 2] = ((long long int) arr_18 [i_3 + 1] [i_3 - 2] [i_3 - 2]);
    }
}
