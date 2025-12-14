/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65257
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)27384))) ? (((((/* implicit */unsigned int) var_2)) % (4177920U))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33593)) || (((/* implicit */_Bool) var_1))))), (((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) (short)27378)) - (27378))))))))));
                arr_4 [i_1] = ((int) ((((/* implicit */long long int) 15U)) < (((((/* implicit */_Bool) (short)27401)) ? (-5850829987398172453LL) : (((/* implicit */long long int) 3868276637U))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((_Bool) ((unsigned short) max((var_6), (((/* implicit */int) var_5))))));
    var_15 *= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((1360088217U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-27378)))))), (18446744073709551602ULL))), (((/* implicit */unsigned long long int) var_1))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */short) var_4))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 1924705038)) : (4294967293U))) : (((((/* implicit */unsigned int) var_2)) / (31U)))))) || (((((/* implicit */int) (short)-27402)) != (400051575)))));
}
