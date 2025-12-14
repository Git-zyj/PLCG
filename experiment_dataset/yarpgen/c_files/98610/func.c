/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98610
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)95)), (4294967168ULL)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 &= var_1;
                var_22 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1]))))) ? (((int) arr_1 [i_0])) : ((~(((/* implicit */int) (signed char)61)))))) ^ (((/* implicit */int) min(((signed char)-61), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (unsigned short)14691))))))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) var_17)))), (((/* implicit */int) min((((/* implicit */signed char) var_18)), (arr_7 [4ULL] [i_0] [11ULL])))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1])))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_25 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [(_Bool)1]))))) || (min(((_Bool)0), (var_7))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_16))))) || (min((var_18), (arr_9 [(_Bool)1] [2ULL])))))));
        var_26 = var_8;
    }
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)110), (((/* implicit */signed char) (_Bool)0))))) ? (var_9) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (((((/* implicit */int) (signed char)76)) / (357569927))))))));
}
