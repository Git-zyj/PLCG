/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84591
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
    var_12 = ((/* implicit */signed char) max(((-((~(((/* implicit */int) (signed char)-76)))))), (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_6))))), (max((((/* implicit */short) (signed char)-108)), (var_9))))))));
    var_13 *= ((/* implicit */unsigned char) max((max((max((var_7), (((/* implicit */long long int) (signed char)123)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)127))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_8), (var_8)))))))));
    var_14 = ((/* implicit */unsigned short) (-(max(((+(((/* implicit */int) (signed char)118)))), (((/* implicit */int) max(((signed char)118), ((signed char)-91))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max((min((max((var_8), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) max((-1), (((/* implicit */int) arr_3 [i_1] [16U]))))))), (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) arr_8 [i_3] [i_1] [i_0] [i_3] [i_2] [i_0])), (arr_7 [8U] [i_1] [(unsigned short)21]))))))));
                            var_16 = (!(min(((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_3])))), ((!(((/* implicit */_Bool) (unsigned short)60726)))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)35217), (((/* implicit */unsigned short) arr_2 [i_0])))))))), ((-((-(((/* implicit */int) arr_2 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) max((((/* implicit */long long int) 1)), (min((max((((/* implicit */long long int) -1)), (0LL))), (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) (signed char)92)))))))));
                            var_19 &= max(((!(((/* implicit */_Bool) (signed char)118)))), ((!(((/* implicit */_Bool) -1948727184)))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-122)))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)-119)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_11))))), ((~(((/* implicit */int) var_9))))))));
}
