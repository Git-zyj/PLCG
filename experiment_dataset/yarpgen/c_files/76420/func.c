/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76420
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (~((~(arr_3 [i_1] [i_0] [i_1])))))) ? ((~(18054366295922547180ULL))) : (((/* implicit */unsigned long long int) (~(arr_3 [i_1] [i_1 - 3] [(signed char)2]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(1697726585U)))) ? ((-9223372036854775807LL - 1LL)) : (max((((/* implicit */long long int) 1069597107U)), (arr_4 [i_1] [i_1 + 1] [i_1] [i_1 + 1])))))));
                                arr_13 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) max(((+((+(3225370178U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-107)))))));
                                arr_14 [i_0] [i_1 - 1] [i_1] [i_3 - 3] [i_3] [i_4] |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                            }
                        } 
                    } 
                    arr_15 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(max(((-(((/* implicit */int) (signed char)-89)))), ((-(((/* implicit */int) (signed char)-89))))))));
                }
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_5] [i_0] [i_6] = ((/* implicit */int) arr_2 [i_0]);
                            arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65525))))), ((+(2421273867U)))))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (~(min((9223372036854775792LL), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)101))))))))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0 + 1] [(unsigned short)16] = min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)44165))))) ? (((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_5] [i_0] [i_6 - 1])) : (((/* implicit */int) arr_8 [i_0 - 1])))) : (((/* implicit */int) arr_8 [i_5])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max(((~((~(var_11))))), (var_5)));
}
