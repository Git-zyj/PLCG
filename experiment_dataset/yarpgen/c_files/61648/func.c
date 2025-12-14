/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61648
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_13 -= ((/* implicit */short) arr_1 [i_1]);
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned int) ((var_4) - (((/* implicit */int) (short)-4245))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)19])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))))) > (((4294967295U) % (4U)))))))));
                var_14 -= ((/* implicit */short) min(((-(var_12))), (((/* implicit */unsigned int) (_Bool)1))));
                var_15 = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_10);
    var_17 = ((((/* implicit */unsigned int) ((((var_4) | (((/* implicit */int) var_3)))) >> (((((var_1) & (var_4))) - (269623277)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1811212563)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-52))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (unsigned char i_3 = 3; i_3 < 15; i_3 += 1) 
        {
            {
                arr_10 [i_2] [8] [(short)10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_3]))))) : (((((50331648U) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((2193895007U) <= (var_12)))))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (~(4294967295U)))) ? ((-(4055761421U))) : (4294967280U)))))));
                arr_11 [i_2] [i_2] &= ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
}
