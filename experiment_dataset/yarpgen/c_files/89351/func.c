/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89351
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 94651531U)) : (7298808038566763344ULL)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) max((var_12), (min((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_3))))))));
                arr_5 [(short)6] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) 7298808038566763344ULL)) ? (3597534555U) : (9U))), (((((/* implicit */_Bool) (unsigned short)16382)) ? (max((((/* implicit */unsigned int) (unsigned short)16382)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)16374), ((unsigned short)49175)))))))));
            }
        } 
    } 
}
