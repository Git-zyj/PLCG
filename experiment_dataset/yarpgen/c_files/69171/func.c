/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69171
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
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) : (8716135986007573329LL)));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (arr_5 [i_1] [i_1] [i_0 + 2]) : (arr_5 [i_0 + 2] [i_0 - 2] [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)2)) >= (((/* implicit */int) (signed char)-1))))) : (((var_11) / (((/* implicit */int) (signed char)-58))))))) ? (((/* implicit */long long int) ((var_14) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) var_14))))) : (((long long int) arr_1 [i_0 - 1])))))));
                arr_8 [i_1] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1282121801)) ? (((/* implicit */int) arr_3 [i_0])) : (-1)))) : (min((((/* implicit */unsigned long long int) (unsigned short)18843)), (0ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_0])))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_0 - 2]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_15 [i_0 + 2] [i_1] [i_0 + 2] [i_3 - 1] [i_0 + 2] [i_0 + 2] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0 - 2])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 - 1])) < (((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_2] [i_3 - 2]))))))));
                            arr_16 [i_0] [i_0] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_10 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] [i_2]))))), (((unsigned long long int) arr_5 [i_0 - 1] [i_1] [i_2]))))) ? (((/* implicit */int) (signed char)-2)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-115))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)8)), (arr_13 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6367005699115085855ULL)) ? (182061724116978551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62)))))) ? (((((/* implicit */_Bool) var_6)) ? (1048512) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)14336)))))) : ((~(((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) -152027934)))))))));
    var_18 |= ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
}
