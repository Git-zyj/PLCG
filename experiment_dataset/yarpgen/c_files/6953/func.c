/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6953
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_3] = ((/* implicit */unsigned char) min((((arr_2 [i_0]) % (arr_2 [i_0]))), (min((arr_2 [i_0]), (arr_2 [i_0])))));
                            var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3]))))))))) * (((/* implicit */int) ((max((((/* implicit */long long int) arr_9 [i_3] [i_1] [i_1] [i_1] [i_0] [i_0])), (arr_7 [i_0] [i_1] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0])))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_1] [i_0] [i_5]) && (arr_4 [i_0])))), (((((/* implicit */unsigned long long int) arr_1 [i_4 + 2])) % (arr_6 [i_0 - 1] [i_0 - 1] [i_4 - 1])))));
                            arr_16 [i_0 + 2] [i_1] [i_0] [i_5] [i_5] [i_0 + 2] = ((/* implicit */unsigned int) ((max((arr_13 [i_0] [i_0] [i_0] [i_5]), (((/* implicit */long long int) arr_5 [i_4 - 2] [i_0 + 1] [i_0 + 1])))) != (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_13 [i_4 + 2] [i_4 + 2] [i_0] [i_4]) : (((/* implicit */long long int) arr_5 [i_4 - 1] [i_0 - 1] [i_0 + 1]))))));
                            var_12 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0])) << (((arr_13 [i_1] [i_4] [i_0] [i_4]) + (5474392856736080556LL)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0])) << (((((arr_13 [i_1] [i_4] [i_0] [i_4]) + (5474392856736080556LL))) + (3559085690457181440LL))))));
                            arr_17 [i_0] = ((/* implicit */unsigned long long int) max((arr_5 [i_5] [i_0] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_6))))), (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (min((((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0)))) ? (((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
}
