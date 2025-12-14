/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69758
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
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [17ULL] [17ULL] [i_2] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)112)) & (((/* implicit */int) arr_4 [i_0] [i_0]))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = (~(max(((~(arr_1 [i_0]))), (((((/* implicit */_Bool) 16746611051660606303ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (var_5))))));
                                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_9))))))), (var_12)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 3) 
                    {
                        {
                            arr_20 [i_1 - 1] [i_1] [i_0] = ((/* implicit */short) arr_9 [i_0] [i_1 + 1] [i_5] [i_6] [i_1] [i_1]);
                            arr_21 [i_6] [i_0] [i_0] [i_0] = var_11;
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((12209789712802423507ULL), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (short)-19623)), (8ULL))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)19622))))))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)64)), (8068533714581225934ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (8166125246546081736ULL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1])), (var_3))))))) : (((/* implicit */int) (short)-19619))));
            }
        } 
    } 
}
