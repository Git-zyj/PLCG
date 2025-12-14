/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65526
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
    var_13 = ((/* implicit */signed char) var_8);
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_0) : (2198889037824ULL)))) && (((/* implicit */_Bool) min((var_11), (var_11))))))), (var_0)));
    var_16 ^= var_0;
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [7ULL] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 12251849241753773508ULL)) ? (1136615325702256256ULL) : (var_0))) : (((var_10) ? (arr_0 [i_0] [(signed char)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)18))))) ? (22ULL) : (11647197207048520766ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 - 1] [i_0 - 1]) <= (arr_0 [i_0 - 1] [i_0 - 1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) 7331950952706511320ULL))));
            var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (2143201123218292863ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)76))))));
            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (_Bool)1))));
            arr_6 [i_0 - 1] = ((/* implicit */unsigned long long int) ((signed char) arr_4 [i_0 - 1] [i_0 - 1]));
            /* LoopNest 3 */
            for (signed char i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_3] = ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((unsigned long long int) 17551733776902468604ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))));
                            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_3] [2ULL] [6ULL] [i_3 + 1] [(_Bool)1] [i_3 + 1]))));
                            var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 1]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_4])) ? (arr_4 [i_3 + 1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0])))))));
                            var_21 = (!(arr_13 [i_0 - 1] [i_2 + 2] [i_2 + 3] [i_3 + 1] [i_4 - 2] [i_4 - 2]));
                            arr_15 [(_Bool)1] [i_1] [i_2 - 4] [i_3] [i_2 - 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            } 
        }
        arr_16 [i_0] |= ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) 6194894831955778107ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [(_Bool)1] [13ULL] [i_0] [i_0])) + (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) 16303542950491258764ULL)) ? (16303542950491258732ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))), (max((var_3), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
}
