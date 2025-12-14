/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80185
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
    var_20 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
    var_21 = ((((/* implicit */_Bool) ((unsigned short) 16858088999122486721ULL))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)));
    var_22 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)20909))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3402))) / (16858088999122486718ULL)))) ? ((+(((/* implicit */int) (unsigned char)216)))) : (((/* implicit */int) (!(arr_3 [10]))))));
                var_24 = 9115893948200208396ULL;
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    var_26 ^= ((/* implicit */_Bool) ((unsigned short) ((17895906650927471447ULL) & (576460752169205760ULL))));
}
