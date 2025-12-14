/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61746
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) < (((/* implicit */int) var_10))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)146))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_3 [i_1] [i_0]))))) == ((-(((/* implicit */int) (unsigned char)93)))))))) : (var_17)));
                var_19 = ((/* implicit */_Bool) ((short) var_15));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((((((((/* implicit */int) (unsigned char)109)) > (((/* implicit */int) (unsigned char)146)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)148)))), (min((((((/* implicit */_Bool) 1355183875U)) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1)))), (((/* implicit */int) var_10))))));
}
