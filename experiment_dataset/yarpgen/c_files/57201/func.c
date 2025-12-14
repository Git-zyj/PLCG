/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57201
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [12ULL] = var_1;
                var_16 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */int) max(((unsigned short)65527), (var_2)))), ((~(((/* implicit */int) arr_3 [i_1 - 1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_7 [7ULL] [(unsigned short)0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)512)) : (228240118)))) + (((unsigned long long int) (-(((/* implicit */int) (unsigned short)0)))))));
        arr_8 [i_2] = ((/* implicit */long long int) ((((arr_6 [i_2]) % ((-(arr_5 [i_2]))))) >= (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-38))))) ? (arr_6 [i_2]) : (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        var_17 = ((/* implicit */signed char) ((min((((/* implicit */long long int) (unsigned short)1)), (((((/* implicit */_Bool) 2128488265421854053LL)) ? (arr_5 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10411))))))) & (arr_6 [i_2])));
    }
}
