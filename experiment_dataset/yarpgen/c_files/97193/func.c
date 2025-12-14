/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97193
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = var_3;
                var_17 = ((/* implicit */signed char) var_10);
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_6 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) arr_2 [i_0])))))));
                            arr_9 [i_0 - 1] [i_1] |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)14372))));
                            var_19 ^= ((/* implicit */short) var_0);
                            arr_10 [i_1] [i_0] [i_2] [i_1] [2LL] [i_1] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) var_13))) == (arr_3 [i_1] [i_2] [i_1]))), (arr_0 [i_1] [(_Bool)1]))))) >= (((max((arr_1 [i_1]), (arr_3 [i_0] [i_1] [(unsigned char)7]))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (arr_6 [i_3] [i_3] [15U] [i_1] [i_0] [i_0]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned short) (+(var_7)));
                            var_21 &= ((/* implicit */unsigned int) arr_12 [i_0 - 1] [i_1] [i_4] [i_1]);
                            arr_18 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) | ((+(((/* implicit */int) arr_0 [i_0] [i_1]))))));
                            var_22 *= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_5] [i_1])) ^ ((-(((/* implicit */int) max((var_12), (arr_2 [i_4]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7))), (((/* implicit */unsigned int) var_12))))) : (var_1)));
    var_24 |= ((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) min((((_Bool) var_12)), (var_0))))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14390)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned short)51145))))), (((-5708926013264320532LL) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) && (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 5708926013264320532LL)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned char)102)))))))));
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
    {
        for (unsigned short i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */int) arr_21 [i_6])), (arr_20 [i_6]))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6]))))))))) / (max(((~(arr_3 [i_6] [i_6] [i_6]))), (((/* implicit */long long int) arr_2 [i_6]))))));
                var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (max((var_15), (arr_11 [i_6])))))) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) <= (arr_5 [(unsigned short)3] [i_6 - 1] [i_7] [i_7])))), ((~(var_4)))))));
            }
        } 
    } 
}
