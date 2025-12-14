/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99116
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
    var_12 = ((/* implicit */short) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) 2147483647)), (var_3)))) ? (((/* implicit */int) min((var_9), (var_9)))) : (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (((~(9223372036854775807LL))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32767))))) ? (17043030209116702054ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (((/* implicit */unsigned long long int) ((277321725) % (((/* implicit */int) (_Bool)1)))))));
            arr_6 [i_0] [i_1] [i_0] = ((unsigned long long int) (_Bool)1);
            arr_7 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (+((-2147483647 - 1))))) : (max((((/* implicit */long long int) (-2147483647 - 1))), (5335797617745109725LL)))));
            var_14 = ((/* implicit */unsigned long long int) var_6);
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 17465086963273456195ULL)))))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (max((8915235877004771080ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) var_9))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15127))) & (2ULL)))));
        }
    }
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) min((var_6), ((unsigned char)4)))) << (((-7829495780164765311LL) + (7829495780164765332LL)))))), (((long long int) 1030975759))));
}
