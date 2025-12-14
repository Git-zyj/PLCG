/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81456
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_14 = arr_1 [1LL];
                                arr_12 [15LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) (short)-22))))) == (((unsigned int) var_12))))) % (((/* implicit */int) ((((/* implicit */int) var_2)) != (arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_3]))))));
                                var_15 -= ((/* implicit */long long int) arr_10 [i_0] [i_1]);
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)-37)) + (2147483647))) << ((((-(-676463150))) - (676463150))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned long long int) arr_17 [6U] [16LL] [16U] [i_6])), (var_11))), (((/* implicit */unsigned long long int) max((676463147), (arr_5 [0U])))))), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1 + 1] [i_1 - 1]))));
                            var_18 |= ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [14U] [(unsigned short)13]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) var_2);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    arr_27 [8LL] [8LL] [7U] [i_7] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)57150)), (1873659047U)));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)48)) * (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned short)23893))))))) ? (((/* implicit */unsigned int) arr_5 [i_9])) : (((((/* implicit */_Bool) arr_15 [i_7] [i_8] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9] [i_9] [i_8] [(unsigned char)11] [i_7] [i_7]))) : (((((/* implicit */_Bool) arr_7 [(unsigned short)10] [i_7] [i_7] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3))))));
                }
            } 
        } 
    } 
}
