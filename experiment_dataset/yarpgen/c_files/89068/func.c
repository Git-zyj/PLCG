/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89068
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_7))));
                    var_16 *= ((/* implicit */unsigned int) min((arr_0 [i_1 + 1]), (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11942869901056741635ULL)))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((long long int) ((unsigned char) ((long long int) 4286164683750944499LL)))))));
                    arr_8 [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) 3635359455213389939ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) : (14811384618496161684ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) var_0)) : (-7032210030422460181LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1587837997)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (1502476822U)))) : (((((/* implicit */_Bool) -5366949761431597565LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14811384618496161696ULL)) && (((/* implicit */_Bool) arr_4 [i_1] [i_2])))))) : (3635359455213389948ULL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned long long int) var_2)), (3635359455213389953ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_19 = max((((/* implicit */int) var_13)), (-1367403559));
    var_20 += ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) 14811384618496161664ULL)) && ((_Bool)1)))), (var_2))), (((/* implicit */long long int) (_Bool)1))));
}
