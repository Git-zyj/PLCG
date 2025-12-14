/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60412
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 = (+(arr_3 [i_3] [i_2]));
                                var_18 += max(((-((-(((/* implicit */int) (unsigned short)15)))))), ((+((-(((/* implicit */int) var_15)))))));
                            }
                        } 
                    } 
                } 
                arr_11 [i_1] [i_1] [i_0] = (~(var_10));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_1);
}
