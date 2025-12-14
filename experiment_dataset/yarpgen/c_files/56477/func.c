/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56477
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-117))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_3 [(signed char)20])))) ? ((~(var_16))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            var_18 = ((((/* implicit */_Bool) min(((signed char)3), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) -6785796607471561450LL)) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))))) : (((unsigned long long int) ((var_8) & (((/* implicit */int) var_4))))));
            arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (0U)));
            var_19 = ((/* implicit */signed char) var_2);
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) min((arr_10 [i_2] [i_2] [i_1 - 2] [i_1 - 2]), ((+(arr_9 [i_2 + 1] [i_1 - 3])))));
                        arr_15 [i_2] = ((/* implicit */signed char) var_16);
                        arr_16 [i_2] = ((/* implicit */unsigned int) var_4);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741824U)) ? (3221225467U) : (1073741831U)));
                            var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_7)) ? (var_3) : (1073741828U)))));
                            var_23 = ((/* implicit */_Bool) arr_12 [i_0]);
                            var_24 = ((/* implicit */short) var_12);
                            var_25 = ((/* implicit */signed char) ((arr_18 [i_4] [i_0] [i_0] [i_1 + 1] [i_0] [i_0]) == (arr_18 [i_4] [i_4] [i_4] [i_1 + 2] [i_2] [i_2])));
                        }
                    }
                } 
            } 
        }
    }
    var_26 = var_5;
}
