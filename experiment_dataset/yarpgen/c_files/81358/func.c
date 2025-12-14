/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81358
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(7340032U)))) ? (((((/* implicit */_Bool) 4287627255U)) ? (7340032U) : (4287627264U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_2)) | (((/* implicit */int) arr_1 [i_0] [i_0])))) != (((/* implicit */int) ((489756203) <= (((/* implicit */int) (unsigned short)35086)))))))))));
                    var_19 = max((((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) (short)-27483)) : (((/* implicit */int) (unsigned short)25)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1]))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2])) | (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) max((var_6), (arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) >> (((((/* implicit */int) var_6)) - (22512))))), (min((-9022410053677572555LL), (((/* implicit */long long int) -489756203)))))))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_7 [i_3]))))) > (((((/* implicit */_Bool) 9623107015246107451ULL)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16887)))))));
                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), (var_1)))) ? (((long long int) var_15)) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(_Bool)1])))))) > ((+(7827443617177235900ULL)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (((-((-(((/* implicit */int) (signed char)31)))))) / ((-(((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (short)10754))))))));
    var_24 = ((/* implicit */unsigned char) var_10);
}
