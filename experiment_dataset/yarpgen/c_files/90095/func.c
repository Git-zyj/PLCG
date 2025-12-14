/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90095
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((480711784) / (((/* implicit */int) (unsigned short)84))))))) != (var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0 + 1] [i_0] = arr_9 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0 + 1];
                            var_18 = ((578379216) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)214)) || ((_Bool)1)))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) (unsigned char)42))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) arr_6 [i_1]);
                var_21 = 0;
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_7))))) ^ (var_9)));
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_18 [i_4] [i_6] [i_6]))));
                                arr_26 [i_7] [i_7] [i_5] [i_7] [i_7] = ((/* implicit */_Bool) (unsigned short)56678);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) -7LL))));
                    arr_27 [i_4] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_5] [i_5] [i_6]);
                }
            } 
        } 
    } 
}
