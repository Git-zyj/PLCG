/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55938
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [8] |= ((/* implicit */short) arr_1 [(unsigned char)10]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_5);
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (signed char)-2))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) + (-8217172389211510011LL)))) ? ((~(var_2))) : (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1838855301581562610ULL)))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (~(max((((((/* implicit */unsigned int) arr_6 [i_1] [i_2] [i_0])) - (arr_10 [i_0]))), (((/* implicit */unsigned int) (unsigned char)255))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                {
                    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_4] [14U]))) ? ((-(16252928U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_9 [i_0] [i_0] [i_4] [i_5])))))))));
                    var_15 = ((/* implicit */signed char) arr_7 [i_0]);
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned int) var_7);
    var_17 -= ((/* implicit */unsigned short) var_3);
}
