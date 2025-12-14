/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94801
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 -= ((/* implicit */short) max((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_1)))))));
                arr_5 [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_11))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_3)), (var_10))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((signed char) ((signed char) min((var_8), (((/* implicit */long long int) var_0)))))))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_4))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 8; i_6 += 3) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_5)))), (var_11)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                                var_16 ^= ((/* implicit */short) ((unsigned char) var_2));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((signed char) var_7)))));
    /* LoopSeq 1 */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_1))));
        arr_22 [i_7] = ((/* implicit */short) var_10);
    }
    var_19 = ((/* implicit */signed char) (-(((unsigned long long int) var_9))));
}
