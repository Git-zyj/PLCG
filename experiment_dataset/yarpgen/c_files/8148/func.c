/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8148
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [5LL])) ? (max((var_12), (((/* implicit */unsigned int) (unsigned char)137)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_7))))))))))));
                    var_17 ^= ((/* implicit */signed char) var_0);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 4; i_3 < 12; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)143))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)99))))));
            arr_16 [i_3] [i_4] = ((/* implicit */short) ((long long int) ((3543730821U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
        }
        arr_17 [i_3] = ((/* implicit */unsigned short) max(((unsigned char)228), (((/* implicit */unsigned char) (signed char)-10))));
        arr_18 [i_3] = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (982251079133393283ULL)))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 3189565682089006188ULL)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (unsigned char)132))))))));
    }
    var_20 = ((/* implicit */long long int) 15257178391620545428ULL);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (2481711894601277929ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (8670090112370085511LL))))))) ? (max((-9216397529384403571LL), (min((((/* implicit */long long int) (unsigned char)141)), (2896430278903790127LL))))) : (var_3)));
}
