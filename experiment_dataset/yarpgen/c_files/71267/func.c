/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71267
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((((var_0) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) ? (14429432003208566925ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) var_3)) : (var_0))) : (((/* implicit */long long int) 8388480U)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-802169015599253454LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 31552508U))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (225747475U));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 524287U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) : (262143LL))))))))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_5))));
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        for (short i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            {
                var_18 = min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_7)))) ? (((arr_0 [i_3 + 1] [i_4]) ? (((/* implicit */int) arr_9 [i_3 + 4] [(_Bool)1])) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_1))))))), (var_0));
                /* LoopSeq 1 */
                for (long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (min((((/* implicit */int) (unsigned char)12)), (min((var_3), (((/* implicit */int) arr_8 [i_3 - 2]))))))));
                    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((+(var_4))) | (((/* implicit */unsigned long long int) max((7914319646265499598LL), (((/* implicit */long long int) arr_11 [i_4])))))))) ? (min((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) var_10))))), (min((arr_4 [i_3 - 1] [(_Bool)1] [(_Bool)1]), (11477179913243332021ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((6223998885694707191LL), (((/* implicit */long long int) 268434944U))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_13) == (((/* implicit */unsigned int) -1080514102))))))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */int) arr_12 [i_3 - 3] [i_4 + 3] [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) ((8589934080LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135)))))) : (((((((/* implicit */int) var_9)) != (var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9362994105819957503ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)6))))) : (min((arr_4 [i_3 - 1] [i_3] [i_3 - 1]), (var_4)))))));
                }
            }
        } 
    } 
}
