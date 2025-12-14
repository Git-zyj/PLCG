/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78256
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */long long int) (~((+(((/* implicit */int) arr_0 [i_3]))))));
                            arr_10 [13LL] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_2 [i_1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */_Bool) arr_11 [i_4] [i_1])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5))) : (2418333395U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [(_Bool)1] [4LL] [i_1] [20ULL])))))));
                                arr_20 [i_6] [(_Bool)1] [(unsigned short)18] [(unsigned char)14] [(unsigned char)15] = ((/* implicit */unsigned char) (-(1397817014U)));
                                var_18 = ((/* implicit */unsigned short) ((_Bool) ((unsigned char) arr_8 [i_0] [i_1] [i_0] [i_5])));
                                arr_21 [i_0] [8LL] [(unsigned char)14] [(unsigned char)5] [(unsigned char)19] [i_6] [i_5] = ((/* implicit */short) arr_12 [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_1);
}
