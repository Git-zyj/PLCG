/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70151
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
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(unsigned short)15] [(unsigned short)15] [i_1] = ((/* implicit */unsigned int) max((((((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */int) var_9);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 3 */
    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_17 ^= ((/* implicit */int) max((((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (var_4)))));
        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) << (((max((((/* implicit */unsigned int) var_15)), (var_13))) - (4289276870U)))));
        arr_12 [1] = ((/* implicit */signed char) var_15);
    }
    for (int i_4 = 2; i_4 < 10; i_4 += 1) 
    {
        arr_16 [(_Bool)1] [(signed char)7] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_11)) || (var_2))), (((var_2) && (((/* implicit */_Bool) var_15))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_15))));
    }
    for (int i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (var_3))) >> (((((((/* implicit */int) (unsigned short)21539)) % (((/* implicit */int) (unsigned short)6908)))) - (813)))));
        var_21 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_5))))) << (((var_3) - (4051942474U))))) << (((((/* implicit */int) var_11)) % (((/* implicit */int) var_11))))));
    }
}
