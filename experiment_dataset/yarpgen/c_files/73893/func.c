/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73893
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
    var_16 = ((/* implicit */long long int) ((int) 1921951003U));
    var_17 = ((short) max((((unsigned long long int) (unsigned char)238)), (((/* implicit */unsigned long long int) max((-817868268), (((/* implicit */int) (unsigned char)247)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] &= ((/* implicit */signed char) min((min((((unsigned int) (unsigned char)103)), (((/* implicit */unsigned int) max(((unsigned char)238), ((unsigned char)255)))))), (min((((/* implicit */unsigned int) min(((unsigned char)18), ((unsigned char)239)))), (2963194028U)))));
                    var_18 = ((/* implicit */int) ((long long int) (unsigned char)239));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_2] [i_1] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) max(((unsigned char)17), ((unsigned char)17)))), (max((4294967295U), (((/* implicit */unsigned int) (short)-18462)))))), (((/* implicit */unsigned int) max(((unsigned char)249), ((unsigned char)113))))));
                                var_19 = ((/* implicit */signed char) 4027252986U);
                                arr_16 [i_1] = min((((/* implicit */unsigned int) (unsigned char)249)), (4027252986U));
                                var_20 &= ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) 4294967295U)), (((unsigned long long int) (unsigned char)97)))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 4039749453738172328LL))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((unsigned char) max((830816878U), (4294967268U))))), (((unsigned short) 18446744073709551613ULL))));
                }
            } 
        } 
    } 
}
