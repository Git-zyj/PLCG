/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73866
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1944944211U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16906))) : (((((/* implicit */_Bool) (short)-16906)) ? (((unsigned int) (short)16901)) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) max((13ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16887))) % (17333633975040121171ULL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((479950095U), (max((3889315172U), (3815017201U))))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) max((3815017195U), (3815017190U))))))) ? (13ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1319484432U)) ? (((/* implicit */int) (_Bool)0)) : (647748279))))));
                                arr_14 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((15673448635133359601ULL), (3135341751961109274ULL))) + (((/* implicit */unsigned long long int) -5460270017879633962LL))))) ? (((((/* implicit */_Bool) 3889315150U)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (-820281429)))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) var_6))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32763))) / (3996302358U)))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) -2147483637)) && (((/* implicit */_Bool) -6978583685593449203LL)))))) : (min((min((5120144485592425115ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3815017177U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)0)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((17333633975040121171ULL), (min((((/* implicit */unsigned long long int) var_3)), (var_11)))))) || (((/* implicit */_Bool) 3492844202U)))))));
    var_22 = ((/* implicit */unsigned short) 18446744073709551610ULL);
    var_23 = ((/* implicit */signed char) 6908640800703717770ULL);
}
