/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91384
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
    var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) -719483888779606246LL))) : (((/* implicit */int) ((var_15) > (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((arr_3 [i_0]) % (arr_3 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (0U))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) max((min((arr_6 [i_0] [i_1]), (((/* implicit */long long int) arr_4 [0U] [2U])))), (((/* implicit */long long int) ((unsigned int) (unsigned char)0)))))), ((~(((arr_0 [(signed char)2] [i_1]) ? (14228243705224042067ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))));
                var_18 &= ((/* implicit */short) (+(((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_19 = arr_2 [i_0];
                            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 757531323U)) : (arr_1 [i_2] [i_2])))) ? (arr_13 [i_0]) : (((/* implicit */unsigned int) arr_9 [(_Bool)1] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) max((((((/* implicit */int) var_11)) & (((/* implicit */int) (signed char)-7)))), (((/* implicit */int) arr_2 [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
