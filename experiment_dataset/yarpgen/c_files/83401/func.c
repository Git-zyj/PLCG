/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83401
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_4));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        for (int i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 4; i_4 < 12; i_4 += 4) 
                {
                    for (int i_5 = 3; i_5 < 10; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_23 [i_2 + 4] [(unsigned char)8] [i_4] [i_5] [(signed char)12] &= ((/* implicit */unsigned char) arr_21 [(unsigned short)0] [(unsigned char)11] [i_3 - 2] [i_4] [(unsigned short)0] [i_6]);
                                var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2] [i_2 + 4] [i_2 + 4]))));
                                arr_24 [i_2] [(signed char)6] [i_3] [i_4 - 1] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((max((((331161075070730130ULL) <= (((/* implicit */unsigned long long int) var_2)))), ((_Bool)1))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_3] [i_6])) <= (((/* implicit */int) var_1)))) ? (((/* implicit */int) arr_13 [i_2 - 2] [i_5 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 331161075070730152ULL)))))))) : (8589934591LL)));
                                arr_25 [i_2] [i_5] [12ULL] [i_5] [i_6] [i_2] = ((/* implicit */unsigned int) (unsigned char)239);
                                arr_26 [i_2] [(unsigned char)11] [i_2] [i_5] [i_2] = ((/* implicit */_Bool) 2138541560);
                            }
                        } 
                    } 
                } 
                arr_27 [i_2] [7ULL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (((unsigned long long int) arr_14 [i_3] [i_3] [i_3 + 1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_5);
}
