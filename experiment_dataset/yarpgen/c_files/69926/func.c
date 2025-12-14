/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69926
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_4 + 2])), ((~(arr_3 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned short)26741)))))));
                                arr_13 [i_0] [i_1] [i_0] [i_2] [16ULL] [i_3] [i_0] = ((/* implicit */unsigned int) arr_2 [i_2] [i_2]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)12455)), (-3724275442337691616LL)))) ? (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_2 + 2]) : (((/* implicit */unsigned long long int) var_1)))) : (max((arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4]), (((/* implicit */unsigned long long int) arr_10 [i_2])))))), (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_2])), (((((/* implicit */_Bool) var_2)) ? (arr_12 [i_0] [i_0] [i_2 + 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_4))))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_0] [i_0] [i_2] [i_2 + 1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17023)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)163)))), (((/* implicit */int) var_0))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233)))))) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) min((var_5), (var_5))))))) : (var_1)));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((var_8) ? (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_11))) : (((18446744073709551608ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
}
