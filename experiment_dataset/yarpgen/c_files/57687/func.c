/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57687
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((((/* implicit */_Bool) arr_1 [(unsigned short)1])) ? ((+(((unsigned long long int) arr_2 [i_0] [i_0])))) : ((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) <= (((/* implicit */int) ((2514762950004164208LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) ? ((~(((/* implicit */int) (unsigned short)42006)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2514762950004164208LL))))))))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((/* implicit */int) ((_Bool) ((_Bool) arr_0 [i_1])))) : (((/* implicit */int) var_10))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 13; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_19 += ((((/* implicit */_Bool) -1622712351)) || (((/* implicit */_Bool) var_5)));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? ((-(((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [(unsigned short)9] [i_4 - 1] [(unsigned short)8]))) : (arr_5 [i_2] [i_2]))))) : (((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (5065675776356653390ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_4] [i_3])), (arr_15 [i_4] [i_4] [10LL] [i_4] [i_6])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                arr_22 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((_Bool) min((((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) var_10)))));
                                var_21 = arr_8 [i_2] [i_2] [i_2];
                                arr_23 [i_8] [i_8] [i_4] [i_7] [i_8] [i_3] [i_8] = ((/* implicit */unsigned short) ((_Bool) arr_5 [i_2] [i_3]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
