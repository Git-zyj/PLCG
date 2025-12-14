/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75841
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned int) var_3);
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_0 - 1] [i_0 - 1] [i_3] [i_4])), ((~(var_6)))))) ? (((/* implicit */long long int) ((unsigned int) ((unsigned short) (unsigned char)251)))) : (min((((/* implicit */long long int) (~(arr_2 [i_4])))), (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
                                var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [21U] [21U])) ? (arr_5 [i_0 + 2] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) (unsigned char)159))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_0)))))), (((((/* implicit */_Bool) (short)-5077)) ? (((/* implicit */int) ((signed char) 904727151U))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_18 [i_6] [i_5] [i_2] [(unsigned char)17] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 17)) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) arr_9 [i_0 - 1] [i_0]))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1]))) : ((~(arr_5 [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_2] [i_5 + 2] [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)118))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 282244499624180185LL)) | (arr_8 [i_0] [i_1] [i_2] [i_5] [i_6])))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))));
                                var_24 = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
                                var_25 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) max(((unsigned char)240), (((/* implicit */unsigned char) arr_1 [i_1]))))), (((((/* implicit */int) arr_6 [i_6] [i_6])) / (((/* implicit */int) var_16))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_12)) : ((-(1074484360)))))) <= (((((/* implicit */_Bool) ((long long int) (unsigned short)35015))) ? (max((((/* implicit */unsigned long long int) var_0)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
}
