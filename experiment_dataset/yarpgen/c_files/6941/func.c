/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6941
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (_Bool)0)))));
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) var_9);
                    arr_10 [i_0] [i_1] [i_0] [(signed char)0] |= ((/* implicit */unsigned int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) / (1512957983778235526ULL))), (((((/* implicit */unsigned long long int) arr_0 [6])) + (arr_2 [i_0] [i_2]))))) + (((/* implicit */unsigned long long int) (((-(67981982U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-59))))))))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (max((8170393259806500570LL), (((/* implicit */long long int) var_9))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) var_13)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned char i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_22 [i_3] [i_5] [i_6] = max((((/* implicit */unsigned char) (signed char)62)), ((unsigned char)230));
                            arr_23 [(signed char)5] [i_4] [(signed char)11] [(signed char)11] [i_3] [i_6 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) -8170393259806500571LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (16933786089931316096ULL) : (((/* implicit */unsigned long long int) arr_17 [i_3] [i_4 + 1] [i_3]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (var_17)))) ? (((/* implicit */unsigned long long int) min((-8170393259806500570LL), (((/* implicit */long long int) (signed char)-50))))) : (((16933786089931316089ULL) - (((/* implicit */unsigned long long int) 3995104407U))))));
                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (arr_17 [i_4] [i_4] [i_3]) : (((/* implicit */int) var_18)))) + (((/* implicit */int) ((unsigned char) var_15)))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (~(var_12)));
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) var_18)))))), ((+(1512957983778235529ULL)))));
}
