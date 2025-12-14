/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69480
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_20 |= ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_10 [i_0] [i_3 - 1] [i_3 - 1] [i_3])), (var_2))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_6 [2LL])) ? (((/* implicit */int) (unsigned short)17564)) : (2147483647))))))));
                            var_21 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_3]))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1]))))) : (2681728913341820609LL))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (~(max((var_2), (((/* implicit */long long int) 0U))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) 3796483752718881639LL)) ? (15083722211665806629ULL) : (((/* implicit */unsigned long long int) 11U))))))) ? (2636344136665337147LL) : (((((/* implicit */_Bool) 2793942354233042925ULL)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_12)), (var_10)))) : (((((/* implicit */_Bool) (short)-8484)) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_3 [i_1] [i_2] [(unsigned short)3])))))));
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) -477294502)))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */int) arr_11 [i_0] [i_1])), (arr_0 [1]))), (((/* implicit */int) ((short) arr_12 [i_0])))))) ? (((((/* implicit */_Bool) -8972126818868666959LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-68))))) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_1)) ? (-1422265261) : (arr_10 [i_0] [i_1] [i_0] [i_1])))));
                arr_17 [i_1] = ((/* implicit */long long int) var_1);
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)15202)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-8501)), (var_15)))) ? (((/* implicit */long long int) (+(3885886682U)))) : (((long long int) 2636344136665337147LL)))));
}
