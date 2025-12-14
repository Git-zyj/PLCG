/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66887
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
    for (int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_12 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2073217411)) ? (12251734821676793641ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7684))))) - (((/* implicit */unsigned long long int) -7106788307454574903LL))));
                            var_20 = ((/* implicit */short) arr_6 [i_0] [3LL] [(unsigned short)5]);
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (min((((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0 + 1] [i_0 + 1]) - (min((((/* implicit */long long int) var_16)), (arr_10 [i_1] [i_1 + 1] [(short)11])))))), (min((min((((/* implicit */unsigned long long int) 0U)), (var_2))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_17)))))))));
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
    var_23 = ((signed char) (unsigned char)138);
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (short i_5 = 4; i_5 < 22; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 20; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((arr_18 [i_5 - 3] [i_5 - 4] [i_5 - 4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((12457970116640838862ULL), (((/* implicit */unsigned long long int) (signed char)127))))) || (((/* implicit */_Bool) arr_25 [i_5 + 1] [i_5 - 3] [i_5 + 1] [i_5 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_14 [i_5 - 3]), (arr_14 [i_5 + 1])))) ? (((/* implicit */int) arr_14 [i_5 + 1])) : ((~(((/* implicit */int) var_17))))));
                                var_27 ^= ((/* implicit */long long int) ((unsigned short) var_12));
                                var_28 = ((/* implicit */signed char) (~(var_18)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 1; i_11 < 23; i_11 += 3) 
                {
                    for (signed char i_12 = 3; i_12 < 23; i_12 += 3) 
                    {
                        {
                            arr_44 [i_12] = ((/* implicit */short) (((-(((/* implicit */int) arr_32 [i_4] [i_4] [i_4] [i_4])))) & (((((/* implicit */_Bool) arr_32 [i_12] [i_11 - 1] [i_5 - 2] [i_4])) ? (((/* implicit */int) arr_32 [i_4] [i_5] [i_11] [i_11])) : (((/* implicit */int) arr_32 [21LL] [(short)14] [i_11 - 1] [i_11]))))));
                            arr_45 [i_4] [i_4] [i_12] [(unsigned char)14] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))) + (16ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
