/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72500
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
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) (_Bool)1);
                    var_20 = ((/* implicit */short) (signed char)-1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 496747396)) ? (arr_6 [i_5] [i_5 + 1] [i_3 + 1] [i_3]) : (var_6))) + (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_14 [i_3 + 1])), (min((4294967295U), (((/* implicit */unsigned int) -1)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (signed char)97))), (arr_10 [i_3 + 1])));
                                var_23 = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) max(((_Bool)1), (var_7)))), ((~(((((/* implicit */_Bool) arr_19 [i_3] [i_5])) ? (((/* implicit */int) arr_19 [i_3] [i_4])) : (-2071617232)))))));
                }
            } 
        } 
    } 
    var_25 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-112))));
}
