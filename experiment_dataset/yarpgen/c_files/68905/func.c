/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68905
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [15ULL] [i_1] [(unsigned char)11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3261857552U)) < (((((/* implicit */unsigned long long int) ((/* implicit */int) ((8139227199666977577ULL) <= (((/* implicit */unsigned long long int) 0U)))))) / (18446726481523507200ULL)))));
                            arr_14 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)32747)), (max((1033109743U), (((/* implicit */unsigned int) 0))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) var_6);
                                var_21 = ((/* implicit */short) max((1033109770U), (((/* implicit */unsigned int) (_Bool)1))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) 0)))) ? (2305843009213693952LL) : (((/* implicit */long long int) 1033109744U)))), (max((((/* implicit */long long int) (signed char)125)), (7LL))))))));
                                var_23 = ((/* implicit */short) (unsigned char)0);
                                arr_24 [(short)4] [5LL] [i_4] [i_1] = ((/* implicit */signed char) max((3261857552U), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) <= (205762544638559516LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 7; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)125)), (var_3)));
                            var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)125)));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) 0LL))));
                var_27 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)1)), (6137964619341387040LL)));
            }
        } 
    } 
}
