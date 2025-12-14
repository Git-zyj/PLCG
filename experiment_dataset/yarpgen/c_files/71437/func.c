/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71437
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 271380693U)) && (((/* implicit */_Bool) var_3))));
    var_12 = ((/* implicit */unsigned int) ((unsigned long long int) var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) var_3))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned short)2] [(unsigned short)2] [i_2] [i_3] [(short)8] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_8)))));
                                var_14 *= ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-23)), ((short)32767)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)15))))) : (max((((/* implicit */unsigned long long int) (short)23511)), (18446744073709551608ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */long long int) (+(15514552077896112213ULL)));
            }
        } 
    } 
}
