/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94565
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
    var_15 = ((/* implicit */short) ((unsigned short) 3030900790770307690LL));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 + 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 + 1] [i_2 + 1]))))) >= (((arr_6 [i_1 - 2] [i_1 + 1] [i_2 + 1]) - (arr_2 [i_1 - 2] [i_1 + 1]))));
                    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) max((arr_1 [(unsigned char)3] [(unsigned char)3]), ((signed char)-57)))) - ((-(((/* implicit */int) arr_1 [i_0] [(unsigned char)15]))))))), (((-23LL) - (48LL)))));
                    arr_7 [i_1] [i_1] = ((((((/* implicit */_Bool) (signed char)123)) || (((/* implicit */_Bool) arr_4 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) << (((((/* implicit */int) (unsigned short)61112)) - (61102)))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((-1), (((/* implicit */int) (unsigned short)36178))))) != (((min((-23LL), (23LL))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1])))))))));
                    var_19 = ((unsigned char) (short)-26955);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_2);
    var_21 = ((/* implicit */unsigned int) ((min((((-40LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned short)43411))))))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (4294967295U))))))));
}
