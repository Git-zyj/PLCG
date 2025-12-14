/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66009
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned short) ((3366453532U) % (((/* implicit */unsigned int) 872455535))));
                    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), ((((-(var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(unsigned short)12] [i_3 - 1]))))) || (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [(signed char)14] [i_3] [i_3]))))))));
        var_16 ^= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (unsigned char)28)))));
        arr_8 [6U] = ((/* implicit */signed char) (unsigned short)5256);
    }
    var_17 = ((/* implicit */unsigned char) (signed char)-108);
    var_18 = ((/* implicit */short) var_7);
    var_19 = ((/* implicit */signed char) var_0);
}
