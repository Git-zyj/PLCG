/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87546
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
    var_16 = ((/* implicit */unsigned short) (short)-10850);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        arr_3 [16U] &= ((/* implicit */unsigned int) (unsigned char)13);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_2);
                    var_18 = ((/* implicit */unsigned short) 2090074348);
                }
            } 
        } 
        arr_8 [i_0 + 1] = (-(((long long int) ((int) arr_2 [8ULL]))));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    arr_15 [i_4] [i_3] [i_0] = ((/* implicit */short) ((unsigned long long int) min(((((_Bool)1) ? (683510581310123380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))))), (((/* implicit */unsigned long long int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_21 [i_6] [i_5] [i_4] [i_3 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1))))) : (var_11)))) & (min((0LL), (((/* implicit */long long int) 810593850U))))));
                                var_19 = ((/* implicit */unsigned char) ((var_6) / (((/* implicit */long long int) -1965301513))));
                                arr_22 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) || (((/* implicit */_Bool) arr_1 [i_0 - 3]))))) >> (((((arr_1 [i_0 - 4]) + (arr_1 [i_0 - 4]))) - (6677856135374626037ULL)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) min((var_20), (arr_4 [i_0] [3U] [3U])));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((-2366162022097431963LL) - (-7LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (min((((/* implicit */unsigned long long int) (unsigned short)19862)), (35184103653376ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20051)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    arr_31 [i_9] [i_8] [i_9] = ((/* implicit */int) ((_Bool) ((int) arr_25 [i_8] [i_7])));
                    var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_7] [i_8] [i_9])) & (((/* implicit */int) arr_27 [i_7] [i_8] [i_9]))));
                }
            } 
        } 
    } 
}
