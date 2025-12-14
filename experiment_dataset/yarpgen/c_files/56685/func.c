/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56685
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
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((min((4416710425282131719LL), (((/* implicit */long long int) (short)-3401)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4416710425282131734LL)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_12 [i_4] [i_4] [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)3400)) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (((_Bool)1) && ((_Bool)0)))))) >> ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (short)-32758))) + (((((((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (short)3407)))) + (2147483647))) << (((((((((/* implicit */int) (signed char)-4)) ^ (((/* implicit */int) (short)32748)))) + (32767))) - (15)))))));
                            var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) min((-4416710425282131720LL), (((/* implicit */long long int) (_Bool)1)))))) ? (((/* implicit */int) ((_Bool) (signed char)-125))) : (((((((/* implicit */_Bool) (short)-3396)) ? (((/* implicit */int) (short)25074)) : (((/* implicit */int) (unsigned short)3267)))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62268)) || (((/* implicit */_Bool) 4416710425282131720LL)))))))));
                        }
                        arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)2047)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5973002596789649898LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (-4416710425282131729LL)))) ? (((((/* implicit */_Bool) (short)4750)) ? (4416710425282131712LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)11)))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)2914)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)28921)))))))));
                        arr_14 [i_0 - 1] [i_1] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)72)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-28922)) ? (3993809265976569410LL) : (4416710425282131719LL)))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) ((unsigned int) 270582939648LL));
                        arr_18 [(_Bool)1] [(_Bool)1] [4LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19567))) % (-752301096012831773LL)));
                    }
                    arr_19 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (short)-17891))) ? (max((-4416710425282131719LL), (((/* implicit */long long int) 16258219U)))) : (((/* implicit */long long int) (((_Bool)1) ? (2567950186U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))))))));
                    var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((signed char) 9223372036854775807LL)))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)45969), (((/* implicit */unsigned short) ((signed char) (_Bool)1)))))))));
                    var_24 &= ((/* implicit */signed char) (((_Bool)1) ? (16258219U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9611)))));
                }
            } 
        } 
    } 
    var_25 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)59147))))) ? (((((/* implicit */_Bool) 2241085705U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (649040216725086161LL))) : (((/* implicit */long long int) var_3)))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (((_Bool)1) ? (2315779494556963209LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
