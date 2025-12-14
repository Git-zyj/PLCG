/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69415
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
    var_17 -= ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 |= ((((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) 3351855684U)))))) + (var_15));
                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (((unsigned int) var_9)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((int) ((signed char) var_5)));
                            var_20 = ((/* implicit */unsigned int) ((min((((((/* implicit */int) var_5)) << (((/* implicit */int) (unsigned char)15)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)53)) && (var_11)))))) % ((((!(((/* implicit */_Bool) var_13)))) ? ((+(((/* implicit */int) (unsigned char)12)))) : (((/* implicit */int) var_7))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((_Bool) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 102237905U)) : (var_12)))));
}
