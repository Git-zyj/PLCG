/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80310
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
    var_15 = ((/* implicit */long long int) (_Bool)1);
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((((/* implicit */_Bool) -5349916533088240209LL)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (var_10)))))))))));
    var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-8073)) : (((/* implicit */int) (signed char)-26))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) ((unsigned int) min((var_8), (((/* implicit */long long int) var_5)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) | (var_11))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6548631755496865048ULL)) ? (min((var_8), (((/* implicit */long long int) -944003934)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_9) ? (11325672620892983209ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (short)8073))) : (var_2))))))) ? (max((((/* implicit */unsigned int) var_9)), (var_10))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)30666)), (6548631755496865048ULL)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-6)) + (2147483647))) >> (((var_14) - (14015527410404589027ULL)))))) : (max((((/* implicit */unsigned long long int) (short)8073)), (4566411051280374301ULL))))))));
                                arr_15 [17U] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) max((((var_9) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)8191)))))), ((+(((/* implicit */int) min(((signed char)-102), (((/* implicit */signed char) var_9)))))))));
                                var_22 = max(((!(((/* implicit */_Bool) var_0)))), ((!(var_12))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-16233)), ((unsigned short)34869)))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
}
