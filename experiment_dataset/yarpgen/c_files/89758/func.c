/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89758
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
    var_19 = ((/* implicit */int) ((min((min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (2947106737369554939ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_15))))) == (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)62228)) : (var_14))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (_Bool)0))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)8] [i_1]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62228))) : (arr_3 [7ULL] [(_Bool)1] [i_0])))))), (((((((/* implicit */unsigned long long int) var_3)) | (var_8))) & (((/* implicit */unsigned long long int) var_3))))));
                }
            } 
        } 
    } 
    var_21 |= min((((/* implicit */int) (unsigned short)62245)), (min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62237))) > (var_8)))), (var_3))));
    var_22 = ((/* implicit */_Bool) min((((unsigned short) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)3308)))), (((/* implicit */unsigned short) (((-(4196199965163920317ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (225189105U) : (((/* implicit */unsigned int) 2147483647))))))))));
}
