/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82014
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) 3260796572280828677ULL);
                var_12 ^= ((/* implicit */signed char) ((max((var_2), (((/* implicit */long long int) arr_2 [(signed char)17] [i_0] [6U])))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && ((_Bool)1)))) <= (((/* implicit */int) ((18446744073709551613ULL) != (((/* implicit */unsigned long long int) 5237408857374580761LL))))))))));
                arr_4 [i_1] [(signed char)13] [i_0] = ((/* implicit */short) var_3);
                var_13 = arr_1 [7];
            }
        } 
    } 
    var_14 ^= ((/* implicit */_Bool) (~(var_0)));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (short)-32748))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_3] [i_3] [(signed char)12] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [5LL] [i_3] [7LL] [(unsigned short)15]))));
                                var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_17 [i_4] [4U] [i_6] [i_6 - 1] [i_6 + 2] [i_6 + 1] [6LL])) + (19ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_4] [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6])) ? (168988056) : (((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned long long int) arr_17 [i_3] [6U] [(_Bool)1] [i_6 + 2] [i_6 - 1] [i_6 + 2] [12LL])), (15185947501428722923ULL)))));
                                var_17 ^= ((/* implicit */unsigned int) ((unsigned char) -1276750603));
                                arr_19 [i_2] [0] [(_Bool)1] [i_2] = ((/* implicit */short) ((_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) & (((/* implicit */int) (signed char)127))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_16 [i_2] [4U] [12] [9LL] [i_2] [(short)4] [i_2])))), (((/* implicit */int) (signed char)-1))));
                }
            } 
        } 
    } 
}
