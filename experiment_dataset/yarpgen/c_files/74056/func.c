/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74056
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
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) * ((+(0ULL)))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) arr_1 [i_0])), ((~(min((511LL), (((/* implicit */long long int) var_3))))))));
                    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((max((var_15), (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) (short)22494)) + (12288)))))), (arr_0 [i_0])));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) min((arr_4 [i_2] [(signed char)19] [i_0]), (((/* implicit */int) (short)-5100))))), (((unsigned long long int) (signed char)(-127 - 1))))) & (((/* implicit */unsigned long long int) ((var_6) - (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_1 [i_0]))))))))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */short) (~((-(((((/* implicit */_Bool) var_8)) ? (5901121651197001921LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))));
}
