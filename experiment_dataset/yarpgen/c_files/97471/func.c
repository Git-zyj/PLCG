/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97471
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) -5986312223527309140LL))));
    var_14 = ((/* implicit */int) (!(var_0)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 + 3] [i_0] [i_0 + 3] [i_3] [i_3 + 1] [i_4] = ((/* implicit */short) 68719476480LL);
                                arr_16 [i_1] [i_0] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                                var_15 = ((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 5986312223527309143LL))))))) ^ (288119408)));
                                arr_17 [i_0] [i_0] [i_0] [i_3 - 2] = ((/* implicit */_Bool) max((((arr_2 [i_0] [i_1]) | (arr_2 [i_1] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5299571003063797032LL)) ? (var_2) : (var_5)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (short)-19326)))))));
                                var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_1)) | (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                arr_18 [6ULL] [i_1] [i_0] = min((max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)3))))), (min((var_7), (((/* implicit */short) (unsigned char)188)))))), (((/* implicit */short) ((((/* implicit */_Bool) 3437808647U)) && (((/* implicit */_Bool) (signed char)15))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            arr_24 [i_6] [i_0] = ((/* implicit */unsigned char) ((var_3) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_4))))), (arr_13 [i_6])))) : (((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)0))))));
                            var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))) : ((~(arr_5 [i_6]))))))));
                            var_18 -= ((/* implicit */_Bool) max((min((arr_1 [i_6]), (((/* implicit */unsigned long long int) arr_23 [i_1])))), (((arr_10 [i_0 + 3] [i_0]) + (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                            arr_25 [i_0] [i_0] [5] [4LL] = ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_1] [i_5] [6] [i_6]))))), (var_7)));
                            var_19 = ((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned short) (!(arr_23 [i_0])))), ((unsigned short)49310))));
                        }
                    } 
                } 
            }
        } 
    } 
}
