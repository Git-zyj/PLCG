/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8009
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
    var_12 = ((((/* implicit */int) var_6)) == (((/* implicit */int) min((((/* implicit */unsigned short) min((var_1), (((/* implicit */short) var_8))))), (max((var_3), (var_3)))))));
    var_13 ^= ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min(((-(var_10))), (((min((((/* implicit */unsigned long long int) var_2)), (var_10))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)32759))))))))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) (short)-32759)), ((unsigned short)65519))), (((/* implicit */unsigned short) (short)-32759))))) : (((/* implicit */int) ((short) ((_Bool) (unsigned char)112))))));
                var_16 ^= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */short) var_0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_10))))), (((/* implicit */unsigned long long int) ((unsigned char) var_0)))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) var_5))), ((-(((/* implicit */int) var_8))))))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (-1570133503) : (((/* implicit */int) (short)6))))) || (var_5)))))));
}
