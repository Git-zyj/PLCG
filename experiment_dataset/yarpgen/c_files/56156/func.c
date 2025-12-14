/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56156
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
    for (short i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24208)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 12655480841797878258ULL)) ? (var_2) : (arr_1 [i_0] [i_1])))))));
                arr_6 [i_0] = ((/* implicit */short) (unsigned char)183);
                arr_7 [(unsigned char)6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (((unsigned long long int) ((((/* implicit */_Bool) 5791263231911673358ULL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_19)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((unsigned char) (short)9280);
                    arr_15 [i_2] [i_3] [i_2] = max((((unsigned long long int) (((_Bool)1) ? (5791263231911673358ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))), (12655480841797878249ULL));
                    arr_16 [i_2 - 2] [i_3] [i_4] [i_4] = min(((((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (5791263231911673370ULL));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_1);
    var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5791263231911673383ULL)))) ? (((unsigned long long int) 3340273997133818366ULL)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))), ((~(var_17)))));
}
