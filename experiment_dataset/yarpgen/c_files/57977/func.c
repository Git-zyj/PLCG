/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57977
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
    var_14 = ((/* implicit */unsigned char) var_13);
    var_15 ^= 2142223646269029330LL;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [0LL] [i_2] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) (signed char)84))))));
                        arr_11 [(unsigned char)5] = ((/* implicit */unsigned long long int) (((~(arr_2 [i_1] [i_3]))) + (min((arr_2 [i_0] [i_0]), (arr_2 [(unsigned char)0] [i_1])))));
                        arr_12 [i_3] = ((/* implicit */int) (+(((unsigned long long int) 2142223646269029324LL))));
                        var_16 = ((/* implicit */short) min((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))) : (2142223646269029330LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-2142223646269029345LL)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)14)))) : (((((/* implicit */_Bool) (short)23422)) ? (((/* implicit */int) arr_4 [i_0] [i_3])) : (arr_5 [3] [i_2] [i_2] [i_2]))))))));
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */unsigned char) ((int) min((((/* implicit */int) (unsigned short)65371)), (64))));
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((-2110587879), ((~(-1179971032)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (2142223646269029324LL) : (8752155783967646686LL)))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) -1LL))))));
        arr_16 [i_4] = ((/* implicit */int) (-((~(max((arr_13 [i_4]), (((/* implicit */long long int) 2146602014))))))));
    }
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) 290482911)), (((((/* implicit */_Bool) (short)-21884)) ? (((/* implicit */long long int) (+(-908046203)))) : (3630664207097465267LL)))));
}
