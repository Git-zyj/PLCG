/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80767
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
    var_12 = ((/* implicit */long long int) var_5);
    var_13 = ((/* implicit */int) ((unsigned int) (((-(4194303U))) % (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */short) (signed char)-126)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [10U] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (-(((unsigned int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (signed char)-112)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
                                var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_0] [i_0])), ((signed char)-16))))) < (arr_15 [i_1] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_3] [i_3 - 1])))) & (((/* implicit */int) (short)-31861))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)50))))), (((unsigned int) var_2))));
                arr_24 [i_5 - 2] [i_5 - 2] [i_6 - 3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_2 [i_5] [i_5 - 1])), (15076947704496619236ULL)));
                var_17 -= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                arr_25 [i_5] = ((/* implicit */unsigned short) arr_19 [i_5] [i_5]);
                var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (((((arr_14 [6ULL] [i_5] [i_5 - 2] [14] [i_5 - 2] [i_5]) ? (7970289789454598354LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) << (((((7256657025041978453LL) ^ (9223372036854775807LL))) - (1966715011812797354LL)))))));
            }
        } 
    } 
}
