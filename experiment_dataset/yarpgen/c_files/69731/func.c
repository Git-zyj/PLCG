/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69731
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
    var_17 = var_2;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 += ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */unsigned int) min(((unsigned short)9796), (((/* implicit */unsigned short) (short)21768))))), (min((305907003U), (((/* implicit */unsigned int) (signed char)120)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (short)15700))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) var_11);
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((signed char) arr_2 [(signed char)19] [i_1] [i_1]))) ? (max((((/* implicit */long long int) arr_12 [i_4] [i_3] [i_2] [7ULL] [i_0])), (arr_3 [i_4]))) : (((((/* implicit */_Bool) (short)-15700)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((short) (signed char)-108);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (signed char)120))));
}
