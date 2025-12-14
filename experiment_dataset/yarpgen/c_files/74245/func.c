/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74245
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
    var_20 = ((/* implicit */long long int) var_11);
    var_21 = ((/* implicit */int) ((long long int) (_Bool)0));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)31580))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-(5563125929151076082ULL)));
    }
    for (short i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31599)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-31600))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)34)) == (((/* implicit */int) (signed char)0)))))) : (((unsigned long long int) arr_5 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_1])))) + (((((/* implicit */_Bool) (short)-31610)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19461))) : (var_9))))))));
        arr_7 [i_1] [(unsigned short)8] |= ((/* implicit */int) (-(((((/* implicit */_Bool) (short)-19461)) ? (((/* implicit */unsigned long long int) 9067543529317042326LL)) : (arr_5 [(_Bool)1])))));
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */unsigned char) (+(((3441570337U) * (2U)))));
        var_22 += ((/* implicit */signed char) ((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 9067543529317042326LL)))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (11272537087781193429ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767)))));
        arr_9 [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))) ? ((+(3415631848U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31599)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
    }
}
