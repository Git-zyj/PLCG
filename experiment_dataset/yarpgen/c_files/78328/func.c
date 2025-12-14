/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78328
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)241)) | (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (var_2)))))) ? (8817200946835478838LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)18012)) : (arr_0 [i_0])))))), (min((-8817200946835478838LL), ((~(var_5)))))));
                var_16 += ((/* implicit */short) var_1);
                arr_5 [i_0] = ((/* implicit */_Bool) (+((+(arr_0 [i_0])))));
                var_17 += ((/* implicit */unsigned short) max((((long long int) ((((/* implicit */int) var_10)) ^ (arr_0 [i_1])))), (((max((((/* implicit */long long int) var_3)), (arr_1 [i_0]))) | (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-113)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_2] [i_0] = arr_10 [i_3];
                            var_18 += ((/* implicit */unsigned short) min(((-(var_6))), (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1] [i_1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
