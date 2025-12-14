/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88945
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
    var_17 = ((/* implicit */signed char) ((((_Bool) var_6)) ? (((unsigned int) min((((/* implicit */long long int) var_7)), (9223372036854775807LL)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                    {
                        var_18 &= ((/* implicit */long long int) (_Bool)1);
                        arr_13 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0] = (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> ((((~(((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383))))))) - (5736729778080702089ULL))));
                        arr_14 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (5182872439352169030LL) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39758))) : (((-3310449436799865974LL) / (((/* implicit */long long int) arr_5 [i_1] [i_2] [i_3])))))), (((/* implicit */long long int) ((signed char) var_1)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_1] = ((/* implicit */unsigned int) ((signed char) arr_15 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1]));
                        var_19 = ((/* implicit */unsigned char) ((signed char) (unsigned short)4302));
                        var_20 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_2 - 2]))));
                        arr_18 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39758)) ? (5182872439352169030LL) : (6192810073642129773LL)));
                    }
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */int) min((arr_16 [i_1] [i_2 + 1] [i_2 + 1] [i_1]), (((/* implicit */signed char) (_Bool)0))))) + (2147483647))) << (((((((/* implicit */int) min(((signed char)106), ((signed char)-93)))) + (110))) - (17)))));
                    var_22 = ((/* implicit */unsigned int) (short)-2143);
                }
            } 
        } 
    } 
    var_23 = (short)-28679;
}
