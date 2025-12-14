/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57166
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_20 |= ((/* implicit */short) max((((/* implicit */int) arr_5 [i_0] [i_2])), ((+(((/* implicit */int) (unsigned short)7660))))));
                                var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 453256666)))))))), (min((((/* implicit */long long int) (unsigned short)32241)), (max((((/* implicit */long long int) var_9)), (var_0)))))));
                            }
                        } 
                    } 
                } 
                var_22 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_12))))) : ((-(arr_4 [i_0 + 2] [i_0])))))));
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (+(var_19)))))))))));
                            arr_17 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) arr_0 [i_5] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) 6425225374273966689LL);
    var_25 = ((/* implicit */long long int) min((var_25), (min((min(((+(var_15))), (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))), (((/* implicit */long long int) var_12))))));
    var_26 = ((/* implicit */unsigned short) (unsigned char)199);
}
