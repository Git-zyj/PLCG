/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97809
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
    var_15 = ((/* implicit */int) var_6);
    var_16 += ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */int) var_5);
                        arr_14 [i_3] [i_1] [6ULL] [i_1] [9LL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1] [i_1])) % (((/* implicit */int) arr_3 [i_1] [i_1]))));
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */int) arr_9 [i_0]);
                        var_19 += max((((/* implicit */long long int) var_10)), (arr_16 [i_1] [i_1] [i_2]));
                        arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((arr_1 [i_2]), (var_2)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1])))), (((((/* implicit */int) var_9)) + (((/* implicit */int) var_9))))));
                        arr_18 [i_1] = arr_6 [(unsigned char)10] [i_4] [i_4] [i_2 - 4];
                    }
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_1 - 1] [i_1 - 1] [i_2] [6LL]) : (var_7)))))));
                    var_21 += ((/* implicit */unsigned char) min((((unsigned long long int) ((unsigned int) var_11))), (((/* implicit */unsigned long long int) ((4258377441382080095LL) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2 - 3]))))))));
                    var_22 += ((/* implicit */unsigned short) min((((((/* implicit */int) arr_7 [i_1 + 2] [i_2 - 2])) + (max((851419348), (((/* implicit */int) var_2)))))), (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) var_5)), (var_2)))) > (var_12))))));
                }
            } 
        } 
    } 
}
