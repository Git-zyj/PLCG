/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73289
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((short) 6174159676853185912LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (6174159676853185912LL))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((min((((/* implicit */int) arr_7 [i_2] [i_2 - 4] [i_2] [i_0])), (((((/* implicit */_Bool) -6174159676853185933LL)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_4 + 1])))))), (((/* implicit */int) ((signed char) (-(678415071U)))))));
                                arr_16 [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_0] [i_3 - 1] [i_4 - 3]))))))));
                                arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) 15271015947582073935ULL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18441))) : (29ULL))))))))));
    var_14 = ((short) var_0);
}
