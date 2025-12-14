/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64170
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) (signed char)-16);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_11)))))));
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((~(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_0 [i_1]))));
                var_21 = ((/* implicit */unsigned long long int) 2147483647);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_14)) + (((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_23 ^= ((((/* implicit */unsigned long long int) var_5)) == (max((arr_9 [i_3 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)0))))))));
                    arr_16 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_2] [i_2] [i_3] [i_2]))) ? (((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) -2147483647))))) : (((/* implicit */int) (unsigned char)114)))))));
                    var_24 *= ((((/* implicit */_Bool) max((arr_15 [i_3 + 1] [i_4] [i_4] [i_3]), (arr_15 [i_3 + 1] [i_4] [i_4] [(unsigned short)14])))) ? (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) arr_15 [i_3 + 1] [i_4] [i_4] [i_3 + 1]))))) : (((unsigned long long int) var_18)));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (((((((/* implicit */_Bool) (short)8407)) ? (var_17) : (var_17))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    } 
}
