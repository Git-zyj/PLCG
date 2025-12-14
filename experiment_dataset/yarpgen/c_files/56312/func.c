/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56312
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
    var_12 = (-(((4494897081973445121ULL) * (((/* implicit */unsigned long long int) -1LL)))));
    var_13 = ((/* implicit */unsigned char) min((var_0), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25812))) : (var_7))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) max(((~((~(arr_3 [(_Bool)1] [10] [(unsigned short)6]))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [2] [i_2]))))) > (max((((/* implicit */unsigned long long int) var_7)), (16752181908374557466ULL))))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [16ULL] [i_1] [i_2])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_5 [i_2 + 4])) : (17344474433592829521ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (short)32767)))))))) ? ((~(13951846991736106463ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
}
