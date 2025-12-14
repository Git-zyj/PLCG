/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8554
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
    var_18 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [3U] [i_0 - 3] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13))))))));
                    var_19 = ((/* implicit */_Bool) ((unsigned char) (_Bool)0));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_2)) ? (58980020U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [0LL] [i_1] [i_2])), (arr_1 [i_2])))))))) ? (max((min((var_11), (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) min((arr_0 [i_0]), ((signed char)64)))))) : (max((((((/* implicit */int) arr_0 [i_2])) << (((arr_2 [i_1]) - (1912806071U))))), (((/* implicit */int) var_13)))))))));
                    arr_9 [7U] [7U] [i_1] [7U] = ((/* implicit */long long int) ((unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)3] [(unsigned short)3] [4LL] [(unsigned short)0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_1] [i_0 - 1])) ? (916615584958304408ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0 - 4] [i_1]))))) ? (min((arr_5 [i_0 + 2] [i_1]), (((/* implicit */int) arr_6 [2] [2] [i_2] [i_0 + 2])))) : (((((((/* implicit */int) arr_6 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_0 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0 - 4])) + (81)))))));
                }
            } 
        } 
    } 
}
