/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93040
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) max((arr_1 [(_Bool)1] [i_0]), (arr_1 [(signed char)10] [(signed char)10])))) ? ((+(arr_1 [(unsigned char)12] [i_0]))) : ((~(((/* implicit */int) var_3))))))));
        var_20 += ((/* implicit */unsigned char) (unsigned short)27344);
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            arr_6 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) arr_5 [i_2] [i_2 - 1] [i_2 + 2]))), (((((/* implicit */_Bool) arr_5 [3] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (6736444029993249885LL)))));
            var_21 = ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_2))))))))));
        }
        arr_7 [i_1] = ((/* implicit */short) var_7);
        var_22 *= ((/* implicit */short) max(((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_6))))), (max((((/* implicit */unsigned long long int) ((unsigned int) 11158271406418079947ULL))), (((unsigned long long int) var_12))))));
        var_23 += ((/* implicit */unsigned short) (+(var_10)));
    }
    var_24 |= ((/* implicit */unsigned long long int) 0);
    var_25 += ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) var_3))))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (9959127330947268328ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
}
