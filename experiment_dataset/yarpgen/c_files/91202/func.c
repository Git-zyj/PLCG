/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91202
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
    var_14 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))));
    var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2169300392U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)256))) : (998827397607924873LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58)))))) : (((var_6) ? (((((/* implicit */_Bool) (unsigned short)3072)) ? (998827397607924873LL) : (((/* implicit */long long int) 1974964252)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((-998827397607924874LL) / (((/* implicit */long long int) -331475262)))), (((/* implicit */long long int) min((((/* implicit */int) (short)-13757)), (-1974964253))))))) ? (687144176) : (((((/* implicit */_Bool) min((2125666904U), (((/* implicit */unsigned int) (short)30120))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65279))) >= (arr_1 [(signed char)3]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5810897909243764041LL)) ? (((/* implicit */long long int) 2125666904U)) : (1076702023947659645LL)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((min(((~(((/* implicit */int) (unsigned short)1314)))), (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned short)65279))))))), (((/* implicit */int) var_11))));
    var_17 = ((/* implicit */int) var_12);
}
