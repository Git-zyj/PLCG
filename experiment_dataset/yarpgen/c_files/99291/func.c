/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99291
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)0));
                    var_18 = (-(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */int) (signed char)107)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) var_6);
                arr_12 [7] = ((/* implicit */unsigned long long int) (unsigned char)8);
                var_20 = ((/* implicit */long long int) ((unsigned short) (unsigned char)37));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) : (2712345912U))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)94)) * (-6))))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)0)))))))));
    var_22 = ((/* implicit */short) (+(min((var_11), (((/* implicit */long long int) min(((unsigned char)99), (((/* implicit */unsigned char) var_14)))))))));
}
