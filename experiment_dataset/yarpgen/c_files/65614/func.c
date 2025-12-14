/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65614
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) 50344673243496595ULL);
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_7);
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)40793))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40793))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-20)), (var_5))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) / (((((/* implicit */_Bool) (unsigned short)40793)) ? (16032803578062993090ULL) : (9379273060551414516ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((((/* implicit */int) (unsigned short)40793)) * (((/* implicit */int) (_Bool)1))))))))));
    var_14 ^= ((/* implicit */unsigned long long int) ((int) (signed char)-34));
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 16618987527823463142ULL))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)16784)))))) || (var_2));
}
