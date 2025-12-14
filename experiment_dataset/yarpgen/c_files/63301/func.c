/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63301
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
    var_11 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? ((-2147483647 - 1)) : (var_7)))) / (((((/* implicit */unsigned long long int) 17179869180LL)) - (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) var_8))));
    var_12 -= ((/* implicit */_Bool) 1247460406);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned char) ((unsigned short) var_2));
        var_14 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) : (8372127620718609491ULL))) & (18333695086402971058ULL)));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */long long int) var_6);
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((max((1323476386304786120ULL), (((/* implicit */unsigned long long int) -4404788384396469272LL)))) - (((/* implicit */unsigned long long int) ((5894328972688494747LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 3347044550U))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (short)-11132))))) << (((((/* implicit */int) var_5)) + (29809)))));
            arr_11 [0ULL] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((-6079444420902270497LL), (-6982293662260085147LL)))) ? ((((_Bool)1) ? (-1239339219) : (((/* implicit */int) (short)-277)))) : (((/* implicit */int) min(((signed char)4), (((/* implicit */signed char) (_Bool)1))))))) <= (((/* implicit */int) var_8))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)60)), (-6079444420902270493LL))))));
        arr_14 [i_3] = ((/* implicit */signed char) ((((((10506238845010303130ULL) == (((/* implicit */unsigned long long int) 6651352423098422414LL)))) ? (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_1)) - (2858))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7))))))) << (((/* implicit */int) ((((/* implicit */_Bool) -7555427865318245594LL)) || (((/* implicit */_Bool) (unsigned short)37912)))))));
    }
}
