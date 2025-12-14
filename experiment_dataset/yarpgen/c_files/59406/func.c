/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59406
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
    var_11 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)240))))) & (max((((/* implicit */unsigned int) var_4)), (3224999539U)))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((min((((/* implicit */unsigned int) (signed char)60)), (2263224121U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) 511189912U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31187))) : (3783777387U)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((_Bool) 792826625U)) ? (((/* implicit */int) (signed char)89)) : ((-(((/* implicit */int) arr_5 [i_0 - 1]))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned short)3))))));
                var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_0])), (min(((unsigned short)0), (((/* implicit */unsigned short) arr_3 [i_0]))))))) ? (((unsigned int) (!(((/* implicit */_Bool) (signed char)-1))))) : (2695797907U)));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)24153))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)109)), (var_3))))) : (3783777380U))))));
                var_14 ^= ((/* implicit */unsigned int) (_Bool)0);
            }
        } 
    } 
}
