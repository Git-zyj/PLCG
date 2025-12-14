/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71118
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
    var_15 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */signed char) var_13);
        var_17 = ((/* implicit */unsigned long long int) (-(351248330U)));
        var_18 = ((/* implicit */unsigned long long int) max((((int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (max(((unsigned char)205), ((unsigned char)228))))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_5 [(unsigned char)0] = ((/* implicit */unsigned char) arr_0 [i_1]);
        var_19 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)205)) && (((/* implicit */_Bool) var_10)))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)205)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((9223372036854775803LL) / (((/* implicit */long long int) var_1)))))) ? (max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_6 [i_2])) : (-1815581324))), (((/* implicit */int) arr_2 [i_2])))) : (((int) arr_6 [i_2]))));
        var_21 = ((((/* implicit */_Bool) ((unsigned int) 8626528960814463900LL))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */long long int) 808632513)) : (((long long int) (unsigned char)81)))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
        arr_10 [i_2] = arr_4 [i_2];
        arr_11 [i_2] = ((/* implicit */unsigned char) (-(((3538260296003142660ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2])))))));
    }
    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 2) 
    {
        var_22 -= (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14))))));
        arr_15 [i_3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) -1)) : (444495179952437249LL)))));
    }
    var_23 |= ((/* implicit */long long int) min((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_10))))))), (var_6)));
    var_24 = (((~(((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_8)));
    var_25 = ((/* implicit */unsigned int) max((var_0), (((/* implicit */short) var_9))));
}
