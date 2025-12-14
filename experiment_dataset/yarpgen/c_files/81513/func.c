/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81513
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((min((((/* implicit */long long int) var_4)), (8724192542073224658LL))) % (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) 4031666427U))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (arr_5 [i_2])));
                    var_15 = ((/* implicit */unsigned long long int) ((long long int) ((arr_7 [i_0] [4U] [i_2 - 1]) != (((/* implicit */long long int) ((/* implicit */int) (short)6284))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) (-((+(arr_7 [(_Bool)1] [i_1] [(_Bool)1])))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_11 [i_0] [i_3 + 2] [i_4] [i_4 - 2]), (((/* implicit */int) arr_8 [i_0] [i_3 + 2] [(_Bool)1]))))) || (((arr_10 [i_0] [i_3 + 2] [4LL]) || (((/* implicit */_Bool) 4360259755358864612LL)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 3; i_5 < 17; i_5 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) ((658431429) << (((((((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1])) + (59))) - (11)))));
                    var_19 = ((/* implicit */short) ((long long int) var_2));
                    var_20 = ((/* implicit */unsigned char) 9223372036854775807LL);
                }
                arr_17 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_0] [i_0])) + (2147483647))) << (((((-658431431) + (658431441))) - (10)))))) & (max((var_10), (((/* implicit */long long int) arr_4 [i_1])))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-658431443) : (((/* implicit */int) var_1)))) - ((-(((/* implicit */int) arr_5 [i_0])))))))));
            }
        } 
    } 
    var_21 |= ((unsigned char) min((((((/* implicit */_Bool) -9223372036854775807LL)) ? (var_8) : (var_8))), (((/* implicit */unsigned long long int) -658431438))));
    var_22 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_6)) ? (((var_2) << (((((-9223372036854775807LL) - (-9223372036854775790LL))) + (31LL))))) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (var_7))))) != ((~(var_2))))))));
}
