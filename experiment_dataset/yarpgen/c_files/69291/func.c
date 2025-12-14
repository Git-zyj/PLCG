/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69291
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) % (858435749650257568LL))), (((/* implicit */long long int) (_Bool)0))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1319967347)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_0])))), (min((arr_0 [i_3 + 1] [i_1]), (((/* implicit */long long int) (_Bool)0))))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (var_2) : (((/* implicit */int) arr_5 [i_2]))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((2435920446086357096LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (unsigned short)27932)) : (-1)))))))) / (((((/* implicit */_Bool) var_5)) ? (min((arr_6 [i_0] [i_1]), (((/* implicit */long long int) arr_9 [i_0] [i_2])))) : (((/* implicit */long long int) var_8))))));
                            arr_11 [i_2] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */_Bool) 573976863)) ? (arr_6 [i_0] [i_2]) : (arr_6 [i_1] [i_1]))) != (arr_3 [i_2] [i_1]))))));
                            arr_12 [i_3] [i_1] [i_1] [i_0 - 1] |= ((/* implicit */unsigned long long int) arr_9 [i_1] [i_1]);
                        }
                    } 
                } 
                var_20 = 1640682167;
                arr_13 [i_1] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) ^ (-1640682168)))) ? (((/* implicit */long long int) var_15)) : (((var_6) & (arr_6 [i_1] [i_0 + 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (5456930621831840681LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))) ? (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_17);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-((-(25808519)))))) - (var_6)));
}
