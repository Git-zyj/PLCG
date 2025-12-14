/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77471
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
    var_17 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_16))))))) * ((+(1450646685U))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) (signed char)40)), ((unsigned short)65523)))))));
                    var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_11)) ? (13598292792922635034ULL) : (168190501734622244ULL))) : (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */long long int) arr_4 [i_0] [(signed char)7])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                arr_12 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)-10)) != (16))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3] [i_4])) && (((/* implicit */_Bool) var_13)))))));
                var_20 = ((min((((/* implicit */unsigned int) arr_11 [i_3] [i_3])), (0U))) >> (((((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (arr_11 [i_3] [i_4]) : (arr_11 [i_3] [i_4]))) - (730491995))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned long long int) 18278553571974929352ULL)), (((/* implicit */unsigned long long int) var_7))))) || (((/* implicit */_Bool) ((long long int) var_4)))));
}
