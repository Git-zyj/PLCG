/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95877
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        arr_14 [i_0 - 2] [i_2] [i_1] [i_2] [i_3] = ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 999658814))));
                        var_10 &= ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (9209879033883436133LL)))) ? (((((/* implicit */int) var_9)) | (var_3))) : (var_0))) == (((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_7)) - (((/* implicit */int) (short)20773)))), (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (short)8257)))))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)34925)) == (((/* implicit */int) var_7)))))))));
                        arr_17 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)34896))) ? (((((/* implicit */_Bool) 2802476342U)) ? (-8365484589724778880LL) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_12 ^= ((/* implicit */short) ((((((/* implicit */int) var_2)) != (((/* implicit */int) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */long long int) -75464740)), (max((((/* implicit */long long int) (unsigned short)34929)), (-597002430456757804LL)))))));
                    }
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)34690)) : (((/* implicit */int) var_9))))), ((-(var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (min((var_8), (((/* implicit */int) (unsigned short)30611)))) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)32287)), ((unsigned short)25889)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_5))))) : (6621907589556062620LL))))))));
                    var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)25730)))), (((/* implicit */int) min(((unsigned short)34873), (var_9))))));
                    arr_18 [i_2] [i_1] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3979619887U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8257)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2639778019U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-63)), ((unsigned short)25889)))) : (((/* implicit */int) ((var_1) || (((/* implicit */_Bool) var_4)))))))) : (6875809387710954438ULL)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */int) (short)20788)) + (((/* implicit */int) (unsigned short)42169))));
}
