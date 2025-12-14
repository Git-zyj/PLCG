/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60494
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
    var_12 &= max((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5424519627505150422LL))), (((/* implicit */long long int) min((-1883773801), (((/* implicit */int) var_11))))))), (((/* implicit */long long int) (((~(-916522103))) <= (min((var_3), (((/* implicit */int) (signed char)-38))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)43527)) : (((/* implicit */int) (signed char)-45)))) & (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_6))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) arr_5 [i_1]);
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~((+(((/* implicit */int) arr_1 [i_1])))))))));
        arr_6 [(unsigned short)4] = arr_5 [i_1];
        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_1 [(signed char)13]))))))));
        arr_7 [(unsigned char)9] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_0 [i_1] [i_1])))), ((~(((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */signed char) (_Bool)0)))))))));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) -6338186008259494922LL)))))) || (((((/* implicit */_Bool) min((var_5), (var_6)))) && (((/* implicit */_Bool) (-(var_3))))))));
}
