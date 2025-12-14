/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82919
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 6; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) arr_0 [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((-1494592282) == (((/* implicit */int) (unsigned char)189)))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2 + 2] [i_3])) ? (arr_5 [i_1] [i_1 + 4] [i_1 - 2] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2 + 1] [i_2]))))) : (var_12)));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (+(((/* implicit */int) ((0ULL) <= (var_7)))))))));
                            var_16 = ((/* implicit */signed char) ((unsigned long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3]))) / (arr_7 [i_0] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) var_4)))));
                        }
                    } 
                } 
                var_17 = (unsigned char)67;
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((var_7) + (((((/* implicit */_Bool) ((var_3) - (var_3)))) ? (max((var_0), (((/* implicit */unsigned long long int) var_1)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161))) : (227117466095456229ULL))))))))));
    var_19 = ((/* implicit */signed char) var_8);
    var_20 = ((/* implicit */unsigned char) var_0);
}
