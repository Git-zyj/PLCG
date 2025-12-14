/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6053
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((var_4), (var_2)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : (var_0)))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((unsigned int) (unsigned short)34102)), (((/* implicit */unsigned int) min(((unsigned short)31119), (((/* implicit */unsigned short) (short)6926)))))))), (arr_4 [i_0] [i_0])));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)16819))))) > (arr_1 [i_0]))))) ^ (min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)103)), (arr_8 [i_0] [i_1] [i_1] [i_2]))))))));
                }
                var_14 ^= ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) -2001732478)), (arr_1 [i_0])))));
            }
        } 
    } 
    var_15 = min((((/* implicit */int) max((((/* implicit */unsigned short) min(((short)-1885), ((short)-15989)))), (var_8)))), (min((((((/* implicit */_Bool) var_8)) ? (var_4) : (var_6))), (((/* implicit */int) ((((/* implicit */int) var_1)) < (var_4)))))));
    var_16 &= ((/* implicit */unsigned short) (~((-(min((((/* implicit */int) var_7)), (var_5)))))));
}
