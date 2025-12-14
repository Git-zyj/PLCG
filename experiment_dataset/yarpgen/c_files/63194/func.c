/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63194
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
    var_19 += ((unsigned long long int) var_11);
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) var_17)))))));
    var_21 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)29543)))) * (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29543))) : (6652070618173456366ULL))) != (((unsigned long long int) (short)32767)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_0] [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18827)))))) / ((-(14ULL))))))));
                                arr_14 [i_0 + 1] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (+(((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((_Bool) (-(arr_3 [i_0 - 1])))))));
                                var_26 += ((/* implicit */unsigned int) ((((/* implicit */int) max((var_16), (var_16)))) > (((int) (~(var_9))))));
                                var_27 -= ((/* implicit */signed char) var_17);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) max((min((var_5), (((/* implicit */unsigned int) (unsigned short)51084)))), (((/* implicit */unsigned int) ((576460752303423487ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763)))))))))));
                }
            } 
        } 
    } 
}
