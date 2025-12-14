/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77152
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)216))))) && (((((/* implicit */long long int) arr_2 [(signed char)8])) < (var_2)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)144)));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((arr_14 [i_3 - 1] [10] [i_3] [i_4 + 2] [8LL] [i_1 + 1]), (((/* implicit */unsigned int) var_0)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
