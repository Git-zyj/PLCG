/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57578
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) 4474474260070842906LL)))) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])))))) == (((min((3272600566U), (((/* implicit */unsigned int) (signed char)-62)))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)77)), (var_7)))))))));
                    arr_8 [i_0] [0LL] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((4474474260070842911LL) < (min((-1094892266204226718LL), (((/* implicit */long long int) var_2))))))), (8191LL)));
                    var_12 += ((/* implicit */long long int) (-2147483647 - 1));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) var_9);
    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) min((var_2), (var_7)))) << (((((((/* implicit */_Bool) var_2)) ? (-4474474260070842929LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (4474474260070842935LL))))) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((var_9), (var_4)))) : ((~(((/* implicit */int) var_0))))))));
    var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) ? (((unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((4474474260070842900LL) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_6)))))));
}
