/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75217
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((var_1) >> (((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)55681)) << (((var_6) - (4005356253U)))))), (((var_15) | (((/* implicit */unsigned long long int) var_14)))))) - (1824554978ULL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)55705)))) + (((/* implicit */int) max(((unsigned short)55681), (((/* implicit */unsigned short) arr_4 [i_1]))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (short)32753)))))), (15139159507618754160ULL)));
                                var_19 += ((/* implicit */unsigned int) ((((long long int) (unsigned short)55687)) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) min((arr_7 [i_0]), (((/* implicit */int) (unsigned short)55681))))) | ((~(var_9))))))));
                            }
                        } 
                    } 
                } 
                var_20 = var_15;
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((arr_6 [8LL] [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_9);
}
