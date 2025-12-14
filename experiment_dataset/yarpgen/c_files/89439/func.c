/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89439
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
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [16U] |= ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_11)), (var_2))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_1])), (arr_2 [i_1])))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((max(((+(((/* implicit */int) (unsigned char)68)))), (min((arr_2 [i_0]), (((/* implicit */int) arr_3 [(_Bool)1])))))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), (arr_3 [i_0 + 3]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_4)))))))), (var_2)));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_2))))));
                var_15 -= ((/* implicit */signed char) max((min((var_2), (((/* implicit */unsigned int) (unsigned short)16833)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
                arr_12 [i_3] = ((/* implicit */_Bool) max(((+(-7162380772188399342LL))), (((/* implicit */long long int) max((var_9), ((signed char)0))))));
                arr_13 [i_3] [i_3] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)0)), (var_8)))), (max(((+(var_5))), (((/* implicit */unsigned int) arr_0 [i_3] [i_2]))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            arr_21 [i_2] [5] [7] [i_3] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_17 [i_4 + 1] [i_3])))), (max((((/* implicit */int) arr_18 [i_4 + 1] [i_4 - 1] [i_4 - 1])), (var_6)))));
                            arr_22 [i_3] [i_3] [(unsigned char)9] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) min(((short)-4306), ((short)32767))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((max((((/* implicit */long long int) var_4)), (var_10))), (var_10)));
}
