/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98629
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) arr_3 [3LL] [6LL] [i_1]))))) : (max((5981563737380108433LL), (((/* implicit */long long int) -2147483630))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) ^ (5981563737380108439LL))) : (((/* implicit */long long int) max((max((((/* implicit */unsigned int) (unsigned short)55678)), (813802823U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (var_7)))))))));
                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) 2147483647)) + (((var_1) + (((/* implicit */long long int) -2147483647)))))) + (((/* implicit */long long int) ((unsigned int) arr_0 [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((min(((-(var_12))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))) && (((/* implicit */_Bool) 9223372036854775807LL)))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (var_6)))) && (((/* implicit */_Bool) (+(arr_3 [(_Bool)1] [i_2] [i_3]))))))) * (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) >= (((/* implicit */int) min(((unsigned short)21925), (((/* implicit */unsigned short) (_Bool)1))))))))));
            }
        } 
    } 
}
