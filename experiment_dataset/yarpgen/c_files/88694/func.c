/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88694
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) (~(arr_2 [i_0])));
        arr_4 [i_0 - 1] = ((/* implicit */short) (((~(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) % (((/* implicit */long long int) min((((((/* implicit */int) (signed char)-43)) + (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (unsigned short)43306)))))));
        arr_5 [i_0] = ((/* implicit */short) (((+(arr_2 [i_0 - 2]))) + ((~(arr_2 [i_0 + 1])))));
    }
    for (signed char i_1 = 2; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_20 += ((/* implicit */signed char) ((var_12) >> (((/* implicit */int) ((((((/* implicit */long long int) var_1)) - (var_19))) == (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)22241))))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41965))) + (max((6390591683718092136ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1396229785)) ? (arr_2 [i_1 - 1]) : (((/* implicit */long long int) var_3)))))))));
    }
    var_22 += ((/* implicit */unsigned int) var_5);
    var_23 = ((/* implicit */long long int) min((var_11), (((((/* implicit */_Bool) (~(2147483647)))) ? (var_1) : (((/* implicit */int) ((-1353530273777127140LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38746))))))))));
}
