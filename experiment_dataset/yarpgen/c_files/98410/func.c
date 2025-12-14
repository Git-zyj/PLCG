/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98410
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) -323944970259960059LL))));
                                arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_0] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_11)))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_0] [i_6 + 1] &= ((/* implicit */_Bool) var_4);
                            var_13 = ((/* implicit */_Bool) ((unsigned short) (~(arr_0 [i_0 - 1] [i_0 - 1]))));
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((~(arr_24 [i_0] [i_5] [i_6 - 1]))), (arr_24 [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                        }
                    } 
                } 
                arr_28 [i_0] [i_0] [i_1] = ((/* implicit */short) (-(((max((var_11), (((/* implicit */unsigned long long int) -323944970259960072LL)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1])) : (323944970259960054LL))))))));
                arr_29 [i_0] [i_0] = ((/* implicit */long long int) var_0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) var_9);
                var_15 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) arr_32 [i_7] [i_8]))), (((unsigned int) (~(323944970259960054LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            {
                arr_43 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_8 [i_9]))) != (var_10)));
                arr_44 [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */int) arr_32 [i_9] [i_9]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_33 [i_9] [i_9])) / (((/* implicit */int) var_2))))));
                var_16 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (+(arr_19 [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (((8250845013488668554ULL) ^ (((/* implicit */unsigned long long int) 323944970259960051LL)))))));
            }
        } 
    } 
}
