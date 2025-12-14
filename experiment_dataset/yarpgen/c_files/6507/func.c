/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6507
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
    var_15 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_11))))));
                            var_17 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_9 [i_0] [i_3] [i_0] [(unsigned short)6] [i_0])) / (((/* implicit */int) (signed char)85))))));
                            arr_12 [(short)7] [i_1 - 1] [i_2] [i_0] = (signed char)77;
                            arr_13 [11] [i_0] = ((/* implicit */_Bool) arr_10 [i_1]);
                            arr_14 [i_0] [11] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]);
                        }
                    } 
                } 
                var_18 = ((unsigned short) (~(((/* implicit */int) var_10))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_5 - 3] [(short)9] [i_0] [i_5 + 1] [i_5 - 1])) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) (unsigned char)0))))))), (arr_7 [i_5 - 3] [i_4 + 1] [i_0])));
                            var_20 = ((/* implicit */unsigned short) var_14);
                            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)65523), (((/* implicit */unsigned short) (signed char)-79))))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (signed char)-66);
            }
        } 
    } 
}
