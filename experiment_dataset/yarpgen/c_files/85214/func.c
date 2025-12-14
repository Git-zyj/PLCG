/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85214
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
    var_16 = ((/* implicit */unsigned short) ((((long long int) ((var_10) - (((/* implicit */unsigned int) -1884079392))))) - (((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    var_17 |= ((/* implicit */long long int) (unsigned char)31);
    var_18 *= ((/* implicit */_Bool) (+(-1969248796339008505LL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_19 &= ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2]))));
                            var_20 *= ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)7650)) + (((/* implicit */int) (unsigned char)1))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))));
                            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) var_11);
                arr_11 [i_0] = ((/* implicit */unsigned int) arr_1 [i_1] [(_Bool)1]);
                var_22 = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)168)) != (((/* implicit */int) (unsigned char)162))));
}
