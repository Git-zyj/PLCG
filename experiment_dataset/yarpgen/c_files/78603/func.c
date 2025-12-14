/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78603
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
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-4125)) ? (((8323072) >> (((552199727133205603ULL) - (552199727133205594ULL))))) : (((((/* implicit */_Bool) (short)29535)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-64)) > (((/* implicit */int) (_Bool)1)))))))));
                    arr_7 [i_0] [i_1 + 1] [i_2] = ((((/* implicit */_Bool) min((((/* implicit */long long int) min(((short)-14671), (((/* implicit */short) arr_1 [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_1)))))) ? (((/* implicit */int) (!(((((/* implicit */unsigned int) 44842410)) < (var_11)))))) : (max(((-(304457640))), (((/* implicit */int) var_16)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_19 &= ((/* implicit */signed char) (short)16360);
                                var_20 = ((/* implicit */unsigned int) (short)16365);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 ^= var_5;
    var_22 += min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))))), (max((max((-1172734793021707522LL), (((/* implicit */long long int) (short)19652)))), (((/* implicit */long long int) (signed char)55)))));
    var_23 = ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)165)) >> (((((/* implicit */int) (unsigned char)152)) - (152)))))) >= (var_14)))) & (((/* implicit */int) ((unsigned char) (short)-23111))));
}
