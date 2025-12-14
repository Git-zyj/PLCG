/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80506
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
    var_11 = ((/* implicit */_Bool) var_4);
    var_12 &= ((/* implicit */short) max(((((~(((/* implicit */int) var_9)))) ^ (((/* implicit */int) (unsigned short)16410)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((((/* implicit */_Bool) (unsigned short)16410)) ? (((/* implicit */int) (unsigned short)49109)) : (((/* implicit */int) (unsigned char)55))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */long long int) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((8740882289981273927LL) >= (((/* implicit */long long int) arr_0 [i_0])))))))) - (4101270800U)));
                                var_15 = (~(arr_14 [i_1 + 3] [i_1 + 3] [i_1 + 3]));
                            }
                        } 
                    } 
                    arr_16 [i_0] [16] [i_1] = ((/* implicit */short) ((1707278217) / (-1707278212)));
                }
            } 
        } 
    } 
}
