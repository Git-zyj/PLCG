/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8430
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
    var_20 = ((/* implicit */signed char) var_10);
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (signed char)122)))))))) : (((unsigned int) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_8))))))))));
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_16)) : (var_4)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)1023)) / (var_1)))) / (var_4)))) : ((+(var_10))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (signed char)-125);
                            arr_12 [(unsigned char)0] [i_0] [i_2] [0ULL] [i_3] = ((/* implicit */long long int) var_19);
                        }
                    } 
                } 
                arr_13 [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(arr_6 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
}
