/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92820
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
    var_13 = min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)34746)) > (((/* implicit */int) (_Bool)0))))), ((unsigned short)42308));
    var_14 = ((/* implicit */short) (+(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (((((((/* implicit */int) var_0)) < (((/* implicit */int) (short)16242)))) ? (11656025312768434977ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-72)) <= (((/* implicit */int) (signed char)-77))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34746)) - (((/* implicit */int) (_Bool)1))))) ? (min((17636533591781667867ULL), (((/* implicit */unsigned long long int) (signed char)-83)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4493))))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)20), (var_3)))))))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)5406)) ? (((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)36043)))) : (((/* implicit */int) min(((short)-5402), (var_2)))))) : (((/* implicit */int) (short)5406))));
                arr_6 [(unsigned short)8] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)65);
            }
        } 
    } 
}
