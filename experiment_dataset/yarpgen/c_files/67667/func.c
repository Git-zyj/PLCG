/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67667
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((_Bool) (-(((/* implicit */int) (unsigned char)113))));
                    var_16 ^= ((/* implicit */_Bool) max((min((arr_3 [i_0]), (arr_3 [i_0]))), (max((arr_3 [i_0]), (var_11)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) var_12))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((signed char)49), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned short)0)))))))) > ((+(((/* implicit */int) ((signed char) var_4)))))));
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (arr_11 [i_3])));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
                                arr_21 [i_4] [(signed char)8] [i_4] [(signed char)8] [i_7] [(signed char)3] = ((/* implicit */unsigned short) arr_18 [(signed char)10] [i_4] [i_4] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
