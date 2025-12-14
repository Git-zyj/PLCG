/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78209
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
    var_15 = ((/* implicit */int) ((unsigned short) ((int) (~(((/* implicit */int) var_13))))));
    var_16 ^= ((/* implicit */signed char) ((min(((~(var_12))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)29))))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_11))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) arr_6 [i_0])), (((/* implicit */long long int) var_8))))) ? ((~(arr_6 [i_2]))) : (((/* implicit */long long int) min((min((((/* implicit */int) (unsigned short)511)), (arr_9 [i_0]))), (((/* implicit */int) (unsigned short)58568)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_18 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */long long int) ((short) (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)123)), ((unsigned short)58561)))))));
                                var_17 &= ((/* implicit */long long int) min(((-(((unsigned int) (unsigned char)16)))), (((/* implicit */unsigned int) min((arr_8 [i_0] [i_3 - 1] [i_3 - 1] [i_0]), (((((/* implicit */_Bool) 17856388586168597124ULL)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (unsigned char)177)))))))));
                                var_18 += ((/* implicit */unsigned long long int) ((unsigned char) max((arr_14 [i_3 + 1] [i_3] [i_3 - 2] [(unsigned short)10] [i_0]), (22U))));
                                arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_15 [i_3] [(unsigned short)9] [i_3 - 3] [i_3] [i_3 + 1] [2U] [(unsigned short)9]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (min((1023LL), (arr_17 [i_3] [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 3])))));
                                var_19 = min((max((arr_14 [4U] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 1]), (arr_14 [(_Bool)1] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1]))), (((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)31765)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
