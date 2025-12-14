/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90227
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1486224517)) ? (2147483647) : ((-2147483647 - 1)))))) << (((/* implicit */int) (_Bool)0)));
                var_13 = ((/* implicit */long long int) (+(((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)54407))))) - (2147483647)))));
                var_14 = ((long long int) (-(-2147483647)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (_Bool)0);
    var_16 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19221))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2041631140U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)0))))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21241))) : (3723617352U)))))) + ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25345))) : (7953159983928493317LL))) + (1173466839480910146LL))));
}
