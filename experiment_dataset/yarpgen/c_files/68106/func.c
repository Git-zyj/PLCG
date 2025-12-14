/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68106
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((((unsigned int) (unsigned short)65530)), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)5), ((unsigned short)0))))) < (var_9))))));
                                arr_14 [i_2 + 2] [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_4] [i_3])), (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)255))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_1]))));
                arr_15 [i_0] = ((/* implicit */unsigned char) 4473334896485841581ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (short i_6 = 2; i_6 < 14; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_24 [i_7] = ((/* implicit */short) (!(var_2)));
                            var_20 = max(((~(0ULL))), (arr_22 [i_5] [i_6] [i_5] [i_5] [i_8] [i_6 + 3]));
                        }
                    } 
                } 
                arr_25 [i_5] [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_23 [i_5] [i_6 + 3]))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (arr_16 [i_6 + 1])))) ? (((/* implicit */int) max((arr_16 [i_6 - 1]), (arr_16 [i_6 + 3])))) : (((/* implicit */int) ((unsigned char) arr_16 [i_6 + 3])))));
                var_22 = ((/* implicit */unsigned long long int) 4294967295U);
            }
        } 
    } 
}
