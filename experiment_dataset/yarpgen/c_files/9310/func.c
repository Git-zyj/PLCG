/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9310
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) var_4);
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) min((((-1364368735) | (((/* implicit */int) (unsigned char)70)))), (((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 3])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 3] [i_1 - 1]))))));
                    var_16 = ((/* implicit */short) max((((((((/* implicit */int) arr_0 [(signed char)6] [i_2])) >= (((/* implicit */int) var_11)))) && (((/* implicit */_Bool) var_4)))), (((((/* implicit */_Bool) -863858300)) && (((/* implicit */_Bool) max((((/* implicit */int) (short)32767)), (-844915898))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        var_17 = ((/* implicit */short) min((arr_7 [i_0] [i_3] [i_4]), (((/* implicit */unsigned char) ((((/* implicit */int) var_13)) != (((/* implicit */int) ((short) arr_15 [i_0]))))))));
                        var_18 = arr_19 [i_0] [i_0] [i_4] [i_5] [i_4];
                    }
                } 
            } 
        } 
        var_19 &= ((/* implicit */unsigned char) ((min((arr_15 [i_0]), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) | (((/* implicit */int) max(((short)-3791), (((/* implicit */short) (signed char)127)))))));
    }
    var_20 = ((/* implicit */short) var_3);
}
