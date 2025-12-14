/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79990
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)27976))));
                            arr_13 [(unsigned char)10] [(unsigned char)10] &= ((/* implicit */unsigned long long int) var_15);
                            arr_14 [i_0] [i_3] [i_1] [i_2 - 2] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_2), (var_17))))));
    /* LoopNest 3 */
    for (short i_4 = 1; i_4 < 12; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((arr_8 [i_4] [i_4] [i_5] [i_6]) ? (((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_4] [i_6])) ? (((16783671157259485420ULL) ^ (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                    var_21 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17912))) : (2494941127792200107LL)));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (_Bool)1))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_27 [i_4] [i_4 - 1] [i_4] [i_6] [i_6] [i_8] [i_8 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_4] [i_6])) - ((~(((/* implicit */int) arr_1 [i_4 + 2]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_5])))) ? (((/* implicit */int) (unsigned short)425)) : (((/* implicit */int) ((114688U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34728))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_8))));
}
