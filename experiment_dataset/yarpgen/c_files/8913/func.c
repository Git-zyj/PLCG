/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8913
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned short) arr_0 [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_2] [i_2] [i_0] = (~(4050255678U));
                        arr_11 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned long long int) (+((((-(((/* implicit */int) arr_0 [i_2])))) | ((-(((/* implicit */int) (unsigned short)0))))))));
                        arr_12 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 17825903180236660023ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) 1604966975)))))) : (((((arr_8 [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_11)))))))));
                    }
                } 
            } 
        } 
        var_14 *= ((/* implicit */unsigned int) arr_8 [i_0]);
        arr_13 [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) 12030000734443821802ULL)) ? (min((arr_8 [i_0 + 1]), (((/* implicit */unsigned long long int) (unsigned char)64)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) % (244711618U))))));
        arr_14 [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)49922))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_21 [i_5] [i_4] = ((/* implicit */short) arr_4 [i_5]);
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned long long int) var_7)))));
                var_16 = ((/* implicit */_Bool) arr_19 [i_4] [i_4]);
                arr_22 [i_4] = ((/* implicit */_Bool) min(((+(arr_4 [i_4]))), (((/* implicit */unsigned long long int) arr_17 [i_5]))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_7);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (unsigned short)45637))) << (((1152067578299396935ULL) - (1152067578299396927ULL)))));
    var_19 = ((/* implicit */unsigned int) (+(var_13)));
}
