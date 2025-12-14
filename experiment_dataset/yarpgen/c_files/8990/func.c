/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8990
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_11))));
    var_21 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned long long int) (unsigned short)96))));
    var_22 -= ((/* implicit */unsigned char) (unsigned short)94);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned int) (unsigned short)65427);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_24 = ((/* implicit */long long int) var_14);
                    var_25 &= ((/* implicit */unsigned char) ((unsigned short) var_2));
                    var_26 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((arr_7 [i_1] [(_Bool)1] [i_1]), ((unsigned short)83)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)82)) >> (((4144489032U) - (4144489003U)))))) : (var_10))));
                }
            }
        } 
    } 
}
