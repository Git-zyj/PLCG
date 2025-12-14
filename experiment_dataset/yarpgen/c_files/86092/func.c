/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86092
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > (var_8))))))) : ((+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_8)))))));
                arr_4 [i_0] [i_1] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) == ((-(((((var_7) + (9223372036854775807LL))) << (((/* implicit */int) var_2))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) >= (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_14 -= ((/* implicit */signed char) (~(((long long int) min((((/* implicit */signed char) (_Bool)1)), (arr_5 [i_2]))))));
    }
}
