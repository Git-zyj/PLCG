/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8632
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((-1843923740265138427LL), (((/* implicit */long long int) (unsigned short)44695))))))) : (arr_1 [i_0] [i_0])));
                var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) -2079097496)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((signed char) (unsigned char)69));
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((3144546782615800218ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (((arr_0 [i_2]) / (arr_0 [i_2]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_0 + 1])) || (((/* implicit */_Bool) arr_9 [i_2] [i_0 - 3])))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0 - 3] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_4))));
}
