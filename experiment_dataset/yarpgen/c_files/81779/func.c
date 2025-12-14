/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81779
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)64652)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)125))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 += ((/* implicit */signed char) max(((-(((/* implicit */int) ((unsigned short) arr_0 [i_0 - 2] [i_0 - 2]))))), (((/* implicit */int) arr_4 [i_0]))));
                var_22 = ((/* implicit */signed char) min((((((((/* implicit */int) (unsigned short)54844)) + (((/* implicit */int) (unsigned short)5350)))) + (((/* implicit */int) arr_4 [i_0 - 4])))), (((/* implicit */int) max((arr_4 [i_0 + 1]), (((/* implicit */unsigned short) (signed char)-56)))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-56)), ((~(((/* implicit */int) (signed char)67)))))))));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (signed char)-67)) : (((((/* implicit */_Bool) (unsigned short)34559)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-55)))))) < ((((!(((/* implicit */_Bool) arr_4 [i_0 - 3])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)84)) > (((/* implicit */int) (signed char)56))))) : (((/* implicit */int) (signed char)-85)))))))));
            }
        } 
    } 
}
