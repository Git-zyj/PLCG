/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6427
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), ((+(min((((((((/* implicit */int) (signed char)-121)) + (2147483647))) << (((((/* implicit */int) var_7)) - (252))))), ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))))));
                    var_18 = (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_2] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_3 - 2] [i_3 - 1]))))), (max((arr_1 [i_3 + 1] [i_3 - 1]), (arr_1 [i_3 + 1] [i_3 + 1]))))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (var_13) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_5]))))), (max((15U), (((/* implicit */unsigned int) (unsigned char)71)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_5)) - (((/* implicit */int) min((var_6), (var_7))))))));
    var_22 = ((/* implicit */int) min(((signed char)120), ((signed char)120)));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((var_13), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 4645795096428920362LL))))))))))));
}
