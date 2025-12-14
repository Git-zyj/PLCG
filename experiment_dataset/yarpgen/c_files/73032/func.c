/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73032
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
    var_16 ^= var_15;
    var_17 = ((/* implicit */signed char) max((max((((/* implicit */int) var_14)), (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_6)) + (4959))))))), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) arr_0 [4] [4])))) % (((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_1])))), (arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)8] [(signed char)8] [(unsigned char)6]))) & (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_3]))) ^ (var_10)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [(unsigned char)6]))) ^ (arr_6 [3ULL] [i_1] [i_3]))) : (((/* implicit */unsigned long long int) arr_2 [(signed char)7] [(signed char)7]))))));
                            var_20 = ((/* implicit */long long int) var_11);
                            var_21 &= ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) + (2147483647))) >> (((var_8) - (17981578286370093611ULL)))))) ? (((/* implicit */int) min((var_0), (var_11)))) : (((/* implicit */int) var_15)))) + (2147483647))) >> (((((((/* implicit */int) var_0)) + (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (var_5))))) - (99)))));
    var_23 = ((/* implicit */unsigned char) var_4);
}
