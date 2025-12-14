/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84662
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
    var_11 = var_0;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [16] [16] [i_3] = ((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 1]);
                            arr_11 [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), (arr_4 [i_2 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [11LL]))) : (var_5)));
                            var_12 = ((/* implicit */short) max((((((/* implicit */int) arr_5 [i_2 + 2])) <= (((/* implicit */int) arr_5 [i_2 - 1])))), (arr_5 [i_2 - 1])));
                        }
                    } 
                } 
                var_13 ^= ((/* implicit */short) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0]))))));
                var_14 *= ((/* implicit */short) (unsigned short)19568);
                var_15 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_21 [i_4] [4ULL] [i_4] [(short)5] [i_4] = ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_14 [i_4] [i_6 + 2] [9ULL] [i_6] [i_6 + 2])), (((((/* implicit */int) (unsigned short)45963)) / (((/* implicit */int) (short)-27891)))))), (((((_Bool) arr_20 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_19 [i_4] [i_6 + 2] [i_6 + 2] [i_0] [i_0] [i_4])) : ((-(((/* implicit */int) (short)-27905))))))));
                                arr_22 [i_0] [i_0] [i_0] [i_4] [(short)11] [i_4] = ((/* implicit */unsigned short) max(((short)30231), (((/* implicit */short) (_Bool)1))));
                                arr_23 [i_4] [i_4] [i_5] [15LL] = ((/* implicit */unsigned short) max((arr_8 [(_Bool)1] [i_4] [i_4] [9LL]), (arr_8 [i_6 + 2] [i_0] [i_1] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_8), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_6))))))))));
}
