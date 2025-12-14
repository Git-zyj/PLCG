/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70279
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_1))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) 524160U)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)255)))))))))));
        var_21 = var_15;
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((7105207792635539557ULL) << ((((~(arr_0 [i_1] [i_1]))) - (4242038018U)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) 17010361486789466820ULL);
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)115))));
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) 7105207792635539557ULL));
        var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_13)), ((~(var_14)))));
        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) >= (max((((/* implicit */unsigned int) (unsigned char)153)), (2831058U)))))), ((~(arr_12 [(unsigned char)1] [i_4])))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_0);
    var_28 = ((/* implicit */unsigned long long int) var_10);
}
