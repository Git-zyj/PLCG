/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81553
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)64)) * (((/* implicit */int) (unsigned char)164))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)167))))));
    }
    var_19 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3735945725U)) ? (1420157149848850419LL) : (((/* implicit */long long int) -900052452))))), (min((((/* implicit */unsigned long long int) (signed char)0)), (12574474731134756141ULL)))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) 0ULL);
                var_21 = ((/* implicit */short) 6433843867152149483LL);
                arr_8 [i_2] = ((/* implicit */short) max((((/* implicit */long long int) max(((-(((/* implicit */int) (signed char)0)))), (min((-904258711), (((/* implicit */int) (signed char)64))))))), ((-(min((-7312939145958697545LL), (-6433843867152149484LL)))))));
                arr_9 [i_1] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)33542)) : (((/* implicit */int) (short)-10629)))))))), (16406401301252301287ULL)));
            }
        } 
    } 
}
