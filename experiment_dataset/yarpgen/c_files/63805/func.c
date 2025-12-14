/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63805
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) ((max((879885496502144949ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_1] [i_2] [i_2])))) ^ (((/* implicit */unsigned long long int) ((unsigned int) 17566858577207406667ULL)))));
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (((-2147483647 - 1)) % (((/* implicit */int) arr_2 [i_0 + 1]))))) <= (arr_0 [i_0 - 1])));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_1), (111357106)))), (max((3068991867U), (var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (11199121897824088513ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9)))));
    var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_13 = ((/* implicit */unsigned long long int) var_3);
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((var_0) | (((/* implicit */unsigned int) var_4)))), (var_0)))), (max((min((var_9), (((/* implicit */unsigned long long int) (unsigned char)80)))), (min((((/* implicit */unsigned long long int) 1636610466)), (18446744073709551613ULL)))))));
}
