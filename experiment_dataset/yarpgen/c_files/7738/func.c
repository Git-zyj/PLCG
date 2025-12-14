/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7738
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [17ULL] [i_2] [i_1] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) 794254699)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) arr_0 [(unsigned char)18] [i_1])))), (((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [i_2]))))), (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (short)-12744)), (arr_2 [i_1] [i_2])))))));
                    var_20 &= max(((+((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((unsigned short) arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]));
                                var_22 = arr_10 [i_0] [i_0] [i_2] [i_1];
                                var_23 = ((/* implicit */signed char) min((((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_11 [i_0] [i_1] [4U] [4U] [(unsigned char)15])))) << ((((~(((/* implicit */int) arr_5 [i_3] [i_2] [i_0])))) + (238))))), (((/* implicit */int) (signed char)-101))));
                                var_24 = (-(min((((/* implicit */unsigned int) ((unsigned char) var_16))), (min((((/* implicit */unsigned int) (_Bool)0)), (arr_6 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) max((var_14), (((/* implicit */unsigned long long int) 4398046511103LL))));
    var_26 *= ((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_2))));
    var_27 = ((/* implicit */unsigned int) var_15);
}
