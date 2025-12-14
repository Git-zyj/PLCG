/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/962
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
    var_11 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1023))) : (var_2)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)112)) != (((/* implicit */int) var_9))))) == (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)250))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 += ((/* implicit */int) (((((-(280775609419606458LL))) <= (((/* implicit */long long int) ((int) var_2))))) || (((((/* implicit */int) ((unsigned short) arr_4 [i_0]))) == (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                var_13 += ((/* implicit */short) (signed char)0);
            }
        } 
    } 
}
