/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96418
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
    var_17 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (signed char)73))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) (((+(((/* implicit */int) var_9)))) + ((+(((/* implicit */int) var_0))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)17)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((min(((~(-6180953249788378659LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)181))))))) - ((((+(var_3))) - ((+(var_6)))))));
                                var_21 |= ((/* implicit */signed char) var_3);
                                arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_8)))) | ((~(((/* implicit */int) var_10))))))) ^ (((((unsigned long long int) -6180953249788378659LL)) & (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))) : (2783547436724940350ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            for (signed char i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) var_5);
                    var_23 = ((/* implicit */long long int) (+((+(arr_19 [i_7 - 1] [i_7 + 2] [i_7])))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)173)), (-6180953249788378659LL)));
}
