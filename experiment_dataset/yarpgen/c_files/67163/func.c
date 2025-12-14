/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67163
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) var_2))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (min((var_3), (((/* implicit */unsigned int) var_4))))))));
                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_4 [i_0])) * (((((/* implicit */long long int) 4228241329U)) / (-2799955406267394311LL)))));
                var_17 = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_1] [i_0]) ? (((long long int) arr_3 [i_1] [i_1 - 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_6))))))) != (min((arr_8 [i_4] [i_4]), (((/* implicit */long long int) arr_1 [i_2]))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (short)13319))) ? (((/* implicit */int) arr_6 [i_5 + 2])) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5)))))))))))));
                            var_20 ^= ((/* implicit */unsigned short) var_7);
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_3 [i_3] [i_3]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (arr_4 [i_3])))) ? (((arr_11 [i_2] [i_3]) ? (((/* implicit */int) var_10)) : (arr_4 [i_2]))) : (((/* implicit */int) ((unsigned short) var_1)))))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [16U] [i_3] [i_3] [2] [(_Bool)1] [i_3]))) - (arr_0 [i_3]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_3] [i_2]))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((_Bool) (short)13306))) : (((/* implicit */int) ((unsigned char) arr_10 [i_2]))))))));
            }
        } 
    } 
}
