/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84184
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
    var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)16)) && (((/* implicit */_Bool) (unsigned short)10776)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+((((_Bool)0) ? (-2147483642) : (((/* implicit */int) (_Bool)1))))));
        var_12 = ((/* implicit */unsigned short) min((var_12), ((unsigned short)39660)));
        arr_3 [(_Bool)0] &= ((/* implicit */short) (+(((/* implicit */int) (short)-16129))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */int) var_6);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */int) (unsigned short)46621)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32760)))))));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_9 [i_2]) > (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (_Bool)0)))) : (arr_6 [i_2]))));
        var_14 += ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) 911605975))), ((+(((/* implicit */int) var_5))))))) % ((((_Bool)0) ? (4841865937414390061ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65)))))));
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)0)) : (851190075)))))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) (-(-1362560021)))) ? (((/* implicit */int) ((signed char) var_2))) : (((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)0))))))));
}
