/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85160
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
    var_15 = ((/* implicit */int) (signed char)-78);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29063)) || (((/* implicit */_Bool) (+(arr_4 [i_0 - 1]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                var_17 = ((((/* implicit */_Bool) -407381607)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21431)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (short)13394))))) : (var_8));
                var_18 = ((/* implicit */signed char) ((int) (+(((/* implicit */int) var_0)))));
            }
        }
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)-21409)), (var_6)))) ^ (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_10)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-29065)))))));
            var_21 = ((/* implicit */short) arr_1 [i_3]);
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((((short) -2147483618)), (((/* implicit */short) arr_11 [i_4]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) arr_21 [i_4] [i_5] [i_7] [i_8]);
                                var_24 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */int) max(((short)-13405), (((/* implicit */short) (signed char)121))))), ((~(((/* implicit */int) (signed char)76)))))));
                                var_25 = ((/* implicit */signed char) (-(((unsigned int) arr_17 [i_7 - 2] [i_7 + 2] [i_7 - 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) arr_15 [i_4]);
    }
}
