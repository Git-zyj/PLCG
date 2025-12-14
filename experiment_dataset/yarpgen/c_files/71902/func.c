/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71902
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) arr_3 [i_0])) | (var_11)))))) & (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40070)) ? (((/* implicit */int) (unsigned char)225)) : (var_8)))) * (max((var_5), (((/* implicit */unsigned long long int) 524545733U))))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) (unsigned short)65521))))) || (arr_1 [i_1])));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (arr_2 [i_1] [i_1] [i_1]) : (var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [6U])) ? (var_11) : (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), (arr_0 [3U] [3U]))))) : (var_11)))) : (min((((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), ((+(var_0)))))));
                var_15 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0] [(unsigned short)4] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (min((2568478283681758490ULL), (2568478283681758498ULL))) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (signed char)-62))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */unsigned int) ((int) var_2));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_11);
                    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((3238148949599168651LL), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)7] [(signed char)7]))) > (var_4))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_11 [10LL] [i_3]), (((/* implicit */unsigned char) var_3))))) & (((/* implicit */int) max((arr_1 [i_3]), (var_10)))))))));
                }
            } 
        } 
    } 
}
