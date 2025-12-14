/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58706
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_11 [10] [i_0] [i_0] [11LL] = ((/* implicit */int) var_14);
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) max((var_18), ((short)-3998)));
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32759))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_13 [i_4])))), (((/* implicit */int) (short)32759))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (arr_17 [i_4] [i_5])));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned char) arr_19 [i_7] [i_5] [i_4 + 1]);
                            var_23 += ((/* implicit */signed char) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((signed char) arr_19 [i_4] [i_4 - 1] [i_7 - 1])))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 + 1] [(unsigned char)12] [(unsigned char)12] [10LL])) ? (arr_21 [14LL] [i_5] [i_6] [i_7] [8ULL] [i_6]) : (arr_21 [i_4] [(unsigned char)8] [i_6] [i_6] [(_Bool)1] [(unsigned char)8])))) ? (max((arr_21 [0LL] [i_5] [i_6] [i_7] [0U] [i_7]), (((/* implicit */long long int) arr_20 [22U] [(signed char)10] [i_6] [i_7])))) : ((+(arr_21 [12U] [12U] [(unsigned short)10] [i_7] [(_Bool)1] [i_7]))))))));
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) -18))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 1; i_10 < 21; i_10 += 3) 
                        {
                            {
                                arr_30 [i_9] [i_4] [i_4] = ((/* implicit */unsigned int) arr_29 [i_9] [i_9] [7LL] [i_9] [i_10] [i_4] [i_9]);
                                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_8] [i_5] [(_Bool)1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = max((var_6), (((/* implicit */unsigned int) (signed char)0)));
}
