/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8368
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) var_7);
                    arr_7 [(short)4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_2 - 1] [i_1]) - (((/* implicit */unsigned long long int) ((long long int) var_2)))))) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((int) (unsigned short)30304))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 0ULL))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2 + 3] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_1]) : (((/* implicit */int) var_9)))))))), (max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (var_7))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_13 = arr_10 [i_4];
                arr_15 [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (arr_11 [i_4] [i_4] [i_4]) : ((-(arr_11 [i_3] [i_4] [i_4])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_2))))))))));
}
