/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67145
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((signed char) 5916369596947924855LL))) ? (9770320802640320961ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))), ((-((~(10453068603584676198ULL)))))));
                    arr_7 [i_1] [i_1] [i_2] = 3839836633U;
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned int) max((((/* implicit */short) ((unsigned char) ((unsigned short) (unsigned short)31)))), (max((((/* implicit */short) var_4)), (var_8)))));
    var_11 &= ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65489)))), ((-(((/* implicit */int) (signed char)116)))))), ((-(((((((/* implicit */int) (short)-32766)) + (2147483647))) >> (((-4707552081226960829LL) + (4707552081226960852LL)))))))));
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)57344)))), ((+(((/* implicit */int) var_1))))))) ? (((((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) | (((/* implicit */int) (signed char)109)))) : (((int) (unsigned short)62)))))));
    var_13 = ((/* implicit */unsigned long long int) ((long long int) (-(((((/* implicit */_Bool) (short)10211)) ? (-6902453946014819097LL) : (((/* implicit */long long int) 553085071U)))))));
}
