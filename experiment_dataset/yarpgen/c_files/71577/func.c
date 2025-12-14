/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71577
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) var_8))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) max((max((((((/* implicit */_Bool) (unsigned short)3274)) ? (-5258901394745509750LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */long long int) (((~(((/* implicit */int) var_2)))) >= (((arr_3 [i_0] [i_0] [i_1]) << (((((((-2147483647) - (-2147483636))) + (16))) - (4))))))))));
                var_19 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 3230890721U)) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) ^ (var_11)))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 397336034U)) ? (arr_3 [i_1] [i_1] [6ULL]) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 258273U)))))) : (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))), (((/* implicit */unsigned int) var_13))))));
            }
        } 
    } 
}
