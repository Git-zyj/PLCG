/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74259
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
    var_14 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_13 [i_3] [16] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (6697049741084992622ULL)));
                            var_15 = ((/* implicit */long long int) 6697049741084992622ULL);
                            var_16 = ((/* implicit */unsigned char) ((((1291624949U) >> (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242)))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)14851)) && (((/* implicit */_Bool) 16634056696969096163ULL)))))) <= (1291624949U)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)31961)) ^ (((/* implicit */int) (short)-14837))))) & (4294967295U)));
                var_19 = ((/* implicit */unsigned int) ((((10733450476234274950ULL) >> (((/* implicit */int) (unsigned char)0)))) >> (((((/* implicit */int) (short)-27914)) + (27919)))));
                var_20 = ((/* implicit */short) 4294967295U);
            }
        } 
    } 
}
