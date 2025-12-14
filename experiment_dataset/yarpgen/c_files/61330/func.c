/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61330
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) max((var_12), (1269354784)));
        var_13 ^= min((((/* implicit */int) ((arr_2 [i_0]) != (var_5)))), ((((~(-1307875197))) & (min((arr_1 [i_0]), (arr_0 [7] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_6 [i_1] = -1567217090;
        var_14 = ((min((min((var_7), ((-2147483647 - 1)))), (min((arr_2 [i_1]), (-2086877875))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (-(50331648))))))));
    }
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_15 = ((max((min((569047182), (arr_3 [i_2] [i_2]))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_1 [i_2]) : ((-2147483647 - 1)))))) % (min((arr_7 [i_2] [i_2]), ((~(arr_5 [i_2] [i_2]))))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (((((((-2147483647 - 1)) >= ((-2147483647 - 1)))) ? (min((var_0), (802897642))) : (((int) 1343308763)))) < (((min((arr_4 [i_2]), (arr_2 [i_2]))) | (arr_7 [i_2] [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_17 += ((int) ((-10) + (2)));
        var_18 = var_6;
        var_19 ^= (+(((int) (~(var_9)))));
        var_20 = 1;
    }
    for (int i_4 = 2; i_4 < 20; i_4 += 3) 
    {
        arr_17 [i_4 - 2] [i_4 - 1] = (+(min((arr_14 [i_4 - 1] [i_4]), (arr_15 [i_4] [i_4 - 1]))));
        var_21 = max(((~(min((var_0), (var_7))))), (min(((-(var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
    }
}
