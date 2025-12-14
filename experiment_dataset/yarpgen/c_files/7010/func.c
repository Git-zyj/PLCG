/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7010
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
    var_20 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_21 -= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 6082063501785712921LL))))));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2] [(signed char)10] [i_1] [i_2 + 1])) ? ((~(min((((/* implicit */unsigned long long int) arr_7 [i_0] [(signed char)10] [(signed char)10] [(signed char)10])), (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48584))))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_5 [15LL]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (max((((long long int) arr_6 [i_0 + 3] [i_1] [i_0])), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)60424)))))))));
                                var_24 += ((/* implicit */unsigned short) arr_11 [(_Bool)1] [i_4] [(unsigned short)15] [i_4] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = min((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned char) (signed char)113)))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            {
                var_26 = ((/* implicit */short) arr_17 [i_6 + 1] [i_6] [14]);
                arr_18 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (_Bool)0);
            }
        } 
    } 
    var_27 |= ((/* implicit */long long int) (unsigned char)137);
}
