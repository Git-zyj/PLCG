/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77632
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))) ^ (((unsigned long long int) -363743176))));
                var_11 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [20U])))) >= (((long long int) arr_5 [i_0] [i_0] [i_1]))));
                arr_6 [20U] |= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_1 [i_0 + 2])) == (((((/* implicit */int) (unsigned char)171)) % (((/* implicit */int) (unsigned short)53894)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) 534743830U))), (((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned long long int) var_1))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43260)))))))));
    var_13 |= ((/* implicit */unsigned int) var_6);
}
