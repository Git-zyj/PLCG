/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82333
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 ^= (short)-18838;
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)32957))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) (-(-1405954224)));
        }
        for (short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) var_18);
            var_22 = ((/* implicit */int) min(((-((-(3509618354U))))), (arr_1 [i_2])));
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) (unsigned short)6079)) ? (((/* implicit */int) (short)14038)) : (((/* implicit */int) (short)14038)))), (((/* implicit */int) (unsigned short)29584))))));
            var_23 = ((/* implicit */unsigned int) arr_5 [i_0]);
            var_24 = ((/* implicit */signed char) var_1);
        }
        for (short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            var_25 = max((((/* implicit */unsigned int) (+(144824905)))), ((-(arr_10 [i_0] [i_3]))));
            arr_13 [i_3] [7LL] [i_0] = ((/* implicit */long long int) -1360795119);
            var_26 = ((/* implicit */unsigned short) var_18);
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) -1627755811);
                var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) -1405954224)))), ((!(((/* implicit */_Bool) -1405954224))))))) : (((/* implicit */int) var_13))))));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (min((((/* implicit */unsigned long long int) var_10)), (arr_3 [i_0] [i_0] [i_0]))))))));
                var_30 = ((/* implicit */int) min((var_30), (985970490)));
            }
        }
        var_31 += ((/* implicit */unsigned short) arr_15 [(signed char)5]);
    }
    var_32 = max((((((/* implicit */_Bool) (unsigned short)54085)) ? (((((/* implicit */_Bool) (signed char)-109)) ? (310992592U) : (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_13))))))), (((/* implicit */unsigned int) max((((/* implicit */int) var_15)), (1405954224)))));
    var_33 = ((/* implicit */short) 3983974701U);
    var_34 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (var_8)));
}
