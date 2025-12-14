/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92882
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)44))))) ? (((((/* implicit */_Bool) var_6)) ? (((int) var_14)) : (((int) var_12)))) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) | (((16619677061763173952ULL) >> (((((32766U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))))) - (32729U)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_7))));
                                var_17 += ((/* implicit */short) (((~(((/* implicit */int) arr_4 [i_3 - 1])))) == (((/* implicit */int) arr_4 [i_3 - 3]))));
                                arr_16 [i_0] [i_0] [i_0] [(short)10] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [9LL] [i_3 - 2] [i_3 - 2] [i_1])) ? (((/* implicit */int) (short)4719)) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(signed char)2] [(signed char)2] [(unsigned short)10] [(signed char)8] [i_3 - 2])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_3] [i_3 - 2])) : (arr_11 [4U] [0] [i_2] [4U] [i_3 - 2] [i_3 + 1])))) : (arr_8 [i_0] [11U] [i_0] [i_0])));
                                var_18 = ((/* implicit */signed char) (+(((1827067011946377664ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40109)))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_1]));
                var_20 = ((/* implicit */long long int) min((((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [(signed char)6] [(signed char)1])) + (((/* implicit */int) arr_12 [i_0] [(short)4] [0ULL] [i_1] [i_1])))), (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
}
