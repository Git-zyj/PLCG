/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85333
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
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [14U] [i_1] [i_1] = ((/* implicit */unsigned int) -671185454901335846LL);
                    arr_9 [i_0 - 1] [i_1] = ((((/* implicit */_Bool) min((min((arr_5 [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_1] [i_1]))), (((((/* implicit */_Bool) 0U)) ? (var_3) : (((/* implicit */int) arr_1 [i_1]))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [18U] [i_2])) : (arr_5 [i_0] [i_0] [i_1])))) + (max((-5810418646475176934LL), (((/* implicit */long long int) arr_6 [i_1] [i_0] [i_1] [12])))))) : (((/* implicit */long long int) ((/* implicit */int) var_18))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1])) ? (((long long int) ((((/* implicit */_Bool) (signed char)117)) ? (4128612117U) : (((/* implicit */unsigned int) -1196455380))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (max((max((((/* implicit */int) (unsigned char)14)), (var_12))), (((/* implicit */int) arr_1 [i_0]))))));
                                var_21 = max((((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) arr_12 [i_4] [i_1] [i_1] [i_3] [i_1])) : (((/* implicit */int) max(((signed char)-26), ((signed char)-31)))))), (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_4]))));
                                var_22 -= ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned int) var_0)) : (0U))), (((/* implicit */unsigned int) arr_12 [i_3] [i_3] [(_Bool)1] [i_3] [i_4]))))));
                                var_23 = (_Bool)0;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) < ((+(((/* implicit */int) max(((unsigned char)154), (((/* implicit */unsigned char) (_Bool)0)))))))));
}
