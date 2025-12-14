/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55510
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
    var_10 ^= ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((4788556816304873577LL) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (var_7)))))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_11 = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)14)) % ((-2147483647 - 1)))) >= ((((-(((/* implicit */int) (unsigned short)18845)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)170))))))));
                    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) * (var_0)));
                }
            }
        } 
    } 
    var_13 ^= ((/* implicit */short) ((int) max((((/* implicit */short) ((signed char) var_4))), (var_5))));
}
