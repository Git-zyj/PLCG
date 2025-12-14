/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66321
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
    var_14 = var_10;
    var_15 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [4LL] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10ULL)) && ((_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [(_Bool)0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16769))) ^ (4294967295U)));
                                arr_15 [22ULL] [i_1] [i_1] [(_Bool)1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-119)) ? (4294967290U) : (0U))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) 18U)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
}
