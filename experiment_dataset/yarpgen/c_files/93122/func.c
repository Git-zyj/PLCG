/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93122
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
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (_Bool)1)))))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min(((unsigned short)2115), ((unsigned short)48240))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_21 += ((/* implicit */unsigned char) (+(var_3)));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_22 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)17296)) : (((/* implicit */int) (unsigned short)20848))))) ? (var_14) : (arr_14 [i_2] [i_3] [i_3] [i_5] [i_2]))));
                                var_23 = ((/* implicit */unsigned short) arr_16 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 + 1]);
                                var_24 += ((/* implicit */unsigned short) 811464758);
                                var_25 = ((/* implicit */signed char) var_3);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) max(((unsigned short)25185), (((/* implicit */unsigned short) (signed char)-53))))) ? (min((((/* implicit */long long int) var_4)), (((var_14) + (((/* implicit */long long int) var_18)))))) : (((/* implicit */long long int) ((/* implicit */int) var_15))));
    var_27 = ((/* implicit */unsigned short) (((!((_Bool)1))) ? ((+(((long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) var_11))))))));
}
