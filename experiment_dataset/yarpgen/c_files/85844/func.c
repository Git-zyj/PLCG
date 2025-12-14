/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85844
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-22139)) : (((/* implicit */int) (short)16017))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) min(((short)0), ((short)-22147)))))))));
                var_11 &= ((/* implicit */unsigned long long int) arr_0 [(_Bool)1]);
                var_12 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))), (max((((/* implicit */unsigned long long int) var_7)), (var_8)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (short)-22157);
                arr_11 [i_3] = ((/* implicit */unsigned short) var_3);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_14 -= max((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2])) * (((/* implicit */int) var_7))))) ? (((5376197506691624900ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_14 [i_2] [i_3 + 1] [i_4] [(unsigned short)4] [i_3] [i_3])))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (5376197506691624900ULL))));
                            arr_16 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) min(((-((+(((/* implicit */int) arr_15 [i_2] [i_3] [(unsigned short)6] [i_3])))))), (((/* implicit */int) arr_10 [0ULL] [i_3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            arr_23 [i_3] [(unsigned short)1] [i_6] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((short) arr_20 [i_2])), ((short)-22157)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])) * (((/* implicit */int) var_4))))) : (max((max((var_3), (var_3))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_3])) > (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))), ((+(((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3])))))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (short)-25650)), (max((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)25649)) : (((/* implicit */int) var_7)))) <= (((/* implicit */int) arr_3 [i_2] [i_2]))))))));
            }
        } 
    } 
}
