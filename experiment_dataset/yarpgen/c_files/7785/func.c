/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7785
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
    var_13 += ((/* implicit */_Bool) (short)-32750);
    var_14 = ((/* implicit */short) ((var_5) + (var_12)));
    var_15 = (((+(((/* implicit */int) var_8)))) * (((/* implicit */int) (unsigned char)177)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */_Bool) 18446744073709551608ULL);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_17 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) / (1465776936U))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))))), (2784157027U)));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_0 [i_2]))));
                    }
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (_Bool)1))))) * (min((((/* implicit */unsigned long long int) (short)4861)), (((((/* implicit */_Bool) (unsigned char)12)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
