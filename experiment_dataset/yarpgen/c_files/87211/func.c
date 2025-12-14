/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87211
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
    var_11 += ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_7)), (var_10))) * (((/* implicit */unsigned long long int) 1143238020U))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0 - 3] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17726)) - (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [2U] [i_0] [2U])))))) : (((((/* implicit */_Bool) arr_2 [8])) ? (((/* implicit */long long int) arr_2 [i_0 - 3])) : (-7471886533167758534LL)))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (((+(arr_3 [i_1] [i_0]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2] [(unsigned short)2])))))) : (4185007634U))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) -1527997928);
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                            {
                                var_12 = (i_3 % 2 == 0) ? (((/* implicit */signed char) max((((((((/* implicit */long long int) -815672259)) - (-4941453840898134514LL))) / (((/* implicit */long long int) ((arr_14 [i_3] [i_1] [i_1] [3U] [i_4 - 1]) + (((/* implicit */int) (signed char)-122))))))), ((((~(arr_9 [i_0] [i_0] [i_0] [i_0 + 2]))) << (((((int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_3])) - (29)))))))) : (((/* implicit */signed char) max((((((((/* implicit */long long int) -815672259)) - (-4941453840898134514LL))) / (((/* implicit */long long int) ((arr_14 [i_3] [i_1] [i_1] [3U] [i_4 - 1]) + (((/* implicit */int) (signed char)-122))))))), ((((~(arr_9 [i_0] [i_0] [i_0] [i_0 + 2]))) << (((((((((int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_3])) - (29))) + (191))) - (58))))))));
                                var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_12 [i_3] [i_1 - 1] [i_1] [i_0] [i_3])) ? (((/* implicit */int) arr_12 [i_3] [i_1 - 1] [(short)4] [i_0] [i_3])) : (((/* implicit */int) arr_12 [i_3] [i_1 - 1] [(_Bool)1] [i_0] [i_3]))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                            {
                                var_14 = ((/* implicit */unsigned long long int) var_6);
                                var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) (~(min((var_5), (0U)))))) : ((~((~(5ULL)))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                            {
                                arr_20 [i_3] [i_3] [i_2] [i_1] [i_3] = arr_9 [i_0] [(signed char)3] [i_2] [i_2];
                                var_16 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6] [i_2] [i_1 - 1] [i_2] [i_1 - 1] [i_6])))))));
                            }
                            arr_21 [i_0] [i_3] [i_2] [i_3] [i_3] = max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_14 [i_3] [i_1] [i_2] [i_2] [i_2]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_2] [i_3] [i_3 + 1])))))))), (((((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_9 [i_1 - 1] [i_1 - 1] [i_2] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (9223372036854775807LL))) >> (((arr_10 [i_0 - 2] [i_1 - 1] [i_2] [i_3 + 1] [i_1 - 1]) + (2195254554444309695LL))))));
                            arr_22 [i_0] [i_1] [i_3] [i_2] [2LL] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_3 + 2] [i_3]))));
                        }
                    } 
                } 
                var_17 ^= min((((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) max((var_8), (((/* implicit */signed char) var_9))))) : (((/* implicit */int) arr_4 [i_0 + 2] [i_1 - 1] [(unsigned short)6])))), (((((/* implicit */int) (signed char)50)) - ((+(((/* implicit */int) (short)14125)))))));
                var_18 = ((/* implicit */short) -815672278);
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned char) (!(((min((((/* implicit */long long int) var_0)), (var_7))) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    var_20 = ((/* implicit */long long int) (((-((-(2973921313U))))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (3617646531U)))))))));
}
