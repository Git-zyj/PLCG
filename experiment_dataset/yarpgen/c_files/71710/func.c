/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71710
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4003123302796735850LL)))) ? (4856471642572816390ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) ^ (-4003123302796735851LL))))))) ? (13590272431136735225ULL) : (((/* implicit */unsigned long long int) -244801822))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) 0U);
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0))), (max((((/* implicit */unsigned long long int) arr_2 [i_1 + 1])), (arr_11 [i_0] [i_1] [i_1 + 1] [i_2 - 1] [i_2]))))))));
                            var_14 += ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(3609654066594920525LL)))) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])))))) : (((unsigned long long int) 4003123302796735850LL))));
                            arr_12 [i_0] [i_2] [i_2] = max((((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_1 + 1])) ? (arr_6 [i_2 + 1] [i_1 + 1]) : (arr_6 [i_2 - 2] [i_1 + 1]))), ((-(arr_6 [i_2 + 3] [i_1 + 1]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)14248))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) ((var_10) <= (var_2))))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_9)) : (13590272431136735225ULL))))) : (((((/* implicit */_Bool) ((4076279090U) << (((((/* implicit */int) (unsigned char)110)) - (105)))))) ? (((((/* implicit */_Bool) var_0)) ? (15681547922586131993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) var_8)))));
}
