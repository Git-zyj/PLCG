/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7601
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
    var_11 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)10)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (short)17013);
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */long long int) max(((short)-17013), (((/* implicit */short) ((signed char) arr_0 [i_0 - 1])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((0LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-53)))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 18; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_2] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (short)-28387))));
                                arr_17 [i_1] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) var_0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17012))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17036))) : (14LL)))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] [i_3] [(short)3] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)6733)) ? (((/* implicit */int) (short)-17013)) : (((/* implicit */int) (short)31371)))), ((((~(((/* implicit */int) var_4)))) - (((/* implicit */int) var_3))))));
                }
            } 
        } 
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) var_10)))) : (((((((/* implicit */int) var_9)) + (2147483647))) << (((1LL) - (1LL))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-3LL)))))));
    var_14 = ((/* implicit */_Bool) (((~(min((-6422420416586992873LL), (((/* implicit */long long int) (short)-2)))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) var_9)))))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-2))))), (((var_1) ? (((/* implicit */int) min(((unsigned short)25165), (((/* implicit */unsigned short) (short)17012))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8)))))))));
}
