/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72753
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((int) (~(min((((/* implicit */int) (_Bool)1)), (arr_1 [i_0])))));
                var_13 = ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10675055699781727426ULL)) ? (arr_1 [i_0]) : (((/* implicit */int) var_4))))), (min((((/* implicit */unsigned long long int) -813823531)), (14882070029454864733ULL)))))));
                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (1805372091U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)0] [8]))))))) < (min((((/* implicit */long long int) max(((_Bool)1), (arr_0 [i_0] [6])))), (var_12)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) min((((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (unsigned char)10)) : (arr_1 [i_0]))), (((arr_1 [i_0]) ^ (-813823531))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_3);
    var_16 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) - (var_3));
}
