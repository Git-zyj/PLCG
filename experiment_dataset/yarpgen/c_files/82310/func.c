/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82310
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) 2103428089)) : (18098579421091330725ULL)))) || ((!(((/* implicit */_Bool) arr_2 [i_4 - 1])))))))));
                            arr_13 [i_0] [i_0 - 3] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_9 [i_0] [i_4 + 1] [i_0] [i_2] [i_4] [i_0 - 2])))))) + (18098579421091330725ULL)));
                            var_16 |= ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (18098579421091330710ULL)))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18098579421091330725ULL)) ? (18098579421091330725ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0 - 2])) | (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 4]))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 4])) ? (348164652618220881ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2])))))));
                            arr_15 [i_3] [i_2] [i_2] |= min(((-(min((var_3), (2741402110730425689ULL))))), (((unsigned long long int) var_3)));
                        }
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_0 [i_0 + 2]), (((/* implicit */unsigned char) (signed char)27)))))));
                    }
                } 
            } 
        } 
        arr_16 [(signed char)15] = ((/* implicit */short) (~(((long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] [i_0]))))));
        var_18 = ((/* implicit */long long int) max((var_18), (min((15LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */int) ((var_1) > (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5])))))), (((((/* implicit */int) (unsigned short)24768)) & (((/* implicit */int) arr_19 [i_5])))))));
        var_20 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_21 |= (_Bool)1;
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (var_4) : (var_4)))))))));
}
