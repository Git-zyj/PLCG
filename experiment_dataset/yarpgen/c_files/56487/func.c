/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56487
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) arr_6 [i_0])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_9 [i_0])))))));
                            var_11 = ((/* implicit */int) var_8);
                        }
                    } 
                } 
                var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2839479048U)) >= (((((((/* implicit */_Bool) var_6)) ? (10651386478990176976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129)))))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13358)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7795357594719374637ULL)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) var_1))))) ? (arr_9 [22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43634)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((max((max((7795357594719374663ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (unsigned short)21903))))))) << (((/* implicit */int) var_2)))))));
    var_15 += ((((((/* implicit */int) var_9)) & (((/* implicit */int) var_7)))) >> (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_3)) : (3811785210U)))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_1)) : (10651386478990176948ULL))))) - (1975288156ULL))));
}
