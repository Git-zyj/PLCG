/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86927
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
    var_12 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) var_6);
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (short)-2476))))))));
                                var_15 = ((/* implicit */short) (+(((/* implicit */int) min((arr_2 [i_2 - 2]), (arr_2 [i_2 + 1]))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned int) ((short) (!(((3785108169U) == (417920614U))))));
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_10 [(short)22] [i_0 - 1] [(short)22] [i_1]), (((/* implicit */unsigned short) (unsigned char)198))))) == (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) var_9))))))));
            }
        } 
    } 
}
