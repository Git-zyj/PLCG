/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98508
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0])) >> (((/* implicit */int) var_14)))), (((((/* implicit */int) ((unsigned char) 4421184125907483368ULL))) ^ (((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) (unsigned char)14))))))));
                    arr_10 [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14025559947802068267ULL)) && (((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (unsigned char i_4 = 4; i_4 < 21; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max(((unsigned char)241), (((/* implicit */unsigned char) (_Bool)1))))), (((((((/* implicit */_Bool) 4421184125907483363ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) : (9151314442816847872ULL))) + (4421184125907483368ULL)))));
                            arr_22 [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_17))));
                        }
                    } 
                } 
                arr_23 [i_3] [i_4] = max((((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) min((((_Bool) var_7)), (arr_13 [(unsigned char)15] [i_4])))));
                arr_24 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3177921572U)) ? (1117045723U) : (1117045737U)));
                var_20 = ((/* implicit */_Bool) max((((unsigned long long int) ((unsigned long long int) (unsigned char)156))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_18 [i_4] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))) : (arr_21 [(unsigned char)1] [i_4] [i_4] [i_3] [i_3])))))));
                arr_25 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
}
