/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63594
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)91)) + (1483054219)));
                arr_5 [i_0] [i_1 - 3] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_6)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) -1483054209))))))) : (var_17)));
                var_20 = ((/* implicit */signed char) (~((((-(431446142))) & (((/* implicit */int) ((((/* implicit */int) (short)-16797)) != (((/* implicit */int) (signed char)36)))))))));
                arr_6 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_15))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */signed char) min((((var_17) == (((/* implicit */int) (signed char)-36)))), (((var_7) <= (((/* implicit */unsigned long long int) 0U))))))), (var_0)));
}
