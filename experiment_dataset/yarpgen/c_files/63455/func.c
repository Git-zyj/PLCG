/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63455
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) var_0);
                    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    arr_15 [i_3] [i_4] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(arr_10 [i_3])))), (max((((/* implicit */unsigned short) (unsigned char)42)), (var_12)))));
                    var_22 = ((/* implicit */_Bool) var_16);
                    arr_16 [i_4] [i_4] [(unsigned char)11] [(unsigned char)2] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_12)))))), (var_11)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (min(((unsigned char)226), ((unsigned char)226))))))));
    var_24 = ((/* implicit */_Bool) (signed char)-22);
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            {
                arr_21 [i_6] = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)-17334))))));
                var_25 += ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)17339)) ? (((/* implicit */int) (short)-17340)) : (((/* implicit */int) (short)19244)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) (signed char)-57))))))))));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) 11573423764857087525ULL))));
                arr_22 [i_6] [i_6] = ((/* implicit */_Bool) arr_17 [i_7]);
            }
        } 
    } 
}
