/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7095
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
    for (long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */short) ((signed char) 6032962283110968537LL))), ((short)9672)))), (3062227182U)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_11 [i_1] [i_2] = ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)20757)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56231))) != (7469370820156824279LL))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_3)) - (104)))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_13)) << (14)))), (max((7469370820156824289LL), (30LL))))));
                                var_17 = ((/* implicit */_Bool) min((min(((+(7469370820156824279LL))), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) var_8))))))), (((((/* implicit */_Bool) min((-7469370820156824280LL), (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((7469370820156824284LL), (-6918210688688092737LL)))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1232740113U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56231)))) >= (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_8))))))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) var_4);
}
