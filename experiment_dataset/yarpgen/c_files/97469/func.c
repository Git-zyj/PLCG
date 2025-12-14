/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97469
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */unsigned int) ((unsigned long long int) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [10ULL] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [1U] [i_1] [i_2 - 2] = ((/* implicit */long long int) max(((-(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1] [i_1]))))), ((((!(((/* implicit */_Bool) 3672621777U)))) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (!((_Bool)0))))))));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((long long int) (unsigned char)18)))));
                            var_22 ^= arr_7 [(unsigned char)8] [4ULL] [i_1] [(unsigned char)8];
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                var_23 = min((((unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_15 [10ULL] [10ULL] [i_5])))), (arr_13 [i_5]));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_16 [i_6] [i_7])))) ? (((unsigned long long int) arr_16 [i_5] [i_5])) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_4] [i_6] [i_7])))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) arr_15 [i_7] [16U] [i_7])) : (((/* implicit */int) arr_20 [i_4] [i_5] [i_5] [(_Bool)1] [1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [18LL])))))))) : (min((max((arr_14 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_16 [i_4] [i_4])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4] [2] [i_4])))))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((_Bool) arr_19 [(unsigned char)16] [i_5] [8LL] [i_5])))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4] [14U]))))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))))))));
                            var_26 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_5] [i_6] [i_4]))) : (arr_14 [i_4] [i_5])))))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) arr_15 [i_6] [(unsigned short)17] [i_6])))))) : (((/* implicit */int) ((_Bool) (~(arr_18 [i_4]))))));
                            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_18 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4])))))))))));
                        }
                    } 
                } 
                arr_21 [i_4] [i_4] = ((/* implicit */_Bool) arr_18 [(_Bool)1]);
                arr_22 [i_4] [i_5] = (-((((!(((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4])))) ? ((~(arr_13 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [8U] [8U])) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4] [(_Bool)1] [(signed char)19]))))))));
                var_28 = ((/* implicit */int) max((18446744073709551614ULL), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_20 [i_4] [i_5] [i_5] [i_5] [i_5])), (arr_18 [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)113))))))))));
            }
        } 
    } 
}
