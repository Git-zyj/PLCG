/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80029
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2757562350U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37899))) : (65520U)))) : (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0] [i_1]))))), (((/* implicit */long long int) 1277558519))));
                    arr_8 [i_0] = max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_0])) < (arr_6 [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (short)1533)))) : (((int) 2228054805765030575ULL))))), (4294901783U));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_1] [i_2]), (((unsigned long long int) 1879131449621379797LL))))) ? ((~(arr_4 [i_1] [i_0 - 2] [i_0 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min(((-(((/* implicit */int) min(((unsigned char)148), (arr_3 [i_0] [i_1] [i_0])))))), ((~(((((/* implicit */_Bool) 4294901773U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1548))))))));
                }
            } 
        } 
    } 
    var_16 = 9917858807453541970ULL;
}
