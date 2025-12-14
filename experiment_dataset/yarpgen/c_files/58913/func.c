/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58913
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_0] [i_2]) + (arr_7 [(_Bool)1] [i_0] [i_0] [i_0]))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (arr_7 [i_0] [i_0] [i_0] [i_2])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (short i_4 = 3; i_4 < 24; i_4 += 3) 
        {
            {
                arr_15 [4LL] [4LL] |= ((/* implicit */unsigned int) var_6);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_3] [i_3])) + (2147483647))) >> (((var_9) + (8426377063151005404LL)))))) & (arr_14 [i_3] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))) : (arr_10 [i_4 - 3] [i_4])));
                            var_17 = ((/* implicit */signed char) arr_2 [11ULL]);
                        }
                    } 
                } 
            }
        } 
    } 
}
