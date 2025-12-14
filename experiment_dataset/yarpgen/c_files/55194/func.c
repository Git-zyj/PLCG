/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55194
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
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) max(((-(var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) << (((845399987) - (845399981))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(max((((/* implicit */unsigned int) (short)29691)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (817282229U))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((min((var_6), (((/* implicit */unsigned int) var_1)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_4)))))), (((((/* implicit */long long int) var_4)) & (((var_12) << (((var_10) - (13182012067142133014ULL)))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 4; i_3 < 20; i_3 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 817282229U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)8191))))), (max((((/* implicit */unsigned long long int) max((3398621798U), (((/* implicit */unsigned int) (signed char)31))))), (var_14)))));
                var_20 = ((/* implicit */short) (unsigned short)62086);
                var_21 = ((/* implicit */unsigned int) min((var_21), ((((!(((/* implicit */_Bool) arr_7 [i_3 - 4])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 - 3]))) : (3477685067U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_3 + 1]), (arr_7 [i_3 - 3])))))))));
                var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 17859273685902249630ULL))));
            }
        } 
    } 
}
