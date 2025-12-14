/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69636
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
    var_16 -= ((/* implicit */unsigned int) (-(4673051392199727233ULL)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [(signed char)11] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_1 + 1] [i_1 + 1]))))) ? (17544079267189364738ULL) : ((+(3871854972853695497ULL)))));
                    var_17 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14574889100855856124ULL)) ? (17544079267189364738ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)3] [i_1] [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))))) : (var_15))), (max((3871854972853695491ULL), (((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)39)), (var_12)))))));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) var_11);
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) max((902664806520186897ULL), (3871854972853695491ULL))));
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 277822686U)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (short)-25894))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */short) ((unsigned int) max((((int) 14574889100855856119ULL)), (((/* implicit */int) var_9)))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (var_10))))) - (((4017144594U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (var_11)));
}
