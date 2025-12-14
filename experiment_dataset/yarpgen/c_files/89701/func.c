/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89701
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    var_15 ^= ((/* implicit */unsigned int) arr_6 [18U] [i_1 - 2]);
                    arr_11 [i_0] = ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)5125))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_12))));
                    arr_12 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_10 [i_2 - 1] [i_0] [i_0] [i_1 - 2]));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_16 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) -2316625702385748180LL));
                    var_16 = min((((/* implicit */short) (!(((/* implicit */_Bool) ((arr_4 [i_1 + 1] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5125))))))))), (((short) arr_8 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1])));
                    arr_17 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */long long int) arr_6 [i_1] [i_0]);
                    arr_18 [i_1] [i_1] [i_1] [i_3] |= ((/* implicit */long long int) var_10);
                }
                arr_19 [i_0] = ((/* implicit */long long int) var_10);
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0])) % (((arr_5 [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned char) (+((~(((/* implicit */int) (signed char)-40))))));
                arr_27 [i_5] [i_4] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((3509369549U), (((/* implicit */unsigned int) (short)17939))))), (((arr_4 [i_4] [i_4]) + (((/* implicit */unsigned long long int) var_10))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((arr_10 [i_5] [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) var_11))))) == (((((/* implicit */_Bool) arr_21 [i_4])) ? (arr_21 [i_4]) : (arr_21 [i_4])))));
            }
        } 
    } 
}
