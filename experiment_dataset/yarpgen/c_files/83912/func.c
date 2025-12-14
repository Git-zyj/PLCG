/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83912
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) 2923516722227875036LL)) == (13176121348292255991ULL)))), (arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 1])))), (min((3177865644U), (1812625269U)))));
                var_13 |= ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)213))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_2]), (arr_5 [i_2]))))) / (((long long int) arr_5 [i_2]))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3999))) | (max((3177865644U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)4588)) & (((/* implicit */int) (_Bool)1)))))))));
                            arr_19 [i_2] [i_4 - 1] [i_4] [i_5] [i_5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)24204), ((short)-27366)))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_5]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967295U)))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [6U] [i_3] [11U])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_3]))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_11 [i_2] [(_Bool)1] [i_2]) : (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)170)), (3177865644U)))))))));
                var_16 = ((/* implicit */_Bool) min((((/* implicit */int) var_10)), ((~(((/* implicit */int) arr_18 [i_2] [16] [i_2] [i_2]))))));
            }
        } 
    } 
}
