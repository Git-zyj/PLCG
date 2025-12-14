/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98068
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (min((var_9), (((/* implicit */unsigned int) (short)-10123)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                var_18 = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            {
                arr_10 [i_2] = ((/* implicit */unsigned long long int) var_12);
                var_19 -= ((/* implicit */long long int) var_15);
                arr_11 [i_3] = ((/* implicit */short) min((arr_2 [i_3 - 1] [i_3 + 1]), (arr_2 [i_3 - 1] [i_3 + 1])));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_20 [i_5] = (short)-10123;
                                var_20 -= ((((/* implicit */_Bool) ((unsigned short) min((var_8), (((/* implicit */int) arr_4 [i_3] [i_3])))))) ? (((((/* implicit */_Bool) (short)-10123)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3905144782030067962LL))) : (var_5));
                            }
                        } 
                    } 
                } 
                var_21 = (~(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_2] [i_2])), (arr_8 [i_2] [2U])))) < (((int) (short)-10125))))));
            }
        } 
    } 
    var_22 = var_13;
}
