/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58594
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
    var_19 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((var_5) * (((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((var_2) / (((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)233)) / (var_9)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_2] [i_3] = ((int) ((long long int) ((unsigned long long int) (_Bool)1)));
                            var_21 = ((/* implicit */signed char) ((unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)143)) / (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((((/* implicit */int) ((((/* implicit */int) ((_Bool) var_12))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)3)))))))) >> (((((unsigned int) ((short) var_3))) - (4294964476U))));
    var_23 = ((((long long int) ((_Bool) var_12))) & (((/* implicit */long long int) ((unsigned int) ((var_9) > (((/* implicit */int) var_0)))))));
}
