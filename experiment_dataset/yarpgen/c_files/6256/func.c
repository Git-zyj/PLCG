/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6256
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_13 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)22)), (var_7)))) ? (max((arr_7 [i_3 - 1]), (arr_7 [i_3 + 1]))) : (((/* implicit */unsigned long long int) var_11)));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                arr_12 [i_0] [(short)12] [i_0] [i_3 - 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (max((var_1), (var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_3 [i_0]))));
                                arr_13 [i_0] [i_0] [(signed char)2] [i_0] [i_4] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)15)) << (((var_11) - (8700108713832085145LL)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) : (arr_7 [i_2])))))));
                            }
                            arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-8982), (((/* implicit */short) (signed char)-92)))))) & (min((var_6), (var_1)))))) >= (((((/* implicit */unsigned long long int) (-(15)))) % (arr_7 [i_0])))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_0] = ((unsigned char) ((arr_1 [(_Bool)1]) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (1166912901)))) : (((/* implicit */int) max(((signed char)-92), (((/* implicit */signed char) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_20 [i_0] [i_6 + 1] [i_6 + 1] [i_6 - 1])))), (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_1 [i_1])) >> (((arr_6 [i_1] [i_1] [i_1]) - (946338834)))))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-99)) & (((/* implicit */int) (signed char)-18))));
                            arr_22 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_2))))) : (((((((/* implicit */_Bool) arr_4 [i_5])) || (((/* implicit */_Bool) (signed char)91)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_5])) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137)))))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0]))))), (max((((/* implicit */long long int) arr_4 [i_0])), (var_11)))));
            }
        } 
    } 
    var_16 = (!(((/* implicit */_Bool) var_12)));
}
