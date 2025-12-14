/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79814
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
    var_10 ^= ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) 2147483636))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)184)) ? (3568900202U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) >= ((-(arr_2 [i_0]))))))) : (max((((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_6 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((unsigned long long int) arr_2 [(signed char)2]))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_5))))) | (((/* implicit */int) ((short) (unsigned char)151)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) (signed char)-125))))) ? ((-(arr_7 [2U] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_2])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (~(((unsigned int) var_2))));
    var_14 = ((/* implicit */unsigned long long int) var_7);
    var_15 = ((/* implicit */short) 1765983519838035129ULL);
}
