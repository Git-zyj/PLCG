/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73743
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
    var_15 |= ((/* implicit */unsigned char) var_0);
    var_16 = ((/* implicit */short) ((((((/* implicit */int) (short)10084)) << (((211106232532992ULL) - (211106232532983ULL))))) + (((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) var_11)) - (27499)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */long long int) arr_8 [i_0] [i_2 - 3]);
                                arr_14 [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) max((var_2), ((unsigned short)5)))), (min((((/* implicit */unsigned int) var_11)), (1959225507U))))));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_4)), (var_13)))), (((var_8) ? (17912670263824934506ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((534073809884617105ULL) ^ (((/* implicit */unsigned long long int) -747196664))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-60)))) : (var_9)))));
}
