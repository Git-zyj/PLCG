/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74914
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9U)) ? (min((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-75)), (2109832777U)))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) (~(min((arr_1 [i_1]), (((/* implicit */unsigned int) ((2109832762U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1 + 1] [i_3])) + ((+(var_1)))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */_Bool) min((var_12), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64556)) ? (max((((/* implicit */long long int) -1542258768)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)32033)) == (((/* implicit */int) var_5))))))))) != (var_4)))));
                var_13 += ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1 + 1]))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1 + 1]))) : (((((/* implicit */_Bool) -8577573243823297480LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6))));
            }
        } 
    } 
}
