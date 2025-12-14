/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78635
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
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) (~((~(((/* implicit */int) var_5))))))), ((+(((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_20 = (~(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))) & ((~(((/* implicit */int) (short)-11185)))))));
                            arr_11 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_0 + 1] [i_1])))) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [i_1 + 1]) > (-2660250143971926329LL))))))) >> (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) (_Bool)1)), (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) <= (((((/* implicit */int) var_8)) << (((((/* implicit */int) (unsigned char)44)) - (30))))))))));
                                arr_19 [i_0] [i_0] [i_0] [i_5] [i_6] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_5])) : (((/* implicit */int) var_11))))))) ? (((9223372036854775807LL) << (((((((/* implicit */_Bool) 3575540351U)) ? (arr_14 [i_0] [i_1] [i_4] [i_4] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))))) - (1476309877U))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), (max((var_8), (((/* implicit */short) arr_10 [i_5] [i_0] [i_5])))))))));
                                arr_20 [i_0] [i_0] [i_6] [i_0] [i_0] = (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_15)))))));
                                var_22 = ((/* implicit */unsigned int) (unsigned char)93);
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (signed char)-105))));
                            }
                        } 
                    } 
                    arr_21 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) 2147483647)) ^ (4294967295U)))), ((~(arr_16 [i_1 - 1] [i_0] [i_0 - 2])))));
                }
            }
        } 
    } 
}
