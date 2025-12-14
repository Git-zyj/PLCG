/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73044
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
    var_12 = ((/* implicit */int) var_0);
    var_13 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */long long int) 2147483647))))) ? (((((/* implicit */_Bool) 384290591149357829LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = max((((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (var_7) : (((/* implicit */long long int) arr_3 [i_0])))), (((/* implicit */long long int) max(((signed char)-10), (arr_1 [i_0 + 3])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] = var_11;
                            arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) (-(384290591149357836LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_17 [i_5] [i_5] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34911)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) arr_13 [(unsigned char)3] [i_5] [i_4 - 1] [i_5])), (arr_12 [i_0] [i_5]))))), (((/* implicit */long long int) var_1)));
                            arr_18 [4LL] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) max((9223372036854775807LL), (((((/* implicit */_Bool) ((int) -9195832291143947103LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 - 1] [i_5] [i_5] [i_5]))) : (((((/* implicit */_Bool) (unsigned char)64)) ? (var_5) : (arr_16 [(_Bool)1] [i_0] [i_4] [(_Bool)1])))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
}
