/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98918
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) var_4);
                arr_6 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11172866366724288244ULL)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (short)1860))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -896992574)) ? (var_4) : (arr_5 [i_0 - 3] [i_1 + 1])))) : ((~(16110041018742935198ULL)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (arr_2 [i_0 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
                arr_7 [i_0] [i_1 + 1] [i_0] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((short) (unsigned short)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1704)))))) : (arr_2 [i_0 - 1]))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0 - 4])), (var_6)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) ((short) (signed char)-110)))))) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) == (817494925336560154ULL)))), ((unsigned char)239)))))));
}
