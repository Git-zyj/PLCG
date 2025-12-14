/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79046
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 -= ((((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_1 [i_2])))) ? (((unsigned long long int) arr_6 [i_0 - 1] [i_0 + 2] [11])) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)11)), ((~(((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)3742)) : (((/* implicit */int) (signed char)52))))) && ((_Bool)1)));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (unsigned char)108)));
}
