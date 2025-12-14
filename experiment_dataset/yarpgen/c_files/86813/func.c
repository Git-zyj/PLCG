/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86813
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) 3891976904522773388ULL)) ? (2251798739943424ULL) : (2251798739943439ULL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */short) ((_Bool) 2251798739943404ULL));
                            var_12 = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) (~(2147483647)))) - (var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (short)-15328))))))))));
                            var_13 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)32767))));
                            var_14 += var_8;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 4; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            arr_18 [i_5] [2U] [2U] [2U] = ((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */_Bool) 14554767169186778228ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (19ULL)))) - (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18444492274969608195ULL)) && (((/* implicit */_Bool) var_7)))))) / (((((/* implicit */_Bool) (unsigned char)28)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64694)))))))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (var_9)));
                            arr_19 [i_0] [i_1] [i_4 - 1] [i_4] [i_5] [i_4] = ((/* implicit */signed char) ((unsigned int) (~(((((/* implicit */_Bool) 1576127935)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) : (arr_8 [i_0] [i_0] [0U]))))));
                            var_16 = ((/* implicit */unsigned int) ((_Bool) ((arr_7 [(unsigned short)0] [(_Bool)1]) >> (((arr_7 [(_Bool)1] [i_4 - 1]) - (786045161U))))));
                            arr_20 [i_4] [(short)4] [i_4 + 1] [i_0] = ((/* implicit */unsigned short) min((var_4), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_4 + 1] [i_4 + 1] [i_4 - 2])))))));
                        }
                    } 
                } 
                arr_21 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 14554767169186778228ULL))));
                var_17 = ((min((var_1), (((/* implicit */unsigned int) arr_2 [i_0])))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) <= (1817877886098418842ULL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((min((var_7), (((/* implicit */unsigned long long int) var_2)))) / (var_3))), (((((/* implicit */unsigned long long int) ((unsigned int) 14554767169186778228ULL))) - (((((/* implicit */_Bool) (short)25170)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (2251798739943424ULL)))))));
}
