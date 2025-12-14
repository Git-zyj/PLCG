/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91657
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
    var_16 -= ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_8 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) 17996806323437568LL);
                            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_1] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2] [i_2]) & (((/* implicit */long long int) arr_0 [i_0 - 2])))))));
                            arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] &= ((/* implicit */short) arr_4 [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_14 [i_0 + 2] [i_1] [i_0 + 2] [i_5] [i_4] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)59)), ((unsigned short)53262)));
                            var_18 = ((/* implicit */signed char) (~(arr_13 [i_1] [i_1] [i_1] [i_1])));
                            var_19 = ((/* implicit */short) var_12);
                            var_20 &= ((/* implicit */int) (unsigned char)122);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(arr_3 [i_0]))))));
                                var_22 = (-(((/* implicit */int) var_14)));
                                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_1] [i_1] [i_7] [i_1]))));
                                var_24 = ((/* implicit */unsigned char) min((((unsigned int) var_8)), (((/* implicit */unsigned int) (unsigned char)157))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))));
            }
        } 
    } 
    var_26 -= ((/* implicit */short) var_4);
}
