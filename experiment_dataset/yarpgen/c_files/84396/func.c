/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84396
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((-2023799784) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)27764)), ((~(((-735830492) ^ (((/* implicit */int) var_7))))))));
        var_16 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))) <= (var_10)));
        var_17 = ((/* implicit */unsigned short) min((((((/* implicit */int) (short)-27765)) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) max((((unsigned int) ((signed char) var_5))), (((/* implicit */unsigned int) ((((int) arr_5 [i_3])) <= (((/* implicit */int) arr_8 [i_3] [i_2] [i_2]))))))))));
                    arr_12 [i_1] [i_1] = ((/* implicit */long long int) (short)-27785);
                    var_19 += ((((((/* implicit */_Bool) arr_5 [i_3])) && ((!(var_13))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3]))) : (((unsigned int) (short)24376)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_8 [i_3] [i_3] [4]))))))));
                }
            } 
        } 
        var_20 += ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_1]);
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (short)-1))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            {
                var_22 = arr_11 [i_4] [i_5] [i_4];
                var_23 = ((/* implicit */unsigned short) arr_13 [i_5]);
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((unsigned int) max((max(((unsigned short)65525), (((/* implicit */unsigned short) (signed char)127)))), (((/* implicit */unsigned short) (short)20988)))));
}
